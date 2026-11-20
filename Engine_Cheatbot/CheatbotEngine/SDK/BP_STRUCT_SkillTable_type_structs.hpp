#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_SkillTable_type.BP_STRUCT_SkillTable_type
// Size: 0xcc // Inherited bytes: 0x00
struct FBP_STRUCT_SkillTable_type {
	// Fields
	StrProperty BPPath_1_750F27000E3BB3F853E0295A0CEB0538; // Offset: 0x00 // Size: 0x10
	StrProperty Desc_3_020F1F000C6215D033E648780D9C32F3; // Offset: 0x10 // Size: 0x10
	IntProperty SkillType_4_02B4078072A48D700671352F0B087195; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty IconPath_6_5311E4C02AFE095949A81E25084EF4C8; // Offset: 0x28 // Size: 0x10
	IntProperty CoolTime_8_749E86402C263565543BFA250C4C3425; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	StrProperty Name_10_3BEF1F800A032F9633EB41100D9DDA55; // Offset: 0x40 // Size: 0x10
	IntProperty SkillID_13_17FC6240489D3EC56328B52701FB0904; // Offset: 0x50 // Size: 0x04
	IntProperty ModeOpen_31_2D644500252B9B78356923B70BC5FB0E; // Offset: 0x54 // Size: 0x04
	StrProperty UIPanelPath_37_529DE6005540C10829F003260D716818; // Offset: 0x58 // Size: 0x10
	StrProperty LuaDataPath_38_3C03E98038685F6452BBCC78017C3BD8; // Offset: 0x68 // Size: 0x10
	StrProperty ModeStrings_43_32329B005A5FC43E755EBE0D03635893; // Offset: 0x78 // Size: 0x10
	IntProperty TemplateID_44_265051806A60AB0C6B8C05060CB59FF4; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	StrProperty NameLocalize_45_2032CC4046EA2DFF4FB9CFC9084E86C5; // Offset: 0x90 // Size: 0x10
	struct TArray<IntProperty> SkillTags_a_47_6E59B2C07D5F83BB39DFC68108761451; // Offset: 0xa0 // Size: 0x10
	IntProperty TssDataCheck_48_2E6BC3C04E32E46D5AAF123F077DFC8B; // Offset: 0xb0 // Size: 0x04
	char pad_0xB4[0x4]; // Offset: 0xb4 // Size: 0x04
	StrProperty DescLocalize_49_4A94CBC00BF76D79359CB6B209A6ECC5; // Offset: 0xb8 // Size: 0x10
	IntProperty ClientPreLoad_50_1A0000C057FA449F13E4CE6D06416924; // Offset: 0xc8 // Size: 0x04
};

