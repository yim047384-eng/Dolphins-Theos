#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBaseGameGuideUIConfigBluehole_type.BP_STRUCT_EvoBaseGameGuideUIConfigBluehole_type
// Size: 0x84 // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBaseGameGuideUIConfigBluehole_type {
	// Fields
	IntProperty Classification_0_3CC03CC057B3ED597713A4AF0984F7BE; // Offset: 0x00 // Size: 0x04
	IntProperty ID_1_43C1B5006E2006D22CFF3B650496C654; // Offset: 0x04 // Size: 0x04
	IntProperty ItemID_2_244CD8C07DA0D8050594717F078E3714; // Offset: 0x08 // Size: 0x04
	IntProperty Priority_3_674B2A407F43B71B0F3E4AD10C705749; // Offset: 0x0c // Size: 0x04
	struct TArray<IntProperty> TabContents_a_4_5B309B00266C25466DAE4A940905B371; // Offset: 0x10 // Size: 0x10
	StrProperty TabIcon_5_0BCF59C050C2F40725BE3ED8023F962E; // Offset: 0x20 // Size: 0x10
	IntProperty TabName_6_57BA37C05E7B9E492542480802402C45; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<StrProperty> Tag_as_7_3676458031F7ADFE780E411907236343; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> TimeID_a_8_005608C0243E388B27ADB6C30CAF1F71; // Offset: 0x48 // Size: 0x10
	IntProperty TlogID_9_1952BA8027D70FE27E38F9390737CD14; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	StrProperty Version_10_20402B400519E0490ADFAC340480F42E; // Offset: 0x60 // Size: 0x10
	StrProperty RejoinVersion_11_379A0500330282A873C4C66C0DC3AC1E; // Offset: 0x70 // Size: 0x10
	IntProperty GuideDisplayType_12_4AD5AB4003609BC51A63314F0ED3E575; // Offset: 0x80 // Size: 0x04
};

