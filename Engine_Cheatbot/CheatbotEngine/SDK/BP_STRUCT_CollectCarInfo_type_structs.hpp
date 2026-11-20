#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_CollectCarInfo_type.BP_STRUCT_CollectCarInfo_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_CollectCarInfo_type {
	// Fields
	IntProperty BroadCastID_0_74649F807119D39E07EF405907621694; // Offset: 0x00 // Size: 0x04
	IntProperty ItemID_1_1BC6468075F4B4F84355783A003815D4; // Offset: 0x04 // Size: 0x04
	IntProperty ShowIndex_2_798345C00301F8E53419AE350D81A018; // Offset: 0x08 // Size: 0x04
	IntProperty Type_3_49ADC80031A8478E7DF3F1A403FE92D5; // Offset: 0x0c // Size: 0x04
	bool IsHiddenType_4_0E09CA002058A8DE00601D590A96FBC5; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty LockIconPath_5_1EB467405194006307B37FEC0A844358; // Offset: 0x18 // Size: 0x10
	StrProperty UnlockIconPath_6_1F7100000891154008EB5A39000509D8; // Offset: 0x28 // Size: 0x10
};

