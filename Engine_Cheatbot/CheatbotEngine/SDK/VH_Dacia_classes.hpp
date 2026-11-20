#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_Dacia.VH_Dacia_C
// Size: 0x2258 // Inherited bytes: 0x2250
struct AVH_Dacia_C : ABP_DaciaBase_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2250 // Size: 0x08

	// Functions

	// Object Name: Function VH_Dacia.VH_Dacia_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Dacia.VH_Dacia_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Dacia.VH_Dacia_C.BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_2_OnAvatarMeshEquipped__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_2_OnAvatarMeshEquipped__DelegateSignature(IntProperty SlotID, bool bEquipped, IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function VH_Dacia.VH_Dacia_C.ExecuteUbergraph_VH_Dacia
	// Flags: [None]
	void ExecuteUbergraph_VH_Dacia(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

