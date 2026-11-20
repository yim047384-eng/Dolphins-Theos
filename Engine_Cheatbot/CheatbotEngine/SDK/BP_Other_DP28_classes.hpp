#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_Other_DP28.BP_Other_DP28_C
// Size: 0x1778 // Inherited bytes: 0x1738
struct ABP_Other_DP28_C : ABP_ShootWeaponBase_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1738 // Size: 0x08
	struct UBoxComponent* box2; // Offset: 0x1740 // Size: 0x08
	struct UBoxComponent* Box1; // Offset: 0x1748 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x1750 // Size: 0x08
	struct UWeaponAnimList_Other_DP28_C* WeaponAnimList_Other_DP28; // Offset: 0x1758 // Size: 0x08
	bool bUseIdleAnim_1; // Offset: 0x1760 // Size: 0x01
	char pad_0x1761[0x7]; // Offset: 0x1761 // Size: 0x07
	struct FScriptMulticastDelegate MagOutDelayEvent; // Offset: 0x1768 // Size: 0x10

	// Functions

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.StartFireEvent
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StartFireEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.OnWeaponMagOut
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnWeaponMagOut(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.ExecuteUbergraph_BP_Other_DP28
	// Flags: [None]
	void ExecuteUbergraph_BP_Other_DP28(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_Other_DP28.BP_Other_DP28_C.MagOutDelayEvent__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void MagOutDelayEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

