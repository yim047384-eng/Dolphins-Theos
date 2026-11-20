#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_AISkillConfig_type.BP_STRUCT_AISkillConfig_type
// Size: 0x28 // Inherited bytes: 0x00
struct FBP_STRUCT_AISkillConfig_type {
	// Fields
	IntProperty ID_0_09D5E0804959974A64CE894C06B8C5E4; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> SkillIDs_a_1_63856D0031BB571444C4E2800BC91001; // Offset: 0x08 // Size: 0x10
	struct TArray<StrProperty> SkillLuaPaths_as_2_0BF4D240223A7BA5082D0276037894B3; // Offset: 0x18 // Size: 0x10
};

