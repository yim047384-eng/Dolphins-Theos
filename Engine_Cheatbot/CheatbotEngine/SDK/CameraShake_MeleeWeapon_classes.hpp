#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CameraShake_MeleeWeapon.CameraShake_MeleeWeapon_C
// Size: 0x168 // Inherited bytes: 0x160
struct UCameraShake_MeleeWeapon_C : UCameraShake {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x160 // Size: 0x08

	// Functions

	// Object Name: Function CameraShake_MeleeWeapon.CameraShake_MeleeWeapon_C.ReceivePlayShake
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePlayShake(float Scale); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CameraShake_MeleeWeapon.CameraShake_MeleeWeapon_C.ExecuteUbergraph_CameraShake_MeleeWeapon
	// Flags: [None]
	void ExecuteUbergraph_CameraShake_MeleeWeapon(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

