#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BaseFollowPet_BP.BaseFollowPet_BP_C
// Size: 0x1544 // Inherited bytes: 0x14f1
struct ABaseFollowPet_BP_C : ABasePetCharacter_BP_C {
	// Fields
	char pad_0x14F1[0x7]; // Offset: 0x14f1 // Size: 0x07
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x14f8 // Size: 0x08
	struct USphereComponent* SwimCheck; // Offset: 0x1500 // Size: 0x08
	struct USimulateSyncSmoothComponent* SimulateSyncSmooth; // Offset: 0x1508 // Size: 0x08
	bool bHideWhenSwimming; // Offset: 0x1510 // Size: 0x01
	char pad_0x1511[0x3]; // Offset: 0x1511 // Size: 0x03
	struct FVector SwimAnimOffset; // Offset: 0x1514 // Size: 0x0c
	struct FVector OriginMeshLocation; // Offset: 0x1520 // Size: 0x0c
	char pad_0x152C[0x4]; // Offset: 0x152c // Size: 0x04
	struct APhysicsVolume* UnderWaterBox; // Offset: 0x1530 // Size: 0x08
	struct FVector MeshShowScale; // Offset: 0x1538 // Size: 0x0c

	// Functions

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnRep_MeshShowScale
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnRep_MeshShowScale(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.SetMeshShowScale
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetMeshShowScale(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.GetFollowPos
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetFollowPos(float MinRadius, float MaxRadius, struct FTransform& Out); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ForceEnterSwimState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ForceEnterSwimState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ForceLeaveSwimState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ForceLeaveSwimState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.UpdateSwimLocation
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateSwimLocation(bool EnterSwim, float SurfaceHeight); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.SetLeaveSwimMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetLeaveSwimMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.SetEnterSwimMode
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEnterSwimMode(float WaterSurface); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.PetStartParachute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetStartParachute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.PetStopParchute
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetStopParchute(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.PetEnterPlane
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PetEnterPlane(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.AttachToOwnerPlayer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AttachToOwnerPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.DetachFromOwnerPlayer
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DetachFromOwnerPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ISetEnterSwimMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ISetEnterSwimMode(float WaterSurface); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ISetLeaveSwimMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ISetLeaveSwimMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.PlayerStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayerStateChange(enum class EPawnState State, enum class EPawnStateChangeType ChangeType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnOwnerVehicleStateChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerVehicleStateChanged(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnOwnerHoldGrenadeStateChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerHoldGrenadeStateChange(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnOwnerPerspectiveChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerPerspectiveChanged(bool IsFPP); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnPetSwimmingStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPetSwimmingStateChange(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.SetPetVisibility
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void SetPetVisibility(bool Visible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OwnerStateLeaveHandler_Event
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OwnerStateLeaveHandler_Event(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.BindEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BindEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnOwnerLeaveWater
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerLeaveWater(struct AActor* OverlappedActor, struct AActor* OtherActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnPetStateChangeEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPetStateChangeEvent(enum class EPetState State, bool IsEnter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.OnVolumeChangeEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnVolumeChangeEvent(struct APhysicsVolume* NewVolume); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BaseFollowPet_BP.BaseFollowPet_BP_C.ExecuteUbergraph_BaseFollowPet_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BaseFollowPet_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

