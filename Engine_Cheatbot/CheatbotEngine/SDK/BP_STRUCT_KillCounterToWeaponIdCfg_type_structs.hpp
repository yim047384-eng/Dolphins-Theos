#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_KillCounterToWeaponIdCfg_type.BP_STRUCT_KillCounterToWeaponIdCfg_type
// Size: 0x21 // Inherited bytes: 0x00
struct FBP_STRUCT_KillCounterToWeaponIdCfg_type {
	// Fields
	IntProperty FeatureID_0_0927914017C9346167478A8B0CE36144; // Offset: 0x00 // Size: 0x04
	IntProperty WeaponID_1_163F78C03B6F3A5F5ABA5C8609C4BD44; // Offset: 0x04 // Size: 0x04
	bool IsBaseCounter_2_0BD7A0C0010F7D831EE150400E388CA2; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	StrProperty ItemJumpUrl_3_0A125280542827925E69E9330E50CCDC; // Offset: 0x10 // Size: 0x10
	bool HasWeaponIcon_4_444FFEC0131A7C1F01C940E60E0E7E3E; // Offset: 0x20 // Size: 0x01
};

