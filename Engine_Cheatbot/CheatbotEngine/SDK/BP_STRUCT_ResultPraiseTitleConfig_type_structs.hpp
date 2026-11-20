#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_ResultPraiseTitleConfig_type.BP_STRUCT_ResultPraiseTitleConfig_type
// Size: 0xd4 // Inherited bytes: 0x00
struct FBP_STRUCT_ResultPraiseTitleConfig_type {
	// Fields
	IntProperty DescID_0_1260D74063137DAF47F4EEBF06BFA2F4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty DetailPedalPath_1_55B8A5C034096BC72B112025036F15E8; // Offset: 0x08 // Size: 0x10
	StrProperty IconPath_2_416599C07C51935D2717BD6F0B764E48; // Offset: 0x18 // Size: 0x10
	IntProperty ID_3_5C7ED78025A796147642BDCA033526C4; // Offset: 0x28 // Size: 0x04
	IntProperty IsShow_4_28E1CB8019C32DB60F6E3853071BAC47; // Offset: 0x2c // Size: 0x04
	IntProperty Param1_5_5C41BCC05F4E5E7B4CFCD9E3077BB321; // Offset: 0x30 // Size: 0x04
	IntProperty Param2_6_5C42BD005F4E5E7C4CFCD9E2077BB322; // Offset: 0x34 // Size: 0x04
	IntProperty Param3_7_5C43BD405F4E5E7D4CFCD9E1077BB323; // Offset: 0x38 // Size: 0x04
	IntProperty Param4_8_5C44BD805F4E5E7E4CFCD9E0077BB324; // Offset: 0x3c // Size: 0x04
	StrProperty PedalPath_9_353D110005514C167B72092109331F28; // Offset: 0x40 // Size: 0x10
	IntProperty Priority_10_40F0CCC029DAC0012937F7650BD3B7D9; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<IntProperty> ShowDataType_a_11_40C39380341B3D4473F35E4708FEE671; // Offset: 0x58 // Size: 0x10
	StrProperty Title_12_438714C0199EBF2114DCB8B6027C3A75; // Offset: 0x68 // Size: 0x10
	IntProperty TitleID_13_2DE258007825B9D21B7692240C3A7BA4; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
	StrProperty CopperMedalPath_14_754BCA8050B2EB54337A8C030E5F7248; // Offset: 0x80 // Size: 0x10
	StrProperty GoldMedalPath_15_7A3451C011087C517F85748A07108978; // Offset: 0x90 // Size: 0x10
	StrProperty SilverMedalPath_16_0DB34D8068BBF81C43FF70BF0AFF43C8; // Offset: 0xa0 // Size: 0x10
	StrProperty Condition_17_5B6E9E001794940A459FD2C90802C72E; // Offset: 0xb0 // Size: 0x10
	StrProperty CenterIconPath_18_196A320045466CB0418BA6D0014C88D8; // Offset: 0xc0 // Size: 0x10
	IntProperty NameLocalizeID_19_7F7B4480535635E6200156AD033E1B14; // Offset: 0xd0 // Size: 0x04
};

