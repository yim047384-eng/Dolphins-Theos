#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: UserDefinedStruct BP_STRUCT_GrenadeKillGunBindMap_type.BP_STRUCT_GrenadeKillGunBindMap_type
// Size: 0x38 // Inherited bytes: 0x00
struct FBP_STRUCT_GrenadeKillGunBindMap_type {
	// Fields
	IntProperty GrenadeID_0_4EE5B8006EF4042C021047F3044E6624; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<IntProperty> GunIDList_a_1_5E490C002574B50A2E5CF3BD02FF7481; // Offset: 0x08 // Size: 0x10
	struct TArray<IntProperty> UnlockFxGunIDList_a_2_16749680437B531A790368EE0FB55CA1; // Offset: 0x18 // Size: 0x10
	struct TArray<IntProperty> UnlockRefitFxGunIDList_a_3_7689B5000D704D1E46B22F7109E1EF11; // Offset: 0x28 // Size: 0x10
};

