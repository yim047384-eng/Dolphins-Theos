#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_PersonalityVoiceCfg_type.BP_STRUCT_PersonalityVoiceCfg_type
// Size: 0x79 // Inherited bytes: 0x00
struct FBP_STRUCT_PersonalityVoiceCfg_type {
	// Fields
	IntProperty ActorID_0_41328F005586A45C3B9781EA00C1B684; // Offset: 0x00 // Size: 0x04
	bool IsLimitRegion_1_3D7E7540404A4335680C221E0EA3EC3E; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	IntProperty Key_2_7208B7C067DB0E654464045E0AD066A9; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty Language_3_35C956802835A88A0918D61A02E3B185; // Offset: 0x10 // Size: 0x10
	StrProperty OpenPublish_4_7DD1A7C0192260BD70090CDC07DA3278; // Offset: 0x20 // Size: 0x10
	StrProperty OpenTime_5_5A5835C0285D911568CFCD36002EAA25; // Offset: 0x30 // Size: 0x10
	IntProperty OpenTimestamp_6_2A647F006AB9259C793BDB6E02C84EE0; // Offset: 0x40 // Size: 0x04
	IntProperty Quality_7_4F7DE7C01FEB42E7649FACF20FDF00F9; // Offset: 0x44 // Size: 0x04
	IntProperty UnlockItemCount_8_51A48E807FDDBE2C6E3BB0190391A7C4; // Offset: 0x48 // Size: 0x04
	IntProperty UnlockItemID_9_5D0B8F806A3AB696761517130CD93944; // Offset: 0x4c // Size: 0x04
	IntProperty VoiceID_10_66658E405A933D11066B76010C354994; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty DisplayActorName_11_337881804EFB637C24829AC3074C7795; // Offset: 0x58 // Size: 0x10
	StrProperty VoiceText_12_56B83440016B7D7D2E95EBCB054AE0C4; // Offset: 0x68 // Size: 0x10
	bool IsForbidden_14_41A4BFC0219D2AAB3A4B5B5108E8BD0E; // Offset: 0x78 // Size: 0x01
};

