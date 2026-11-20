#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_BigSegmentUpConfig_type.BP_STRUCT_BigSegmentUpConfig_type
// Size: 0x60 // Inherited bytes: 0x00
struct FBP_STRUCT_BigSegmentUpConfig_type {
	// Fields
	StrProperty HighLevelDeviceAnimPath_0_703E7C0074FB67A670B77DB604C5CFF8; // Offset: 0x00 // Size: 0x10
	IntProperty ID_1_068648C01D06091F1B6E47800634E474; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty VideoPath_4_7CE7A68040FD463430D035E10A0A3E38; // Offset: 0x18 // Size: 0x10
	StrProperty SegmentUpAudioPath_6_3A6BAB4046E51B1B018362F70A65D778; // Offset: 0x28 // Size: 0x10
	StrProperty SettledAudioPath_7_556EFA8033B134C021A93177054ADA98; // Offset: 0x38 // Size: 0x10
	StrProperty SegStarIconPath_8_2A41994011E0ADD57F9C308707C7BD88; // Offset: 0x48 // Size: 0x10
	IntProperty SegmentVideoType_9_53A400806CE06550581E10410DE42165; // Offset: 0x58 // Size: 0x04
	IntProperty TypeID_10_6E417140530ABC6704CD632E05265D34; // Offset: 0x5c // Size: 0x04
};

