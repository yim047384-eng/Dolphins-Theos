#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_SeasonInfo_type.BP_STRUCT_SeasonInfo_type
// Size: 0xf8 // Inherited bytes: 0x00
struct FBP_STRUCT_SeasonInfo_type {
	// Fields
	StrProperty EndTime_0_0F1BA3744D5F3DA87281BEAB14C40A90; // Offset: 0x00 // Size: 0x10
	StrProperty SeasonName_1_4C9D5A5A493547374E8641B559BF5C60; // Offset: 0x10 // Size: 0x10
	StrProperty StartTime_3_516014BD440E93095B254B858865A44C; // Offset: 0x20 // Size: 0x10
	StrProperty DisplayTime_5_7E06B3934D109BD0266488B7F9BD9B8F; // Offset: 0x30 // Size: 0x10
	IntProperty SeasonID_6_C3D5DCA6461ABDC335A0EF8072436715; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty TitlePath2_7_54A333006E09388C65077154088E9F02; // Offset: 0x48 // Size: 0x10
	StrProperty AudioPath_10_0B71C28016EB92661F82B5940A66FA48; // Offset: 0x58 // Size: 0x10
	StrProperty AudioEndPath_11_683BA840434F031F60FB1FF70367CEB8; // Offset: 0x68 // Size: 0x10
	IntProperty SeasonYearID_12_23F1E48041FAEDDA1E28432C0BC50254; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	StrProperty SeasonYearTabIcon_13_4E20C94010EB122F5030B51302CAAA6E; // Offset: 0x80 // Size: 0x10
	StrProperty SeasonNameNew_14_1BE107C001BA4BA579EF426707ABEC77; // Offset: 0x90 // Size: 0x10
	StrProperty RankTableName_15_7DD520002A3999E64D3D42FA0B1DF0C5; // Offset: 0xa0 // Size: 0x10
	StrProperty CycleName_16_4CF3BF007D6F98BE5D54BF790A8CD895; // Offset: 0xb0 // Size: 0x10
	StrProperty RankLabelIcon_17_580F20007A4FACF45452E0500A949AAE; // Offset: 0xc0 // Size: 0x10
	IntProperty SegmentVideoType_18_3DA0BDC04DFBE65715EA7F8B03292275; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	StrProperty SeasonNameImgPath_19_11C3E7C01265532D5D5F182D088BC378; // Offset: 0xd8 // Size: 0x10
	StrProperty SeasonYearTitleImgPath_20_74300C4040CBAF653EE8FFFA0D071F38; // Offset: 0xe8 // Size: 0x10
};

