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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_104[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108[4] = { 0, 0, 0, 0 };
	var uLocal_109[4] = { 0, 0, 0, 0 };
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	vector3 vLocal_120[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_132 = 0;
	int iLocal_133[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<2> Local_136 = { -1, -1 } ;
	struct<730> Local_137 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	struct<533> Local_158 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = -1082130432;
	var uLocal_182 = 3;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = -1;
	var uLocal_199 = 0;
	var uLocal_200 = -1;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
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
	var uLocal_222 = 0;
	var uLocal_223 = -1082130432;
	var uLocal_224 = 3;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = -1082130432;
	var uLocal_266 = 3;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = -1;
	var uLocal_283 = 0;
	var uLocal_284 = -1;
	var uLocal_285 = -1;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1082130432;
	var uLocal_308 = 3;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = -1;
	var uLocal_325 = 0;
	var uLocal_326 = -1;
	var uLocal_327 = -1;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = -1082130432;
	var uLocal_350 = 3;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = -1;
	var uLocal_367 = 0;
	var uLocal_368 = -1;
	var uLocal_369 = -1;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = -1082130432;
	var uLocal_392 = 3;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = -1;
	var uLocal_409 = 0;
	var uLocal_410 = -1;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = -1082130432;
	var uLocal_434 = 3;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = -1;
	var uLocal_451 = 0;
	var uLocal_452 = -1;
	var uLocal_453 = -1;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = -1082130432;
	var uLocal_476 = 3;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = -1;
	var uLocal_493 = 0;
	var uLocal_494 = -1;
	var uLocal_495 = -1;
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
	var uLocal_517 = -1082130432;
	var uLocal_518 = 3;
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
	var uLocal_534 = -1;
	var uLocal_535 = 0;
	var uLocal_536 = -1;
	var uLocal_537 = -1;
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
	var uLocal_559 = -1082130432;
	var uLocal_560 = 3;
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
	var uLocal_576 = -1;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = -1;
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
	var uLocal_601 = -1082130432;
	var uLocal_602 = 3;
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
	var uLocal_618 = -1;
	var uLocal_619 = 0;
	var uLocal_620 = -1;
	var uLocal_621 = -1;
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
	var uLocal_643 = -1082130432;
	var uLocal_644 = 3;
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
	var uLocal_660 = -1;
	var uLocal_661 = 0;
	var uLocal_662 = -1;
	var uLocal_663 = -1;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = -1082130432;
	var uLocal_686 = 3;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = -1;
	var uLocal_703 = 0;
	var uLocal_704 = -1;
	var uLocal_705 = -1;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = -1082130432;
	var uLocal_728 = 3;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = -1;
	var uLocal_745 = 0;
	var uLocal_746 = -1;
	var uLocal_747 = -1;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = -1082130432;
	var uLocal_770 = 3;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = -1;
	var uLocal_787 = 0;
	var uLocal_788 = -1;
	var uLocal_789 = -1;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = -1082130432;
	var uLocal_812 = 3;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = 0;
	var uLocal_830 = -1;
	var uLocal_831 = -1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = -1082130432;
	var uLocal_854 = 3;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = -1;
	var uLocal_871 = 0;
	var uLocal_872 = -1;
	var uLocal_873 = -1;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = -1082130432;
	var uLocal_896 = 3;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = -1;
	var uLocal_913 = 0;
	var uLocal_914 = -1;
	var uLocal_915 = -1;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = -1082130432;
	var uLocal_938 = 3;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = -1;
	var uLocal_955 = 0;
	var uLocal_956 = -1;
	var uLocal_957 = -1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = -1082130432;
	var uLocal_980 = 3;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = -1;
	var uLocal_997 = 0;
	var uLocal_998 = -1;
	var uLocal_999 = -1;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = -1082130432;
	var uLocal_1022 = 3;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = -1;
	var uLocal_1039 = 0;
	var uLocal_1040 = -1;
	var uLocal_1041 = -1;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = -1082130432;
	var uLocal_1064 = 3;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = -1;
	var uLocal_1081 = 0;
	var uLocal_1082 = -1;
	var uLocal_1083 = -1;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = -1082130432;
	var uLocal_1106 = 3;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = -1;
	var uLocal_1123 = 0;
	var uLocal_1124 = -1;
	var uLocal_1125 = -1;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = -1082130432;
	var uLocal_1148 = 3;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = -1;
	var uLocal_1165 = 0;
	var uLocal_1166 = -1;
	var uLocal_1167 = -1;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = -1082130432;
	var uLocal_1190 = 3;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = -1;
	var uLocal_1207 = 0;
	var uLocal_1208 = -1;
	var uLocal_1209 = -1;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = -1082130432;
	var uLocal_1232 = 3;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = -1;
	var uLocal_1249 = 0;
	var uLocal_1250 = -1;
	var uLocal_1251 = -1;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = -1082130432;
	var uLocal_1274 = 3;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = -1;
	var uLocal_1291 = 0;
	var uLocal_1292 = -1;
	var uLocal_1293 = -1;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = -1082130432;
	var uLocal_1316 = 3;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = -1;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
	var uLocal_1335 = -1;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = -1082130432;
	var uLocal_1358 = 3;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = -1;
	var uLocal_1375 = 0;
	var uLocal_1376 = -1;
	var uLocal_1377 = -1;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = -1082130432;
	var uLocal_1400 = 3;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = -1;
	var uLocal_1417 = 0;
	var uLocal_1418 = -1;
	var uLocal_1419 = -1;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = -1082130432;
	var uLocal_1442 = 3;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = -1;
	var uLocal_1459 = 0;
	var uLocal_1460 = -1;
	var uLocal_1461 = -1;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = -1082130432;
	var uLocal_1484 = 3;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = -1;
	var uLocal_1501 = 0;
	var uLocal_1502 = -1;
	struct<12> Local_1503 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1504[32];
	struct<21> Local_1505 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_661(ScriptParam_1505))
		{
			func_624();
		}
	}
	while (true)
	{
		func_623();
		if (func_616() || func_614())
		{
			func_624();
		}
		func_587();
		switch (func_586(unk_0xF19B3230511B7F9F()))
		{
			case 0:
				if (func_585() == 1)
				{
					if (func_584())
					{
						func_583(unk_0xF19B3230511B7F9F(), 1);
					}
				}
				break;
			
			case 1:
				if (func_585() == 1)
				{
					func_126();
					func_114();
				}
				else if (func_585() == 3)
				{
					func_583(unk_0xF19B3230511B7F9F(), 3);
				}
				break;
			
			case 3:
				func_624();
				break;
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_585())
			{
				case 0:
					if (func_97())
					{
						func_96(1);
					}
					break;
				
				case 1:
					if (Local_137.f_8 == 6)
					{
						func_96(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_118, 1000, 0))
					{
						func_96(3);
					}
					break;
				
				case 3:
					func_624();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x195
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F3
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()//Position - 0x238
{
	if (func_33(2, 0, 0, 0, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_137.f_2, 2))
		{
			Local_137.f_1 = unk_0xD1952A425B78FFC0();
			unk_0x872F1C1F8587CCC7(&(Local_137.f_2), 2);
		}
	}
	switch (Local_137.f_8)
	{
		case 0:
			if (func_32())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_137.f_667), Global_262145.f_10455, 0) || unk_0xC80D31E4B587871C(Local_137.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_137.f_9 = unk_0xD1952A425B78FFC0();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_137.f_661), Global_262145.f_10454, 0)) || unk_0xC80D31E4B587871C(Local_137.f_2, 2))
			{
				if (!unk_0xC80D31E4B587871C(Local_137.f_2, 1) && func_21())
				{
					func_20(&(Local_137.f_661), 0, 0);
					unk_0x872F1C1F8587CCC7(&(Local_137.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_137.f_1 = unk_0xD1952A425B78FFC0();
				}
			}
			func_8();
			iLocal_99++;
			if (iLocal_99 >= Local_137.f_709)
			{
				iLocal_99 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_137.f_663), 20000, 0) || func_5())
			{
				if (func_32())
				{
					func_20(&(Local_137.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()//Position - 0x3E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x918CA1BFFAA03556(Local_137.f_729[iVar0 /*2*/].f_1) && !unk_0x191BE1BC8F26F3C1(unk_0x29AB7D6D0DE18055(Local_137.f_729[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x432
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xC80D31E4B587871C(Local_1504[iVar0 /*5*/].f_2, 0) || Local_1504[iVar0 /*5*/].f_3 != 6) || (unk_0xC80D31E4B587871C(Local_137.f_2, 0) && !unk_0xC80D31E4B587871C(Local_1504[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)//Position - 0x4BE
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8);
}

bool func_7(int iParam0)//Position - 0x4E4
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 2);
}

void func_8()//Position - 0x4FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar2)))
		{
			unk_0x872F1C1F8587CCC7(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0xC80D31E4B587871C(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0x872F1C1F8587CCC7(&(Local_137.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_137.f_727)
	{
		Local_137.f_727 = iVar0;
	}
	else
	{
		Local_137.f_726 = (Local_137.f_727 - iVar0);
	}
	if (iVar1 > Local_137.f_728)
	{
		Local_137.f_728 = iVar1;
	}
}

void func_9(int iParam0)//Position - 0x5BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1504[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_137.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_137.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_137.f_674[iVar1] < 0 || iVar0 > Local_1504[Local_137.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_137.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_137.f_674[iVar1], iParam0, iVar1);
			}
			Local_137.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_137.f_674[iVar3] == iParam0)
				{
					Local_137.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x6A5
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = 1793822106;
		Var0.f_10 = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x6DC
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)//Position - 0x709
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_13(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x766
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

void func_14(var uParam0, int iParam1)//Position - 0x7B0
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)//Position - 0x7D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iParam0));
	iVar0 = iVar3;
	if (Global_2512808.f_4704.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2512808.f_4704.f_38[iVar0];
		iVar1 = Global_2512808.f_4704.f_5[iVar0];
		if (!unk_0xC80D31E4B587871C(Local_137.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xC80D31E4B587871C(Global_2512808.f_4704[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_116, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_137.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2512808.f_4704.f_38[iVar0] = -1;
							unk_0x872F1C1F8587CCC7(&(Local_137.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_137.f_708 = (Local_137.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)//Position - 0x8BE
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8EF
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_18(int iParam0)//Position - 0x915
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_1504[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)//Position - 0x93D
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(Local_137.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_137.f_674[iVar0] == iParam0)
			{
				Local_137.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_137.f_709)
		{
			if (Local_137.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_137.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		unk_0x0EE72DB1CD8A3B86(&(Local_137.f_673), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9C4
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

int func_21()//Position - 0xA01
{
	return 0;
}

int func_22()//Position - 0xA0A
{
	if (Local_137.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_137.f_671), 750, 0))
	{
		unk_0x872F1C1F8587CCC7(&(Local_137.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA40
{
	Local_137.f_8 = iParam0;
}

int func_24()//Position - 0xA4F
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_32())
	{
		Var0 = { Local_137.f_729[iLocal_101 /*2*/] };
		if (func_31(Var0))
		{
			if (!unk_0x93C304998B457C45(Var0.f_1))
			{
				if (func_30(iLocal_101, &vVar1, &fVar2))
				{
					Local_137.f_713[iLocal_101] = func_27(iLocal_101);
					if (unk_0xC80D31E4B587871C(Local_1504[Local_137.f_713[iLocal_101] /*5*/].f_1, iLocal_101))
					{
						if (func_26(&(Local_137.f_729[iLocal_101 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), 1);
							unk_0xFBA991D3A851E195(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), 1);
							unk_0x9D160A2C23D47EBA(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), 0);
							func_25(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), 1);
							if (unk_0x6C5223DB5E5CFD9B("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
							{
								if (unk_0xB80A4DA4C06A76F1(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x2786E663D1846FFC(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), "MPBitset");
								}
								unk_0x872F1C1F8587CCC7(&iVar3, 10);
								unk_0x872F1C1F8587CCC7(&iVar3, 11);
								unk_0xD91ED8E8618A1DEF(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_101 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_137.f_713[iLocal_101] = -1;
						}
					}
				}
			}
			iLocal_101++;
			if (iLocal_101 >= 10)
			{
				iLocal_101 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBE4
{
	int iVar0;
	
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 13);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&iVar0, 13);
		}
		unk_0xD91ED8E8618A1DEF(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xC32
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x9B8406983378711E(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam13)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam8);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam6)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, bParam7);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xD2C
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_30(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xB72D370CB7ABC3EF() - 1))
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar6 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (func_13(iVar6, 1, 1))
				{
					fVar3 = func_28(func_29(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_28(vector3 vParam0, vector3 vParam1)//Position - 0xDA5
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return system::vdist(vParam0, vParam1);
}

Vector3 func_29(int iParam0)//Position - 0xDC3
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_30(int iParam0, var uParam1, var uParam2)//Position - 0xDD6
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729,582f, -2943,77f, 12,9443f };
			*uParam2 = 300,078f;
			break;
		
		case 1:
			*uParam1 = { 677,2984f, 769,7758f, 204,6846f };
			*uParam2 = 82,8903f;
			break;
		
		case 2:
			*uParam1 = { 1073,972f, 3003,889f, 40,5508f };
			*uParam2 = 333,2717f;
			break;
		
		case 3:
			*uParam1 = { 1928,635f, 4702,327f, 40,1958f };
			*uParam2 = 327,9112f;
			break;
		
		case 4:
			*uParam1 = { 1278,65f, 6579,366f, 1,505f };
			*uParam2 = 84,26f;
			break;
		
		case 5:
			*uParam1 = { -1700,407f, -829,8932f, 8,2542f };
			*uParam2 = 70,1811f;
			break;
		
		case 6:
			*uParam1 = { -2733,589f, 2925,563f, 1,2152f };
			*uParam2 = 176,5378f;
			break;
		
		case 7:
			*uParam1 = { 1493,418f, -2442,99f, 64,9693f };
			*uParam2 = 52,9918f;
			break;
		
		case 8:
			*uParam1 = { 569,0449f, -772,5692f, 10,4088f };
			*uParam2 = 179,3501f;
			break;
		
		case 9:
			*uParam1 = { -905,1526f, 5548,172f, 5,5251f };
			*uParam2 = 95,8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

bool func_31(int iParam0)//Position - 0xF52
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

bool func_32()//Position - 0xF70
{
	return Local_137.f_707;
}

int func_33(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xF7E
{
	if (func_95(unk_0x9EB17624F44A8DA4(), 0) || func_92(unk_0x9EB17624F44A8DA4(), 0))
	{
		if (func_91(unk_0x9EB17624F44A8DA4()) || func_89(unk_0x9EB17624F44A8DA4()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x8AB67E33BD002BAC() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (func_36(&(Global_1574409.f_18)))
	{
		if (!func_1(&(Global_1574409.f_18), 7500, 0))
		{
			return 0;
		}
		func_35(&(Global_1574409.f_18));
	}
	if (func_34())
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 0);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x5C6098C2BAD00378() < iParam0)
	{
		if (bParam2)
		{
			func_41(sParam3, sParam4, 1);
		}
		if (func_40(26, -1))
		{
			func_37(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_34()//Position - 0x1075
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 0);
}

void func_35(var uParam0)//Position - 0x1088
{
	uParam0->f_1 = 0;
}

bool func_36(var uParam0)//Position - 0x1095
{
	return uParam0->f_1;
}

void func_37(int iParam0, int iParam1)//Position - 0x10A1
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD1EA64C8648E82BA(0, iParam1);
			break;
		
		default:
			iVar1 = func_38(iParam1);
			iVar0 = unk_0x496616BFA56C89EB(iVar1);
			if (unk_0xC80D31E4B587871C(iVar0, iParam0))
			{
				unk_0x0EE72DB1CD8A3B86(&iVar0, iParam0);
				unk_0xD1EA64C8648E82BA(iVar0, iParam1);
			}
			break;
	}
}

int func_38(int iParam0)//Position - 0x10FD
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_39()//Position - 0x1160
{
	return Global_1312736;
}

bool func_40(int iParam0, int iParam1)//Position - 0x116C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	iVar0 = func_38(iParam1);
	iVar1 = unk_0x496616BFA56C89EB(iVar0);
	return unk_0xC80D31E4B587871C(iVar1, iParam0);
}

void func_41(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1198
{
	if ((!unk_0xC80D31E4B587871C(Global_1574409.f_1, 2) && !func_7(unk_0x9EB17624F44A8DA4())) && !func_6(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xAB019B170BF1309C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xAB019B170BF1309C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_42(66, sParam0, sParam1, 1, -1, 2);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 2);
	}
}

int func_42(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x120D
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_88(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_43(&Var0);
}

int func_43(var uParam0)//Position - 0x1271
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_57(uParam0, uParam0->f_16);
	func_54(uParam0);
	if (func_53())
	{
		func_54(uParam0);
	}
	if (func_52(uParam0->f_1))
	{
		func_45();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_45();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_44(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x1432
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

void func_45()//Position - 0x14B2
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_46();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_46()//Position - 0x14E5
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_50(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_47(&(Global_2436181.f_2912.f_1));
}

void func_47(var uParam0)//Position - 0x1526
{
	if (uParam0->f_1 != 0)
	{
		unk_0xA68F7B004463AB6F(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			unk_0x008F3E3CC076EA0E(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1869584A8A72FEDD(false);
			unk_0x271AA5469AF471B3();
		}
		unk_0xA68F7B004463AB6F(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x7635EA803CE40962(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!unk_0xC445AB6B86A2138E(unk_0x98EC0789D9F0703B()))
		{
			if (!Global_71125)
			{
				if (unk_0x3E9CABD07B829173() && !func_49(0))
				{
					unk_0x59C3AC31C7544A28(800);
				}
			}
		}
	}
	func_48(0);
}

void func_48(int iParam0)//Position - 0x15CC
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_49(bool bParam0)//Position - 0x15E0
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_50(var uParam0)//Position - 0x160B
{
	func_51(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_51(var uParam0)//Position - 0x1635
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_52(int iParam0)//Position - 0x16B4
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_53()//Position - 0x17B6
{
	return Global_2447174.f_16;
}

void func_54(var uParam0)//Position - 0x17C4
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_71 = func_55();
	}
}

int func_55()//Position - 0x17DF
{
	return 21;
}

int func_56(int iParam0)//Position - 0x17E9
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_57(var uParam0, int iParam1)//Position - 0x187B
{
	if (func_56(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_87() || !func_13(iParam1, 0, 1))
	{
		return;
	}
	if (func_44(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_58(iParam1, -2, 0, 0);
		}
	}
}

int func_58(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x18D1
{
	int iVar0;
	int iVar1;
	
	if (func_83(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_83(unk_0x9EB17624F44A8DA4()) || (func_82() && func_81())) && !unk_0xC80D31E4B587871C(Global_2512808.f_4556, 31))
	{
		iVar1 = func_80();
		if (unk_0x6ADD12BF4D6D2587(iVar1))
		{
			if (unk_0x1417A5CC924DE120(iVar1))
			{
				if (unk_0xDF35170AEEFB473B(iVar1) != -1)
				{
					if (func_13(unk_0xDF35170AEEFB473B(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_78(iParam1, iParam0, 0);
							}
							else
							{
								return func_66(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_66(iParam0, unk_0xDF35170AEEFB473B(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_78(iParam1, iParam0, 0);
				}
				else
				{
					return func_59(0, -1, 0);
				}
			}
			else
			{
				return func_59(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x4916190900E76373()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_78(iParam1, iParam0, 0);
		}
		else
		{
			return func_66(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
		}
	}
	return func_66(iParam0, unk_0x9EB17624F44A8DA4(), iParam1, bParam2, bParam3);
}

int func_59(bool bParam0, int iParam1, bool bParam2)//Position - 0x1AA1
{
	return func_60(unk_0x9EB17624F44A8DA4(), bParam0, iParam1, bParam2);
}

int func_60(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1AB7
{
	int iVar0;
	
	if (!unk_0x552F39AE86E07792(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_65(iVar0, iParam2, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_64(1);
				}
				else
				{
					return func_64(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_4, 20))
			{
				return func_61(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_61(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_64(1);
	}
	return func_64(0);
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1B7B
{
	int iVar0;
	
	iVar0 = func_63(iParam0, iParam1, iParam3);
	if (func_62(Global_4456448.f_122309))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_62(int iParam0)//Position - 0x1C92
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, int iParam2)//Position - 0x1CCB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_65(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(bool bParam0)//Position - 0x1D12
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_65(int iParam0, int iParam1, int iParam2)//Position - 0x1D29
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 0);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 1);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 2);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 4);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 5);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 6);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 8);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 9);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 10);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 12);
				
				case 1:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 13);
				
				case 2:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 14);
				
				case 3:
					return unk_0xC80D31E4B587871C(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1EF4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x917EE18109C5ACEA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_75(1))
			{
				iVar3 = func_71(iParam0);
				if (!iVar3 == -1)
				{
					return func_69(iVar3);
				}
			}
			if ((func_68(iParam1, iParam0, iVar0, 0) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)) || ((func_65(unk_0x917EE18109C5ACEA(iParam1), unk_0x917EE18109C5ACEA(iParam0), 0) && unk_0xC80D31E4B587871C(Global_4456448.f_15, 23)) && !unk_0xC80D31E4B587871C(Global_4456448.f_15, 18)))
			{
				return func_64(1);
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 26))
			{
				return func_67(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_64(1);
			}
			else
			{
				return func_60(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_71(iParam0);
	if (!iVar4 == -1)
	{
		return func_69(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_67(bool bParam0)//Position - 0x2098
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x20AF
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && unk_0x917EE18109C5ACEA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == unk_0x917EE18109C5ACEA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x917EE18109C5ACEA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
	}
	return unk_0x917EE18109C5ACEA(iParam0) == iParam2;
}

int func_69(int iParam0)//Position - 0x2127
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_70(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_70(int iParam0)//Position - 0x21EA
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_71(int iParam0)//Position - 0x2201
{
	if (!iParam0 == func_87())
	{
		if (func_73(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_72(iParam0)];
		}
	}
	return -1;
}

int func_72(int iParam0)//Position - 0x2233
{
	if (iParam0 != func_87())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_87();
}

bool func_73(int iParam0, bool bParam1)//Position - 0x2256
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_87();
}

int func_74(int iParam0)//Position - 0x2281
{
	if (iParam0 != func_87())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_87())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x22B6
{
	if ((func_77() || func_76()) || (func_53() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_76()//Position - 0x22E5
{
	return Global_2447174.f_15;
}

var func_77()//Position - 0x22F3
{
	return Global_2447174.f_14;
}

int func_78(int iParam0, int iParam1, bool bParam2)//Position - 0x2301
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_75(1))
	{
		iVar2 = func_71(iParam1);
		if (!iVar2 == -1)
		{
			return func_69(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xC80D31E4B587871C(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_87())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
			{
				if (unk_0xC80D31E4B587871C(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_60(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_21, 13))
		{
			iVar0 = func_79(iParam0);
		}
		if (unk_0xC80D31E4B587871C(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_79(int iParam0)//Position - 0x2466
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_80()//Position - 0x253B
{
	return Global_2359302.f_2;
}

bool func_81()//Position - 0x2549
{
	return unk_0xC80D31E4B587871C(Global_2359302, 4);
}

bool func_82()//Position - 0x255A
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_83(int iParam0)//Position - 0x2577
{
	if (func_85(iParam0, 0))
	{
		return 1;
	}
	if (func_84())
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

bool func_84()//Position - 0x25B9
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_85(int iParam0, int iParam1)//Position - 0x25CA
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_86(-1, 0) == 8;
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

int func_86(int iParam0, bool bParam1)//Position - 0x2615
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_87()//Position - 0x2656
{
	return -1;
}

void func_88(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x265F
{
	uParam1->f_16 = func_87();
	uParam1->f_17 = func_87();
	uParam1->f_18 = func_87();
	uParam1->f_19 = func_87();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

bool func_89(int iParam0)//Position - 0x26D8
{
	return func_90(iParam0, 20);
}

bool func_90(int iParam0, int iParam1)//Position - 0x26E8
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_91(int iParam0)//Position - 0x2703
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_90(iParam0, 9);
	}
	return 0;
}

int func_92(int iParam0, int iParam1)//Position - 0x2721
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_93(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_93(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x2787
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_94(iParam0, 0);
	return 0;
}

int func_94(int iParam0, int iParam1)//Position - 0x27D5
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_95(int iParam0, int iParam1)//Position - 0x282A
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x2865
{
	Local_137 = iParam0;
}

int func_97()//Position - 0x2872
{
	int iVar0;
	
	if (func_1(&(Local_137.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_137.f_674[iVar0] = -1;
			iVar0++;
		}
		func_35(&(Local_137.f_661));
		func_100();
		if (func_32())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_137.f_713[iVar0] = func_27(iVar0);
				iVar0++;
			}
			func_98();
		}
		return 1;
	}
	return 0;
}

void func_98()//Position - 0x28EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_137.f_729[iVar0 /*2*/] = func_99();
		iVar0++;
	}
}

int func_99()//Position - 0x2913
{
	int iVar0;
	
	iVar0 = unk_0x63A6486593EC7EC3(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_100()//Position - 0x2947
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_137.f_709 = func_113();
	Local_137.f_708 = Local_137.f_709;
	Local_137.f_712 = func_109();
	Local_137.f_707 = func_106();
	iVar0 = func_105();
	if (Local_137.f_707)
	{
		iVar1 = 1;
	}
	func_102(func_104(132, Local_137.f_712, iVar1, 0));
	if (Local_137.f_712 == 1 && !Local_137.f_707)
	{
		Local_137.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_137.f_709)
	{
		Local_137.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_137.f_10[iVar2 /*5*/] = { func_101(Local_137.f_712, Local_137.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_101(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x29FF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623,5349f, 1614,651f, 283,748f;
							
							case 1:
								return 742,6324f, 1271,099f, 388,9925f;
							
							case 2:
								return 682,1757f, 1204,295f, 350,0934f;
							
							case 3:
								return 1779,28f, 668,7821f, 276,3788f;
							
							case 4:
								return 1927,214f, 129,7589f, 174,4281f;
							
							case 5:
								return 1056,943f, -699,1728f, 78,8831f;
							
							case 6:
								return 2026,536f, -1594,874f, 262,0831f;
							
							case 7:
								return 2139,424f, -2613,58f, 20,5914f;
							
							case 8:
								return 1041,685f, -2882,901f, 27,0959f;
							
							case 9:
								return 796,1402f, -2624,645f, 95,127f;
							
							case 10:
								return 504,6169f, -3311,801f, 22,9858f;
							
							case 11:
								return 416,9175f, -2684,419f, 10,1246f;
							
							case 12:
								return 561,767f, -2100,675f, 60,143f;
							
							case 13:
								return 872,454f, -1929,237f, 104,4083f;
							
							case 14:
								return 636,6328f, -1429,945f, 15,5f;
							
							case 15:
								return 591,386f, -852,2912f, 50,7211f;
							
							case 16:
								return 471,2209f, -102,4007f, 149,7505f;
							
							case 17:
								return 533,762f, 143,6576f, 125,7511f;
							
							case 18:
								return 1112,19f, 74,8892f, 117,7713f;
							
							case 19:
								return 683,9346f, 570,1795f, 165,7115f;
							
							case 20:
								return 1453,832f, 1113,675f, 134,9644f;
							
							case 21:
								return 1539,314f, 1716,172f, 125,0574f;
							
							case 22:
								return 1875,192f, 1698,918f, 109,9103f;
							
							case 23:
								return 2320,32f, 1669,402f, 86,7663f;
							
							case 24:
								return 2337,891f, 1358,536f, 100,8737f;
							
							case 25:
								return 2727,786f, 1558,729f, 83,66f;
							
							case 26:
								return 3112,177f, 1153,66f, 25,3827f;
							
							case 27:
								return 2580,817f, 476,8322f, 121,7549f;
							
							case 28:
								return 2458,7f, -384,0464f, 127,5513f;
							
							case 29:
								return 2381,206f, -939,2949f, 185,6516f;
							
							case 30:
								return 1669,294f, -1652,948f, 154,2478f;
							
							case 31:
								return 1096,793f, -1141,693f, 96,1055f;
							
							case 32:
								return 3042,9f, -291,4662f, 22,8304f;
							
							case 33:
								return 2645,351f, -1492,043f, 30,646f;
							
							case 34:
								return 1214,374f, -2353,274f, 66,8f;
							
							case 35:
								return 1841,616f, -2497,971f, 101,8039f;
							
							case 36:
								return 1872,035f, -761,149f, 105f;
							
							case 37:
								return 1657,665f, -413,7629f, 228,448f;
							
							case 38:
								return 1589,229f, -1981,901f, 161,2293f;
							
							case 39:
								return 991,7729f, -1477,064f, 60,0276f;
							
							case 40:
								return 2609,912f, -2096,358f, 35,0044f;
							
							case 41:
								return 1121,19f, 725,4341f, 170,3273f;
							
							case 42:
								return 2117,316f, 1024,085f, 197f;
							
							case 43:
								return 727,6708f, -452,6442f, 25f;
							
							case 44:
								return 1211,964f, -3285,54f, 19,5936f;
							
							case 45:
								return 1499,883f, -1276,207f, 131,5493f;
							
							case 46:
								return 3381,442f, -826,2608f, 42,8967f;
							
							case 47:
								return 1562,097f, 292,1506f, 494,2574f;
							
							case 48:
								return 2021,578f, -1993,689f, 120f;
							
							case 49:
								return 757,5558f, -1196,363f, 232,0553f;
							
							case 50:
								return 1887,774f, -3474,97f, 77,8727f;
							
							case 51:
								return 1083,224f, -229,6182f, 68,6364f;
							
							case 52:
								return 2344,084f, -406,1672f, 91f;
							
							case 53:
								return 2184,821f, 529,1252f, 241,1723f;
							
							case 54:
								return 1251,541f, -1883,809f, 50f;
							
							case 55:
								return 847,74f, 1781,903f, 160,9508f;
							
							case 56:
								return 288,3698f, -1601,346f, 52f;
							
							case 57:
								return 2648,131f, -731,5316f, 99,7f;
							
							case 58:
								return 1937,117f, 1337,446f, 529,8608f;
							
							case 59:
								return 1512,681f, -2539,276f, 208,3091f;
							
							case 60:
								return 2352,986f, -1763,908f, 136,1568f;
							
							case 61:
								return 2099,732f, -1212,728f, 178,3343f;
							
							case 62:
								return 1945,16f, -957,8221f, 96,04f;
							
							case 63:
								return 1872,81f, -830,1746f, 171,44f;
							
							case 64:
								return 1256,392f, -1571,629f, 90,566f;
							
							case 65:
								return 1818,023f, -244,6768f, 305,9837f;
							
							case 66:
								return 2839,051f, -748,0399f, 21,5008f;
							
							case 67:
								return 1268,646f, -2126,072f, 60,6975f;
							
							case 68:
								return 1088,679f, -1982,82f, 84,1204f;
							
							case 69:
								return 1597,218f, -2817,042f, 19,0498f;
							
							case 70:
								return 356,3379f, -2319,226f, 67,6058f;
							
							case 71:
								return 692,5012f, -2330,583f, 60,7022f;
							
							case 72:
								return 1070,4f, -1835,148f, 100,8235f;
							
							case 73:
								return 478,3501f, -1682,318f, 59,7763f;
							
							case 74:
								return 845,2267f, -2186,32f, 46,5743f;
							
							case 75:
								return 2651,639f, -1230,85f, 40,5824f;
							
							case 76:
								return 461,851f, -1460,173f, 65,7889f;
							
							case 77:
								return 775,8362f, -852,0386f, 31f;
							
							case 78:
								return 913,9593f, -976,4005f, 81,0321f;
							
							case 79:
								return 970,9194f, -2510,112f, 64f;
							
							case 80:
								return 1096,666f, 1222,327f, 202,4859f;
							
							case 81:
								return 1978,543f, 690,4552f, 174,2517f;
							
							case 82:
								return 1571,993f, -36,6251f, 140,5239f;
							
							case 83:
								return 918,2688f, -675,462f, 76,6019f;
							
							case 84:
								return 798,097f, -1194,02f, 32f;
							
							case 85:
								return 382,4527f, -31,8431f, 143,6312f;
							
							case 86:
								return 672,1725f, -1745,012f, 16f;
							
							case 87:
								return 620,2905f, -588,2725f, 22,6129f;
							
							case 88:
								return 1204,318f, 196,6229f, 79,9329f;
							
							case 89:
								return 2028,402f, -2179,396f, 105,5733f;
							
							case 90:
								return 1131,183f, -2929,769f, 33,2799f;
							
							case 91:
								return 654,5255f, -2634,736f, 26,063f;
							
							case 92:
								return 757,272f, -30,6019f, 66,9464f;
							
							case 93:
								return 262,5532f, -1046,969f, 73,6448f;
							
							case 94:
								return 638,4819f, -1021f, 43,5236f;
							
							case 95:
								return 351,6616f, -2758,046f, 29,2267f;
							
							case 96:
								return 1613,985f, -2243,761f, 136f;
							
							case 97:
								return 2947,746f, 792,9475f, 45f;
							
							case 98:
								return 2608,733f, 822,9318f, 118,6201f;
							
							case 99:
								return 1357,208f, 674,4443f, 100f;
							
							case 100:
								return 978,4934f, -2073,071f, 1000f;
							
							case 101:
								return 2848,513f, -2701,795f, 547,5851f;
							
							case 102:
								return 2322,219f, -2129,611f, 13,6809f;
							
							case 103:
								return 1248,603f, -2675,042f, 145,6704f;
							
							case 104:
								return 2052,692f, -252,931f, 228,334f;
							
							case 105:
								return 2394,902f, 388,1578f, 194,5342f;
							
							case 106:
								return 3337,711f, 56,3844f, 764,684f;
							
							case 107:
								return 1573,049f, 1472,569f, 179,2061f;
							
							case 108:
								return 1898,354f, 1020,671f, 277,9648f;
							
							case 109:
								return 745,1586f, 232,868f, 177,0828f;
							
							case 110:
								return 1551,579f, -685,6392f, 126f;
							
							case 111:
								return 2734,234f, 61,798f, 25,1296f;
							
							case 112:
								return 2404,63f, -1485,806f, 86,3959f;
							
							case 113:
								return 3033,16f, 321,8385f, 908,0805f;
							
							case 114:
								return 1353,323f, 373,6808f, 184,937f;
							
							case 115:
								return 1317,262f, -737,488f, 125,2729f;
							
							case 116:
								return 1737,696f, -966,1904f, 119,8332f;
							
							case 117:
								return 923,2643f, 978,5736f, 605,3384f;
							
							case 118:
								return 2823,777f, -1483,905f, 26,8193f;
							
							case 119:
								return 1333,475f, -275,2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360,429f, 1273,094f, 63,9814f;
							
							case 1:
								return 2545,422f, 342,8004f, 107,4641f;
							
							case 2:
								return 2483,171f, -363,0696f, 92,7352f;
							
							case 3:
								return 1491,835f, -1005,532f, 50,5682f;
							
							case 4:
								return 1078,853f, -688,3618f, 56,6151f;
							
							case 5:
								return 657,7627f, -1500,858f, 8,6817f;
							
							case 6:
								return 1216,266f, -2907,278f, 4,8661f;
							
							case 7:
								return 958,6841f, -3079,094f, 13,3327f;
							
							case 8:
								return 459,5267f, -2429,235f, 4,7518f;
							
							case 9:
								return 1130,214f, -2082,811f, 30,0089f;
							
							case 10:
								return 1506,701f, -2135,637f, 75,4567f;
							
							case 11:
								return 1759,277f, -1579,97f, 117,9f;
							
							case 12:
								return 2510,45f, -1219,332f, 1,89f;
							
							case 13:
								return 2855,604f, -1339,602f, 14,7183f;
							
							case 14:
								return 2826,41f, -743,3448f, 0,3071f;
							
							case 15:
								return 1236,599f, -83,0057f, 58,7636f;
							
							case 16:
								return 1660,534f, 0,3033f, 172,7744f;
							
							case 17:
								return 1917,608f, 301,6851f, 161,8848f;
							
							case 18:
								return 2145,003f, 146,688f, 224,1061f;
							
							case 19:
								return 1456,737f, 1111,848f, 113,334f;
							
							case 20:
								return 1135,62f, 58,6667f, 79,7561f;
							
							case 21:
								return 680,794f, 559,0409f, 128,0462f;
							
							case 22:
								return 716,7936f, 141,21f, 79,7545f;
							
							case 23:
								return 875,606f, -476,7556f, 29,0746f;
							
							case 24:
								return 536,7303f, -2817,502f, 5,0421f;
							
							case 25:
								return 984,1771f, -2410,686f, 29,4333f;
							
							case 26:
								return 863,2344f, -2151,808f, 29,4816f;
							
							case 27:
								return 1002,942f, -1918,75f, 30,1432f;
							
							case 28:
								return 1183,313f, -1550,946f, 38,5953f;
							
							case 29:
								return 694,0918f, 1283,059f, 359,296f;
							
							case 30:
								return 745,2003f, 1199,09f, 325,4016f;
							
							case 31:
								return 887,6219f, 873,548f, 178,5657f;
							
							case 32:
								return 1828,967f, 1571,725f, 99,7219f;
							
							case 33:
								return 2805,81f, 1676,1f, 23,5193f;
							
							case 34:
								return 1405,691f, -601,7893f, 73,3473f;
							
							case 35:
								return 1710,367f, -464,7253f, 169,8001f;
							
							case 36:
								return 1946,392f, 1331,992f, 160,1707f;
							
							case 37:
								return 2271,38f, 1711,949f, 67,0413f;
							
							case 38:
								return 2307,003f, -1750,421f, 133,7737f;
							
							case 39:
								return 2172,226f, -1069,367f, 176,0087f;
							
							case 40:
								return 595,0312f, -851,27f, 40,4327f;
							
							case 41:
								return 456,9577f, -752,8668f, 26,3578f;
							
							case 42:
								return 531,9203f, -1034,797f, 27,2597f;
							
							case 43:
								return 1289,908f, -3341,78f, 4,9016f;
							
							case 44:
								return 533,8767f, -1969,171f, 23,9846f;
							
							case 45:
								return 689,5218f, -1774,186f, 8,6f;
							
							case 46:
								return 848,6605f, -1211,77f, 30,3237f;
							
							case 47:
								return 1874,741f, -2202,331f, 166,2907f;
							
							case 48:
								return 1458,76f, -2623,696f, 47,69f;
							
							case 49:
								return 1538,907f, 784,3685f, 76,4501f;
							
							case 50:
								return 800,149f, -109,5107f, 79,533f;
							
							case 51:
								return 2687,09f, 889,5835f, 76,4359f;
							
							case 52:
								return 939,7744f, -1496,824f, 29,1156f;
							
							case 53:
								return 547,5936f, -455,3327f, 23,7304f;
							
							case 54:
								return 709,3f, -2285f, 33,8f;
							
							case 55:
								return 454,0637f, -2177,92f, 4,9177f;
							
							case 56:
								return 1468,104f, -1759,198f, 78,3022f;
							
							case 57:
								return 1239,343f, -1097,545f, 37,5256f;
							
							case 58:
								return 851,4936f, -956,856f, 25,2824f;
							
							case 59:
								return 512,4025f, 221,9917f, 103,7442f;
							
							case 60:
								return 1545,082f, 1701,081f, 108,769f;
							
							case 61:
								return 1188,11f, 1556,979f, 107,8028f;
							
							case 62:
								return 1033,948f, -273,4799f, 49,8443f;
							
							case 63:
								return 743,4129f, -591,6385f, 26,0061f;
							
							case 64:
								return 1975,484f, -749,9232f, 96,2513f;
							
							case 65:
								return 1968,117f, 708,8224f, 161,8571f;
							
							case 66:
								return 2296,027f, 1152,222f, 64,0942f;
							
							case 67:
								return 2474,09f, 1484,103f, 35,2029f;
							
							case 68:
								return 482,1839f, 664,4731f, 195,1235f;
							
							case 69:
								return 1505,106f, -1271,169f, 121,655f;
							
							case 70:
								return 1220,729f, -1865,861f, 37,4982f;
							
							case 71:
								return 476,6311f, -1283,433f, 28,5393f;
							
							case 72:
								return 952,6752f, -2248,219f, 29,5831f;
							
							case 73:
								return 1434,707f, -2315,042f, 65,927f;
							
							case 74:
								return 1882,254f, -1873,208f, 191,477f;
							
							case 75:
								return 2014,572f, -1591,406f, 249,303f;
							
							case 76:
								return 1969,748f, -992,8931f, 79,6204f;
							
							case 77:
								return 2267,432f, -331,317f, 92,9784f;
							
							case 78:
								return 1205,465f, 336,8802f, 80,9909f;
							
							case 79:
								return 531,8229f, -27,4548f, 69,6295f;
							
							case 80:
								return 304,7162f, 262,4799f, 104,337f;
							
							case 81:
								return 572,4857f, -2147,293f, 7,9233f;
							
							case 82:
								return 1223,13f, -2338,621f, 59,8673f;
							
							case 83:
								return 1747,151f, -2679,91f, 1,4587f;
							
							case 84:
								return 939,6769f, -1342,533f, 11,4778f;
							
							case 85:
								return 1435,646f, -1476,472f, 62,2245f;
							
							case 86:
								return 2273,048f, -539,2752f, 102,9436f;
							
							case 87:
								return 1522,075f, -381,5488f, 200,3996f;
							
							case 88:
								return 2778,579f, 1073,328f, 0,6607f;
							
							case 89:
								return 609,4634f, -1333,589f, 20,7017f;
							
							case 90:
								return 1360,928f, -946,584f, 55,9209f;
							
							case 91:
								return 1147,373f, -431,5072f, 65,9987f;
							
							case 92:
								return 2391,644f, -932,7006f, 151,3306f;
							
							case 93:
								return 2897,51f, -314,7418f, 17,1346f;
							
							case 94:
								return 2963,361f, 513,4398f, 35,0981f;
							
							case 95:
								return 2415,814f, 763,4792f, 124,8302f;
							
							case 96:
								return 2054,985f, 953,5229f, 218,5845f;
							
							case 97:
								return 1522,831f, 461,3894f, 224,2793f;
							
							case 98:
								return 1301,596f, 1445,471f, 98,4293f;
							
							case 99:
								return 1071,843f, -1841,304f, 36,3069f;
							
							case 100:
								return 1133,087f, -2602,795f, 17,3834f;
							
							case 101:
								return 484,4286f, -3064,647f, 5,084f;
							
							case 102:
								return 1610,912f, -2385,55f, 90,6982f;
							
							case 103:
								return 695,2822f, -2534,997f, 17,6967f;
							
							case 104:
								return 554,7129f, -1634,238f, 26,9479f;
							
							case 105:
								return 1723,686f, -1038,606f, 129,0783f;
							
							case 106:
								return 2637,012f, -1863,213f, 17,7764f;
							
							case 107:
								return 2638,077f, 1346,641f, 25,4338f;
							
							case 108:
								return 1910,663f, 29,3172f, 159,5f;
							
							case 109:
								return 2952,967f, 797,8872f, 0,1f;
							
							case 110:
								return 2937,12f, 1471,532f, 0f;
							
							case 111:
								return 2348,98f, -2281,005f, 0,1697f;
							
							case 112:
								return 2681,416f, -1560,354f, -0,0123f;
							
							case 113:
								return 2812,644f, -27,1503f, 0,7016f;
							
							case 114:
								return 3201,036f, -102,7169f, 0,2f;
							
							case 115:
								return 651,1428f, -3112,596f, 0,0233f;
							
							case 116:
								return 2313,423f, -2194,061f, 0,025f;
							
							case 117:
								return 3055,192f, 185,0506f, 0,4391f;
							
							case 118:
								return 2729,46f, -1073,702f, 0,6712f;
							
							case 119:
								return 1423,506f, -2790,912f, 0,7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915,445f, -2520,007f, 58f;
							
							case 1:
								return -1343,719f, -3336,795f, 30,5601f;
							
							case 2:
								return -1336,239f, -3044,059f, 300,803f;
							
							case 3:
								return -1833,852f, -1191,057f, 41,1411f;
							
							case 4:
								return -1955,78f, 1776,57f, 195,8577f;
							
							case 5:
								return -2166,629f, 1607,567f, 260f;
							
							case 6:
								return -417,0685f, 1153,347f, 347,5894f;
							
							case 7:
								return -2503,341f, 754,9435f, 342,9515f;
							
							case 8:
								return -2626,127f, 136,1493f, 118,1611f;
							
							case 9:
								return -2246,804f, 266,7578f, 194,8923f;
							
							case 10:
								return -1364,038f, 56,9618f, 70,9416f;
							
							case 11:
								return -94,2512f, 880,448f, 265f;
							
							case 12:
								return -162,3738f, -999,6118f, 286,6717f;
							
							case 13:
								return 140,5345f, -698,5123f, 92,6658f;
							
							case 14:
								return -104,079f, -755,4847f, 59,1614f;
							
							case 15:
								return -284,6401f, -446,2669f, 91,5901f;
							
							case 16:
								return -795,1664f, -736,1061f, 78,6788f;
							
							case 17:
								return -971,361f, -1305,368f, 50f;
							
							case 18:
								return -1357,973f, -1476,396f, 40,9274f;
							
							case 19:
								return -2004,334f, -556,4324f, 20,3771f;
							
							case 20:
								return -1034,381f, 640,7464f, 163,7504f;
							
							case 21:
								return -1238,563f, -848,6133f, 89,7682f;
							
							case 22:
								return -1169,283f, -467,3812f, 69,0157f;
							
							case 23:
								return -324,4008f, -1968,694f, 71,7904f;
							
							case 24:
								return -269,9813f, -2425,728f, 95,05f;
							
							case 25:
								return 247,3292f, -3308,082f, 59,9012f;
							
							case 26:
								return 219,492f, -2318,923f, 43,917f;
							
							case 27:
								return 18,8233f, -1504f, 54,686f;
							
							case 28:
								return 8,9788f, 1715,057f, 249,4028f;
							
							case 29:
								return -667,7844f, 404,7751f, 125,5105f;
							
							case 30:
								return 216,2372f, 236,2603f, 125,7443f;
							
							case 31:
								return -3079,696f, 766,6476f, 33,988f;
							
							case 32:
								return -1105,589f, 1428,968f, 238,1016f;
							
							case 33:
								return -474,9906f, 1529,526f, 500,0109f;
							
							case 34:
								return -1621,841f, 929,212f, 193,8022f;
							
							case 35:
								return -767,9827f, -21,7202f, 69,0007f;
							
							case 36:
								return -472,9492f, -1444,143f, 92,8559f;
							
							case 37:
								return -1879,575f, -2634,001f, 11,491f;
							
							case 38:
								return -1459,734f, -2141,965f, 23,7189f;
							
							case 39:
								return -75,0934f, -818,6606f, 599,9617f;
							
							case 40:
								return -230,7478f, -241,4196f, 76,4557f;
							
							case 41:
								return -1608,013f, -537,3172f, 73,1431f;
							
							case 42:
								return -1806,964f, -125,5317f, 118,0094f;
							
							case 43:
								return -3170,222f, 1543,227f, 33,8091f;
							
							case 44:
								return -2753,087f, 1229,005f, 140,7239f;
							
							case 45:
								return -306,4009f, 202,0892f, 180,3099f;
							
							case 46:
								return 396,1246f, -1528,24f, 46,6041f;
							
							case 47:
								return 389,6704f, -356,0437f, 61,5436f;
							
							case 48:
								return 324,4086f, -988,9622f, 92,2799f;
							
							case 49:
								return -657,5551f, -1105,199f, 67,647f;
							
							case 50:
								return -439,2123f, -1003,071f, 58,7819f;
							
							case 51:
								return -208,3349f, -1800,983f, 12,0207f;
							
							case 52:
								return 104,7709f, -1940,293f, 33,3786f;
							
							case 53:
								return -80,1589f, 364,0139f, 180,4526f;
							
							case 54:
								return -1064,813f, 7,4781f, 69,6885f;
							
							case 55:
								return -1997,443f, 722,7387f, 175,1271f;
							
							case 56:
								return -254,3736f, -3074,535f, 75,4412f;
							
							case 57:
								return -830,1344f, -1880,055f, 33,9615f;
							
							case 58:
								return -2775,497f, -788,6588f, 36,447f;
							
							case 59:
								return 43,0406f, -413,7074f, 89,5811f;
							
							case 60:
								return -3209,421f, 1110,18f, 37,6606f;
							
							case 61:
								return -2256,718f, -339,6835f, 43,3005f;
							
							case 62:
								return -1957,094f, 1330,48f, 236,7105f;
							
							case 63:
								return -1030,221f, 996,1059f, 182,364f;
							
							case 64:
								return -1529,428f, 441,7661f, 134,8705f;
							
							case 65:
								return 145,6732f, 1154,994f, 253,3341f;
							
							case 66:
								return -520,5256f, 659,5372f, 177,0043f;
							
							case 67:
								return 18,1044f, 638,951f, 224,5906f;
							
							case 68:
								return 128,1127f, -27,8183f, 91,0755f;
							
							case 69:
								return -634,6116f, -367,6195f, 56,3093f;
							
							case 70:
								return -402,9568f, -655,0366f, 60,6586f;
							
							case 71:
								return -1034,505f, -1070,038f, 21,0905f;
							
							case 72:
								return -1013,909f, -1763,924f, 20,6112f;
							
							case 73:
								return -734,4069f, -1448,061f, 26,2766f;
							
							case 74:
								return -202,7723f, -1322,269f, 53,6863f;
							
							case 75:
								return 388,6693f, -1368,068f, 50,7767f;
							
							case 76:
								return -7,0116f, -2230,674f, 39,1959f;
							
							case 77:
								return 33,8391f, -2745,649f, 33,5782f;
							
							case 78:
								return -1100,793f, -2846,705f, 53,132f;
							
							case 79:
								return -1274,324f, -2448,849f, 99,9299f;
							
							case 80:
								return -473,7719f, -2675,318f, 19,2771f;
							
							case 81:
								return -727,3944f, -3494,9f, 23,1103f;
							
							case 82:
								return -1907,151f, -3034,577f, 39,2742f;
							
							case 83:
								return 416,2226f, -2912,834f, 5,0678f;
							
							case 84:
								return 414,82f, -2616,128f, 22,3517f;
							
							case 85:
								return 233,9356f, -1474,491f, 45,7138f;
							
							case 86:
								return 93,563f, -1189,746f, 51,969f;
							
							case 87:
								return -607,8086f, -2189,156f, 76,1713f;
							
							case 88:
								return -1106,939f, -2019,405f, 33,3166f;
							
							case 89:
								return -1210,83f, -1806,382f, 246,2572f;
							
							case 90:
								return -1309,448f, -1043,763f, 29,6876f;
							
							case 91:
								return -1618,367f, -827,8159f, 42,3072f;
							
							case 92:
								return -2257,555f, -9,0938f, 121,4433f;
							
							case 93:
								return -777,472f, -376,5067f, 72,7751f;
							
							case 94:
								return -1371,512f, -172,8742f, 99,1525f;
							
							case 95:
								return -1842,798f, 302,3257f, 105,5376f;
							
							case 96:
								return -1165,458f, 367,7476f, 95,3869f;
							
							case 97:
								return -3107,359f, 276,277f, 56,9633f;
							
							case 98:
								return -2548,786f, 1441,129f, 190,8976f;
							
							case 99:
								return -2644,523f, 1868,621f, 168,2627f;
							
							case 100:
								return -3029,234f, 1883,871f, 35,4705f;
							
							case 101:
								return -1119,207f, 1736,032f, 195,1095f;
							
							case 102:
								return -644,2039f, 1743,748f, 227,7433f;
							
							case 103:
								return -577,6026f, 2038,995f, 209,9244f;
							
							case 104:
								return -302,0078f, 1871,026f, 196,7599f;
							
							case 105:
								return 351,8685f, 1748,149f, 260,866f;
							
							case 106:
								return -11,935f, 1320,348f, 288,0058f;
							
							case 107:
								return 295,5885f, 753,7887f, 200,7135f;
							
							case 108:
								return 305,6451f, 501,4699f, 350,4832f;
							
							case 109:
								return 353,2237f, 58,5094f, 119,2648f;
							
							case 110:
								return 377,5104f, -695,2125f, 102,9432f;
							
							case 111:
								return 392,4507f, -1204,239f, 50f;
							
							case 112:
								return 397,6461f, -1929,781f, 43,4559f;
							
							case 113:
								return 470,8737f, -2451,431f, 30f;
							
							case 114:
								return -418,7521f, -2424,396f, 20,0582f;
							
							case 115:
								return -2440,527f, -1654,13f, 6,3248f;
							
							case 116:
								return -888,3994f, -2938,026f, 26,3869f;
							
							case 117:
								return -1374,637f, -2647,817f, 26,4425f;
							
							case 118:
								return -1082,177f, -620,1375f, 27,491f;
							
							case 119:
								return -1471,09f, 1324,141f, 193,4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303,138f, 218,8738f, 166,6017f;
							
							case 1:
								return -2994,291f, 39,7167f, 7,4636f;
							
							case 2:
								return -3410,2f, 967,5133f, 7,3517f;
							
							case 3:
								return -3041,96f, 1209,59f, 13,7743f;
							
							case 4:
								return -2502,529f, 756,2985f, 301,2459f;
							
							case 5:
								return -1352,546f, 120,6978f, 55,2388f;
							
							case 6:
								return -1729,21f, -193,1235f, 57,5038f;
							
							case 7:
								return -1635,4f, -1054,226f, 12,1522f;
							
							case 8:
								return -1268,607f, -1915,845f, 4,8616f;
							
							case 9:
								return -18,3427f, -1297,615f, 28,3575f;
							
							case 10:
								return -145,3585f, 930,7858f, 234,6711f;
							
							case 11:
								return -424,3762f, 1587,798f, 355,2649f;
							
							case 12:
								return -112,2256f, 354,4933f, 111,6961f;
							
							case 13:
								return 67,6185f, -673,5317f, 28,7056f;
							
							case 14:
								return 338,3054f, -1394,279f, 31,5093f;
							
							case 15:
								return -19,2884f, -1426,187f, 29,6575f;
							
							case 16:
								return -251,9772f, -2029,258f, 28,946f;
							
							case 17:
								return -432,7254f, -2440,489f, 5,0008f;
							
							case 18:
								return -956,3549f, -3053,302f, 12,9451f;
							
							case 19:
								return -1662,76f, -3177,918f, 12,9914f;
							
							case 20:
								return -457,7008f, -1507,786f, 12,0586f;
							
							case 21:
								return 188,8895f, 300,349f, 104,515f;
							
							case 22:
								return 3,4946f, -2452,885f, 13,4665f;
							
							case 23:
								return -966,3007f, -973,4243f, 2,876f;
							
							case 24:
								return -1536,435f, 868,5392f, 180,16f;
							
							case 25:
								return -1521,53f, 1493,765f, 110,5947f;
							
							case 26:
								return -1173,264f, -2037,82f, 12,776f;
							
							case 27:
								return -0,4394f, -1037,738f, 37,152f;
							
							case 28:
								return 137,7382f, -3092,8f, 4,8963f;
							
							case 29:
								return -1177,272f, -507,6518f, 34,5662f;
							
							case 30:
								return -575,4523f, -142,0386f, 36,2353f;
							
							case 31:
								return -723,2367f, 655,733f, 154,5475f;
							
							case 32:
								return -455,0906f, -999,9053f, 22,8657f;
							
							case 33:
								return -1133,934f, -1447,037f, 4f;
							
							case 34:
								return -231,0999f, -242,6378f, 49,0062f;
							
							case 35:
								return 69,8444f, -62,9348f, 67,8751f;
							
							case 36:
								return -1981,162f, -296,7468f, 47,1062f;
							
							case 37:
								return 98,9504f, -1979,664f, 19,6635f;
							
							case 38:
								return 324,168f, -2758,195f, 5,0028f;
							
							case 39:
								return 219,5919f, -2310,078f, 7,4018f;
							
							case 40:
								return -693,2001f, -592,6827f, 30,5552f;
							
							case 41:
								return -1044,535f, 500,5195f, 83,1617f;
							
							case 42:
								return -1792,464f, 395,7471f, 111,7909f;
							
							case 43:
								return -425,5935f, 1123,605f, 324,8547f;
							
							case 44:
								return -523,835f, -2902,068f, 5,0004f;
							
							case 45:
								return -1213,84f, -2724,547f, 12,9541f;
							
							case 46:
								return -656,7547f, -1708,686f, 23,8153f;
							
							case 47:
								return -1024,89f, 1012,239f, 159,6649f;
							
							case 48:
								return -850,8826f, 1708,716f, 193,9906f;
							
							case 49:
								return -2253,348f, 1324,29f, 291,0074f;
							
							case 50:
								return -876,7352f, -210,6213f, 38,2135f;
							
							case 51:
								return -309,9497f, -609,0406f, 32,5568f;
							
							case 52:
								return -743,9313f, -2283,372f, 12,06f;
							
							case 53:
								return -2971,731f, 584,4294f, 19,423f;
							
							case 54:
								return 288,4228f, -1601,137f, 30,2709f;
							
							case 55:
								return 97,6932f, -348,3357f, 41,3071f;
							
							case 56:
								return -1065,912f, -12,7356f, 49,4423f;
							
							case 57:
								return -388,1416f, -2283,256f, 6,6082f;
							
							case 58:
								return -1213,121f, -945,0177f, 1,1502f;
							
							case 59:
								return -1605,807f, -588,1375f, 32,1103f;
							
							case 60:
								return -1573,01f, 400,7232f, 106,194f;
							
							case 61:
								return -2751,19f, 1185,782f, 93,6924f;
							
							case 62:
								return 287,3323f, -3014,992f, 8,8106f;
							
							case 63:
								return -96,4867f, -2744,17f, 5,1062f;
							
							case 64:
								return -1350,788f, -1435,002f, 3,325f;
							
							case 65:
								return -156,4393f, -979,7114f, 20,2769f;
							
							case 66:
								return -671,3023f, 399,0416f, 101,68f;
							
							case 67:
								return 169,03f, 667,5479f, 205,7125f;
							
							case 68:
								return -726,8502f, -410,5149f, 34,5413f;
							
							case 69:
								return -671,4555f, -891,9421f, 23,4991f;
							
							case 70:
								return -190,4528f, 1299,355f, 302,9701f;
							
							case 71:
								return -1284,425f, -3403,299f, 12,9452f;
							
							case 72:
								return -825,6949f, -3337,779f, 12,9445f;
							
							case 73:
								return -1368,524f, -2335,062f, 12,9446f;
							
							case 74:
								return -1098,009f, -2415,526f, 12,9452f;
							
							case 75:
								return -1336,274f, -3044,103f, 12,9444f;
							
							case 76:
								return -821,012f, -1992,519f, 9,6439f;
							
							case 77:
								return -350,2334f, -2640,808f, 5,0003f;
							
							case 78:
								return -219,3889f, -2386,881f, 5,0014f;
							
							case 79:
								return 109,4531f, -2816,037f, 9,7899f;
							
							case 80:
								return 208,6273f, -3327,894f, 4,8177f;
							
							case 81:
								return 370,2768f, -2128,437f, 15,2365f;
							
							case 82:
								return -53,6978f, -1688,638f, 28,4917f;
							
							case 83:
								return -1009,052f, -1759,302f, 5,5498f;
							
							case 84:
								return -988,1508f, -2106,591f, 10,5382f;
							
							case 85:
								return -708,1929f, -1517,804f, 4,4121f;
							
							case 86:
								return -228,0423f, -1514,504f, 30,4622f;
							
							case 87:
								return 297,5852f, -1204,386f, 28,1985f;
							
							case 88:
								return 383,1396f, -904,1862f, 28,4376f;
							
							case 89:
								return -630,6f, -1071,2f, 21,7f;
							
							case 90:
								return -1207,432f, -1796,611f, 2,9086f;
							
							case 91:
								return -876,3531f, -1501,708f, 4,1775f;
							
							case 92:
								return -1271,531f, -1099,613f, 6,5852f;
							
							case 93:
								return -1730,83f, -725,0892f, 9,3941f;
							
							case 94:
								return -1431,005f, -271,0002f, 45,2077f;
							
							case 95:
								return -1966,816f, 182,3251f, 85,7706f;
							
							case 96:
								return -2293,777f, 371,4213f, 173,6017f;
							
							case 97:
								return -2156,688f, 1551,647f, 272,9088f;
							
							case 98:
								return -2780,149f, 1423,379f, 99,9284f;
							
							case 99:
								return -2587,936f, 1930,876f, 166,0052f;
							
							case 100:
								return -3017,571f, 1860,058f, 28,4173f;
							
							case 101:
								return 142,7543f, 1689,097f, 233,0739f;
							
							case 102:
								return 186,6585f, 1162,86f, 224,5946f;
							
							case 103:
								return -461,6094f, 640,4639f, 143,1886f;
							
							case 104:
								return -440,1514f, 184,2777f, 74,2476f;
							
							case 105:
								return -186,476f, 25,015f, 63,554f;
							
							case 106:
								return 26,7096f, -660,0318f, 30,6286f;
							
							case 107:
								return 156,6823f, -565,1396f, 42,893f;
							
							case 108:
								return -1834,908f, -1221,919f, 0,8054f;
							
							case 109:
								return -707,5134f, -1340,225f, -0,0558f;
							
							case 110:
								return -544,5794f, -2580,831f, 0,2096f;
							
							case 111:
								return 103,7708f, -2461,292f, 0,1193f;
							
							case 112:
								return -3046,133f, 1570,539f, -0,3275f;
							
							case 113:
								return -2241,345f, -530,6988f, -0,3275f;
							
							case 114:
								return 44,8316f, 844,4984f, 195,5816f;
							
							case 115:
								return -1894,231f, -2724,314f, -0,3275f;
							
							case 116:
								return -1029,441f, -1778,107f, -0,3275f;
							
							case 117:
								return -95,1061f, -2313,997f, 0,4963f;
							
							case 118:
								return -1546,054f, -1509,913f, 0,409f;
							
							case 119:
								return -1678,194f, -2238,986f, 0,9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874,714f, 2055,242f, 164,0655f;
							
							case 1:
								return -2398,244f, 2197,323f, 103,0324f;
							
							case 2:
								return -2470,967f, 2693,007f, 16,093f;
							
							case 3:
								return -1417,126f, 2634,235f, 3,8116f;
							
							case 4:
								return -1617,519f, 3185,984f, 52,4819f;
							
							case 5:
								return -1187,536f, 3851,927f, 510,4073f;
							
							case 6:
								return -1243,21f, 4536,333f, 198,2652f;
							
							case 7:
								return -766,5436f, 4335,334f, 181,1521f;
							
							case 8:
								return -515,496f, 4425,549f, 56,3238f;
							
							case 9:
								return -210,6103f, 3651,887f, 80,5153f;
							
							case 10:
								return 90,0834f, 3766,962f, 52,4048f;
							
							case 11:
								return 267,8927f, 2866,58f, 81,5228f;
							
							case 12:
								return 180,018f, 2272,227f, 109,032f;
							
							case 13:
								return -618,2112f, 2031,457f, 238,4183f;
							
							case 14:
								return -1185,328f, 2439,395f, 110,052f;
							
							case 15:
								return -2881,416f, 3363,437f, 44,4458f;
							
							case 16:
								return -2188,789f, 4395,888f, 71,8569f;
							
							case 17:
								return -2166,268f, 5204,997f, 32,4229f;
							
							case 18:
								return 239,3275f, 5576,022f, 610,5799f;
							
							case 19:
								return -549,4456f, 5308,46f, 118,8087f;
							
							case 20:
								return -686,6255f, 5674,634f, 64,1394f;
							
							case 21:
								return 25,1643f, 7643,369f, 32,4106f;
							
							case 22:
								return -162,8882f, 6422,088f, 46,3268f;
							
							case 23:
								return 269,3018f, 5863,51f, 425,1252f;
							
							case 24:
								return 158,6423f, 4622,624f, 213,8925f;
							
							case 25:
								return 31,6062f, 4328,141f, 56,7127f;
							
							case 26:
								return -959,6198f, 4843,202f, 317,838f;
							
							case 27:
								return -1179,401f, 4926,922f, 230,3542f;
							
							case 28:
								return -1801,77f, 4513,373f, 40,2242f;
							
							case 29:
								return -2146,721f, 3964,171f, 111,159f;
							
							case 30:
								return -668,1703f, 3607,985f, 305,8568f;
							
							case 31:
								return -409,327f, 2963,414f, 38,182f;
							
							case 32:
								return -290,9469f, 2533,475f, 92,1749f;
							
							case 33:
								return -3029,401f, 1883,96f, 35,4066f;
							
							case 34:
								return -2597,654f, 1922,071f, 179,5395f;
							
							case 35:
								return 80,7072f, 5032,946f, 490,6172f;
							
							case 36:
								return -899,8328f, 6042,451f, 53,0212f;
							
							case 37:
								return -1576,676f, 5160,763f, 26,8806f;
							
							case 38:
								return 145,5836f, 6866,114f, 38,7097f;
							
							case 39:
								return -50,5306f, 6236,916f, 79,3327f;
							
							case 40:
								return -368,4536f, 6104,72f, 53f;
							
							case 41:
								return -1599,971f, 2104,185f, 80,8163f;
							
							case 42:
								return -1626,487f, 2585,598f, 12,1104f;
							
							case 43:
								return -2064f, 3361,181f, 48,6443f;
							
							case 44:
								return -2357,318f, 3250,916f, 117,4892f;
							
							case 45:
								return -2684,946f, 2304,948f, 39,1557f;
							
							case 46:
								return -772,2781f, 4704,552f, 242,9476f;
							
							case 47:
								return 125,5518f, 3365,379f, 35,8003f;
							
							case 48:
								return -113,0094f, 2803,876f, 67,1096f;
							
							case 49:
								return -179,3538f, 1907,562f, 221,1006f;
							
							case 50:
								return -1235,554f, 1879,036f, 150,8745f;
							
							case 51:
								return 341,9869f, 3569,314f, 63,2875f;
							
							case 52:
								return 391,3682f, 5485,655f, 1000f;
							
							case 53:
								return 311,9317f, 6432,635f, 80,2925f;
							
							case 54:
								return -292,9588f, 5839,533f, 129,366f;
							
							case 55:
								return -1502,468f, 5984,955f, 34,7383f;
							
							case 56:
								return -3449,053f, 2645,437f, 55,2519f;
							
							case 57:
								return -1096,963f, 3225,607f, 147,7444f;
							
							case 58:
								return -278,2971f, 6637,778f, 45,611f;
							
							case 59:
								return 297,8872f, 4013,252f, 33,872f;
							
							case 60:
								return -271,6442f, 5586,137f, 250,6218f;
							
							case 61:
								return -821f, 5419,5f, 58,4f;
							
							case 62:
								return -1734,6f, 3968,5f, 302,8f;
							
							case 63:
								return -2664,1f, 2594f, 3,8f;
							
							case 64:
								return -897,3f, 2797,5f, 28,3f;
							
							case 65:
								return -1158,6f, 4625,5f, 156,7f;
							
							case 66:
								return 618f, 6426,7f, 103,2f;
							
							case 67:
								return 435,1f, 6772,9f, 18,9f;
							
							case 68:
								return -677,8f, 6035f, 27,3f;
							
							case 69:
								return -1445,2f, 5428,6f, 53,5f;
							
							case 70:
								return -384,2f, 4711,1f, 278,4f;
							
							case 71:
								return 911,8f, 4338,1f, 61,8f;
							
							case 72:
								return 518,5f, 5944,8f, 525,2f;
							
							case 73:
								return -1631,5f, 4741,2f, 66,9f;
							
							case 74:
								return -1352,5f, 4147,1f, 125,1f;
							
							case 75:
								return -1138,5f, 2807,2f, 250,4f;
							
							case 76:
								return -540,3f, 4190,5f, 203,6f;
							
							case 77:
								return -166,9f, 4250,2f, 61,7f;
							
							case 78:
								return -88,2f, 4579f, 135,4f;
							
							case 79:
								return -3051,213f, 4178,12f, 72,7681f;
							
							case 80:
								return -2606,26f, 2993,814f, 30,4219f;
							
							case 81:
								return -2302,76f, 2011,211f, 153,3448f;
							
							case 82:
								return -2254,314f, 1680,506f, 298,8981f;
							
							case 83:
								return -1955,917f, 1772,408f, 201,629f;
							
							case 84:
								return -1751,763f, 1998,548f, 129,1121f;
							
							case 85:
								return -1453,889f, 2069,22f, 65,2848f;
							
							case 86:
								return -1479,386f, 2405,98f, 37,5402f;
							
							case 87:
								return -1041,601f, 3963,552f, 344,3259f;
							
							case 88:
								return -775,5471f, 4048,385f, 310,1201f;
							
							case 89:
								return -883,0366f, 4411,045f, 29,2546f;
							
							case 90:
								return -1215,23f, 4370,065f, 38,5217f;
							
							case 91:
								return -1269,523f, 4386,938f, 1000f;
							
							case 92:
								return -1508,03f, 4446,546f, 59,4166f;
							
							case 93:
								return -1449,331f, 4602,479f, 336,1419f;
							
							case 94:
								return -1640,183f, 5440,63f, 43,1539f;
							
							case 95:
								return -891,0049f, 5157,28f, 187,01f;
							
							case 96:
								return 724,7438f, 5251,831f, 586,2138f;
							
							case 97:
								return 537,1121f, 4647,938f, 274,9371f;
							
							case 98:
								return 64,3661f, 4022,363f, 575,3698f;
							
							case 99:
								return 907,8411f, 3627,435f, 53,8748f;
							
							case 100:
								return 591,9018f, 2977,436f, 82,2499f;
							
							case 101:
								return 259,6137f, 1788,459f, 256,6769f;
							
							case 102:
								return -2092,081f, 2518,016f, 800f;
							
							case 103:
								return -2536,684f, 1678,45f, 196,0372f;
							
							case 104:
								return 52,1855f, 7343,64f, 518,5611f;
							
							case 105:
								return -521,5972f, 6960,141f, 172,8203f;
							
							case 106:
								return -684,2739f, 6467,878f, 165,8478f;
							
							case 107:
								return -1060,232f, 5711,063f, 333,8782f;
							
							case 108:
								return -1786,052f, 5471,512f, 614,6761f;
							
							case 109:
								return -1501,189f, 3295,095f, 245,8079f;
							
							case 110:
								return -2149,145f, 3521,295f, 186,103f;
							
							case 111:
								return 887,6612f, 5610,092f, 697,7338f;
							
							case 112:
								return 451,4696f, 5020,989f, 610,8222f;
							
							case 113:
								return 693,6552f, 4097,276f, 53,8927f;
							
							case 114:
								return -99,6831f, 3960,636f, 80,8691f;
							
							case 115:
								return -579,6645f, 3979,675f, 136,2872f;
							
							case 116:
								return -996,2939f, 4194,288f, 151,0646f;
							
							case 117:
								return -1542,398f, 2886,044f, 1000f;
							
							case 118:
								return -3004,988f, 2333,1f, 209,9484f;
							
							case 119:
								return -3622,204f, 4740,62f, 19,17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200,786f, 3429,213f, 31,6018f;
							
							case 1:
								return -1873,915f, 2090,595f, 139,9944f;
							
							case 2:
								return -1674,252f, 2301,497f, 59,0047f;
							
							case 3:
								return -506,3776f, 4358,938f, 66,4342f;
							
							case 4:
								return -83,7414f, 4580,993f, 122,1646f;
							
							case 5:
								return -207,3853f, 3598,517f, 60,323f;
							
							case 6:
								return 233,0533f, 3547,927f, 30,2697f;
							
							case 7:
								return 93,7029f, 3597,86f, 38,7393f;
							
							case 8:
								return 327f, 2858f, 42,4386f;
							
							case 9:
								return 158,1294f, 3136,305f, 42,4573f;
							
							case 10:
								return -210,5036f, 2955,358f, 28,941f;
							
							case 11:
								return -288,922f, 2524,722f, 73,6685f;
							
							case 12:
								return -734,5254f, 5594,983f, 34,288f;
							
							case 13:
								return 88,2503f, 6368,129f, 30,2271f;
							
							case 14:
								return -344,4945f, 6242,846f, 30,4877f;
							
							case 15:
								return -267,3751f, 6639,444f, 6,3939f;
							
							case 16:
								return -1444,47f, 5418,419f, 22,2866f;
							
							case 17:
								return -1611,041f, 5258,685f, 2,9791f;
							
							case 18:
								return -1823,203f, 4464,67f, 37,4717f;
							
							case 19:
								return -2488,111f, 2740,839f, 1,8909f;
							
							case 20:
								return -1626,549f, 2587,924f, 1,6362f;
							
							case 21:
								return -1575,299f, 2105,205f, 66,0545f;
							
							case 22:
								return -543,6063f, 1983,754f, 126,0263f;
							
							case 23:
								return -563,8864f, 1886,811f, 122,0349f;
							
							case 24:
								return -592,4536f, 2076,64f, 130,3709f;
							
							case 25:
								return -2497,361f, 2307,194f, 33,1315f;
							
							case 26:
								return -2584,923f, 1931,11f, 166,3129f;
							
							case 27:
								return -1618,161f, 3184,126f, 31,8513f;
							
							case 28:
								return -913,2203f, 2562,701f, 57,2099f;
							
							case 29:
								return -1163,923f, 2408,993f, 92,402f;
							
							case 30:
								return 188,3494f, 2295,03f, 92,7443f;
							
							case 31:
								return -96,8265f, 2224,75f, 159,4986f;
							
							case 32:
								return -834,779f, 4178,558f, 214,3525f;
							
							case 33:
								return -790,3221f, 2901,125f, 18,2471f;
							
							case 34:
								return -799,6998f, 3478,014f, 172,9345f;
							
							case 35:
								return -1347,726f, 4127,416f, 61,6295f;
							
							case 36:
								return -1364,709f, 4848,779f, 144,9459f;
							
							case 37:
								return -2168,336f, 5186,728f, 14,9725f;
							
							case 38:
								return -987,1982f, 5075,115f, 186,5395f;
							
							case 39:
								return 231,926f, 5246,831f, 601,2042f;
							
							case 40:
								return -1,0985f, 5029,458f, 446,6905f;
							
							case 41:
								return -134,3454f, 4916,509f, 353,0826f;
							
							case 42:
								return -434,7882f, 4885,861f, 189,7331f;
							
							case 43:
								return -592,1419f, 5361,79f, 69,3186f;
							
							case 44:
								return 64,7121f, 7052,296f, 15,7854f;
							
							case 45:
								return -577,7616f, 5954,945f, 25,1362f;
							
							case 46:
								return -945,8056f, 4613,758f, 238,1628f;
							
							case 47:
								return -2228,817f, 4218,248f, 45,7951f;
							
							case 48:
								return -2493,361f, 4193,219f, 1,0754f;
							
							case 49:
								return -3073,088f, 3200,413f, 0,9527f;
							
							case 50:
								return 376,4925f, 6630,836f, 27,7626f;
							
							case 51:
								return -1692,925f, 4597,169f, 46,8227f;
							
							case 52:
								return -2587,798f, 3193,551f, 12,9622f;
							
							case 53:
								return -922,5162f, 6131,097f, 6,1891f;
							
							case 54:
								return -112,5477f, 7285,785f, 16,1674f;
							
							case 55:
								return -170,1744f, 6049,716f, 30,1726f;
							
							case 56:
								return 57,7188f, 6673,076f, 30,9499f;
							
							case 57:
								return -501,3606f, 5567,93f, 70,0852f;
							
							case 58:
								return -292,4363f, 5839,495f, 120,8191f;
							
							case 59:
								return -436,1143f, 5707,903f, 61,0179f;
							
							case 60:
								return -494,1112f, 5290,479f, 79,6187f;
							
							case 61:
								return -421,0542f, 5187,812f, 122,5195f;
							
							case 62:
								return -835,7191f, 5261,788f, 79,1947f;
							
							case 63:
								return -873,3408f, 4786,007f, 299,4599f;
							
							case 64:
								return -299,7797f, 4676,5f, 245,6817f;
							
							case 65:
								return -903,4214f, 5176,086f, 153,3577f;
							
							case 66:
								return -869,6852f, 5553,71f, 1,4216f;
							
							case 67:
								return -1210,241f, 5228,673f, 88,4579f;
							
							case 68:
								return -1224,511f, 3854,173f, 488,3926f;
							
							case 69:
								return -688,3312f, 3764,984f, 272,5302f;
							
							case 70:
								return -1829,375f, 3982,997f, 271,9911f;
							
							case 71:
								return -2432,337f, 3535,94f, 33,3233f;
							
							case 72:
								return -1440,526f, 5106,688f, 62,4016f;
							
							case 73:
								return -2258,899f, 3831,759f, 118,1093f;
							
							case 74:
								return -1577,494f, 5162,519f, 18,6627f;
							
							case 75:
								return -2046,334f, 4525,601f, 27,6239f;
							
							case 76:
								return -2189,855f, 4616,937f, 0,5382f;
							
							case 77:
								return 423,4926f, 5613,09f, 765,7494f;
							
							case 78:
								return 501,2704f, 5598,329f, 795,0286f;
							
							case 79:
								return 625,9471f, 5675,894f, 747,5628f;
							
							case 80:
								return -555,5328f, 5321,449f, 72,5996f;
							
							case 81:
								return -685,9285f, 5233,738f, 92,4703f;
							
							case 82:
								return -213,783f, 6348,989f, 30,5355f;
							
							case 83:
								return -391,0858f, 6341,175f, 25,425f;
							
							case 84:
								return 0,9189f, 3691,594f, 38,5039f;
							
							case 85:
								return -225,4021f, 3664,75f, 63,4125f;
							
							case 86:
								return 714,1616f, 4136,578f, 34,7842f;
							
							case 87:
								return 825,1304f, 4223,49f, 50,8188f;
							
							case 88:
								return 858,3134f, 4423,847f, 30,2196f;
							
							case 89:
								return 335,1393f, 4373,471f, 63,3434f;
							
							case 90:
								return -1474,287f, 2687,972f, 16,6437f;
							
							case 91:
								return -1183,146f, 4927,809f, 222,0748f;
							
							case 92:
								return -892,4783f, 4529,449f, 113,9803f;
							
							case 93:
								return 761,0254f, 6455,407f, 30,7286f;
							
							case 94:
								return 370,5299f, 5453,183f, 691,2834f;
							
							case 95:
								return -376,5987f, 3840,778f, 73,9626f;
							
							case 96:
								return -2077,635f, 3390,068f, 30,1962f;
							
							case 97:
								return -2317,722f, 3398,114f, 29,7812f;
							
							case 98:
								return -2686,153f, 3554,439f, 1,0289f;
							
							case 99:
								return -1869,387f, 4649,492f, 56,0019f;
							
							case 100:
								return -1854,183f, 4809,846f, 1,9984f;
							
							case 101:
								return -683,5417f, 5823,635f, 16,3313f;
							
							case 102:
								return -790,6581f, 5479,023f, 25,889f;
							
							case 103:
								return 482,4343f, 6486,61f, 29,0864f;
							
							case 104:
								return 183,3372f, 7008,858f, 11,2392f;
							
							case 105:
								return 50,2346f, 4325,231f, 43,3996f;
							
							case 106:
								return -28,0941f, 4430,794f, 57,1619f;
							
							case 107:
								return -187,3603f, 4019,421f, 30,6801f;
							
							case 108:
								return -1804,935f, 5315,242f, 0,8688f;
							
							case 109:
								return 81,2546f, 4050,058f, 29,4f;
							
							case 110:
								return -1191,056f, 4389,15f, 4,3f;
							
							case 111:
								return -2188,334f, 2590,943f, -0,4f;
							
							case 112:
								return -2825,633f, 2358,091f, 0,5703f;
							
							case 113:
								return -2047,696f, 4852,304f, 0,6241f;
							
							case 114:
								return -2664,615f, 2597,589f, -0,4f;
							
							case 115:
								return 271,9201f, 7512,879f, -0,5084f;
							
							case 116:
								return -215,5849f, 4284,967f, 29,5257f;
							
							case 117:
								return -2879,157f, 2879,604f, 0,4205f;
							
							case 118:
								return -920,2339f, 5871,843f, 0,4382f;
							
							case 119:
								return -34,7086f, 7618,572f, 0,4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867,3339f, 4198,743f, 75f;
							
							case 1:
								return 1254,176f, 4848,075f, 247,0701f;
							
							case 2:
								return 1676,777f, 5140,256f, 160,2494f;
							
							case 3:
								return 1995,339f, 5021,67f, 68,695f;
							
							case 4:
								return 2599,952f, 5032,021f, 112,432f;
							
							case 5:
								return 2967,309f, 5197,417f, 148,5921f;
							
							case 6:
								return 2876,992f, 5911,252f, 378,2234f;
							
							case 7:
								return 3438,904f, 6144,417f, 10,0202f;
							
							case 8:
								return 3431,106f, 5174,187f, 46,1572f;
							
							case 9:
								return 4080,091f, 4476,533f, 17,0407f;
							
							case 10:
								return 3492,801f, 4619,894f, 65f;
							
							case 11:
								return 3378,036f, 4079,524f, 229,1767f;
							
							case 12:
								return 3944,403f, 3729,657f, 19,5046f;
							
							case 13:
								return 3556,383f, 3684,987f, 67,2346f;
							
							case 14:
								return 3296,121f, 3365,198f, 125f;
							
							case 15:
								return 3290f, 3140,437f, 275,7202f;
							
							case 16:
								return 2948,726f, 2791,748f, 48,6755f;
							
							case 17:
								return 1597,427f, 2599,171f, 95f;
							
							case 18:
								return 1397,009f, 2116,503f, 137,1597f;
							
							case 19:
								return 723,7358f, 2322,695f, 64,6875f;
							
							case 20:
								return 753,2642f, 2581,414f, 161f;
							
							case 21:
								return 564,4257f, 3392,354f, 96,1353f;
							
							case 22:
								return 1191,005f, 3400,265f, 78,9779f;
							
							case 23:
								return 1279,739f, 3100,26f, 53,8507f;
							
							case 24:
								return 1415,487f, 3833,477f, 52,6619f;
							
							case 25:
								return 1488,657f, 3946,224f, 305,2148f;
							
							case 26:
								return 2065,697f, 6451,615f, 149,8928f;
							
							case 27:
								return 2559,717f, 6155,792f, 171f;
							
							case 28:
								return 1502,546f, 6159,08f, 230,8224f;
							
							case 29:
								return 1163,891f, 5965,097f, 413,3012f;
							
							case 30:
								return 772,3428f, 5523,894f, 600f;
							
							case 31:
								return 501,8089f, 5604,274f, 1000,598f;
							
							case 32:
								return 1002,141f, 4786,271f, 185,7696f;
							
							case 33:
								return 587,414f, 5114,912f, 405f;
							
							case 34:
								return 1345,87f, 6384,963f, 52,4688f;
							
							case 35:
								return 754,4042f, 6466f, 49f;
							
							case 36:
								return 1042,216f, 6799,529f, 40,2945f;
							
							case 37:
								return 1779,115f, 5662,172f, 274f;
							
							case 38:
								return 2898,098f, 4327,457f, 107,9208f;
							
							case 39:
								return 2634,35f, 3661,461f, 111,1731f;
							
							case 40:
								return 2045,418f, 3429,524f, 56,3868f;
							
							case 41:
								return 1563,065f, 3572,822f, 41f;
							
							case 42:
								return 2276,492f, 1955,542f, 146,9525f;
							
							case 43:
								return 2379,747f, 2604,982f, 89,7836f;
							
							case 44:
								return 543,5116f, 3080,709f, 63f;
							
							case 45:
								return 2264,604f, 4455,955f, 62,2539f;
							
							case 46:
								return 2410,187f, 2908,336f, 373,9144f;
							
							case 47:
								return 3510,479f, 2569,052f, 16,1615f;
							
							case 48:
								return 3073,721f, 2084,079f, 30f;
							
							case 49:
								return 3319,34f, 2272,217f, 14,2949f;
							
							case 50:
								return 2822,12f, 4977,335f, 70f;
							
							case 51:
								return 1299,971f, 4219,281f, 41f;
							
							case 52:
								return 503,1913f, 4450,17f, 112f;
							
							case 53:
								return 2489,62f, 3760,053f, 53f;
							
							case 54:
								return 1824,499f, 2031,218f, 60,1953f;
							
							case 55:
								return 1153,765f, 2384,4f, 75,2003f;
							
							case 56:
								return 1339,664f, 2747,617f, 79,0765f;
							
							case 57:
								return 542,5154f, 2488,194f, 84,9932f;
							
							case 58:
								return 2767,542f, 2047,162f, 126,1494f;
							
							case 59:
								return 2061,36f, 3941,451f, 200f;
							
							case 60:
								return 873,5367f, 2867,737f, 73,5925f;
							
							case 61:
								return 1752,141f, 3052,542f, 78,6478f;
							
							case 62:
								return 2100,787f, 2339,885f, 133,921f;
							
							case 63:
								return 2738,826f, 3476,466f, 81,564f;
							
							case 64:
								return 2285,089f, 3289,129f, 86,2814f;
							
							case 65:
								return 1745,899f, 3756,127f, 53,8457f;
							
							case 66:
								return 2504,338f, 4418,758f, 55f;
							
							case 67:
								return 1552,003f, 2186,406f, 96f;
							
							case 68:
								return 2716,376f, 4132,656f, 63,7827f;
							
							case 69:
								return 3809,813f, 4462,08f, 36,1286f;
							
							case 70:
								return 3257,82f, 4308,541f, 140f;
							
							case 71:
								return 2268,876f, 5381,432f, 328,4639f;
							
							case 72:
								return 2236,389f, 5604,683f, 71,034f;
							
							case 73:
								return 1986,657f, 6201,739f, 66,4804f;
							
							case 74:
								return 3356,059f, 5696,29f, 20f;
							
							case 75:
								return 2457,263f, 6684,452f, 63,14f;
							
							case 76:
								return 1914,983f, 6702,233f, 14,7976f;
							
							case 77:
								return 2149,811f, 3844,999f, 88,0922f;
							
							case 78:
								return 1880,169f, 4244,354f, 80,3363f;
							
							case 79:
								return 1791,897f, 4595,955f, 48,6224f;
							
							case 80:
								return 1181,133f, 5151,417f, 772,3138f;
							
							case 81:
								return 431,2495f, 4768,536f, 665,041f;
							
							case 82:
								return 1410,651f, 6569,377f, 26,5039f;
							
							case 83:
								return 1522,466f, 6617,973f, 8f;
							
							case 84:
								return 2316,162f, 6378,738f, 143,7605f;
							
							case 85:
								return 3127,772f, 5566,866f, 317,7646f;
							
							case 86:
								return 3684,367f, 4916,152f, 618,67f;
							
							case 87:
								return 3941,761f, 4652,369f, 92,7624f;
							
							case 88:
								return 3900,581f, 4262,104f, 887,18f;
							
							case 89:
								return 3535,166f, 3778,242f, 46,4187f;
							
							case 90:
								return 3638,854f, 3108,953f, 8,7037f;
							
							case 91:
								return 931,8565f, 2446,375f, 59f;
							
							case 92:
								return 1052,214f, 2277,729f, 95,5547f;
							
							case 93:
								return 411,0964f, 4298,822f, 40,8556f;
							
							case 94:
								return 970,339f, 5647,13f, 650,7467f;
							
							case 95:
								return 2137,105f, 4785,519f, 59,9326f;
							
							case 96:
								return 2333,533f, 4801,554f, 467,9726f;
							
							case 97:
								return 2800,744f, 4745,392f, 370,3547f;
							
							case 98:
								return 2721,061f, 1556,416f, 101,1161f;
							
							case 99:
								return 1855,284f, 1600,665f, 116,8989f;
							
							case 100:
								return 1623,469f, 1518,122f, 294,3194f;
							
							case 101:
								return 923,4011f, 1635,348f, 218,3212f;
							
							case 102:
								return 829,6124f, 1892,871f, 135,5203f;
							
							case 103:
								return 1294,051f, 5675,865f, 472,5645f;
							
							case 104:
								return 1716,85f, 6416,637f, 81,5075f;
							
							case 105:
								return 2140,929f, 5892,89f, 161,9607f;
							
							case 106:
								return 1604,4f, 5793,905f, 429,8526f;
							
							case 107:
								return 1589,65f, 4160,215f, 883,122f;
							
							case 108:
								return 2191,156f, 4208,336f, 477,8802f;
							
							case 109:
								return 1427,64f, 4515,944f, 85,3721f;
							
							case 110:
								return 1206,398f, 4546,814f, 83,0875f;
							
							case 111:
								return 222,2962f, 4746,207f, 280,8666f;
							
							case 112:
								return 287,655f, 5361,114f, 659,2646f;
							
							case 113:
								return 194,6948f, 7393,709f, 1000f;
							
							case 114:
								return 469,5136f, 6745,105f, 14,1624f;
							
							case 115:
								return 537,5068f, 6663,253f, 447,8182f;
							
							case 116:
								return 3227,793f, 6940,11f, 111,4631f;
							
							case 117:
								return 3614,231f, 5883,145f, 9,5207f;
							
							case 118:
								return 3010,254f, 5697,739f, 463,4349f;
							
							case 119:
								return 2874,324f, 6196,489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581,963f, 2200,244f, 78,0226f;
							
							case 1:
								return 1104,104f, 2399,396f, 53,529f;
							
							case 2:
								return 1089,489f, 2132,943f, 57,0757f;
							
							case 3:
								return 932,5687f, 2434,264f, 49,6778f;
							
							case 4:
								return 586,3744f, 2935,313f, 39,9577f;
							
							case 5:
								return 437,5278f, 3537,285f, 32,3159f;
							
							case 6:
								return 917,2156f, 3648,117f, 35,1053f;
							
							case 7:
								return 1528,585f, 3916,301f, 30,6709f;
							
							case 8:
								return 1924,4f, 3468,064f, 50,6772f;
							
							case 9:
								return 2482,272f, 3761,54f, 40,6483f;
							
							case 10:
								return 2722,307f, 2895,323f, 46,873f;
							
							case 11:
								return 3021,258f, 2881,75f, 85,959f;
							
							case 12:
								return 2096,643f, 2504,604f, 89,6423f;
							
							case 13:
								return 2974,657f, 3485,959f, 70,4429f;
							
							case 14:
								return 3390,08f, 3704,603f, 34,9975f;
							
							case 15:
								return 2908,214f, 4342,968f, 49,3031f;
							
							case 16:
								return 1796,101f, 4920,626f, 47,3851f;
							
							case 17:
								return 2241,987f, 5382,81f, 144,0017f;
							
							case 18:
								return 2218,899f, 5946,263f, 49,634f;
							
							case 19:
								return 1601,463f, 6624,76f, 14,7707f;
							
							case 20:
								return 1406,928f, 6568,621f, 19,3763f;
							
							case 21:
								return 439,5467f, 6459,866f, 34,8699f;
							
							case 22:
								return 1503,687f, 6360,855f, 15,6193f;
							
							case 23:
								return 3316,647f, 5190,359f, 17,4152f;
							
							case 24:
								return 3632,89f, 5003,482f, 11,6053f;
							
							case 25:
								return 3057,659f, 5064,144f, 17,7153f;
							
							case 26:
								return 2822,534f, 4978,232f, 62,4826f;
							
							case 27:
								return 3930,095f, 4399,015f, 15,6116f;
							
							case 28:
								return 3859,284f, 4226,905f, 2,7151f;
							
							case 29:
								return 3692,684f, 4570,595f, 24,1191f;
							
							case 30:
								return 1830,916f, 2542,005f, 44,8856f;
							
							case 31:
								return 2424,308f, 3131,437f, 47,2055f;
							
							case 32:
								return 1340,228f, 2988,934f, 45,0809f;
							
							case 33:
								return 817,1245f, 3379,468f, 76,9467f;
							
							case 34:
								return 563,2202f, 2456,984f, 58,1331f;
							
							case 35:
								return 2041,713f, 2002,479f, 84,9881f;
							
							case 36:
								return 2431,854f, 1986,869f, 82,1812f;
							
							case 37:
								return 1190,872f, 3401,189f, 67,3338f;
							
							case 38:
								return 1943,983f, 3817,853f, 31,0619f;
							
							case 39:
								return 1977,679f, 3054,874f, 49,3235f;
							
							case 40:
								return 452,5827f, 5587,175f, 780,1891f;
							
							case 41:
								return 807,1406f, 5701,082f, 696,9146f;
							
							case 42:
								return 1600,868f, 5804,83f, 414,5815f;
							
							case 43:
								return 1412,016f, 5558,528f, 459,5185f;
							
							case 44:
								return 2279,983f, 5788,728f, 154,1637f;
							
							case 45:
								return 2346,173f, 4997,547f, 41,5868f;
							
							case 46:
								return 2391,918f, 4296,647f, 34,1954f;
							
							case 47:
								return 1364,943f, 4385,975f, 43,3491f;
							
							case 48:
								return 998,6568f, 4453,989f, 59,924f;
							
							case 49:
								return 1058,949f, 4219,405f, 34,273f;
							
							case 50:
								return 870,7486f, 6627,962f, 1,1131f;
							
							case 51:
								return 2721,632f, 4513,5f, 41,1966f;
							
							case 52:
								return 1219,444f, 2744,531f, 37,0054f;
							
							case 53:
								return 2564,32f, 2578,493f, 36,9367f;
							
							case 54:
								return 2827,744f, 5963,866f, 350,6364f;
							
							case 55:
								return 2946,397f, 5326,474f, 100,269f;
							
							case 56:
								return 2211,154f, 3593,324f, 55,1756f;
							
							case 57:
								return 3079,837f, 6027,145f, 129,2854f;
							
							case 58:
								return 3345,3f, 5555,332f, 17,907f;
							
							case 59:
								return 528,5965f, 3092,785f, 39,4652f;
							
							case 60:
								return 2184,891f, 3724,368f, 37,4901f;
							
							case 61:
								return 1471,091f, 4948,712f, 75,0594f;
							
							case 62:
								return 2713,996f, 4141,762f, 42,8723f;
							
							case 63:
								return 2476,558f, 5783,607f, 68,702f;
							
							case 64:
								return 2647,75f, 3281,402f, 54,2127f;
							
							case 65:
								return 2210,976f, 5610,793f, 52,8602f;
							
							case 66:
								return 2898,328f, 2389,586f, 170,4231f;
							
							case 67:
								return 2728,33f, 2616,292f, 95,3074f;
							
							case 68:
								return 1844,478f, 4591,953f, 29,6629f;
							
							case 69:
								return 2432,128f, 4616,881f, 28,1137f;
							
							case 70:
								return 2574,294f, 4653,86f, 33,0768f;
							
							case 71:
								return 1574,009f, 3591,066f, 34,3615f;
							
							case 72:
								return 2008,265f, 4986,431f, 40,3378f;
							
							case 73:
								return 1975,059f, 5182,086f, 46,8906f;
							
							case 74:
								return 1955,895f, 4620,182f, 39,6384f;
							
							case 75:
								return 2279,756f, 4846,217f, 39,2283f;
							
							case 76:
								return 2418,292f, 4784,674f, 33,6784f;
							
							case 77:
								return 2005,109f, 3765,983f, 31,1808f;
							
							case 78:
								return 1719,677f, 3692,743f, 33,513f;
							
							case 79:
								return 1530,711f, 3076,231f, 39,9815f;
							
							case 80:
								return 1686,366f, 3301,007f, 40,1368f;
							
							case 81:
								return 3481,603f, 3740,488f, 35,6427f;
							
							case 82:
								return 2392,425f, 3334,924f, 46,3672f;
							
							case 83:
								return 2192,154f, 3168,942f, 50,5572f;
							
							case 84:
								return 2354,496f, 2577,063f, 45,6677f;
							
							case 85:
								return 640,7736f, 2777,938f, 40,9601f;
							
							case 86:
								return 2768,528f, 1701,819f, 23,6943f;
							
							case 87:
								return 3239,663f, 3501,223f, 67,723f;
							
							case 88:
								return 2672,952f, 3516,45f, 51,712f;
							
							case 89:
								return 2619,962f, 3661,864f, 100,2808f;
							
							case 90:
								return 2437,504f, 4069,23f, 37,0001f;
							
							case 91:
								return 1685,598f, 6435,691f, 31,3515f;
							
							case 92:
								return 1417,653f, 3818,394f, 31,1351f;
							
							case 93:
								return 3300,7f, 5941,647f, 93,3217f;
							
							case 94:
								return 870,0084f, 2870,564f, 55,9249f;
							
							case 95:
								return 1352,413f, 6401,655f, 32,4101f;
							
							case 96:
								return 1960,858f, 5376,274f, 185,2074f;
							
							case 97:
								return 1974,847f, 6219,958f, 41,2546f;
							
							case 98:
								return 3684,152f, 3795,969f, 15,0641f;
							
							case 99:
								return 2625,796f, 2809,979f, 32,439f;
							
							case 100:
								return 1302,932f, 4234,541f, 32,9137f;
							
							case 101:
								return 577,5187f, 4169,561f, 37,8946f;
							
							case 102:
								return 1069,311f, 2259,363f, 43,4741f;
							
							case 103:
								return 1381,487f, 3633,717f, 34,0073f;
							
							case 104:
								return 3046,249f, 6219,229f, 111,0105f;
							
							case 105:
								return 985,3563f, 5642,3f, 627,7075f;
							
							case 106:
								return 2504,378f, 5178,088f, 67,6632f;
							
							case 107:
								return 2537,341f, 4476,488f, 36,1789f;
							
							case 108:
								return 1291,73f, 4112,564f, 29,6645f;
							
							case 109:
								return 2176,232f, 4605,335f, 29,194f;
							
							case 110:
								return 3456,624f, 5135,376f, -0,3837f;
							
							case 111:
								return 4054,226f, 4518,386f, 0,4f;
							
							case 112:
								return 1074,313f, 6738,594f, 1,3817f;
							
							case 113:
								return 409,7385f, 4290,737f, 29,5f;
							
							case 114:
								return 2551,275f, 6151,57f, 161,1609f;
							
							case 115:
								return 3646,335f, 2977,049f, 0,6928f;
							
							case 116:
								return 1938,372f, 4287,003f, 29,6693f;
							
							case 117:
								return 3630,215f, 5625,841f, 1,2201f;
							
							case 118:
								return 1582,613f, 6753,431f, 0,4436f;
							
							case 119:
								return 3449,314f, 2677,52f, 0,0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_102(var uParam0)//Position - 0x850A
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1107039707;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = uParam0;
	iVar1 = func_103(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &vVar0, 3, iVar1);
	}
}

var func_103(int iParam0, bool bParam1)//Position - 0x8544
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_85(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x85A9
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_105()//Position - 0x8E08
{
	return unk_0x63A6486593EC7EC3(0, 1);
}

bool func_106()//Position - 0x8E16
{
	if (func_108(Local_137.f_712))
	{
		return 0;
	}
	else if (func_107(Local_137.f_712))
	{
		return 1;
	}
	return unk_0x63A6486593EC7EC3(0, 2) == 1;
}

int func_107(int iParam0)//Position - 0x8E4B
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_10466 || Global_262145.f_10458);
		
		case 1:
			return (Global_262145.f_10465 || Global_262145.f_10458);
		
		case 2:
			return (Global_262145.f_10463 || Global_262145.f_10458);
		
		case 3:
			return (Global_262145.f_10464 || Global_262145.f_10458);
		
		default:
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x8ECF
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_10462 || Global_262145.f_10457);
		
		case 1:
			return (Global_262145.f_10461 || Global_262145.f_10457);
		
		case 2:
			return (Global_262145.f_10459 || Global_262145.f_10457);
		
		case 3:
			return (Global_262145.f_10460 || Global_262145.f_10457);
		
		default:
	}
	return 0;
}

int func_109()//Position - 0x8F53
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_112 = 1;
	switch (iLocal_112)
	{
		case 0:
			return unk_0x63A6486593EC7EC3(0, 4);
			break;
		
		case 1:
			iVar1 = func_110(&uVar0);
			iVar2 = unk_0x63A6486593EC7EC3(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return unk_0x63A6486593EC7EC3(0, 4);
}

int func_110(var uParam0)//Position - 0x8FEB
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar6 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (func_13(iVar6, 1, 1))
			{
				iVar7 = unk_0x25D049AAC4603E65(iVar6);
				if (!unk_0x3AB6A1A9084FB0A4(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_112(iVar5))
						{
							if (func_111(iVar5, &vVar2, &vVar3))
							{
								if (unk_0xA6A13EE8139C2BD4(iVar7, vVar2, vVar3, 0, 0, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_112(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_111(int iParam0, var uParam1, var uParam2)//Position - 0x90BF
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452,5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_112(int iParam0)//Position - 0x916F
{
	return (func_108(iParam0) && func_107(iParam0));
}

var func_113()//Position - 0x9188
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar2 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_10471)
	{
		return Global_262145.f_10357;
	}
	if (iVar1 >= Global_262145.f_10470)
	{
		return Global_262145.f_10356;
	}
	if (iVar1 >= Global_262145.f_10469)
	{
		return Global_262145.f_9539;
	}
	return Global_262145.f_9539;
}

void func_114()//Position - 0x920E
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_137.f_713[iVar0] == unk_0x622FF3AE4B1D07C3())
			{
				if (func_115(iVar0))
				{
					if (!unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1, iVar0))
					{
						unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1, iVar0))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1, iVar0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_115(int iParam0)//Position - 0x92C0
{
	vector3 vVar0;
	var uVar1;
	
	if (func_30(iParam0, &vVar0, &uVar1))
	{
		if (func_116(vVar0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_116(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x9305
{
	Global_2405047.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x0D3330EAF6340496(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x0D3330EAF6340496(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (unk_0xAA0BDFF32B6BC02A(vParam0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_121(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_117(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_117(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9416
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xBE3C4023003180FC(func_119(unk_0x9EB17624F44A8DA4()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9E06F0EE20F58CED(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_13(iVar1, 1, 1))
		{
			if (!func_85(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_118(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_119(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam6 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_119(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x10D876445A75F2DC(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x95CE
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_119(int iParam0)//Position - 0x95FA
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1595693[iVar0 /*680*/].f_673) && !func_120(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_29(iParam0);
}

int func_120(vector3 vParam0)//Position - 0x964D
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_121(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x9677
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam6 == 0)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam5 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_118(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam7) && bParam4) && func_122(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_29(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x9773
{
	if (func_125(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_124(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_123(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0, int iParam1)//Position - 0x97BA
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (!iVar0 == func_87())
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_124(int iParam0)//Position - 0x97E5
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_125(int iParam0, int iParam1)//Position - 0x97FC
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_124(iParam0) };
		Global_2492170 = { func_124(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_126()//Position - 0x9869
{
	int iVar0;
	int iVar1;
	
	func_580();
	if (func_578())
	{
		func_465();
	}
	if (func_464(unk_0x9EB17624F44A8DA4()) || func_463(unk_0x9EB17624F44A8DA4()))
	{
		func_462();
	}
	if ((!func_6(unk_0x9EB17624F44A8DA4()) && !func_461(0)) && !func_461(func_460(132)))
	{
		if (func_438())
		{
			if (unk_0xC80D31E4B587871C(iLocal_102, 3))
			{
				unk_0x0EE72DB1CD8A3B86(&iLocal_102, 3);
			}
			switch (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_3)
			{
				case 0:
					if (Local_137.f_8 == 1)
					{
						func_437(1);
						func_436(1);
					}
					else if (Local_137.f_8 >= 2)
					{
						func_436(1);
					}
					break;
				
				case 1:
					func_432(6);
					if (Local_137.f_8 >= 2)
					{
						func_436(2);
					}
					func_432(2);
					func_430(0);
					func_428((Global_262145.f_10455 - func_429(&(Local_137.f_667), 0, 0)));
					func_425(func_427((Global_262145.f_10455 - func_429(&(Local_137.f_667), 0, 0)), 0), func_426(-1));
					func_405();
					break;
				
				case 2:
					if (Local_137.f_8 > 2)
					{
						func_437(0);
						func_387(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(unk_0x9EB17624F44A8DA4()))
						{
							func_386();
						}
						else
						{
							unk_0x872F1C1F8587CCC7(&iLocal_102, 5);
						}
						if (Local_137.f_710)
						{
							func_385();
						}
						if (Local_137.f_707)
						{
							Global_2512808.f_4775 = 1;
						}
						else
						{
							Global_2512808.f_4775 = 0;
						}
						func_384();
						if (!func_6(unk_0x9EB17624F44A8DA4()))
						{
							if (func_32())
							{
								func_369(678f, 794f, 206f, 8f, 0);
								func_369(1911,3f, 4714,6f, 41,1f, 8f, 0);
								func_369(688,5021f, 735,4581f, 181,296f, 8f, 0);
							}
						}
						func_436(3);
					}
					break;
				
				case 3:
					if (Local_137.f_8 > 3)
					{
						func_436(4);
					}
					else
					{
						if (!iLocal_122)
						{
							if (func_368())
							{
								iLocal_122 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_137.f_709)
						{
							if (uLocal_104[iVar1] || iLocal_122)
							{
								func_303(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_104[iLocal_98] = func_302(iLocal_98);
							uLocal_103[iLocal_98] = func_300(iLocal_98);
							if (!uLocal_103[iLocal_98])
							{
								func_303(iLocal_98);
							}
							iLocal_98++;
							if (iLocal_98 >= Local_137.f_709)
							{
								iLocal_98 = 0;
							}
							iVar0++;
						}
						func_430(0);
						func_432(4);
						func_432(5);
						if (func_298(0) && !func_297(0))
						{
							func_296();
						}
						if ((!func_295(unk_0x9EB17624F44A8DA4()) && !unk_0x0F30C1F1717A6437()) && !unk_0x0332D718DB2E6381())
						{
							func_294();
						}
						func_293();
					}
					func_290();
					func_289();
					func_386();
					func_271();
					func_405();
					break;
				
				case 4:
					func_180();
					func_164();
					func_163();
					func_430(1);
					func_162();
					func_271();
					if (func_151(&uLocal_124, !unk_0xC80D31E4B587871C(Local_137.f_2, 2)) || unk_0xC80D31E4B587871C(Local_137.f_2, 2))
					{
						if (func_32())
						{
							func_436(5);
						}
						else
						{
							func_436(6);
						}
					}
					break;
				
				case 5:
					if (Local_137.f_8 > 5)
					{
						func_436(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_146();
		}
	}
	else
	{
		func_462();
		func_146();
	}
	func_133();
	func_128();
	func_127();
}

void func_127()//Position - 0x9BF9
{
	struct<2> Var0;
	int iVar1;
	
	if (func_32())
	{
		Var0 = { Local_137.f_729[iLocal_113 /*2*/] };
		if (unk_0x93C304998B457C45(Var0.f_1))
		{
			iVar1 = unk_0xF32FBF2453AC1753(Var0.f_1);
			if (unk_0xA0BF73C5030D3F60(iVar1))
			{
				if (!unk_0xB8DE76287EDC4957(iVar1, 0))
				{
					unk_0x5380482A432E314E(&iVar1);
				}
			}
		}
		iLocal_113++;
		if (iLocal_113 >= 10)
		{
			iLocal_113 = 0;
			iLocal_135 = iLocal_134;
			iLocal_134 = 0;
		}
	}
}

void func_128()//Position - 0x9C66
{
	if (Local_137.f_8 == 5)
	{
		if (func_36(&(Local_137.f_669)))
		{
			if (unk_0x93C304998B457C45(Local_137.f_729[iLocal_113 /*2*/].f_1))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_113 /*2*/].f_1), 0))
				{
					if (!unk_0xC80D31E4B587871C(iLocal_132, iLocal_113))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_132, iLocal_113);
						iLocal_133[iLocal_113] = unk_0xD0CA83418A236CB4();
						unk_0x7CC4363AEEF7EF34(iLocal_133[iLocal_113], "Explosion_Countdown", unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_113 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x922FC70048B5A79D(iLocal_133[iLocal_113], "Time", 30f);
					}
					if ((30000 - func_429(&(Local_137.f_669), 0, 0)) >= 0)
					{
						if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_113 /*2*/].f_1), 0))
						{
							func_432(3);
							iLocal_134 = 1;
						}
					}
					else if (unk_0xE53FD7AF7F25C0A8(Local_137.f_729[iLocal_113 /*2*/].f_1))
					{
						unk_0x2B0DDE3D071497AD(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_113 /*2*/].f_1));
						unk_0x512FEE935C79BFCF(unk_0xF32FBF2453AC1753(Local_137.f_729[iLocal_113 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (unk_0xC80D31E4B587871C(iLocal_132, iLocal_113) && !unk_0xCCCA18C9A006FF83(iLocal_133[iLocal_113]))
				{
					unk_0x0B9D04994D02CC2F(iLocal_133[iLocal_113]);
				}
			}
			if (iLocal_135)
			{
				if (!func_83(unk_0x9EB17624F44A8DA4()))
				{
					func_130(func_427((30000 - func_429(&(Local_137.f_669), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					func_129();
				}
			}
		}
	}
}

void func_129()//Position - 0x9DFD
{
	Global_1359035.f_1088 = 1;
}

void func_130(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x9E0D
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_131(7, iVar0);
		Global_1359035.f_4388[iVar0] = uParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_131(int iParam0, int iParam1)//Position - 0x9F5B
{
	unk_0x872F1C1F8587CCC7(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_132(int iParam0, int iParam1)//Position - 0x9F74
{
	return unk_0xC80D31E4B587871C(Global_1359035.f_6119[iParam0], iParam1);
}

void func_133()//Position - 0x9F8D
{
	char* sVar0;
	
	if (((func_13(unk_0x9EB17624F44A8DA4(), 1, 1) && !func_6(unk_0x9EB17624F44A8DA4())) && !func_463(unk_0x9EB17624F44A8DA4())) && func_438())
	{
		if (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_3 == 1)
		{
			if (Local_137.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_32() && !unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
			{
				func_134("CPC_PREPAIR", sVar0, func_145(), 0);
			}
			else
			{
				func_134("CPC_PREP", sVar0, func_145(), 0);
			}
		}
		else
		{
			func_384();
		}
	}
	else
	{
		func_384();
	}
}

int func_134(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA030
{
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam1) > 23)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 23)
	{
		return 0;
	}
	if (func_144(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_138();
	Global_1312576 = 4;
	StringCopy(&(Global_1312576.f_1), unk_0x436287B7DB306165(), 32);
	Global_1312576.f_9 = unk_0x8B948C59217A295D(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	func_137();
	func_136(bParam3);
	func_135();
	return 1;
}

void func_135()//Position - 0xA0EF
{
	unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 1);
}

void func_136(bool bParam0)//Position - 0xA102
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x0EE72DB1CD8A3B86(&(Global_1312576.f_59), 0);
}

void func_137()//Position - 0xA128
{
	Global_1312576.f_10 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 86400000);
	Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
}

void func_138()//Position - 0xA14D
{
	func_140();
	func_139(0);
}

void func_139(bool bParam0)//Position - 0xA15E
{
	bool bVar0;
	
	bVar0 = unk_0x3A711520F83BAE98();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xD1952A425B78FFC0();
		Global_1312576.f_11 = unk_0xD1952A425B78FFC0();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_140()//Position - 0xA1F0
{
	if (!func_143())
	{
	}
	if (func_142())
	{
		unk_0x08EE7E0EF8FAFD9F(&(Global_1312576.f_12));
		func_141();
		unk_0x0BD2F1A526F1459A();
	}
}

void func_141()//Position - 0xA219
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x6223D539BCD39E76(Global_1312576.f_52);
			unk_0x6223D539BCD39E76(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x4ADDDBC65685A05E(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_57);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_16));
			unk_0xF92B835A141C6BDD(Global_1312576.f_56);
			unk_0xA6D2B267C377D7B2(&(Global_1312576.f_48));
			unk_0x854FACC4E5F40C82(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_142()//Position - 0xA48B
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_143()//Position - 0xA4A1
{
	if (!func_142())
	{
		return 0;
	}
	unk_0x4AF56F03659830D9(&(Global_1312576.f_12));
	func_141();
	return unk_0xC20F7134D3568246();
}

bool func_144(char* sParam0, char* sParam1, char* sParam2)//Position - 0xA4C7
{
	if (!func_142())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam0) == unk_0x8B948C59217A295D(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!unk_0x8B948C59217A295D(sParam1) == unk_0x8B948C59217A295D(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return unk_0x8B948C59217A295D(sParam2) == unk_0x8B948C59217A295D(&(Global_1312576.f_32));
}

char* func_145()//Position - 0xA545
{
	switch (Local_137.f_712)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_146()//Position - 0xA597
{
	if (!unk_0xC80D31E4B587871C(iLocal_102, 3))
	{
		iLocal_122 = 1;
		func_163();
		unk_0xBC79F7D5230CA7E8();
		func_430(1);
		func_150();
		func_148();
		unk_0x872F1C1F8587CCC7(&iLocal_102, 3);
		func_147();
	}
}

void func_147()//Position - 0xA5CE
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = 0;
}

void func_148()//Position - 0xA5E4
{
	if (Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
	{
		func_149();
	}
}

void func_149()//Position - 0xA5FD
{
	struct<28> Var0;
	
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413426 = { Var0 };
	Global_2413426.f_6 = -1;
}

void func_150()//Position - 0xA65A
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == unk_0xBBA15366508D1BDE())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

int func_151(var uParam0, bool bParam1)//Position - 0xA67F
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_161()) && !(func_95(unk_0x9EB17624F44A8DA4(), 0) && (func_91(unk_0x9EB17624F44A8DA4()) || func_160(unk_0x9EB17624F44A8DA4())))) && !func_158(unk_0x9EB17624F44A8DA4()))
	{
		func_157();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_36(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_156(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_36(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_153();
				func_156(uParam0, 2);
			}
			break;
		
		case 2:
			func_153();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_152("AMEV_LBD_HELP"))
				{
					unk_0x3E80C2F7BC665259(1);
				}
				func_156(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
				func_156(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

bool func_152(char* sParam0)//Position - 0xA7FA
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

void func_153()//Position - 0xA80D
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_13(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0x3E9CABD07B829173())
		{
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4553), 1);
			func_155("AMEV_LBD_HELP", -1);
			func_154(1);
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_154(int iParam0)//Position - 0xA88F
{
	unk_0x0229D557C8A77774(3, 21, 200, 0, 0);
	if (iParam0 && !func_161())
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_155(char* sParam0, int iParam1)//Position - 0xA8BC
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam1);
}

void func_156(var uParam0, int iParam1)//Position - 0xA8D3
{
	*uParam0 = iParam1;
}

void func_157()//Position - 0xA8E0
{
	Global_2458365 = 1;
}

int func_158(int iParam0)//Position - 0xA8ED
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)//Position - 0xA933
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

bool func_160(int iParam0)//Position - 0xABF7
{
	return func_90(iParam0, 19);
}

bool func_161()//Position - 0xAC07
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

void func_162()//Position - 0xAC1D
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 1);
	}
	if (Global_2512808.f_4693 > 0)
	{
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_KILL");
		unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
		unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x22456E02F195550C(1);
		Global_2512808.f_4693 = 0;
		unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
		unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
		if (!unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "am_pi_menu"))
		{
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
		}
	}
}

void func_163()//Position - 0xACBB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_137.f_709)
	{
		if (unk_0xA6DECE14FC9A8C51(vLocal_120[iVar0 /*3*/]))
		{
			unk_0xE30CF11C0EE14316(&(vLocal_120[iVar0 /*3*/]));
			unk_0x3416C016AC81BB77(vLocal_120[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_110[iVar0] = 0;
		iVar0++;
	}
}

void func_164()//Position - 0xAD1A
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2, 0) && (func_179() || unk_0xC80D31E4B587871C(Local_137.f_2, 2)))
	{
		if (func_56(func_178()))
		{
			func_177();
		}
		if (!unk_0xC80D31E4B587871C(Local_137.f_2, 2))
		{
			if (func_298(0))
			{
				if (func_297(0))
				{
					if (!unk_0xC80D31E4B587871C(Local_137.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_176(64, Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = unk_0x2B957AC89DEBA5B6(Local_137.f_674[0]);
					if (unk_0x012BC3F18B8C7807(iVar1))
					{
						iVar2 = unk_0x43E1A43A1AA9E0BE(iVar1);
						if (func_297(1))
						{
							if (!unk_0xC80D31E4B587871C(Local_137.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_176(67, Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_297(2))
						{
							if (!unk_0xC80D31E4B587871C(Local_137.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_176(67, Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (unk_0xC80D31E4B587871C(Local_137.f_2, 0) && Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 >= Global_262145.f_10615)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0xDE2D3B9654C31EB3(iVar2);
							if (func_73(iVar2, 1))
							{
								sVar3 = func_167(iVar2);
							}
							func_166(66, Local_1504[Local_137.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_42(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2);
			}
		}
		else
		{
			func_41("", "", 1);
		}
		unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 0);
		func_165(132);
	}
}

void func_165(int iParam0)//Position - 0xAF1F
{
	if (iParam0 == iParam0)
	{
	}
}

int func_166(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xAF2E
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_88(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_24), sParam3, 64);
	Var0.f_70 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_71 = iParam7;
	return func_43(&Var0);
}

char* func_167(int iParam0)//Position - 0xAF9B
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		sVar0 = func_175(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115)
	{
		sVar0 = func_170(iParam0, 0);
		return sVar0;
	}
	if (((func_90(iParam0, 28) || func_90(unk_0x9EB17624F44A8DA4(), 28)) || func_169(iParam0)) && !func_168(iParam0))
	{
		return func_170(iParam0, 0);
	}
	iVar1 = func_72(iParam0);
	if (iVar1 != func_87())
	{
		if (iVar1 != unk_0x9EB17624F44A8DA4())
		{
			if (!unk_0x177281F5FA205A38() && !unk_0x8E095DA8BB18B959(0, -1, 1))
			{
				return func_170(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_87())
	{
		sVar0 = func_175(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (unk_0xAB019B170BF1309C(sVar0))
		{
			return func_170(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_168(int iParam0)//Position - 0xB0A1
{
	struct<13> Var0;
	
	Var0 = { func_124(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xB0D1
{
	struct<13> Var0;
	
	if (iParam0 != func_87())
	{
		Var0 = { func_124(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_170(int iParam0, bool bParam1)//Position - 0xB12A
{
	if (!bParam1)
	{
		if (func_172(iParam0, 1))
		{
			return func_171();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_171()//Position - 0xB151
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

bool func_172(int iParam0, bool bParam1)//Position - 0xB161
{
	return func_173(iParam0, bParam1, 1);
}

int func_173(int iParam0, bool bParam1, int iParam2)//Position - 0xB172
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_174(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_87() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)//Position - 0xB1CE
{
	if (iParam0 != func_87())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_87())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_175(var uParam0)//Position - 0xB21D
{
	return uParam0;
}

int func_176(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB227
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_88(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_70 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam7;
	return func_43(&Var0);
}

void func_177()//Position - 0xB292
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

int func_178()//Position - 0xB2DD
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

bool func_179()//Position - 0xB2F1
{
	return unk_0xC80D31E4B587871C(Global_1574409.f_1, 25);
}

void func_180()//Position - 0xB305
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2, 1))
	{
		if (func_6(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 1);
			return;
		}
		if (func_463(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 1);
			return;
		}
		if (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 >= Global_262145.f_10615)
		{
			iVar3 = system::floor(((system::to_float((Local_137.f_1 - iLocal_100)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_10776)
			{
				iVar3 = Global_262145.f_10776;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_270() * iVar3);
			iVar1 = (func_269() * iVar3);
		}
		else
		{
			func_267(0);
		}
		if (!unk_0xC80D31E4B587871C(Local_137.f_2, 2))
		{
			if (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 >= Global_262145.f_10615)
			{
				if (unk_0xC80D31E4B587871C(Local_137.f_2, 0))
				{
					iVar0 = (iVar0 + system::round((IntToFloat(func_266()) * Global_262145.f_10787)));
				}
			}
			if (func_297(0))
			{
				Local_1503.f_5 = 1;
				iVar1 = (iVar1 + system::round((IntToFloat(func_265()) * Global_262145.f_10788)));
			}
			if ((Local_137.f_674[0] != unk_0x622FF3AE4B1D07C3() && Local_137.f_674[1] != unk_0x622FF3AE4B1D07C3()) && Local_137.f_674[2] != unk_0x622FF3AE4B1D07C3())
			{
				if (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 >= Global_262145.f_10615)
				{
					func_267(1);
				}
			}
		}
		func_245(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_244())
			{
				func_235(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				unk_0x432E164230431523(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1503.f_6 = iVar0;
		if (!Global_262145.f_10840)
		{
			if (Local_1503.f_6 > 0)
			{
				func_234(8, Local_1503.f_6);
			}
		}
		Global_2459022 = iVar0;
		func_233();
		func_181(0, unk_0xFC1458A37D98B502(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		Local_1503.f_7 = (Local_1503.f_7 + iVar1);
		unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 1);
	}
}

int func_181(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB52B
{
	return func_182(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xB54D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_192(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1))
		{
			if (unk_0x52C56492660097C7(iParam1))
			{
				iVar1 = unk_0x07F64790D10D1DB5(iParam1);
				func_188(unk_0xD0E00576168D19BB(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_183(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_183(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xB5C6
{
	vector3 vVar0;
	
	vVar0 = { func_186(iParam0, 1) };
	if (iParam0 == func_185(unk_0xFC1458A37D98B502()))
	{
		func_184(1);
	}
	func_188(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_184(int iParam0)//Position - 0xB5FA
{
	Global_2436181.f_1774 = iParam0;
}

int func_185(int iParam0)//Position - 0xB60B
{
	return iParam0;
}

Vector3 func_186(int iParam0, bool bParam1)//Position - 0xB615
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x4AA5DF29899B96D6())
	{
		vVar1 = { unk_0xEDD96F31411FBD87(2) };
	}
	if (iParam0 == func_187(unk_0xFC1458A37D98B502()) && unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
	{
		vVar0 = { unk_0x3F90543934DCD7E6(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		fVar2 = unk_0xF0371FE6E2BF9599(iParam0);
		if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0,18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0,18f);
	}
	vVar0 = { unk_0x9EA50C5EC175E58E(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_187(int iParam0)//Position - 0xB6D9
{
	return iParam0;
}

void func_188(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB6E3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { vParam0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_191(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_190();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_189();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam4);
		}
	}
}

int func_189()//Position - 0xB7FA
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_190()//Position - 0xB824
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_191(vector3 vParam0, var uParam1, var uParam2)//Position - 0xB83F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xBE3C4023003180FC(unk_0x90CC871EBA5B70FA(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0,402f;
		*uParam2 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0,212f;
		*uParam2 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam1 = (fVar2 + 0,212f);
	*uParam2 = (fVar3 + 0,286f);
	return fVar1;
}

var func_192(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xB8D8
{
	var uVar0;
	
	uVar0 = func_193(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB8FB
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_232(unk_0x9EB17624F44A8DA4()) || func_231(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_229() || func_226(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_225(sParam2))
	{
	}
	if (func_224())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = system::round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_222(iVar1);
		fVar3 = (system::to_float(iVar1) * Global_262145.f_1);
		iVar1 = system::round(fVar3);
		if (bParam10)
		{
			iVar1 = func_221(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_219(0, &iVar1);
					break;
				
				case 3:
					func_219(1, &iVar1);
					break;
				
				case 1:
					func_217(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_214(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_203((func_213(unk_0x9EB17624F44A8DA4()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x0367F69CE26830AB(iVar1, iParam8, iParam9);
				if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_2 != -1)
				{
					func_214(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_198(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_194((func_196(unk_0x9EB17624F44A8DA4()) + iVar1));
			}
			else
			{
				func_194((func_196(unk_0x9EB17624F44A8DA4()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_194(int iParam0)//Position - 0xBAF9
{
	if (func_224())
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_5 = iParam0;
		func_195(joaat("mpply_globalxp"), iParam0);
	}
}

void func_195(int iParam0, int iParam1)//Position - 0xBB24
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_196(int iParam0)//Position - 0xBB40
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return func_197(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_197(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xBB91
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_198(int iParam0)//Position - 0xBBAF
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_124(unk_0x9EB17624F44A8DA4()) };
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(&Var0))
		{
			iVar1 = func_201(func_202(&Var0));
			if (iVar1 == 0)
			{
				func_200(&Global_1368098, iParam0);
				func_199(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_200(&Global_1368099, iParam0);
				func_199(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_200(&Global_1368100, iParam0);
				func_199(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_200(&Global_1368101, iParam0);
				func_199(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_200(&Global_1368102, iParam0);
				func_199(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_199(int iParam0, int iParam1)//Position - 0xBC83
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_200(var uParam0, int iParam1)//Position - 0xBDA8
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_201(int iParam0)//Position - 0xBDB9
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_202(var uParam0)//Position - 0xBE16
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		if (unk_0xA84F967541249268(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_203(int iParam0, int iParam1, int iParam2)//Position - 0xBE39
{
	if (func_224())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_212(-1)])
				{
					unk_0x0367F69CE26830AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_212(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x0367F69CE26830AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_211(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211.f_6 = func_209(iParam0, 1);
		}
		func_208(636, iParam0, -1, 1);
		func_207(637, func_209(iParam0, 1), -1, 1, 0);
		Global_1368213[func_212(-1)] = iParam0;
		func_204(7, 0);
	}
}

void func_204(int iParam0, int iParam1)//Position - 0xBF5A
{
	int iVar0;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_205()//Position - 0xBF7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_206(int iParam0, var uParam1)//Position - 0xBFB2
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xC039
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC069
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_212(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_212(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_212(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_212(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_212(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_212(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_212(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_212(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_212(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_212(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_212(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_212(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_212(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_212(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_212(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_212(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_212(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_212(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_212(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_212(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_212(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_212(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_212(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_212(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_212(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_212(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_212(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_212(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_212(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_212(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_212(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_212(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_212(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_209(int iParam0, bool bParam1)//Position - 0xC734
{
	if (bParam1)
	{
	}
	return func_210(iParam0, 0);
}

int func_210(int iParam0, int iParam1)//Position - 0xC748
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_211(int iParam0)//Position - 0xC807
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

int func_212(int iParam0)//Position - 0xC82C
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_213(int iParam0)//Position - 0xC860
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				return Global_1368213[func_212(-1)];
			}
			else if (func_211(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_212(-1)];
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0xC8BD
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_212(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_215(iParam0))
	{
		func_207(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_208(iParam0, iVar0, iParam2, 1);
	}
}

int func_215(int iParam0)//Position - 0xC8FF
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_216(int iParam0, int iParam1, int iParam2)//Position - 0xCAB5
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_212(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_217(int iParam0)//Position - 0xCAE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4());
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		iVar4 = unk_0x2B957AC89DEBA5B6(iVar0);
		if (unk_0x012BC3F18B8C7807(iVar4))
		{
			iVar5 = unk_0x43E1A43A1AA9E0BE(iVar4);
			if (unk_0x917EE18109C5ACEA(iVar5) != -1)
			{
				if (unk_0x917EE18109C5ACEA(iVar5) == iVar1 || func_65(unk_0x917EE18109C5ACEA(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9EB17624F44A8DA4())
					{
						if (func_125(unk_0x9EB17624F44A8DA4(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = system::round((func_218(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = system::round((func_218(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_218(int iParam0, int iParam1)//Position - 0xCBD2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = system::to_float(iParam0);
	fVar1 = system::to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_219(bool bParam0, int iParam1)//Position - 0xCBF3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			iVar3 = iVar0;
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar4 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9EB17624F44A8DA4())
					{
						iVar1++;
						if (func_125(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9EB17624F44A8DA4())
				{
					if (func_220(unk_0x9EB17624F44A8DA4(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_125(unk_0x9EB17624F44A8DA4(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = system::round((func_218(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = system::round((func_218(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_220(int iParam0, int iParam1)//Position - 0xCD0B
{
	return system::vdist(func_29(iParam0), func_29(iParam1));
	return 0f;
}

int func_221(int iParam0)//Position - 0xCD27
{
	int iVar0;
	
	if (unk_0xEF96DAAD69CD3E8A() != 3)
	{
		return *iParam0;
	}
	iVar0 = system::round((func_218(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_222(int iParam0)//Position - 0xCD5E
{
	if (iParam0 < 0)
	{
		if (unk_0xB89BB11E0945F6F0(iParam0) > func_213(unk_0x9EB17624F44A8DA4()))
		{
			iParam0 = -func_213(unk_0x9EB17624F44A8DA4());
		}
	}
	if (func_223(8000, 0, 0) > 0)
	{
		if (func_223(8000, 0, 0) < (iParam0 + func_213(unk_0x9EB17624F44A8DA4())))
		{
			iParam0 = (func_223(8000, 0, 0) - func_213(unk_0x9EB17624F44A8DA4()));
		}
	}
	return iParam0;
}

int func_223(int iParam0, bool bParam1, int iParam2)//Position - 0xCDC2
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_285062[iParam0];
}

int func_224()//Position - 0xCDEA
{
	return 1;
}

int func_225(char* sParam0)//Position - 0xCDF3
{
	if (unk_0x8C1C362CA8299475(sParam0))
	{
		return 1;
	}
	else if (unk_0x74C475EB8E73D398(sParam0, "") || unk_0x74C475EB8E73D398(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)//Position - 0xCE2C
{
	return func_227(func_228(iParam0));
}

int func_227(int iParam0)//Position - 0xCE3E
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xCE58
{
	if (func_95(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

bool func_229()//Position - 0xCE7B
{
	if (unk_0x4916190900E76373())
	{
		return func_53();
	}
	return func_230(Global_4456448.f_122309);
}

int func_230(int iParam0)//Position - 0xCE9F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_231(int iParam0)//Position - 0xCED9
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_232(int iParam0)//Position - 0xCEEE
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_233()//Position - 0xCF03
{
	Global_2458364 = 1;
}

void func_234(int iParam0, int iParam1)//Position - 0xCF10
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!unk_0xB9D80B12FE4456A5() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xCF82
{
	int iVar0;
	
	if (!func_244())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_236(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_236(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD40C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_39()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_242(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_237(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD5B0
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)//Position - 0xD5E8
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_244())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_241(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_239(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_239(var uParam0)//Position - 0xD63A
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_240(&(uParam0->f_8.f_3));
	func_240(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_240(var uParam0)//Position - 0xD730
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_241(int iParam0)//Position - 0xD778
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)//Position - 0xD7A0
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_243(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0xD7B4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_244())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = iParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_244()//Position - 0xD8AD
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

void func_245(int iParam0, int iParam1)//Position - 0xD8C4
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_264())
		{
			if (func_263(0))
			{
				if (!func_262(0))
				{
					if (unk_0x552F39AE86E07792(func_261()))
					{
						if (func_260() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_260());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_258(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_251("GB_BCUT_TICK1", func_261(), iVar0, 0, 0, 1, 1);
						}
						func_250(20);
						func_246(func_261(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_246(int iParam0, int iParam1, int iParam2)//Position - 0xD965
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = unk_0x9EB17624F44A8DA4();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_249(iParam0);
		func_248(&(Var0.f_6), &(Var0.f_7));
		unk_0x5A26F0BDEE9F8260(1, &Var0, 8, func_247(iParam0));
	}
}

int func_247(int iParam0)//Position - 0xD9BB
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

void func_248(var uParam0, var uParam1)//Position - 0xD9CD
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_249(int iParam0)//Position - 0xD9E7
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_250(int iParam0)//Position - 0xD9FB
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_251(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xDA24
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xDE2D3B9654C31EB3(iParam1), 64);
		}
		if (unk_0xAB019B170BF1309C(&Var1))
		{
		}
		unk_0xE3C33644878DCCFD(sParam0);
		unk_0xF92B835A141C6BDD(func_58(iParam1, -2, 1, 0));
		unk_0x854FACC4E5F40C82(func_256(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF92B835A141C6BDD(iParam3);
		}
		unk_0x6223D539BCD39E76(iParam2);
		iVar0 = unk_0x65F0733C4A64907A(0, 1);
		func_252(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_252(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xDABB
{
	int iVar0;
	
	if ((!func_255() || !unk_0x4916190900E76373()) || !func_85(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_253(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_253(int iParam0)//Position - 0xDBC3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_254(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_254(int iParam0)//Position - 0xDC25
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_255()//Position - 0xDC5E
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

var func_256(char* sParam0)//Position - 0xDC6F
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_257(&cVar0);
}

var func_257(char[4] cParam0)//Position - 0xDC93
{
	return cParam0;
}

void func_258(int iParam0, bool bParam1)//Position - 0xDC9D
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_259(1);
	}
	else
	{
		iVar1 = func_259(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_259(bool bParam0)//Position - 0xDCCF
{
	if (bParam0)
	{
		return system::round((0,05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_260()//Position - 0xDCF5
{
	return Global_262145.f_11729;
}

int func_261()//Position - 0xDD04
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_262(bool bParam0)//Position - 0xDD19
{
	return func_172(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_263(bool bParam0)//Position - 0xDD2B
{
	return func_73(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_264()//Position - 0xDD3D
{
	return func_74(unk_0x9EB17624F44A8DA4());
}

int func_265()//Position - 0xDD4D
{
	return Global_262145.f_10598;
}

int func_266()//Position - 0xDD5C
{
	return Global_262145.f_10597;
}

void func_267(bool bParam0)//Position - 0xDD6B
{
	if (bParam0)
	{
		if (func_268(1))
		{
			unk_0x872F1C1F8587CCC7(&Global_1574434, 1);
		}
	}
	else if (func_268(2))
	{
		unk_0x872F1C1F8587CCC7(&Global_1574434, 2);
	}
}

int func_268(int iParam0)//Position - 0xDD9D
{
	int iVar0;
	
	iVar0 = func_216(2523, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 0) && unk_0xC80D31E4B587871C(iVar0, 1)) && unk_0xC80D31E4B587871C(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 3) && unk_0xC80D31E4B587871C(iVar0, 4)) && unk_0xC80D31E4B587871C(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 6) && unk_0xC80D31E4B587871C(iVar0, 7)) && unk_0xC80D31E4B587871C(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xC80D31E4B587871C(iVar0, 9) && unk_0xC80D31E4B587871C(iVar0, 10)) && unk_0xC80D31E4B587871C(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_269()//Position - 0xDE6E
{
	return Global_262145.f_10617;
}

int func_270()//Position - 0xDE7D
{
	return Global_262145.f_10616;
}

void func_271()//Position - 0xDE8C
{
	if (unk_0xC80D31E4B587871C(iLocal_102, 5))
	{
		func_272();
	}
	func_465();
}

void func_272()//Position - 0xDEA6
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_137.f_674[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_87();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_137.f_674[iVar7] > -1)
			{
				iVar12 = unk_0x2B957AC89DEBA5B6(Local_137.f_674[iVar7]);
				if (unk_0x012BC3F18B8C7807(iVar12))
				{
					iVar1 = unk_0x43E1A43A1AA9E0BE(iVar12);
					if (func_13(iVar1, 0, 1))
					{
						if (!func_85(iVar1, 0))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1504[Local_137.f_674[iVar7] /*5*/].f_4;
							if (func_263(1))
							{
								if (func_73(iVar1, 1))
								{
									uVar11[iVar7] = func_58(iVar1, -2, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x622FF3AE4B1D07C3();
		if (func_83(unk_0x9EB17624F44A8DA4()))
		{
			iVar13 = func_287();
			iVar14 = unk_0xDF35170AEEFB473B(iVar13);
			if (unk_0x552F39AE86E07792(iVar14))
			{
				iVar15 = unk_0x87678BB8392EFD41(iVar14);
				if (unk_0x012BC3F18B8C7807(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_427(0, Local_137.f_708);
		iVar4 = Local_137.f_709;
		iVar5 = func_427(0, Local_1504[iVar8 /*5*/].f_4);
		iVar6 = func_427(0, (Global_262145.f_10454 - func_429(&(Local_137.f_661), 0, 0)));
		func_286(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_273(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_283(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xE057
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_280(0) == 0)
	{
		return;
	}
	func_279();
	iVar1 = 0;
	if (((Global_2457893[0] != iParam0 || Global_2457893[1] != iParam1) || Global_2457893[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2457893[0] = iParam0;
	Global_2457893[1] = iParam1;
	Global_2457893[2] = iParam2;
	Global_2457893[3] = 0;
	Global_2457893[4] = 0;
	if (Global_2457893[0] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[0]);
			Global_2457899[0 /*16*/] = { func_278(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_275(iParam3, &(Global_2457899[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[1] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[1]);
			Global_2457899[1 /*16*/] = { func_278(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_275(iParam4, &(Global_2457899[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1);
		}
	}
	if (Global_2457893[2] != func_87())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xDE2D3B9654C31EB3(Global_2457893[2]);
			Global_2457899[2 /*16*/] = { func_278(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_275(iParam5, &(Global_2457899[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1);
		}
	}
	func_274(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_463(unk_0x9EB17624F44A8DA4()) == 0)
	{
		func_275(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_225(sParam12))
	{
		sVar2 = sParam12;
	}
	func_130(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0);
	*iParam10 = 0;
	func_129();
}

void func_274(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xE273
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_131(4, iVar0);
		Global_1359035.f_3098[iVar0] = iParam0;
		Global_1359035.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1359035.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_3098.f_183[iVar0] = iParam3;
		Global_1359035.f_3098.f_216[iVar0] = iParam5;
		Global_1359035.f_3098.f_194[iVar0] = iParam4;
		Global_1359035.f_3098.f_227[iVar0] = iParam6;
		Global_1359035.f_3098.f_270[iVar0] = iParam7;
		Global_1359035.f_3098.f_281[iVar0] = iParam8;
		Global_1359035.f_3098.f_292[iVar0] = iParam9;
		Global_1359035.f_3098.f_303[iVar0] = iParam10;
		Global_1359035.f_3098.f_314[iVar0] = iParam11;
		Global_1359035.f_3098.f_325[iVar0] = iParam13;
		Global_1359035.f_3098.f_336[iVar0] = iParam14;
		Global_1359035.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0xB9D80B12FE4456A5()) && iParam12)
		{
			Global_1359035.f_1088 = 1;
		}
	}
}

void func_275(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xE3CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_132(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_131(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = iParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_277())
		{
			Global_1359035.f_1088 = 1;
		}
		if (unk_0xB9D80B12FE4456A5())
		{
			iVar2 = 0;
			unk_0x5113D2C928A121B2(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_276())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_276()//Position - 0xE62F
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0x5113D2C928A121B2(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_277()//Position - 0xE653
{
	if (((unk_0xC45D692E0BD4797B() == 8 || unk_0xC45D692E0BD4797B() == 9) || unk_0xC45D692E0BD4797B() == 10) || unk_0xC45D692E0BD4797B() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_278(int iParam0, char* sParam1)//Position - 0xE691
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xB2E1B414DD88808E("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_279()//Position - 0xE733
{
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	Global_2458368 = 1;
}

int func_280(bool bParam0)//Position - 0xE756
{
	if (func_282())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_281()//Position - 0xE78D
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

bool func_282()//Position - 0xE7A4
{
	return unk_0xC80D31E4B587871C(Global_2359302, 12);
}

char* func_283()//Position - 0xE7B6
{
	return "HUD_COUNTDOWN";
	switch (func_285(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_284()//Position - 0xE960
{
	if (func_285(unk_0x9EB17624F44A8DA4()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

int func_285(int iParam0)//Position - 0xE983
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

void func_286(int iParam0)//Position - 0xE9A2
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
			{
				unk_0x1D4B7CAF5F26DD3E(&(Global_2512808.f_4695));
			}
			unk_0x22456E02F195550C(1);
			unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
			unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
			if (Global_2512808.f_4703 > -1)
			{
				unk_0xB94964861C6B4D3C(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
			Global_2512808.f_4693 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			if (unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					if (unk_0x4395F3F89845A398())
					{
						if ((!unk_0x74C475EB8E73D398(unk_0xC45B242943C8D6AD(unk_0x832CFDD4BD296987()), "OFF") && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0xAB019B170BF1309C(&(Global_2512808.f_4695)))
						{
							StringCopy(&(Global_2512808.f_4695), "", 32);
							unk_0x8810DC630928B398("FM_COUNTDOWN_30S_FIRA");
							unk_0xE02E32C69260FBB7("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
							unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
							unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 0);
							unk_0x22456E02F195550C(1);
							unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
						}
					}
				}
				else if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xC80D31E4B587871C(Global_2512808.f_4693, 5))
				{
					unk_0x1D4B7CAF5F26DD3E("OFF");
				}
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x8810DC630928B398("FM_COUNTDOWN_30S");
				}
				unk_0xE859EF37EA7362D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
			}
			else if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x8D0D3BB074DAEB2C() != 0)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && !unk_0x94F5A25C597E9666())
						{
							StringCopy(&(Global_2512808.f_4695), unk_0x046EF496879E839B(), 32);
							unk_0x1D4B7CAF5F26DD3E("OFF");
						}
						unk_0x22456E02F195550C(1);
						unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 3))
				{
					Global_2512808.f_4703 = unk_0xD0CA83418A236CB4();
					unk_0x4AFBCBFDE748D4E0(Global_2512808.f_4703, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
			{
				Global_2512808.f_4693 = 0;
				Global_2512808.f_4703 = -1;
				unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
				unk_0x22456E02F195550C(0);
				unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
				unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
				unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
				unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0xC80D31E4B587871C(Global_2512808.f_4693, 2))
				{
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
					unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
					unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 0))
		{
			Global_2512808.f_4693 = 0;
			Global_2512808.f_4703 = -1;
			unk_0xAAB7D68F04F8C8BA("FM_COUNTDOWN_30S_KILL");
			unk_0x22456E02F195550C(0);
			unk_0x8810DC630928B398("FM_PRE_COUNTDOWN_30S");
			unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
			unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
			unk_0x1B5A255BF0D63005("AllowScoreAndRadio", 1);
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 0);
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 2);
				unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 5);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 2);
				unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4693), 5);
			}
		}
	}
}

var func_287()//Position - 0xED85
{
	if (unk_0x6ADD12BF4D6D2587(func_288()))
	{
		return func_288();
	}
	return func_80();
}

var func_288()//Position - 0xEDA3
{
	return Global_2359302.f_3;
}

void func_289()//Position - 0xEDB1
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		Local_158.f_532[iVar0 /*42*/] = { Var1 };
		Local_158.f_532[iVar0 /*42*/].f_1 = func_87();
		if (Local_137.f_674[iVar0] > -1)
		{
			iVar3 = unk_0x2B957AC89DEBA5B6(Local_137.f_674[iVar0]);
			if (unk_0x012BC3F18B8C7807(iVar3))
			{
				iVar2 = unk_0x43E1A43A1AA9E0BE(iVar3);
				if (!func_85(iVar2, 0))
				{
					Local_158.f_532[iVar0 /*42*/] = Local_137.f_674[iVar0];
					Local_158.f_532[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1504[Local_137.f_674[iVar0] /*5*/].f_4;
					Local_158.f_532[iVar0 /*42*/].f_9 = uVar4;
					Local_158.f_532[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_290()//Position - 0xEE9D
{
	if (Local_136 != -1 && Local_136.f_1 != -1)
	{
		if (unk_0x3DE13AF8F787AC71() != func_292() && unk_0x012BC3F18B8C7807(unk_0x3DE13AF8F787AC71()))
		{
			func_291(Local_136.f_1, Local_136, func_247(unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71())));
			Local_136 = -1;
			Local_136.f_1 = -1;
		}
	}
}

void func_291(int iParam0, int iParam1, int iParam2)//Position - 0xEEF4
{
	struct<4> Var0;
	
	Var0 = 1967975708;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 4, iParam2);
	}
}

int func_292()//Position - 0xEF2C
{
	return -1;
}

void func_293()//Position - 0xEF35
{
	if (func_297(0))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_102, 4))
		{
			if (func_262(1))
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0x872F1C1F8587CCC7(&iLocal_102, 4);
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_102, 4))
	{
		if (func_262(1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x4AFBCBFDE748D4E0(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0x0EE72DB1CD8A3B86(&iLocal_102, 4);
	}
}

void func_294()//Position - 0xEFB7
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 26);
}

int func_295(int iParam0)//Position - 0xEFCC
{
	if ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9) && !(unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7))) || ((unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 6) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 7)) && !unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_77.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_296()//Position - 0xF067
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1709), 19);
}

int func_297(int iParam0)//Position - 0xF07C
{
	if (iParam0 >= 0)
	{
		if (Local_137.f_674[iParam0] == unk_0x622FF3AE4B1D07C3() && Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_298(int iParam0)//Position - 0xF0B3
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_137.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_299(Local_1504[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_299(int iParam0, int iParam1)//Position - 0xF0E9
{
	return iParam0 > iParam1;
}

bool func_300(int iParam0)//Position - 0xF0F6
{
	return func_301(unk_0xFC1458A37D98B502(), Local_137.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_301(int iParam0, vector3 vParam1, int iParam2)//Position - 0xF118
{
	vector3 vVar0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(vVar0, vParam1, iParam2);
}

bool func_302(int iParam0)//Position - 0xF152
{
	return func_301(unk_0xFC1458A37D98B502(), Local_137.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_303(int iParam0)//Position - 0xF174
{
	func_328(&(vLocal_120[iParam0 /*3*/]), Local_137.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_103[iParam0])
	{
		func_323(Local_137.f_10[iParam0 /*5*/], iParam0);
		func_304(Local_137.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_304(struct<4> Param0, var uParam1, int iParam2)//Position - 0xF1BF
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0x622FF3AE4B1D07C3() && !unk_0xC80D31E4B587871C(uLocal_109[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4++;
		if (iLocal_100 == 0)
		{
			iLocal_100 = unk_0xD1952A425B78FFC0();
		}
		iVar0 = func_321(system::ceil((IntToFloat(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4) / func_322())));
		iVar1 = func_319(system::ceil((IntToFloat(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4) / func_320())));
		iVar0 = system::round((IntToFloat(iVar0) * Global_262145.f_10787));
		iVar1 = system::round((IntToFloat(iVar1) * Global_262145.f_10788));
		if (func_32())
		{
			iVar0 = system::round((IntToFloat(iVar0) * func_318()));
			iVar1 = system::round((IntToFloat(iVar1) * func_317()));
		}
		if (func_244())
		{
			func_235(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			unk_0x432E164230431523(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_233();
		func_181(0, unk_0xFC1458A37D98B502(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		iLocal_111 = (iLocal_111 + iVar0);
		Global_2459022 = iVar0;
		Local_1503.f_7 = (Local_1503.f_7 + iVar1);
		unk_0x872F1C1F8587CCC7(&(uLocal_109[func_17(iParam2)]), func_16(iParam2));
		if (Local_1503.f_11 == 0)
		{
			Local_1503.f_11 = unk_0xE3CCAFB1555348DF();
		}
		func_305();
		unk_0x4AFBCBFDE748D4E0(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_305()//Position - 0xF329
{
	if (!unk_0xC80D31E4B587871C(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2, 2))
	{
		unk_0x872F1C1F8587CCC7(&(Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_2), 2);
		func_306(1);
	}
}

void func_306(bool bParam0)//Position - 0xF35A
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
		{
			if (func_316())
			{
				func_309(0);
				func_308();
			}
			if (func_461(0))
			{
				uVar0 = func_216(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, 0);
				func_308();
			}
			if (func_461(func_460(func_285(unk_0x9EB17624F44A8DA4()))))
			{
				uVar0 = func_216(2469, -1, 0);
				unk_0x0EE72DB1CD8A3B86(&uVar0, func_460(func_285(unk_0x9EB17624F44A8DA4())));
				func_308();
			}
			if (func_307())
			{
				func_308();
			}
			if (func_285(unk_0x9EB17624F44A8DA4()) > -1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 7);
	}
}

int func_307()//Position - 0xF432
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_308()//Position - 0xF44C
{
	if (func_307())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_309(int iParam0)//Position - 0xF465
{
	if (func_316())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_20(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_20(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_315(1);
		}
		if ((!unk_0x4916190900E76373() && !func_314()) && !func_310(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_310(int iParam0)//Position - 0xF4FF
{
	if (func_311(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_311(int iParam0, bool bParam1)//Position - 0xF523
{
	if (bParam1)
	{
		if (func_312(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_312(int iParam0)//Position - 0xF54F
{
	return func_313(iParam0);
}

bool func_313(int iParam0)//Position - 0xF55D
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_314()//Position - 0xF577
{
	return Global_2447174.f_727;
}

void func_315(bool bParam0)//Position - 0xF586
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_316())
		{
			if (func_13(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, true);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0,5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

bool func_316()//Position - 0xF67F
{
	return Global_1312416;
}

float func_317()//Position - 0xF68B
{
	return Global_262145.f_10600;
}

float func_318()//Position - 0xF69A
{
	return Global_262145.f_10599;
}

var func_319(int iParam0)//Position - 0xF6A9
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_10611;
		
		case 2:
			return Global_262145.f_10612;
		
		case 3:
			return Global_262145.f_10613;
		
		case 4:
			return Global_262145.f_10614;
		
		default:
	}
	return Global_262145.f_10614;
}

float func_320()//Position - 0xF6FF
{
	return Global_262145.f_10359;
}

var func_321(int iParam0)//Position - 0xF70E
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_10601;
		
		case 2:
			return Global_262145.f_10602;
		
		case 3:
			return Global_262145.f_10603;
		
		case 4:
			return Global_262145.f_10604;
		
		case 5:
			return Global_262145.f_10605;
		
		case 6:
			return Global_262145.f_10606;
		
		case 7:
			return Global_262145.f_10607;
		
		case 8:
			return Global_262145.f_10608;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_10609;
		
		default:
	}
	return Global_262145.f_10610;
}

float func_322()//Position - 0xF7C6
{
	return Global_262145.f_10358;
}

void func_323(vector3 vParam0, var uParam1, var uParam2, int iParam3)//Position - 0xF7D5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xC80D31E4B587871C(Local_137.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!unk_0xC80D31E4B587871C(uLocal_108[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_32())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2,5f;
				fVar2 = 2,8f;
			}
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_324())
				{
					iLocal_107 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Local_137.f_9);
					if (unk_0x3DE13AF8F787AC71() != func_292() && unk_0x012BC3F18B8C7807(unk_0x3DE13AF8F787AC71()))
					{
						func_291(iLocal_107, iParam3, func_247(unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71())));
						Local_136 = -1;
						Local_136.f_1 = -1;
					}
					else
					{
						Local_136 = iParam3;
						Local_136.f_1 = iLocal_107;
					}
					unk_0x872F1C1F8587CCC7(&(uLocal_108[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_114, 250, 0))
		{
			if (unk_0x3DE13AF8F787AC71() != func_292() && unk_0x012BC3F18B8C7807(unk_0x3DE13AF8F787AC71()))
			{
				func_291(iLocal_107, iParam3, func_247(unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71())));
				Local_136.f_1 = -1;
				Local_136 = -1;
			}
			else
			{
				Local_136 = iParam3;
				Local_136.f_1 = iLocal_107;
			}
			func_35(&uLocal_114);
		}
	}
}

int func_324()//Position - 0xF925
{
	if (!func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		return 0;
	}
	if (func_463(unk_0x9EB17624F44A8DA4()))
	{
		if ((func_316() && !func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_432(0);
		}
		else
		{
			func_432(7);
		}
		return 0;
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_325(unk_0xFC1458A37D98B502(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_85(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	if (!func_32())
	{
		if (unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()))
		{
			func_432(1);
			return 0;
		}
	}
	return 1;
}

int func_325(int iParam0, int iParam1)//Position - 0xF9C6
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

bool func_326(int iParam0, int iParam1)//Position - 0xFA4B
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

bool func_327()//Position - 0xFA64
{
	return Global_1312416.f_1;
}

void func_328(int iParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)//Position - 0xFA72
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	vVar0 = { vParam1 };
	unk_0x31758B9A51671C43(12, &uVar1, &uVar2, &uVar3, &uVar4);
	if (!unk_0xC80D31E4B587871C(uLocal_108[func_17(iParam4)], func_16(iParam4)) && !unk_0xC80D31E4B587871C(Local_137.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!unk_0xA6DECE14FC9A8C51(*iParam0))
		{
			if (!func_367(vVar0, 0f, 0f, 0f, 0) && !func_367(vVar0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = unk_0x6F4378873333A0C2(vVar0);
				unk_0x4B4040A0EC7DBA81(*iParam0, 431);
				unk_0xF27F72CA15E148EE(*iParam0, 9);
				unk_0x62BD54E491535B76(*iParam0, "CPC_BLIP");
				func_335(*iParam0, 25, 1152319488, 1137180672);
				func_333(iParam0, 12);
				unk_0x9C27373CC69ECF87(*iParam0, 1);
			}
		}
		else if (unk_0x0F30C1F1717A6437())
		{
			unk_0xF20857E4CB32A2B7(*iParam0, 255);
		}
		else
		{
			func_335(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_104[iParam4])
		{
			if (!unk_0xC80D31E4B587871C(iLocal_110[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 52;
				if (func_32())
				{
					iParam0->f_1 = unk_0x4F46BC851CC85AE5(iVar5, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					unk_0xA8913F2BB16873B6(iParam0->f_1, 7,5f, 7,5f, 100f);
				}
				else
				{
					iParam0->f_1 = unk_0x4F46BC851CC85AE5(iVar5, vVar0 + Vector(2,8f, 0f, 0f), vVar0, 5f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					unk_0xA8913F2BB16873B6(iParam0->f_1, 5f, 5f, 100f);
				}
				unk_0x872F1C1F8587CCC7(&(iLocal_110[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_332(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_331(&vParam1);
		}
		else if (unk_0xC80D31E4B587871C(iLocal_110[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_330(&(iParam0->f_1), &(iParam0->f_2)))
			{
				unk_0x3416C016AC81BB77(iParam0->f_1);
				unk_0x0EE72DB1CD8A3B86(&(iLocal_110[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_110[func_17(iParam4)], func_16(iParam4)))
	{
		func_329(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (unk_0xA6DECE14FC9A8C51(*iParam0))
	{
		unk_0xE30CF11C0EE14316(iParam0);
	}
}

void func_329(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xFCBE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			unk_0x31758B9A51671C43(1, &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x88ABD17FCFD44427(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			unk_0xF0FA937EE7A3225B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (unk_0xA6DECE14FC9A8C51(*iParam2))
			{
				unk_0xE30CF11C0EE14316(iParam2);
			}
			unk_0x3416C016AC81BB77(*uParam0);
			*uParam0 = 0;
			unk_0x0EE72DB1CD8A3B86(&(iLocal_110[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_330(var uParam0, var uParam1)//Position - 0xFD40
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		unk_0x31758B9A51671C43(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x88ABD17FCFD44427(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0xF0FA937EE7A3225B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_331(var uParam0)//Position - 0xFD92
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_32())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_120(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1,7f, 1,7f, 1,7f) };
		unk_0x7E2E715D414C3C5B(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_332(var uParam0, var uParam1)//Position - 0xFDF7
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		unk_0x31758B9A51671C43(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x88ABD17FCFD44427(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0xF0FA937EE7A3225B(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_333(var uParam0, int iParam1)//Position - 0xFE49
{
	int iVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		iVar0 = func_334(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, iVar0);
	}
}

int func_334(int iParam0)//Position - 0xFE6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_335(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x100D9
{
	unk_0xF20857E4CB32A2B7(iParam0, func_336(iParam0, iParam1, fParam2, fParam3));
}

int func_336(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x100F3
{
	float fVar0;
	
	if (!func_295(Global_2436181))
	{
		fVar0 = func_340(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_337();
		}
		return (system::round((system::to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_337()//Position - 0x10137
{
	if (func_338(Global_2436181, 1))
	{
		return 50;
	}
	return 0;
}

bool func_338(int iParam0, bool bParam1)//Position - 0x10151
{
	if (Global_1312447 != 0)
	{
		return func_339(iParam0) != 0;
	}
	return func_311(iParam0, bParam1);
}

int func_339(int iParam0)//Position - 0x10177
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

float func_340(int iParam0, float fParam1, float fParam2)//Position - 0x10199
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_2436181;
	vVar2 = { unk_0x67247AA13B7486A3(iParam0) };
	vVar2.z = 0f;
	if (Global_1316741)
	{
		if (func_366(iVar0))
		{
			vVar3 = { func_343(iVar0) };
		}
		else if (func_342(iVar0))
		{
			vVar3 = { func_341(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar0), 0) };
	}
	vVar3.z = 0f;
	fVar1 = system::vmag(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_341(int iParam0)//Position - 0x1023F
{
	int iVar0;
	
	if (func_342(iParam0))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			return unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_342(int iParam0)//Position - 0x10273
{
	int iVar0;
	
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			iVar0 = unk_0x25D049AAC4603E65(iParam0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (unk_0x0C88267282FD588F(iVar0, 2056,204f, 2954,807f, -70,69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_343(int iParam0)//Position - 0x102CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == func_87())
	{
	}
	if (func_365(iParam0))
	{
		iVar0 = func_364(iParam0);
		if (iVar0 != func_87())
		{
			if (!func_363(iVar0))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_644[iVar0 /*3*/][1]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_644[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2422736[func_364(iParam0) /*420*/].f_324.f_5;
				}
			}
			else
			{
				iVar1 = func_359(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1669535.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_358(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_293))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_293, 0);
		}
	}
	else if (func_357(iParam0) && !func_356(iParam0))
	{
		iVar2 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar2 != func_87())
		{
			iVar3 = func_359(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1669535.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_355(iParam0) && !func_354(iParam0))
	{
		if (func_366(iParam0) && func_353())
		{
			return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
		}
		iVar4 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar4 != func_87())
		{
			if (func_352(iVar4))
			{
				iVar5 = func_348(iVar4);
				if (iVar5 != -1)
				{
					return Global_1669535.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_347(iParam0))
	{
		iVar6 = func_346(iParam0);
		if (iVar6 != func_87())
		{
			if (!func_345(iVar6))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_741[iVar6]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_741[iVar6], 0);
				}
				else
				{
					return Global_2422736[func_346(iParam0) /*420*/].f_324.f_14;
				}
			}
			else
			{
				iVar7 = func_348(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1669535.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_344(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_295))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_295, 0);
		}
	}
	return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
}

int func_344(int iParam0)//Position - 0x10543
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_345(int iParam0)//Position - 0x1058A
{
	if (iParam0 != func_87())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x105B2
{
	if (iParam0 == func_87())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_347(int iParam0)//Position - 0x105D6
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_87())
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x10636
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return -1;
	}
	iVar0 = func_351(iParam0);
	if (!iVar0 == 0)
	{
		return func_349(iVar0);
	}
	return -1;
}

int func_349(int iParam0)//Position - 0x10665
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_159(iVar0) == 9)
		{
			if (func_350(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_350(int iParam0)//Position - 0x1069C
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x10708
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_248;
}

int func_352(int iParam0)//Position - 0x1072B
{
	if (iParam0 != func_87())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

int func_353()//Position - 0x10750
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 13) || Global_1669535.f_1815)
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)//Position - 0x1077A
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_355(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)//Position - 0x107B3
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x107FA
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_357(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x10833
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)//Position - 0x10879
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x108BF
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return -1;
	}
	iVar0 = func_362(iParam0);
	if (!iVar0 == 0)
	{
		return func_360(iVar0);
	}
	return -1;
}

int func_360(int iParam0)//Position - 0x108EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_361(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_361(int iParam0)//Position - 0x1091A
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case 79:
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_362(int iParam0)//Position - 0x10AB4
{
	if (iParam0 == func_87())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_363(int iParam0)//Position - 0x10ADA
{
	if (iParam0 != func_87())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

int func_364(int iParam0)//Position - 0x10B00
{
	if (iParam0 == func_87())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_365(int iParam0)//Position - 0x10B24
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_87())
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x10B83
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_13(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

bool func_367(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x10BE9
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_368()//Position - 0x10C30
{
	if (func_295(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(iLocal_102, 2))
		{
			unk_0x872F1C1F8587CCC7(&iLocal_102, 2);
			return 1;
		}
	}
	else if (unk_0xC80D31E4B587871C(iLocal_102, 2))
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_102, 2);
		return 1;
	}
	return 0;
}

int func_369(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10C72
{
	int iVar0;
	
	iVar0 = -1;
	if (func_383() < 10)
	{
		iVar0 = func_382();
		func_370(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_370(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0x10C9F
{
	func_371(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_371(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x10CB9
{
	struct<12> Var0;
	
	if (func_379(unk_0x9EB17624F44A8DA4()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_378(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_373(Var0))
		{
			Global_2405047.f_44.f_64 = func_339(unk_0x9EB17624F44A8DA4());
			func_372(Var0, iParam4);
		}
	}
}

void func_372(struct<12> Param0, int iParam1)//Position - 0x10D2F
{
	Global_2405047.f_361[iParam1 /*12*/] = { Param0 };
	Global_2405047.f_361[iParam1 /*12*/].f_9 = 1;
}

int func_373(struct<12> Param0)//Position - 0x10D58
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405047.f_44[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_374(Global_2405047.f_44[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_374(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x10DB8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_377(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_375(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_377(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_375(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (system::vmag(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_375(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x10EF1
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0,7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_376(vParam0, vParam1, vVar0, vVar1);
}

int func_376(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x10F35
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_377(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x10F8C
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((system::vmag(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0, var uParam1)//Position - 0x10FB7
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_379(int iParam0)//Position - 0x1104E
{
	if (((func_338(iParam0, 1) || func_381(iParam0)) || func_95(iParam0, 0)) || func_380(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)//Position - 0x1108A
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

int func_381(int iParam0)//Position - 0x110AD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

int func_382()//Position - 0x110CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_383()//Position - 0x11100
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_384()//Position - 0x11133
{
	if (!func_142())
	{
		return;
	}
	if (!unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == Global_1312576.f_9)
	{
		return;
	}
	func_138();
}

void func_385()//Position - 0x11160
{
	Global_1665283 = 1;
	if (!unk_0xC80D31E4B587871C(Global_2520777, 0))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 0);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 0);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 1))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 1);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 1);
	}
	if (!unk_0xC80D31E4B587871C(Global_2520777, 5))
	{
		unk_0x872F1C1F8587CCC7(&Global_2520777, 5);
		unk_0x872F1C1F8587CCC7(&Global_1665284, 5);
	}
	if (unk_0x546F10CBA6C484DA(-355737150))
	{
		unk_0xB94AAB49E0BB01DB(-355737150, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-580979506))
	{
		unk_0xB94AAB49E0BB01DB(-580979506, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1426452475))
	{
		unk_0xB94AAB49E0BB01DB(-1426452475, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(745417724))
	{
		unk_0xB94AAB49E0BB01DB(745417724, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1305304906))
	{
		unk_0xB94AAB49E0BB01DB(-1305304906, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-1543175077))
	{
		unk_0xB94AAB49E0BB01DB(-1543175077, 0, 0, 0);
	}
	if (unk_0x546F10CBA6C484DA(-811770997))
	{
		unk_0xB94AAB49E0BB01DB(-811770997, 0, 0, 0);
	}
}

void func_386()//Position - 0x11272
{
	char* sVar0;
	
	if (!unk_0xC80D31E4B587871C(iLocal_102, 5) && !unk_0x2918F48A30D03841())
	{
		if (Local_137.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_42(63, sVar0, "CPC_START", func_55(), -1, func_55());
		unk_0xE56ECFD267E53FC5();
		unk_0x872F1C1F8587CCC7(&iLocal_102, 5);
	}
}

void func_387(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x112C8
{
	bool bVar0;
	
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x1B5A255BF0D63005("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_95(unk_0x9EB17624F44A8DA4(), 0) && func_91(unk_0x9EB17624F44A8DA4()));
	if (bParam6)
	{
		func_404(21, 1);
	}
	else
	{
		func_403(iParam0, -1);
		if (func_7(unk_0x9EB17624F44A8DA4()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_402(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_7(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 5);
		}
		if ((func_316() && !func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 4);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 20);
		if (func_401(iParam0))
		{
			func_400();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_397(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x94BD6F0436473406(fParam2);
			if (iParam0 == 146)
			{
				unk_0xC0EBC1452FCAB15C(0);
				unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
				unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			}
		}
		if (func_395(iParam0))
		{
			unk_0xC0EBC1452FCAB15C(0);
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_393(1);
				if (func_268(0))
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_391(1);
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_390();
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_388(iParam0))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_388(int iParam0)//Position - 0x11492
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_389())
	{
		return 1;
	}
	return 0;
}

int func_389()//Position - 0x114E7
{
	switch (func_284())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_390()//Position - 0x11515
{
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4694), 0);
}

void func_391(bool bParam0)//Position - 0x11529
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92885.f_8 = 1;
	}
	else
	{
		Global_92885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_392(iVar0);
		iVar0++;
	}
}

void func_392(int iParam0)//Position - 0x11560
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_393(int iParam0)//Position - 0x1157A
{
	if (func_394() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_394()//Position - 0x115AF
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x115F5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_396(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_396(int iParam0)//Position - 0x11633
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

void func_397(float fParam0)//Position - 0x11659
{
	float fVar0;
	
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == func_398())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && unk_0xE97272C977DEADD3(fVar0) > 0,001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = unk_0xBBA15366508D1BDE();
}

int func_398()//Position - 0x116C5
{
	switch (func_399())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_399()//Position - 0x116F9
{
	return Global_25233;
}

void func_400()//Position - 0x11704
{
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_215 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4529), 1);
}

int func_401(int iParam0)//Position - 0x11726
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_402(int iParam0)//Position - 0x11740
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/] = iParam0;
}

void func_403(int iParam0, int iParam1)//Position - 0x11755
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_461(0) || func_461(func_460(iVar0)))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 2);
		}
	}
}

void func_404(int iParam0, bool bParam1)//Position - 0x117BB
{
	if (bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223, iParam0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_223), iParam0);
	}
}

void func_405()//Position - 0x1181E
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	vector3 vVar10;
	float fVar11;
	
	if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if ((!func_281() && !func_421(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1)) && !func_420(unk_0x9EB17624F44A8DA4()))
		{
			fVar3 = 2,147484E+09f;
			iVar4 = -1;
			vVar6 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			bVar7 = unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0);
			bVar8 = func_418();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar9 = Local_137.f_729[iVar2 /*2*/].f_1;
				if (unk_0x918CA1BFFAA03556(uVar9) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uVar9), 0))
				{
					if (!bVar8)
					{
						if (bVar7 && unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0) == unk_0xF32FBF2453AC1753(uVar9))
						{
							func_306(1);
						}
					}
					if (func_30(iVar2, &vVar0, &uVar1))
					{
						vVar10 = { unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(uVar9), 1) };
						if (system::vdist(vVar10, vVar0) <= 10f)
						{
							if (func_417(vVar10))
							{
								unk_0x872F1C1F8587CCC7(&uVar5, iVar2);
							}
							if (func_415(vVar10, vVar6))
							{
								if (!func_413(vVar0, 100f))
								{
									fVar11 = system::vdist(vVar10, vVar6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_7 = uVar5;
			if ((unk_0x6B36F1C775AE0F99(unk_0xFC1458A37D98B502()) || (unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502()) && !unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))) || Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2,147484E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_30(iVar4, &vVar0, &uVar1))
					{
						iLocal_123 = 1;
						func_412(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_411(vVar0, 1, 0);
						func_407(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_406();
			}
		}
		else
		{
			func_406();
		}
	}
}

void func_406()//Position - 0x11A2C
{
	if (iLocal_123)
	{
		func_150();
		func_148();
		iLocal_123 = 0;
	}
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x11A46
{
	if (Global_2436181.f_1777.f_690.f_16 != func_87())
	{
		if (unk_0xC80D31E4B587871C(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_408())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = unk_0xBBA15366508D1BDE();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_408()//Position - 0x11AE5
{
	if (((func_228(unk_0x9EB17624F44A8DA4()) == 229 || func_228(unk_0x9EB17624F44A8DA4()) == 191) || func_410()) || func_409())
	{
		return 0;
	}
	return 1;
}

bool func_409()//Position - 0x11B25
{
	return Global_1574307;
}

int func_410()//Position - 0x11B31
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_411(vector3 vParam0, int iParam1, int iParam2)//Position - 0x11B46
{
	Global_2405047.f_44.f_49 = { vParam0 };
	Global_2405047.f_44.f_52 = iParam1;
	Global_2405047.f_44.f_53 = iParam2;
}

void func_412(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x11B70
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x8F05914DD835E69F(Global_2413426.f_6))
	{
		if (!Global_2413426.f_6 == unk_0xBBA15366508D1BDE())
		{
			return;
		}
	}
	else
	{
		Global_2413426.f_6 = unk_0xBBA15366508D1BDE();
	}
	Var0.f_6 = Global_2413426.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_379(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413426 = { Var0 };
}

bool func_413(vector3 vParam0, float fParam1)//Position - 0x11C7E
{
	return func_414(vParam0, fParam1, unk_0x9EB17624F44A8DA4(), 0, 0);
}

int func_414(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x11C96
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (Global_2416800.f_261[iVar0])
					{
						if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_29(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416800.f_261[iVar0])
				{
					if (system::vdist(Global_2416800.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(iVar1, 0, 1))
				{
					if (system::vdist(func_29(iVar1), vParam0) < 1f)
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

int func_415(vector3 vParam0, vector3 vParam1)//Position - 0x11DB3
{
	vector3 vVar0;
	
	if (Local_137.f_8 == 3)
	{
		vVar0 = { func_416(Local_137.f_712) };
		if (system::vdist(vParam1, vVar0) < 3500f)
		{
			if (system::vdist(vParam0, vVar0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_416(int iParam0)//Position - 0x11E01
{
	switch (iParam0)
	{
		case 0:
			return 1710,367f, -464,7253f, 169,8001f;
		
		case 1:
			return -966,3996f, -973,0624f, 2,8632f;
		
		case 2:
			return -1347,06f, 4123,072f, 62,2841f;
		
		case 3:
			return 1941,779f, 3847,167f, 34,3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_417(vector3 vParam0)//Position - 0x11E73
{
	vector3 vVar0;
	
	if (Local_137.f_8 == 3)
	{
		vVar0 = { func_416(Local_137.f_712) };
		if (system::vdist(vParam0, vVar0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_418()//Position - 0x11EAC
{
	if (((((func_419(unk_0x9EB17624F44A8DA4()) || func_316()) || func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21)) || func_7(unk_0x9EB17624F44A8DA4())) || func_6(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x11F04
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x11F2A
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x11F69
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_424(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_158(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_357(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_422(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_355(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_347(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x1202F
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)//Position - 0x12075
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)//Position - 0x120BB
{
	if (iParam0 != func_87())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_159(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_425(var uParam0, char* sParam1)//Position - 0x12101
{
	char* sVar0;
	
	if (func_280(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_225(sParam1))
	{
		sVar0 = sParam1;
	}
	func_130(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_426(int iParam0)//Position - 0x12140
{
	char* sVar0;
	
	sVar0 = unk_0x436287B7DB306165();
	return "HUD_STARTING";
	if (unk_0x74C475EB8E73D398(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x74C475EB8E73D398(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_427(int iParam0, int iParam1)//Position - 0x12349
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_428(int iParam0)//Position - 0x1235F
{
	if (IntToFloat(iParam0) < unk_0x46C19C2753391FBF())
	{
		Global_2512808.f_4693 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xC80D31E4B587871C(Global_2512808.f_4693, 1))
		{
			unk_0x4AFBCBFDE748D4E0(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2512808.f_4693 = 0;
			unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4693), 1);
		}
	}
}

int func_429(var uParam0, bool bParam1, bool bParam2)//Position - 0x123B6
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0);
		}
		else
		{
			return unk_0x38F6270C9AE5FE40(unk_0xEBD55014C579F626(), *uParam0);
		}
	}
	return unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0);
}

void func_430(bool bParam0)//Position - 0x123FD
{
	int iVar0;
	vector3 vVar1;
	
	if (func_32())
	{
		if (func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && unk_0x918CA1BFFAA03556(Local_137.f_729[iVar0 /*2*/].f_1)) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_137.f_729[iVar0 /*2*/].f_1), 0)) && unk_0x8EE3A848975DDF21(unk_0xF32FBF2453AC1753(Local_137.f_729[iVar0 /*2*/].f_1), -1, 0))
				{
					if (!unk_0xA6DECE14FC9A8C51(iLocal_131[iVar0]))
					{
						iLocal_131[iVar0] = unk_0xCA43F0FC44D9B846(unk_0x29AB7D6D0DE18055(Local_137.f_729[iVar0 /*2*/].f_1));
						unk_0xF27F72CA15E148EE(iLocal_131[iVar0], 9);
						unk_0x62BD54E491535B76(iLocal_131[iVar0], "AMCH_AC");
						unk_0x4B4040A0EC7DBA81(iLocal_131[iVar0], func_431(iVar0));
						func_333(&(iLocal_131[iVar0]), 9);
					}
					else
					{
						vVar1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
						if (system::vdist(vVar1, unk_0xB3328BA8976B416C(unk_0xF32FBF2453AC1753(Local_137.f_729[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x9C27373CC69ECF87(iLocal_131[iVar0], 1);
						}
						else
						{
							unk_0x9C27373CC69ECF87(iLocal_131[iVar0], 0);
						}
					}
				}
				else if (unk_0xA6DECE14FC9A8C51(iLocal_131[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(iLocal_131[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_431(int iParam0)//Position - 0x1254D
{
	switch (Local_137.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_432(int iParam0)//Position - 0x1257C
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0x2918F48A30D03841())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_435("CPC_PASSIVE", 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_435("CPC_NOAIR", 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if ((!unk_0x0F30C1F1717A6437() && !unk_0xF491DD47B88AA84E()) && func_32())
					{
						func_435("AMCH_AIRAV", 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_435("AMCH_BLOW", 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 4:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437() && !func_434(63))
					{
						if (Local_137.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_435(sVar0, 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 5:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (((!unk_0x0F30C1F1717A6437() && !func_434(63)) && !unk_0xF491DD47B88AA84E()) && unk_0xC80D31E4B587871C(iLocal_121, 4))
					{
						if (Local_137.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_435(sVar1, 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 6:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (((!unk_0x0F30C1F1717A6437() && !func_434(63)) && !unk_0xF491DD47B88AA84E()) && unk_0xC80D31E4B587871C(iLocal_121, 5))
					{
						if (Local_137.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_433(sVar2, func_145(), 30000);
						func_154(1);
						unk_0x4AFBCBFDE748D4E0(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			
			case 7:
				if (!unk_0xC80D31E4B587871C(iLocal_121, iParam0))
				{
					if (!unk_0x0F30C1F1717A6437())
					{
						func_435("CPC_PASSIV1", 30000);
						func_154(1);
						unk_0x872F1C1F8587CCC7(&iLocal_121, iParam0);
					}
				}
				break;
			}
	}
}

void func_433(char* sParam0, char* sParam1, int iParam2)//Position - 0x12803
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam2);
}

bool func_434(int iParam0)//Position - 0x12820
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_435(char* sParam0, int iParam1)//Position - 0x12837
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_436(int iParam0)//Position - 0x1284E
{
	Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_3 = iParam0;
}

void func_437(bool bParam0)//Position - 0x12863
{
	if (bParam0)
	{
		unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 4);
	}
}

int func_438()//Position - 0x12897
{
	if (func_459(unk_0x9EB17624F44A8DA4(), 29))
	{
		return 0;
	}
	if (func_326(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if (unk_0xB01117EF93F91860())
	{
		return 0;
	}
	if (unk_0x78E929955680CA05())
	{
		return 0;
	}
	if (func_310(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_458())
	{
		return 0;
	}
	if (func_457(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_456())
	{
		return 0;
	}
	if (func_449(unk_0x9EB17624F44A8DA4()) == 3)
	{
		return 0;
	}
	if (func_448(func_178()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_312(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_445())
	{
		return 0;
	}
	if (func_326(unk_0x9EB17624F44A8DA4(), 0) || func_326(unk_0x9EB17624F44A8DA4(), 3))
	{
		return 0;
	}
	if ((func_326(unk_0x9EB17624F44A8DA4(), 12) || func_326(unk_0x9EB17624F44A8DA4(), 14)) || func_326(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 0;
	}
	if (func_421(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_444(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_443())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_380(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_442())
	{
		return 0;
	}
	if (func_440(unk_0x9EB17624F44A8DA4()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_357(unk_0x9EB17624F44A8DA4()) || func_365(unk_0x9EB17624F44A8DA4())) || func_422(unk_0x9EB17624F44A8DA4())) || func_347(unk_0x9EB17624F44A8DA4())) || func_355(unk_0x9EB17624F44A8DA4())) || func_439())
	{
		return 0;
	}
	return 1;
}

var func_439()//Position - 0x12A78
{
	return Global_1669535.f_28;
}

int func_440(int iParam0)//Position - 0x12A86
{
	if (func_441(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)//Position - 0x12AA8
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_442()//Position - 0x12AD7
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_443()//Position - 0x12AEF
{
	return Global_92885.f_316 > 0;
}

bool func_444(int iParam0)//Position - 0x12B00
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

int func_445()//Position - 0x12B1C
{
	if (func_446() == 0)
	{
		return 1;
	}
	return 0;
}

int func_446()//Position - 0x12B31
{
	return Global_1312466.f_18;
}

bool func_447()//Position - 0x12B3F
{
	return Global_1312854;
}

int func_448(int iParam0)//Position - 0x12B4B
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x12B8F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_381(iParam0) && !func_7(iParam0)) && !unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_89(iParam0);
	uVar3 = func_316();
	uVar4 = func_450();
	if ((bVar1 && (func_419(iParam0) || func_396(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_91(iParam0)) && !func_160(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

int func_450()//Position - 0x12C4D
{
	if ((func_90(unk_0x9EB17624F44A8DA4(), 21) || func_90(unk_0x9EB17624F44A8DA4(), 22)) || func_454())
	{
		return 1;
	}
	if (func_452())
	{
		func_451(22);
		return 1;
	}
	return 0;
}

void func_451(int iParam0)//Position - 0x12C92
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_452()//Position - 0x12CAF
{
	if (func_95(unk_0x9EB17624F44A8DA4(), 0))
	{
		if ((func_316() && !func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		else
		{
			func_453(27);
		}
	}
	return 0;
}

void func_453(int iParam0)//Position - 0x12CF2
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_454()//Position - 0x12D0F
{
	return func_455(306, -1);
}

int func_455(int iParam0, int iParam1)//Position - 0x12D1F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_212(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_456()//Position - 0x12D4B
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

int func_457(int iParam0)//Position - 0x12D60
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_458()//Position - 0x12D94
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

bool func_459(int iParam0, int iParam1)//Position - 0x12DB0
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_460(int iParam0)//Position - 0x12DCB
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 14;
}

bool func_461(int iParam0)//Position - 0x12E4E
{
	int iVar0;
	
	iVar0 = func_216(2469, -1, 0);
	return unk_0xC80D31E4B587871C(iVar0, iParam0);
}

void func_462()//Position - 0x12E69
{
	if (Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 != 0)
	{
		Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4 = 0;
	}
}

bool func_463(int iParam0)//Position - 0x12E8C
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		if ((func_316() && !func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21))
		{
			return 1;
		}
		if (func_36(&(Global_1574409.f_13)))
		{
			if (!func_1(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_35(&(Global_1574409.f_13));
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9);
}

bool func_464(int iParam0)//Position - 0x12F1E
{
	return func_85(iParam0, 0);
}

void func_465()//Position - 0x12F2D
{
	func_466(&(Local_158.f_532), &Local_158, 26, &(Local_158.f_1), &(Local_158.f_115), -1, 0);
}

void func_466(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x12F50
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_577(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_575() || iParam2 == 27)
	{
		if (func_532(uParam1, iParam2, uParam3, Global_1574123, 0, func_578()))
		{
			func_531(1);
			if ((!func_530() && !func_529()) || unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
			{
				if (func_528())
				{
					func_527();
				}
				else
				{
					unk_0x73509F6FDA1DB386(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_526(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_525(uParam1);
							if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
							{
								unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_13(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
									if (!func_85(iVar3, 0))
									{
										if ((func_524(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_523(iVar3))
										{
											iVar9 = iVar3;
											if (func_74(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_520(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_92(unk_0x9EB17624F44A8DA4(), 0) && func_228(unk_0x9EB17624F44A8DA4()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_519())
							{
								if (func_13(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar3 = unk_0xF6A72924028F588B(iVar17);
								}
								else
								{
									iVar3 = func_87();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_518(iVar3) && func_515(iVar3, iParam2)) && func_13(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_510(iVar3) };
								if (iVar3 == unk_0x9EB17624F44A8DA4())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xDE2D3B9654C31EB3(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_124(iVar3) };
								iVar5 = func_504(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF85532D53BDB3017(iVar5);
								}
								Global_1574123++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_519())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_499(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_498(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_497(iVar3, 0);
								if (bVar2)
								{
									if (func_73(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_496(iParam5))
								{
									func_495(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_495(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0x872F1C1F8587CCC7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF6A72924028F588B(iVar17);
							if (func_13(iVar3, 0, 1) && !unk_0xC80D31E4B587871C(iVar14, iVar3))
							{
								iVar3 = unk_0xF6A72924028F588B(iVar17);
							}
							else
							{
								iVar3 = func_87();
							}
							if (func_518(iVar3))
							{
								if (func_13(unk_0xF6A72924028F588B(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_510(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_124(iVar3) };
									iVar5 = func_504(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF85532D53BDB3017(iVar5);
									}
									Global_1574123++;
									iVar16 = func_497(iVar3, 1);
									if (bVar2)
									{
										if (func_73(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_479(iVar3, unk_0xDE2D3B9654C31EB3(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							func_476(uParam3, uParam1);
						}
						func_35(&(uParam3->f_21));
						func_475();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 7))
						{
							func_474(uParam3, uParam1);
							func_473(uParam1, 0, 1);
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 7);
						}
						func_474(uParam3, uParam1);
						if (!unk_0xC80D31E4B587871C(uParam3->f_33, 11))
						{
							unk_0x872F1C1F8587CCC7(&(uParam3->f_33), 11);
						}
						if (func_469(uParam3))
						{
							Global_1574308 = 1;
						}
						func_467(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x34D11AB5BA7922C2(*uParam1))
					{
						unk_0x5A66A86A47AC3B57(7);
						unk_0x0EB9853DF8BC0D87(*uParam1, 0,122f, 0,3f, 0,28f, 0,6f, 255, 255, 255, 255, 0);
						unk_0x5A66A86A47AC3B57(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_475();
			func_526(0);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 7))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 10))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x189EEBAACC5D380A();
}

void func_467(var uParam0)//Position - 0x1359D
{
	if (!func_36(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_35(&(uParam0->f_21));
		func_468(0);
	}
}

void func_468(bool bParam0)//Position - 0x135D9
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_469(var uParam0)//Position - 0x1361F
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF6A72924028F588B(uParam0->f_37);
	if (iVar3 != func_87() && func_13(iVar3, 0, 1))
	{
		Var2 = { func_124(iVar3) };
		iVar1 = func_472(uParam0, uParam0->f_37);
		if (func_471(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_470(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_470(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xA72EA6C94174D289(&Var2))
						{
							iVar4 = 1;
							func_470(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_470(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x034854587B6BF3E9(&Var2))
					{
						if (!unk_0xAE37702876F3FA4D(&Var2))
						{
							iVar4 = 1;
							func_470(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xAE37702876F3FA4D(&Var2))
					{
						iVar4 = 1;
						func_470(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_470(var uParam0, int iParam1, int iParam2)//Position - 0x1374C
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_471(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1375E
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

var func_472(var uParam0, int iParam1)//Position - 0x1376E
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_473(var uParam0, bool bParam1, int iParam2)//Position - 0x1377E
{
	if (unk_0x008F3E3CC076EA0E(*uParam0, "COLLAPSE"))
	{
		unk_0x1869584A8A72FEDD(bParam1);
		unk_0x271AA5469AF471B3();
	}
	if (iParam2 == 1)
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x271AA5469AF471B3();
		}
	}
}

void func_474(var uParam0, var uParam1)//Position - 0x137B6
{
	if (!unk_0xC80D31E4B587871C(uParam0->f_33, 10))
	{
		unk_0x008F3E3CC076EA0E(*uParam1, "SET_HIGHLIGHT");
		unk_0xD07D5CD276368D36(uParam0->f_35);
		unk_0x271AA5469AF471B3();
		unk_0x872F1C1F8587CCC7(&(uParam0->f_33), 10);
	}
}

void func_475()//Position - 0x137EE
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_476(var uParam0, var uParam1)//Position - 0x13803
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (iVar2 != func_87())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_478(uParam0->f_38[iVar0 /*2*/], 0);
					func_477(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_477(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x13876
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		if (unk_0x008F3E3CC076EA0E(*uParam0, "SET_ICON"))
		{
			unk_0xD07D5CD276368D36(iParam1);
			unk_0xD07D5CD276368D36(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD07D5CD276368D36(iParam3);
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

int func_478(int iParam0, bool bParam1)//Position - 0x138B3
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_479(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x138E7
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_494() && iParam4 < func_493())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x008F3E3CC076EA0E(*uParam2, sVar1))
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (unk_0xC80D31E4B587871C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_492("");
			}
			else
			{
				unk_0xD07D5CD276368D36(iParam10);
			}
			func_492(sParam1);
			unk_0xD07D5CD276368D36(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_492("");
			}
			else
			{
				unk_0xD07D5CD276368D36(65);
			}
			unk_0xD07D5CD276368D36(-1);
			func_492("");
			if (uParam3->f_108 == 6)
			{
				func_492("");
			}
			else
			{
				func_492(&sParam5);
			}
			func_484(uParam3, iParam0);
			unk_0x81D71E37E95798C1(sParam9);
			unk_0x81D71E37E95798C1(sParam9);
			if (func_483(uParam3))
			{
				func_482("DPAD_FRIEND");
			}
			else if (func_481(uParam3))
			{
				func_482("DPAD_FRIEND");
			}
			else if (func_480(uParam3))
			{
				func_482("DPAD_CREW");
			}
			else
			{
				func_482("");
			}
			unk_0x271AA5469AF471B3();
		}
	}
}

bool func_480(var uParam0)//Position - 0x13A11
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 6);
}

bool func_481(var uParam0)//Position - 0x13A22
{
	return unk_0xC80D31E4B587871C(uParam0->f_33, 5);
}

void func_482(char* sParam0)//Position - 0x13A33
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

int func_483(var uParam0)//Position - 0x13A45
{
	if (func_481(uParam0) && func_480(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_484(var uParam0, int iParam1)//Position - 0x13A66
{
	if (func_491(iParam1))
	{
		unk_0xD07D5CD276368D36(121);
	}
	else if (func_488(iParam1))
	{
		unk_0xD07D5CD276368D36(122);
	}
	else if (((unk_0xC80D31E4B587871C(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xC80D31E4B587871C(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		unk_0xD07D5CD276368D36(123);
	}
	else
	{
		if (func_485())
		{
			uParam0->f_36 = 0;
		}
		unk_0x1869584A8A72FEDD(uParam0->f_36);
	}
}

int func_485()//Position - 0x13AE7
{
	if (unk_0x4916190900E76373())
	{
		if (func_486() || func_77())
		{
			return 1;
		}
	}
	return 0;
}

int func_486()//Position - 0x13B0C
{
	if (unk_0x4916190900E76373())
	{
		return func_77();
	}
	return func_487(Global_4456448.f_122309);
}

int func_487(int iParam0)//Position - 0x13B30
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_488(int iParam0)//Position - 0x13B6A
{
	if ((func_13(iParam0, 0, 1) && func_489()) && func_172(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_489()//Position - 0x13B97
{
	if (func_381(unk_0x9EB17624F44A8DA4()) || func_490())
	{
		return 0;
	}
	return 1;
}

int func_490()//Position - 0x13BB9
{
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x13BF7
{
	if (func_485())
	{
		if (func_13(iParam0, 0, 1))
		{
			return func_74(iParam0);
		}
	}
	if ((func_13(iParam0, 0, 1) && func_489()) && func_174(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_492(char* sParam0)//Position - 0x13C3F
{
	unk_0x8686005F83E832AE(sParam0);
}

int func_493()//Position - 0x13C4D
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_494()//Position - 0x13C69
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_495(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x13C81
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_494() && iParam3 < func_493())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x34D11AB5BA7922C2(*uParam1))
		{
			if (unk_0x008F3E3CC076EA0E(*uParam1, sVar1))
			{
				unk_0xD07D5CD276368D36(iParam3);
				if (unk_0xC80D31E4B587871C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_492("");
				}
				else
				{
					unk_0xD07D5CD276368D36(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					func_482(sParam16);
				}
				else
				{
					func_492(&(uParam2->f_1));
				}
				unk_0xD07D5CD276368D36(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_492("");
				}
				else
				{
					unk_0xD07D5CD276368D36(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD07D5CD276368D36(iVar0);
				}
				else
				{
					unk_0xD07D5CD276368D36(-1);
				}
				if (func_519())
				{
					func_492("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 5 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_ONE_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 7 && !unk_0xAB019B170BF1309C(sParam16))
				{
					unk_0x7E099EB35339C80D("FM_AE_TWO_INT");
					unk_0xA6D2B267C377D7B2(sParam16);
					unk_0x6223D539BCD39E76(iParam17);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 8 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
				{
					unk_0x7E099EB35339C80D("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6223D539BCD39E76(iParam10);
					}
					unk_0xA6D2B267C377D7B2(&(uParam2->f_104));
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x7E099EB35339C80D("FM_AE_CASH");
					unk_0xC4DA7D522991B465(iParam10, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7E099EB35339C80D("FM_AE_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
					else
					{
						unk_0x7E099EB35339C80D("FM_NG_CASH");
						unk_0xC4DA7D522991B465(iParam10, 1);
						unk_0x9748595E4799A2CF();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xAB019B170BF1309C(&(uParam2->f_104)))
					{
						func_482(&(uParam2->f_104));
					}
					else
					{
						func_492("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x7E099EB35339C80D("STRING");
					unk_0xFD1DB5DD208735A3(iParam14, 6);
					unk_0x9748595E4799A2CF();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7E099EB35339C80D("NUMBER");
					unk_0x32AD2F36F6EF5A1F(fParam13, 1);
					unk_0x9748595E4799A2CF();
				}
				else if (iParam10 != -1)
				{
					unk_0xD07D5CD276368D36(iParam10);
				}
				else
				{
					func_492("");
				}
				if (uParam2->f_108 == 6)
				{
					func_492("");
				}
				else
				{
					func_492(&sParam4);
				}
				func_484(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xAB019B170BF1309C(sParam8))
				{
					func_492("");
					func_492("");
				}
				else
				{
					unk_0x81D71E37E95798C1(sParam8);
					unk_0x81D71E37E95798C1(sParam8);
				}
				if (func_483(uParam2))
				{
					func_482("DPAD_FRIEND");
				}
				else if (func_481(uParam2))
				{
					func_482("DPAD_FRIEND");
				}
				else if (func_480(uParam2))
				{
					func_482("DPAD_CREW");
				}
				else
				{
					func_482("");
				}
				unk_0x271AA5469AF471B3();
			}
		}
	}
}

int func_496(int iParam0)//Position - 0x13FDB
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_497(int iParam0, bool bParam1)//Position - 0x13FFF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_381(iParam0)) && !func_89(iParam0))
	{
		iVar0 = func_55();
	}
	iVar1 = func_71(iParam0);
	if (!iVar1 == -1)
	{
		return func_69(iVar1);
	}
	return iVar0;
}

char* func_498(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1404A
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_499(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x141D7
{
	if (func_503(iParam3))
	{
		*fParam1 = (func_500(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_496(iParam3))
	{
		*fParam1 = (func_500(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_500(int iParam0, int iParam1)//Position - 0x14227
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_502(system::to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x485A7F3B0AD1A79D())
			{
				return system::to_float(iParam1);
			}
			else
			{
				return func_501(system::to_float(iParam1));
			}
			break;
	}
	return system::to_float(iParam1);
}

float func_501(float fParam0)//Position - 0x142CA
{
	return (fParam0 / 1,609344f);
}

float func_502(float fParam0)//Position - 0x142DA
{
	return (fParam0 / 0,3048f);
}

int func_503(int iParam0)//Position - 0x142EA
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_504(int iParam0)//Position - 0x14346
{
	int iVar0;
	
	iVar0 = func_507(iParam0);
	if (iVar0 == -1)
	{
		func_505(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_505(int iParam0, bool bParam1)//Position - 0x1437C
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_507(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_506(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_506(int iParam0)//Position - 0x143E8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x1441A
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_508(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_508(int iParam0)//Position - 0x14499
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_509(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_509(var uParam0)//Position - 0x1454F
{
	*uParam0 = 0;
	uParam0->f_1 = func_87();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

struct<4> func_510(int iParam0)//Position - 0x1457C
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2492157 = { func_124(iParam0) };
		if (unk_0x177281F5FA205A38())
		{
			if (func_471(Global_2492157))
			{
				if (!unk_0x1E81D00FCDFF4BBE(&Global_2492157))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xCD032B200A8FAC1A(0))
		{
			return Var0;
		}
		if (func_514(&Global_2492157))
		{
			Global_2492087 = { func_512(iParam0) };
			func_511(&Global_2492087, &Var0);
		}
	}
	return Var0;
}

void func_511(var uParam0, char* sParam1)//Position - 0x145FD
{
	unk_0x22889E844C3772CE(uParam0, 35, uParam1);
}

struct<35> func_512(int iParam0)//Position - 0x1460F
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_513(iParam0))
	{
		return Global_1312886[unk_0x9EB17624F44A8DA4() /*35*/];
	}
	Var0 = { func_124(iParam0) };
	unk_0x5CF21D71A8C4CFA6(&Var1, 35, &Var0);
	return Var1;
}

int func_513(int iParam0)//Position - 0x1464B
{
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return 1;
	}
	return 0;
}

int func_514(var uParam0)//Position - 0x14661
{
	if (unk_0x5616476F69B90F14())
	{
		if (unk_0x15DBBAF9E2085C7A() && unk_0xA84F967541249268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_515(int iParam0, int iParam1)//Position - 0x14687
{
	if (iParam1 == 26)
	{
		if ((func_7(iParam0) || func_517(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_516(iParam0))
	{
		return 0;
	}
	if ((!func_524(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_523(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_516(int iParam0)//Position - 0x146F6
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_517(int iParam0)//Position - 0x1470F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10) || unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x1474D
{
	int iVar0;
	
	if (iParam0 == func_87())
	{
		return 0;
	}
	if (func_85(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_519()//Position - 0x14792
{
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_285(unk_0x9EB17624F44A8DA4()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_89(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_228(unk_0x9EB17624F44A8DA4()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x148BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(unk_0xF6A72924028F588B(iVar0), 0, 1))
		{
			iVar1 = unk_0xF6A72924028F588B(iVar0);
			if (!func_85(iVar1, 0))
			{
				if ((func_524(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_523(iVar1))
				{
					if (func_521(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_521(int iParam0, int iParam1, bool bParam2)//Position - 0x14947
{
	if (iParam1 != func_87())
	{
		if (!bParam2)
		{
			if (func_522(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_87())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_522(int iParam0, int iParam1)//Position - 0x14991
{
	if (iParam1 != func_87())
	{
		if (iParam0 != func_87())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_87())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_523(int iParam0)//Position - 0x149D6
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_524(int iParam0)//Position - 0x149EB
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(unk_0x9EB17624F44A8DA4(), 0, 1))
		{
			if (unk_0xEF6677A51D3956A4(iParam0, unk_0x9EB17624F44A8DA4()) || func_228(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_525(var uParam0)//Position - 0x14A2C
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD07D5CD276368D36(0);
		unk_0x271AA5469AF471B3();
	}
}

void func_526(bool bParam0)//Position - 0x14A53
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_527()//Position - 0x14A85
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1))
	{
		if (func_161())
		{
			func_177();
		}
	}
}

int func_528()//Position - 0x14AA7
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 0) && func_161())
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4553, 1) && func_161())
	{
		return 1;
	}
	return 0;
}

int func_529()//Position - 0x14AE8
{
	if (func_161())
	{
		if (func_44(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_530()//Position - 0x14B0F
{
	if (func_161())
	{
		if (func_56(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_531(int iParam0)//Position - 0x14B36
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_532(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x14B64
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_574(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_573();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_572())
		{
			if (func_571() > 0 && Global_1574125)
			{
				unk_0x0467A3C1EFB3B8F0();
				unk_0xA3E8E2D0F73E92C5(fVar4);
				unk_0x553231E7FC3C570D(18);
				if (unk_0xF491DD47B88AA84E())
				{
					unk_0x873070BEE2844FE5();
				}
				unk_0x553231E7FC3C570D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_562())
		{
			func_561(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_4556, 26))
	{
		func_561(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_36(&(uParam2->f_19)))
	{
		if (func_571() == 1)
		{
			func_560(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_561(uParam0, uParam2, 0);
		}
	}
	if (func_36(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF491DD47B88AA84E())
		{
			unk_0x873070BEE2844FE5();
		}
		unk_0x553231E7FC3C570D(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_571() == 0 && !bParam5))
		{
			func_561(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_559();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x0467A3C1EFB3B8F0();
				}
				unk_0x553231E7FC3C570D(18);
			}
			if (!unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_559();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x0467A3C1EFB3B8F0();
					}
					unk_0x553231E7FC3C570D(18);
				}
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (func_560(bVar3, uParam0, 0))
				{
					func_525(uParam0);
					sVar1 = func_557(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_555(iParam1) };
					if (bParam4)
					{
						func_552(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_546(uParam0, func_549(uParam2), func_547(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_538(uParam0, func_540(uParam2), func_539(), -1);
					}
					else if (func_485())
					{
						uParam2->f_34 = Global_1574124;
						func_552(uParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_552(uParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_533(iParam1);
						func_552(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0x872F1C1F8587CCC7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xC80D31E4B587871C(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				unk_0xA3E8E2D0F73E92C5(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						unk_0x0EE72DB1CD8A3B86(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_533(int iParam0)//Position - 0x14E17
{
	int iVar0;
	
	iVar0 = -1;
	if (func_537())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_536(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 20;
			}
			if (func_535(unk_0x9EB17624F44A8DA4()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_534(unk_0x9EB17624F44A8DA4()))
	{
		iVar0 = 2;
	}
	if (func_229())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_534(int iParam0)//Position - 0x14F27
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_535(int iParam0)//Position - 0x14F3C
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_536(int iParam0)//Position - 0x14F51
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_537()//Position - 0x14F66
{
	return Global_4456448.f_1 == 0;
}

void func_538(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x14F76
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_482(sParam1);
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_482("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_539()//Position - 0x14FD5
{
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_540(var uParam0)//Position - 0x1502D
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_228(unk_0x9EB17624F44A8DA4()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_542())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_262(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_262(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_541(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_541(int iParam0)//Position - 0x15459
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_542()//Position - 0x1548B
{
	return (func_545() && func_543(func_544()));
}

int func_543(int iParam0)//Position - 0x154A4
{
	return func_174(iParam0, 1);
}

int func_544()//Position - 0x154B3
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_35;
}

bool func_545()//Position - 0x154CA
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148;
}

void func_546(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x154E0
{
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (unk_0xAB019B170BF1309C(sParam2))
		{
			func_482(sParam1);
		}
		else if (func_285(unk_0x9EB17624F44A8DA4()) == 133)
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT_C");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			unk_0x7E099EB35339C80D("FM_AE_BRACKT");
			unk_0xA6D2B267C377D7B2(sParam1);
			unk_0xA6D2B267C377D7B2(sParam2);
			unk_0x9748595E4799A2CF();
		}
		func_482("");
		if (iParam3 != -1)
		{
			unk_0xD07D5CD276368D36(iParam3);
		}
		unk_0x271AA5469AF471B3();
	}
}

char* func_547(var uParam0)//Position - 0x15567
{
	int iVar0;
	
	iVar0 = func_285(unk_0x9EB17624F44A8DA4());
	if (func_548())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_548()//Position - 0x15712
{
	return Global_1595566;
}

char* func_549(var uParam0)//Position - 0x1571E
{
	int iVar0;
	
	iVar0 = func_285(unk_0x9EB17624F44A8DA4());
	if (func_548())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_551() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_551() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_284())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_550() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_550()//Position - 0x15911
{
	return Global_2512808.f_4780;
}

int func_551()//Position - 0x15920
{
	if (func_285(unk_0x9EB17624F44A8DA4()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_552(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x15943
{
	int iVar0;
	int iVar1;
	
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0x008F3E3CC076EA0E(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_492(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7E099EB35339C80D(sParam1);
			unk_0x6223D539BCD39E76(iParam5);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_482(sParam1);
		}
		if (func_572() && iParam6)
		{
			if (func_554())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7E099EB35339C80D("LBD_DPD_CNT");
			unk_0x6223D539BCD39E76(iVar0);
			unk_0x6223D539BCD39E76(iVar1);
			unk_0x9748595E4799A2CF();
		}
		else
		{
			func_482(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD07D5CD276368D36(iParam4);
			if (func_553(unk_0x9EB17624F44A8DA4()))
			{
				unk_0xD07D5CD276368D36(166);
			}
			else if (func_53())
			{
				unk_0xD07D5CD276368D36(220);
			}
		}
		unk_0x271AA5469AF471B3();
	}
}

int func_553(int iParam0)//Position - 0x15A04
{
	if (func_536(iParam0) || func_535(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_554()//Position - 0x15A26
{
	return Global_1574125;
}

struct<4> func_555(int iParam0)//Position - 0x15A32
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_556(unk_0x9EB17624F44A8DA4()) || func_534(unk_0x9EB17624F44A8DA4()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_485() && unk_0x4916190900E76373())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_556(int iParam0)//Position - 0x15ACD
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_557(int iParam0, char* sParam1, bool bParam2)//Position - 0x15AE2
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_485() || unk_0xAB019B170BF1309C(sParam1)))
	{
		uVar0 = func_558();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xAB019B170BF1309C(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_558()//Position - 0x15C40
{
	if (unk_0x6EFC1E00D9BE5932())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xA5DB684112875CA2())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x20D255A405234ABB())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x1AD32FD15A40AB57())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_559()//Position - 0x15C84
{
	Global_36765 = 1;
}

bool func_560(bool bParam0, var uParam1, bool bParam2)//Position - 0x15C90
{
	if (bParam0)
	{
		*uParam1 = unk_0xD704C81492296A37("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xD704C81492296A37("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xD704C81492296A37("mp_matchmaking_card");
	}
	return unk_0x34D11AB5BA7922C2(*uParam1);
}

void func_561(var uParam0, var uParam1, bool bParam2)//Position - 0x15CD0
{
	unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_475();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_36(&(uParam1->f_19)))
		{
			func_35(&(uParam1->f_19));
		}
	}
	if (unk_0x34D11AB5BA7922C2(*uParam0))
	{
		unk_0xA68F7B004463AB6F(uParam0);
	}
	if (unk_0xC80D31E4B587871C(uParam1->f_33, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_33), 0);
	}
	unk_0xA3E8E2D0F73E92C5(0f);
}

int func_562()//Position - 0x15D36
{
	if (func_570())
	{
		return 0;
	}
	if (func_456())
	{
		return 0;
	}
	if (!func_568())
	{
		return 0;
	}
	if (!func_445())
	{
		return 0;
	}
	if (func_567(8, -1))
	{
		return 0;
	}
	if (func_571() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_281())
	{
		return 0;
	}
	else if (!func_311(unk_0x9EB17624F44A8DA4(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_566(1) || func_564(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (func_83(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_563(0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_563(int iParam0)//Position - 0x15E7E
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_564(bool bParam0)//Position - 0x15E95
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_565(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_565(int iParam0)//Position - 0x15F80
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_566(bool bParam0)//Position - 0x15FDD
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_567(int iParam0, int iParam1)//Position - 0x16006
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

int func_568()//Position - 0x16041
{
	if (func_569())
	{
		return 1;
	}
	if (unk_0x3E9CABD07B829173())
	{
		return 0;
	}
	if (unk_0x2D0EF1D268F33F25() || unk_0x9BB64DDCD9C7B076())
	{
		return 0;
	}
	if (unk_0x0C200A19C058463C())
	{
		return 0;
	}
	return 1;
}

bool func_569()//Position - 0x16080
{
	return Global_1312438;
}

bool func_570()//Position - 0x1608C
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_571()//Position - 0x160A1
{
	return Global_1357530.f_68;
}

int func_572()//Position - 0x160AF
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_573()//Position - 0x160C5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0,6347182f;
	fVar1 = (1f - (1f - unk_0x85D2696CBA462F28()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_574(int iParam0)//Position - 0x160E9
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_575()//Position - 0x16112
{
	if (func_578())
	{
		return 1;
	}
	if (func_6(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_548())
	{
		return 1;
	}
	if (func_381(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_285(unk_0x9EB17624F44A8DA4()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_576(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_576(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_576(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_576(int iParam0)//Position - 0x161ED
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_577(int iParam0)//Position - 0x16205
{
	if ((iParam0 == 27 && func_381(unk_0x9EB17624F44A8DA4())) && !func_89(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_95(unk_0x9EB17624F44A8DA4(), 0) && func_89(unk_0x9EB17624F44A8DA4()))
		{
			return 1;
		}
		if (func_449(unk_0x9EB17624F44A8DA4()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_578()//Position - 0x16269
{
	if (func_579(unk_0x9EB17624F44A8DA4()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_579(int iParam0)//Position - 0x16284
{
	if (unk_0x3A711520F83BAE98())
	{
		if (func_85(iParam0, 0))
		{
			return unk_0xF593490E0BFB2E12(iParam0);
		}
	}
	return 0;
}

void func_580()//Position - 0x162A7
{
	int iVar0;
	
	if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iLocal_106)))
	{
		iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iLocal_106));
		if (unk_0x552F39AE86E07792(iVar0))
		{
			func_581(iVar0, 2);
		}
	}
	iLocal_106++;
	if (iLocal_106 >= unk_0xB72D370CB7ABC3EF())
	{
		iLocal_106 = 0;
	}
}

void func_581(int iParam0, int iParam1)//Position - 0x162F0
{
	bool bVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 0))
	{
		return;
	}
	if (func_36(&(Global_1574409.f_18)))
	{
		return;
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_2, iParam0))
	{
		if (Global_1574409 < iParam1 && unk_0xC80D31E4B587871C(Global_1574409.f_1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 0);
			return;
		}
		if (Global_1574409 != 0)
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 1);
		}
		Global_1574409 = 0;
		Global_1574409.f_2 = 0;
	}
	unk_0x872F1C1F8587CCC7(&(Global_1574409.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_582(iParam0))
	{
		bVar0 = false;
	}
	if (func_85(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574409++;
	}
}

bool func_582(int iParam0)//Position - 0x163BE
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_1, 10);
}

void func_583(int iParam0, int iParam1)//Position - 0x163D7
{
	Local_1504[iParam0 /*5*/] = iParam1;
}

int func_584()//Position - 0x163E8
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2512808.f_4704 = { Var0 };
	iVar1 = 0;
	while (iVar1 < 30)
	{
		Global_2512808.f_4704.f_38[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_158.f_532[iVar2 /*42*/].f_1 = func_87();
		iVar2++;
	}
	return 1;
}

int func_585()//Position - 0x16459
{
	return Local_137;
}

int func_586(int iParam0)//Position - 0x16464
{
	return Local_1504[iParam0 /*5*/];
}

void func_587()//Position - 0x16473
{
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 6))
	{
		func_611();
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 6);
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 7))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 4) || unk_0xC80D31E4B587871C(Global_1574409.f_1, 16))
		{
			if (((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_161()) && func_13(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 7);
				func_155("FME_PASINT", 30000);
				func_154(1);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 17))
		{
			if (func_316() && !func_327())
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 17);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 23))
	{
		if (((((!unk_0x2918F48A30D03841() && !unk_0xC80D31E4B587871C(Global_2512808.f_778, 2)) && func_13(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_68215) && !Global_53084) && !unk_0xF491DD47B88AA84E())
		{
			if (func_609())
			{
				func_155("AMEV_GA_RP", -1);
				if (func_228(unk_0x9EB17624F44A8DA4()) != 200)
				{
					func_154(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 23);
			}
		}
	}
	if (unk_0x0F30C1F1717A6437() && unk_0x8B7838D25C063186() == 15)
	{
		if (func_396(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0x6D93C18E2EF22A46(1344549371))
			{
				unk_0xAC101DB143C83824(1344549371);
			}
		}
		else if (unk_0x6D93C18E2EF22A46(1344549371))
		{
			unk_0x4C5AB0B8B9B71C4B(1344549371);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 9))
	{
		if ((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_161()) && func_13(unk_0x9EB17624F44A8DA4(), 1, 1)) && !func_326(unk_0x9EB17624F44A8DA4(), 21))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 9);
			func_608(0);
			func_155("FME_TBL00", -1);
			func_154(1);
		}
	}
	if (func_381(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if ((func_326(unk_0x9EB17624F44A8DA4(), 21) && unk_0xC80D31E4B587871C(Global_1574409.f_1, 20)) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 19))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 18);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 18))
		{
			if (((((!unk_0x2918F48A30D03841() && !unk_0xF491DD47B88AA84E()) && !func_161()) && func_13(unk_0x9EB17624F44A8DA4(), 1, 1)) && unk_0x9F7B586A14398C40()) && !Global_2512808.f_4789)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 18);
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 19);
				func_155("AMTT_RPAS", -1);
				func_154(1);
			}
		}
	}
	if (((((func_381(unk_0x9EB17624F44A8DA4()) && !func_7(unk_0x9EB17624F44A8DA4())) && func_285(unk_0x9EB17624F44A8DA4()) != 146) && !func_6(unk_0x9EB17624F44A8DA4())) && !func_463(unk_0x9EB17624F44A8DA4())) && !func_598())
	{
		if (func_395(func_285(unk_0x9EB17624F44A8DA4())))
		{
			unk_0x74A0059E573C5694(unk_0x9EB17624F44A8DA4());
		}
		if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 22))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 22);
		}
		if (func_419(unk_0x9EB17624F44A8DA4()) || func_389())
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 10))
			{
				if (func_596(func_285(unk_0x9EB17624F44A8DA4())))
				{
					if (func_268(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_393(1);
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					}
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 10);
			}
		}
		if (func_396(unk_0x9EB17624F44A8DA4()))
		{
			if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 11))
			{
				if (!Global_92885.f_8)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 12);
					func_391(1);
				}
				if (!func_595())
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 13);
					func_390();
				}
				if (!Global_2391045)
				{
					unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 14);
					if (func_268(0) && !Global_2391045)
					{
						unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 9);
					}
					func_393(1);
				}
				unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 11);
			}
		}
		else
		{
			func_593(0);
		}
	}
	else
	{
		func_593(1);
	}
	func_588();
	if (func_388(func_285(unk_0x9EB17624F44A8DA4())) && !unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 21);
	}
	if ((func_316() && !func_327()) || func_326(unk_0x9EB17624F44A8DA4(), 21))
	{
		if (!unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 10))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 10);
	}
}

void func_588()//Position - 0x16993
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_161())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_434(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
				{
					unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 26);
				}
				func_589(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_1574409.f_1, 26))
	{
		func_35(&(Global_1574409.f_22));
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 26);
	}
}

void func_589(int iParam0, int iParam1)//Position - 0x16A36
{
	if (!func_36(&(Global_1574409.f_22)))
	{
		func_2(&(Global_1574409.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574409.f_22), iParam1, 0))
	{
		if (func_571() > 0)
		{
			func_592(iParam0);
			if (func_152("AMEV_LBD_HELP"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			func_35(&(Global_1574409.f_22));
		}
	}
	else
	{
		func_591(0);
		func_590();
	}
}

void func_590()//Position - 0x16A9E
{
	Global_2512808.f_4500 = 0;
}

void func_591(int iParam0)//Position - 0x16AAE
{
	Global_1357530.f_68 = iParam0;
}

void func_592(int iParam0)//Position - 0x16ABE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_1 == iParam0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

void func_593(int iParam0)//Position - 0x16B0A
{
	if ((unk_0xC80D31E4B587871C(Global_1574409.f_1, 11) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 10) && iParam0)) || (unk_0xC80D31E4B587871C(Global_1574409.f_1, 22) && iParam0))
	{
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 12))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 12);
			func_391(0);
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 13);
			func_594();
		}
		if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 14) && !func_95(unk_0x9EB17624F44A8DA4(), 0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 14);
			func_393(0);
		}
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 11);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 10);
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 22);
	}
}

void func_594()//Position - 0x16BE5
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4694), 0);
}

bool func_595()//Position - 0x16BF9
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4694, 0);
}

int func_596(int iParam0)//Position - 0x16C0D
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_396(unk_0x9EB17624F44A8DA4());
		
		case 133:
			return (func_389() || func_597(func_284()));
		
		default:
	}
	return 0;
}

int func_597(int iParam0)//Position - 0x16C7D
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_598()//Position - 0x16CB5
{
	if (((((((((func_607() || func_606()) || func_605()) || func_281()) || (func_604() && !unk_0x4916190900E76373())) || (func_601() && !func_600())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_599() == 2 && !unk_0x4916190900E76373()))
	{
		return 1;
	}
	return 0;
}

int func_599()//Position - 0x16D49
{
	return Global_979886;
}

bool func_600()//Position - 0x16D55
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 27);
}

int func_601()//Position - 0x16D69
{
	if (func_603() || func_602())
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_602()//Position - 0x16D96
{
	return Global_2447174.f_622;
}

bool func_603()//Position - 0x16DA5
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_604()//Position - 0x16DB9
{
	return unk_0xC80D31E4B587871C(Global_2447174, 5);
}

bool func_605()//Position - 0x16DCA
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_606()//Position - 0x16DDB
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

bool func_607()//Position - 0x16DED
{
	return Global_2447174.f_586;
}

void func_608(int iParam0)//Position - 0x16DFC
{
	int iVar0;
	
	iVar0 = func_216(2523, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 0))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 0);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 1))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 1);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 2))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 3))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 3);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 4))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 4);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 5))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 6))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 6);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 7))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 7);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 8))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xC80D31E4B587871C(iVar0, 9))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 9);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 10))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 10);
		}
		else if (!unk_0xC80D31E4B587871C(iVar0, 11))
		{
			unk_0x872F1C1F8587CCC7(&iVar0, 11);
		}
	}
	func_207(2523, iVar0, -1, 1, 0);
}

int func_609()//Position - 0x16F34
{
	int iVar0;
	
	if (!func_36(&(Global_1574409.f_15)))
	{
		func_2(&(Global_1574409.f_15), 0, 0);
		Global_1574409.f_17 = 0;
	}
	else if (func_1(&(Global_1574409.f_15), 1000, 0))
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17)))
		{
			iVar0 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(Global_1574409.f_17));
			if (unk_0x552F39AE86E07792(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_610(iVar0, 6))
				{
					if (system::vdist(func_29(unk_0x9EB17624F44A8DA4()), func_29(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574409.f_17++;
		if (Global_1574409.f_17 >= 32)
		{
			Global_1574409.f_17 = 0;
			func_35(&(Global_1574409.f_15));
		}
	}
	return 0;
}

int func_610(int iParam0, int iParam1)//Position - 0x16FFC
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_211(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1595693[iVar0 /*680*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_611()//Position - 0x17035
{
	unk_0xC0EBC1452FCAB15C(5);
	func_613();
	unk_0x94BD6F0436473406(1f);
	unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 8);
	func_612();
}

void func_612()//Position - 0x1705B
{
	if (Global_1665283)
	{
		if (unk_0xC80D31E4B587871C(Global_1665284, 0))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 0);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 1))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 1);
		}
		if (unk_0xC80D31E4B587871C(Global_1665284, 5))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2520777, 5);
		}
		if (unk_0x546F10CBA6C484DA(-355737150))
		{
			unk_0xB94AAB49E0BB01DB(-355737150, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-580979506))
		{
			unk_0xB94AAB49E0BB01DB(-580979506, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1426452475))
		{
			unk_0xB94AAB49E0BB01DB(-1426452475, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(745417724))
		{
			unk_0xB94AAB49E0BB01DB(745417724, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1305304906))
		{
			unk_0xB94AAB49E0BB01DB(-1305304906, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-1543175077))
		{
			unk_0xB94AAB49E0BB01DB(-1543175077, 1, 0, 0);
		}
		if (unk_0x546F10CBA6C484DA(-811770997))
		{
			unk_0xB94AAB49E0BB01DB(-811770997, 1, 0, 0);
		}
		Global_1665284 = 0;
	}
	Global_1665283 = 0;
}

void func_613()//Position - 0x1715B
{
	if (unk_0x8F05914DD835E69F(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == unk_0xBBA15366508D1BDE() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

int func_614()//Position - 0x171A2
{
	if (func_615())
	{
		return 1;
	}
	return 0;
}

bool func_615()//Position - 0x171B6
{
	return Global_1574409.f_24;
}

int func_616()//Position - 0x171C4
{
	var uVar0;
	
	func_620(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_619())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_618())
	{
		return 1;
	}
	if (func_617(157))
	{
		if (!func_607())
		{
			return 1;
		}
	}
	if (func_617(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_398() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_398()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_617(int iParam0)//Position - 0x1724E
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_618()//Position - 0x17265
{
	return Global_2456830;
}

bool func_619()//Position - 0x17271
{
	return Global_2447174.f_581;
}

void func_620(var uParam0)//Position - 0x17280
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_621(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_621(int iParam0)//Position - 0x172F3
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_13(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_622(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_622(int iParam0, var uParam1)//Position - 0x17374
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_623()//Position - 0x173D3
{
	system::wait(0);
}

void func_624()//Position - 0x173E0
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_163();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (unk_0xC80D31E4B587871C(iLocal_132, iVar1) && !unk_0xCCCA18C9A006FF83(iLocal_133[iVar1]))
		{
			unk_0x0B9D04994D02CC2F(iLocal_133[iVar1]);
			unk_0xB94964861C6B4D3C(iLocal_133[iVar1]);
		}
		iVar1++;
	}
	func_384();
	func_437(0);
	func_627(132, 0, Local_137.f_8 == 6);
	func_404(22, 0);
	Global_2512808.f_4775 = -1;
	uVar0[0] = Local_137.f_3[0];
	uVar0[1] = Local_137.f_3[1];
	uVar0[2] = Local_137.f_3[2];
	uVar0[3] = Local_137.f_3[3];
	func_626(&(uVar0[0]));
	func_626(&(uVar0[1]));
	func_626(&(uVar0[2]));
	func_626(&(uVar0[3]));
	if (func_616())
	{
		Local_1503.f_5 = 5;
	}
	else if (unk_0xC80D31E4B587871C(Local_137.f_2, 2))
	{
		Local_1503.f_5 = 6;
	}
	else if (Local_1503.f_5 != 1)
	{
		Local_1503.f_5 = 2;
	}
	Local_1503 = Local_137.f_724;
	Local_1503.f_1 = Local_137.f_725;
	Local_1503.f_4 = Local_137.f_726;
	Local_1503.f_3 = Local_137.f_728;
	Local_1503.f_10 = (unk_0xE3CCAFB1555348DF() - Local_1503.f_9);
	uVar2 = Local_137.f_712;
	if (Local_137.f_707)
	{
		uVar2 = Local_137.f_712 + 4;
	}
	if (!Global_262145.f_10840)
	{
		if (Local_1503.f_6 > 0)
		{
		}
	}
	Local_1503.f_6 = (Local_1503.f_6 + iLocal_111);
	if (unk_0x622FF3AE4B1D07C3() != -1)
	{
		func_625(Local_1503, uVar2, Local_1504[unk_0x622FF3AE4B1D07C3() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_430(1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_625(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1759C
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0x436287B7DB306165();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70856)
	{
		if (unk_0x74C475EB8E73D398(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0xF5313B601E24BF7B(&Var1);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "freemode"))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			unk_0xC14C67D924E1E69C(&Var2);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = uParam4;
			Var3.f_16 = uParam5;
			Var3.f_17 = uParam6;
			unk_0xC4D3EEED6C3F8ADA(&Var3);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = system::to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0xC974B07411EB8324(&Var4);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_penned_in"))
		{
			unk_0x297070538A176AF4(&Param0);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0xA34510BC030C442D(&Var5);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x0010AF0738AEEA04(&Var6);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0xEC67EBB574994291(&Var7);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = uParam4;
			unk_0x1EA7DB32B287B5E7(&Var8);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0x0BE67F6CCA3921AB(&Var9);
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x0F1BB63E018B9385(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0x3B0F813F59E79370(&Var11);
			}
		}
		else if (unk_0x74C475EB8E73D398(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x6E89CDB65828F219(&Var12);
		}
	}
}

void func_626(int iParam0)//Position - 0x17811
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC80D31E4B587871C(*iParam0, iVar0))
		{
			unk_0x0EE72DB1CD8A3B86(iParam0, iVar0);
		}
		else
		{
			unk_0x872F1C1F8587CCC7(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_627(int iParam0, bool bParam1, bool bParam2)//Position - 0x1784B
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 13))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 13);
		}
		if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1, 14))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1), 14);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_1574409.f_1, 21))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1574409.f_1), 21);
	}
	func_657();
	unk_0x1B5A255BF0D63005("DisableFlightMusic", 0);
	unk_0x1B5A255BF0D63005("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_656(func_285(unk_0x9EB17624F44A8DA4()));
		func_404(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x9EB17624F44A8DA4() != -1) && func_655(unk_0x9EB17624F44A8DA4()) >= 12)
		{
			func_654(2535, -1);
			iVar1 = func_216(2535, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x872F1C1F8587CCC7(&Global_1574435, 5);
			}
		}
		func_653();
		func_652();
		func_651();
		if ((!func_91(unk_0x9EB17624F44A8DA4()) && !func_160(unk_0x9EB17624F44A8DA4())) && !func_409())
		{
			func_635();
		}
		func_634();
		if (!unk_0xC80D31E4B587871C(Global_1667858.f_3, 0) && !unk_0xC80D31E4B587871C(Global_1667858.f_3, 1))
		{
			func_611();
		}
		func_633();
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1717), 2);
		func_162();
		func_147();
	}
	if (unk_0x6D93C18E2EF22A46(1344549371))
	{
		unk_0x4C5AB0B8B9B71C4B(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0x9EB17624F44A8DA4() != -1 && !func_326(unk_0x9EB17624F44A8DA4(), 21)) && !func_95(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_393(0);
			func_391(0);
			func_632();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_40(26, -1))
		{
			Global_2458997 = -1;
			func_37(26, -1);
		}
	}
	if (!func_628())
	{
		Global_2492048 = 1;
	}
}

int func_628()//Position - 0x17A9D
{
	if (((((!func_553(unk_0x9EB17624F44A8DA4()) && !func_534(unk_0x9EB17624F44A8DA4())) && func_285(unk_0x9EB17624F44A8DA4()) != 146) && !func_631()) && !func_630()) && !func_629(Global_4456448.f_143970))
	{
		return 0;
	}
	return 1;
}

bool func_629(int iParam0)//Position - 0x17AFF
{
	return iParam0 == 57;
}

int func_630()//Position - 0x17B0C
{
	if (Global_4456448.f_122309 == Global_262145.f_8940)
	{
		return 1;
	}
	return 0;
}

int func_631()//Position - 0x17B2D
{
	if ((Global_4456448 == 0 && unk_0x4916190900E76373()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_143970 > 0) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 15)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 18)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 19)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 29)) || unk_0xC80D31E4B587871C(Global_4456448.f_4, 28)) || unk_0xC80D31E4B587871C(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_632()//Position - 0x17BD7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xC80D31E4B587871C(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_633()//Position - 0x17C2D
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574409 = { Var0 };
}

void func_634()//Position - 0x17C5C
{
	var uVar0;
	
	Global_1316732 = uVar0;
}

void func_635()//Position - 0x17C6A
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_24), &Global_2409103, 2);
	unk_0x94A09BF8588CB706(&(Global_2405047.f_26), &Global_2409105, 18);
	func_649();
	func_638(1, 1, 0);
	func_636();
}

void func_636()//Position - 0x17CA0
{
	func_637(0, 0);
}

void func_637(int iParam0, int iParam1)//Position - 0x17CAE
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_638(bool bParam0, bool bParam1, bool bParam2)//Position - 0x17CC6
{
	if (bParam1)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_648();
	}
	if (!bParam2)
	{
		func_640(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_639(0);
	func_150();
}

void func_639(bool bParam0)//Position - 0x17D65
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_640(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x17D85
{
	if (bParam0)
	{
		if (func_647())
		{
			func_646();
		}
		Global_2405047.f_687.f_515 = unk_0xBBA15366508D1BDE();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_644();
		func_407(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_641();
	}
}

void func_641()//Position - 0x17E4C
{
	if (func_647() && !func_643())
	{
		func_646();
	}
	if (func_643())
	{
		func_642();
	}
	else
	{
		func_644();
		func_407(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_642()//Position - 0x17E94
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_643()//Position - 0x17EDC
{
	if ((Global_2405047.f_1719 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_1203.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_644()//Position - 0x17F1B
{
	if (func_647() && !func_643())
	{
		func_646();
	}
	func_645();
	Global_2405047.f_687 = 0;
}

void func_645()//Position - 0x17F44
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_646()//Position - 0x17F7F
{
	if (func_643())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515)
	{
		unk_0x94A09BF8588CB706(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_647()//Position - 0x17FED
{
	if ((Global_2405047.f_1720 && !unk_0xBBA15366508D1BDE() == Global_2405047.f_687.f_515) && unk_0x8F05914DD835E69F(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_648()//Position - 0x1802F
{
	unk_0x94A09BF8588CB706(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_649()//Position - 0x18048
{
	func_650();
	Global_2405047.f_2229 = 0;
}

void func_650()//Position - 0x1805C
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_651()//Position - 0x18088
{
	Global_2512808.f_4694 = 0;
}

void func_652()//Position - 0x18098
{
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_1 = 0;
	}
}

void func_653()//Position - 0x180B6
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	if (iVar0 != -1)
	{
		Global_1627537[iVar0 /*532*/] = -1;
	}
}

void func_654(int iParam0, int iParam1)//Position - 0x180D4
{
	int iVar0;
	
	iVar0 = func_216(iParam0, func_212(iParam1), 0);
	iVar0++;
	if (!func_215(iParam0))
	{
		func_207(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_208(iParam0, iVar0, iParam1, 1);
	}
}

int func_655(int iParam0)//Position - 0x18115
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_656(int iParam0)//Position - 0x1812A
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_396(unk_0x9EB17624F44A8DA4()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_657()//Position - 0x1818C
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3) || unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		if (unk_0x3E9CABD07B829173() || unk_0x2D0EF1D268F33F25())
		{
			unk_0x59C3AC31C7544A28(800);
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 5);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 3))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 3);
	}
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1710, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1710), 4);
	}
	func_660(0);
	func_659(0);
	func_658(0);
}

void func_658(int iParam0)//Position - 0x1822D
{
	if (Global_2512808.f_4488 != iParam0)
	{
		Global_2512808.f_4488 = iParam0;
	}
}

void func_659(bool bParam0)//Position - 0x1824A
{
	if (Global_2512808.f_4487 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2512808.f_4487 = bParam0;
	}
}

void func_660(int iParam0)//Position - 0x1826F
{
	if (Global_2512808.f_4485 != iParam0)
	{
		Global_2512808.f_4485 = iParam0;
	}
}

int func_661(struct<21> Param0)//Position - 0x1828C
{
	func_669(func_670(Param0), Param0);
	unk_0xB66EA47EE710E67F(0);
	unk_0x7BC094E5B24A760D(func_668(8));
	func_665(0, -1, 0);
	func_663(132);
	unk_0x6E3ED3AE1C20445F(&Local_137, 750);
	unk_0xE7BC983D1386C9EE(&Local_1504, 161);
	unk_0x941BE77305BB5695(0);
	if (!func_662())
	{
		func_624();
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		unk_0x29723B8B6E11E8F2(&(Local_137.f_724), &(Local_137.f_725));
	}
	Local_1503.f_2 = unk_0x8AB67E33BD002BAC();
	Local_1503.f_9 = unk_0xE3CCAFB1555348DF();
	Local_1503.f_8 = unk_0xE3CCAFB1555348DF();
	func_404(22, 1);
	return 1;
}

int func_662()//Position - 0x1831F
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_619())
		{
			return 0;
		}
		if (func_617(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

void func_663(int iParam0)//Position - 0x18378
{
	func_633();
	func_664();
	func_651();
	Global_1574409.f_4 = iParam0;
	Global_1574409.f_5 = iParam0;
	func_403(iParam0, -1);
	func_20(&(Global_1574409.f_18), 0, 0);
	Global_2512808.f_4553 = 0;
	Global_2457893[0] = func_87();
	Global_2457893[1] = func_87();
	Global_2457893[2] = func_87();
	Global_2457893[3] = func_87();
	Global_2457893[4] = func_87();
	func_147();
	if (!func_448(func_178()))
	{
		func_177();
	}
	if (func_316() && !func_327())
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 16);
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(Global_1574409.f_1), 17);
	}
}

void func_664()//Position - 0x1842E
{
	var uVar0;
	
	Global_1574434 = uVar0;
}

int func_665(int iParam0, int iParam1, bool bParam2)//Position - 0x1843C
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_667();
			}
			else
			{
				return 0;
			}
		}
		if (!func_666())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_667();
					}
					else
					{
						return 0;
					}
				}
				if (func_619())
				{
					if (!bParam2)
					{
						func_667();
					}
					else
					{
						return 0;
					}
				}
				if (func_617(155))
				{
					if (!bParam2)
					{
						func_667();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_667();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_667();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_667();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_666()//Position - 0x18551
{
	return Global_1312831;
}

void func_667()//Position - 0x1855D
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_668(int iParam0)//Position - 0x18569
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

void func_669(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x18639
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_667();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

int func_670(int iParam0)//Position - 0x18658
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 113:
			return 32;
		
		case 114:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

