#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C
// Size: 0xd40 // Inherited bytes: 0xd28
struct UVehicleAdvanceAvatarComp_BP_C : UVehicleAdvanceAvatarComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xd28 // Size: 0x08
	struct TArray<IntProperty> DefaultStyleIDList; // Offset: 0xd30 // Size: 0x10

	// Functions

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GetReflectionCubeName_Lobby
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FName GetReflectionCubeName_Lobby(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOnItemIDInLobby
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PutOnItemIDInLobby(IntProperty InItemID, IntProperty ColorID, IntProperty PatternID, IntProperty Particle ID, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x11)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.PutOffSlotInLobby
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void PutOffSlotInLobby(char InSlotType, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleUnequipped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BP_ProcessStyleUnequipped(IntProperty OldStyleID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicUnequipped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Bp_ProcessAvatarLogicUnequipped(IntProperty SlotID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_ProcessStyleEquipped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BP_ProcessStyleEquipped(IntProperty NewStyleID, IntProperty OldStyleID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_ProcessAvatarLogicEquipped
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Bp_ProcessAvatarLogicEquipped(IntProperty SlotID, struct FItemDefineID NewItemID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BPCreateAvatarCustomHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void BPCreateAvatarCustomHandle(IntProperty SlotID, IntProperty ItemId, struct FAvatarCustom& InCostomInfo, struct TArray<struct UAvatarCustomBase*>& OutCustomHandle); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.MakeVehicleStyleData
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FVehicleStyleData MakeVehicleStyleData(IntProperty InStyleID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.GenerateDefaultAvatarConfig
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool GenerateDefaultAvatarConfig(IntProperty InBaseSkinID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicEquipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Bp_EventAvatarLogicEquipped(IntProperty SlotID, struct FItemDefineID NewItemID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.Bp_EventAvatarLogicUnequipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Bp_EventAvatarLogicUnequipped(IntProperty SlotID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleEquipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BP_EventStyleEquipped(IntProperty NewStyleID, IntProperty OldStyleID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.BP_EventStyleUnequipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BP_EventStyleUnequipped(IntProperty OldStyleID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C.ExecuteUbergraph_VehicleAdvanceAvatarComp_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VehicleAdvanceAvatarComp_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

