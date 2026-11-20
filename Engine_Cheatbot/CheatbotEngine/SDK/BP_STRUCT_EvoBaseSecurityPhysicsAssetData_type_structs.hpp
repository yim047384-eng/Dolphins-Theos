#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_EvoBaseSecurityPhysicsAssetData_type.BP_STRUCT_EvoBaseSecurityPhysicsAssetData_type
// Size: 0x40 // Inherited bytes: 0x00
struct FBP_STRUCT_EvoBaseSecurityPhysicsAssetData_type {
	// Fields
	StrProperty BoneName_0_727B1D4063817CB35D03AE53083A7835; // Offset: 0x00 // Size: 0x10
	IntProperty BoneNameHash_1_49775E40209A52552143368F0831D2E8; // Offset: 0x10 // Size: 0x04
	IntProperty CharacterType_2_39EB87C06F59E5576AF5643B04084535; // Offset: 0x14 // Size: 0x04
	struct TArray<float> FieldArray_af_3_72D87E400E0EA5E10BA6C7260255DF06; // Offset: 0x18 // Size: 0x10
	IntProperty GeomType_4_424A06803FC768C6426A5A2E0A32AFC5; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	StrProperty TableKey_5_047FC0402C8D72754EDF1C9F0602CF19; // Offset: 0x30 // Size: 0x10
};

