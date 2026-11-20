#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_TPlanChipSupport_type.BP_STRUCT_TPlanChipSupport_type
// Size: 0x2c // Inherited bytes: 0x00
struct FBP_STRUCT_TPlanChipSupport_type {
	// Fields
	IntProperty ItemID_0_69FCE4807AD6D5A2666E14640F602744; // Offset: 0x00 // Size: 0x04
	IntProperty SupportChipNum_1_153209C03417329D32A2078C0F41C3FD; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SupportChipSubTypeList_a_2_703B47C0588440A1098EE8A006E9A991; // Offset: 0x08 // Size: 0x10
	IntProperty BackpackCapacity_3_5CBE0D0053FBFEDE17EA676F0C9EF269; // Offset: 0x18 // Size: 0x04
	IntProperty Durability_4_076443C03BA456A564440B0601130699; // Offset: 0x1c // Size: 0x04
	IntProperty InjuryReductionRatio_5_7A01E8C06CDB692F4368658F0239201F; // Offset: 0x20 // Size: 0x04
	IntProperty PenetrationResistance_6_296CC4002DFF96426EA499DA03AB90B5; // Offset: 0x24 // Size: 0x04
	IntProperty WeightEffect_7_3284EAC013A9B8EB2CEEB596070D90C4; // Offset: 0x28 // Size: 0x04
};

