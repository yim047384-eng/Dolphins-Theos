#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_WEP_Dagger.BP_WEP_Dagger_C
// Size: 0xc98 // Inherited bytes: 0xc50
struct ABP_WEP_Dagger_C : ASTExtraWeapon_Throw {
	// Fields
	struct UWeaponAnimList_Melee_Dagger_C* WeaponAnimList_Melee_Dagger; // Offset: 0xc50 // Size: 0x08
	struct UMeleeThrowPredictLineComponent_BP_C* PredictLineComponent; // Offset: 0xc58 // Size: 0x08
	struct UBP_ThrowComponent_Melee_C* BP_ThrowComponent_Melee; // Offset: 0xc60 // Size: 0x08
	struct UMeleeWeaponAvatarComp_BP_C* MeleeWeaponAvatarComp_BP; // Offset: 0xc68 // Size: 0x08
	struct UCrossHairComponent* Crosshair; // Offset: 0xc70 // Size: 0x08
	struct UWeaponStateDefault* WeaponStateDefault; // Offset: 0xc78 // Size: 0x08
	struct UWeaponStateManager* WeaponStateManager; // Offset: 0xc80 // Size: 0x08
	struct UWeaponSpecificHandler* WeaponSpecificHandler; // Offset: 0xc88 // Size: 0x08
	struct UWeaponEntity* WeaponEntity; // Offset: 0xc90 // Size: 0x08

	// Functions

	// Object Name: Function BP_WEP_Dagger.BP_WEP_Dagger_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

