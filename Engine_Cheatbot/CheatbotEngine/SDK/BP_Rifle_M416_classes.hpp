#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_Rifle_M416.BP_Rifle_M416_C
// Size: 0x175c // Inherited bytes: 0x1738
struct ABP_Rifle_M416_C : ABP_ShootWeaponBase_C {
	// Fields
	struct UWeaponAnimList_Rifle_M416_C* WeaponAnimList_Rifle_M416; // Offset: 0x1738 // Size: 0x08
	bool bUseIdleAnim_1; // Offset: 0x1740 // Size: 0x01
	char pad_0x1741[0x3]; // Offset: 0x1741 // Size: 0x03
	struct FRotator OffsetRotation; // Offset: 0x1744 // Size: 0x0c
	struct FVector OffsetLocation; // Offset: 0x1750 // Size: 0x0c

	// Functions

	// Object Name: Function BP_Rifle_M416.BP_Rifle_M416_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

