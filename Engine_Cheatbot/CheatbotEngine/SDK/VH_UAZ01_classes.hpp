#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VH_UAZ01.VH_UAZ01_C
// Size: 0x2250 // Inherited bytes: 0x2218
struct AVH_UAZ01_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2220 // Size: 0x08
	struct UBP_Battle_VehicleLicensePlateComponent_C* BP_Battle_VehicleLicensePlateComponent; // Offset: 0x2228 // Size: 0x08
	struct UVehicleAdvanceAvatarComp_BP_C* VehicleAdvanceAvatarComp_BP; // Offset: 0x2230 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersR; // Offset: 0x2238 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersL; // Offset: 0x2240 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2248 // Size: 0x08

	// Functions

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.HandleAdvanceAvatarEquiped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleAdvanceAvatarEquiped(bool IsEquiped, IntProperty AvatarID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_3_OnAvatarMeshEquipped__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_3_OnAvatarMeshEquipped__DelegateSignature(IntProperty SlotID, bool bEquipped, IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.BndEvt__UAEChaVehAnimList_PassengersL_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__UAEChaVehAnimList_PassengersL_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(struct UActorComponent* Component, bool bReset); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function VH_UAZ01.VH_UAZ01_C.ExecuteUbergraph_VH_UAZ01
	// Flags: [None]
	void ExecuteUbergraph_VH_UAZ01(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

