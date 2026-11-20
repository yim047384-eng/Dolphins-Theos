#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_WeaponAttrBPTable_type.BP_STRUCT_WeaponAttrBPTable_type
// Size: 0x6c // Inherited bytes: 0x00
struct FBP_STRUCT_WeaponAttrBPTable_type {
	// Fields
	StrProperty AttachmentSkinIDList_1_68C117003440A0EE1A2DDA300D678804; // Offset: 0x00 // Size: 0x10
	IntProperty BPID_2_5A4F6D006A4E746E1527F1660046AA94; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> AttachmentIDList_a_5_6E7001C028E30A41653FBE36025F1751; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> ParentIDList_a_6_3486FA0030D9987A663B62F90FFCB731; // Offset: 0x28 // Size: 0x10
	StrProperty DeadInventoryBoxPath_7_1883E1C0339C8C7958767FF2080EC2C8; // Offset: 0x38 // Size: 0x10
	IntProperty PendantID_8_32B77B0039C6C1D620F9E77400A423B4; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	StrProperty DeadInventoryBoxIDs_10_7CB7FE8050FC74B432EE0A820680F713; // Offset: 0x50 // Size: 0x10
	float CheckWeaponSkillDuration_f_11_6111F9C073ADAB21228400A10010AD36; // Offset: 0x60 // Size: 0x04
	IntProperty WeaponSkillID_12_225B82C01AF0B81B520FC56F0A446294; // Offset: 0x64 // Size: 0x04
	float WeaponHighlightMomentDuration_f_13_2B4B248076F9F3364A96A40101AE5A46; // Offset: 0x68 // Size: 0x04
};

