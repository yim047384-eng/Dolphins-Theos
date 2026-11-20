#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBaseGameGuideUIConfig_type.BP_STRUCT_EvoBaseGameGuideUIConfig_type
// Size: 0x84 // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBaseGameGuideUIConfig_type {
	// Fields
	IntProperty ID_0_0A6989004396F1020E070EAB04550A54; // Offset: 0x00 // Size: 0x04
	IntProperty Priority_1_50F6FE4018E6C96B37ABEEBF0CB39B49; // Offset: 0x04 // Size: 0x04
	StrProperty TabIcon_3_6B252DC01A2570F71CBA0CB20233AAEE; // Offset: 0x08 // Size: 0x10
	IntProperty TabName_4_37100BC0319BFB791CD56D3602341885; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<StrProperty> Tag_as_5_407619800E89EF6E4A27B91F0B23A083; // Offset: 0x20 // Size: 0x10
	StrProperty Version_6_7F95FF4033DEFFB945E08DB0048CD0EE; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> TabContents_a_9_138A6F0038F4AE96702FEF3208966FB1; // Offset: 0x40 // Size: 0x10
	IntProperty Classification_10_3D7010C030BA198920AB002609473BBE; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<IntProperty> TimeID_a_11_6A01DCC0169C785B4A472AE20C6CD371; // Offset: 0x58 // Size: 0x10
	IntProperty ItemID_12_2E4CACC06DB3663533CD8A750B8EF4D4; // Offset: 0x68 // Size: 0x04
	IntProperty TlogID_13_23528E80071292523C8DB7090B370ED4; // Offset: 0x6c // Size: 0x04
	StrProperty RejoinVersion_14_6FF3D9006F91EC387547F5130DCF90DE; // Offset: 0x70 // Size: 0x10
	IntProperty GuideDisplayType_15_7B317F40409B9F95172987630D1FE5B5; // Offset: 0x80 // Size: 0x04
};

