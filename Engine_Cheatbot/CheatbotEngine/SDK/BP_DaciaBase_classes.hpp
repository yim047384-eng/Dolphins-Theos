#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_DaciaBase.BP_DaciaBase_C
// Size: 0x2250 // Inherited bytes: 0x2218
struct ABP_DaciaBase_C : ABP_STExtraWheeledVehicle_C {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2218 // Size: 0x08
	struct UVehicleCharacterAnimListComponentBase* VehicleCharacterAnimListComponentBase; // Offset: 0x2220 // Size: 0x08
	struct UBP_Battle_VehicleLicensePlateComponent_C* BP_Battle_VehicleLicensePlateComponent; // Offset: 0x2228 // Size: 0x08
	struct UVehicleAdvanceAvatarComp_BP_C* VehicleAdvanceAvatarComp_BP; // Offset: 0x2230 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersL; // Offset: 0x2238 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_PassengersR; // Offset: 0x2240 // Size: 0x08
	struct UUAEChaVehAnimListComponent* UAEChaVehAnimList_Driver; // Offset: 0x2248 // Size: 0x08

	// Functions

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.HandleAdvanceAvatarEquiped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleAdvanceAvatarEquiped(bool IsEquiped, IntProperty AvatarID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.HandleSeatDetached
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSeatDetached(struct ASTExtraPlayerCharacter* Character, enum class ESTExtraVehicleSeatType SeatType, IntProperty SeatIndex); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.GetOwnershipComponent
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UOwnershipComponent* GetOwnershipComponent(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.OnBoostingChanged
	// Flags: [Event|Public|BlueprintEvent]
	void OnBoostingChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_2_OnAvatarMeshEquipped__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__VehicleAdvanceAvatarComp_BP_K2Node_ComponentBoundEvent_2_OnAvatarMeshEquipped__DelegateSignature(IntProperty SlotID, bool bEquipped, IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BP_DaciaBase.BP_DaciaBase_C.ExecuteUbergraph_BP_DaciaBase
	// Flags: [None]
	void ExecuteUbergraph_BP_DaciaBase(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

