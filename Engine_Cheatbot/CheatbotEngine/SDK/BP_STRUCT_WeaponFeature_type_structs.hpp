#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponFeature_type.BP_STRUCT_WeaponFeature_type
// Size: 0x28 // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponFeature_type {
	// Fields
	struct TArray<IntProperty> WeaponFeatureIDList_a_0_118F5AC0691061692675800D0B9765E1; // Offset: 0x00 // Size: 0x10
	IntProperty WeaponID_1_1072B0C06F79B6EF301099B40DA1B454; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> WeaponFeatureIDList2_a_3_360B87400910C4E57E3AD9360976ADE1; // Offset: 0x18 // Size: 0x10
};

