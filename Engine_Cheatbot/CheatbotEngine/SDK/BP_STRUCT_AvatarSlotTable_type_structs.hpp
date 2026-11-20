#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_AvatarSlotTable_type.BP_STRUCT_AvatarSlotTable_type
// Size: 0xa8 // Inherited bytes: 0x00
struct FBP_STRUCT_AvatarSlotTable_type {
	// Fields
	IntProperty SlotID_0_07B16B8074758AC65DD345920E3BDC84; // Offset: 0x00 // Size: 0x04
	IntProperty TemplateID_1_2691320079AF0A7A6A1748830376BD24; // Offset: 0x04 // Size: 0x04
	IntProperty SubSlotID_9_5DE936007C7E6AFA71E4CC580CE889E4; // Offset: 0x08 // Size: 0x04
	IntProperty HideBoneType_12_394DA7C05E9425853B3A77F80B1DBD85; // Offset: 0x0c // Size: 0x04
	IntProperty HideBoneSlotID_13_7901AB002CDD9D2C1F43E7310DA083C4; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<IntProperty> ConflictConfig_a_14_4A2CF1C0416202311EA6EFBD0D3C6B21; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> ConflictConfigWhenSelfReplaced_a_15_764E20C07104DE417E7A9EF100F1ABF1; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FName> HideBoneNames_an_16_39D4A7C079EDCBE52A2742700BD7AA2E; // Offset: 0x38 // Size: 0x10
	struct TArray<IntProperty> HideFlags_a_17_091FE980116A8978158DCB690AD29A81; // Offset: 0x48 // Size: 0x10
	struct TArray<IntProperty> RecoverHideFlagsWhenSelfHidden_a_18_030DF9003611DA621D1AA1B806165961; // Offset: 0x58 // Size: 0x10
	struct TArray<IntProperty> RecoverHideFlagsWhenSelfReplaced_a_19_136E8E007DC0D0A81BF916070E83EDB1; // Offset: 0x68 // Size: 0x10
	struct TArray<IntProperty> RecoverReplaceFlagsWhenSelfHidden_a_20_049729806E62479C2FFC41E800857461; // Offset: 0x78 // Size: 0x10
	struct TArray<IntProperty> RecoverReplaceFlagsWhenSelfReplaced_a_21_33F73E804BB7815032938ACD0DA8EB01; // Offset: 0x88 // Size: 0x10
	struct TArray<IntProperty> ReplaceFlags_a_22_7DB4DA005585940C434C0E4109C1D0F1; // Offset: 0x98 // Size: 0x10
};

