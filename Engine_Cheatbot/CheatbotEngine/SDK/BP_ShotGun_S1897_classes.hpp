#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_ShotGun_S1897.BP_ShotGun_S1897_C
// Size: 0x1759 // Inherited bytes: 0x1738
struct ABP_ShotGun_S1897_C : ABP_ShootWeaponBase_C {
	// Fields
	struct UWeaponAnimList_ShotGun_S1897_C* WeaponAnimList_ShotGun_S1897; // Offset: 0x1738 // Size: 0x08
	struct UWeaponPostReloadState* WeaponPostReloadState; // Offset: 0x1740 // Size: 0x08
	struct UWeaponPostFireState* WeaponPostFireState; // Offset: 0x1748 // Size: 0x08
	struct UWeaponPreFireState* WeaponPreFireState; // Offset: 0x1750 // Size: 0x08
	bool bUseIdleAnim_1; // Offset: 0x1758 // Size: 0x01

	// Functions

	// Object Name: Function BP_ShotGun_S1897.BP_ShotGun_S1897_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

