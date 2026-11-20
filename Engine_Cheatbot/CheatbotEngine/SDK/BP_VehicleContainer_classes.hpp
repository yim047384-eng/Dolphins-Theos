#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VehicleContainer.BP_VehicleContainer_C
// Size: 0x652 // Inherited bytes: 0x610
struct ABP_VehicleContainer_C : AVehicleContainer {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x610 // Size: 0x08
	struct UBoxComponent* Collision; // Offset: 0x618 // Size: 0x08
	struct UBP_VehicleContainerAvatarComponent_C* BP_VehicleContainerAvatarComponent; // Offset: 0x620 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x628 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x630 // Size: 0x08
	struct USkeletalMeshComponent* Container; // Offset: 0x638 // Size: 0x08
	struct USkeletalMeshComponent* Parachute; // Offset: 0x640 // Size: 0x08
	struct UAirdropMovementComponent* AirdropMovement; // Offset: 0x648 // Size: 0x08
	bool FirstOpen; // Offset: 0x650 // Size: 0x01
	bool AttemptPlayAnim; // Offset: 0x651 // Size: 0x01

	// Functions

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.GetMontageAnim
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetMontageAnim(struct UAnimMontage*& AnimMontage); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.HandleInteraciveCollision
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleInteraciveCollision(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.HandleSpawnFail
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSpawnFail(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.CanSpawnVehicle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanSpawnVehicle(bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.HandleSpawnVehicle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleSpawnVehicle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.HandlePlayAnimFinish
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePlayAnimFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.IsSimulatingPhysics
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsSimulatingPhysics(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.Disappear
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Disappear(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.GetOwnershipComponent
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UOwnershipComponent* GetOwnershipComponent(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnNotifyEnd_43B6BDC842C06881C9B692BFD035DF0D
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnNotifyEnd_43B6BDC842C06881C9B692BFD035DF0D(struct FName NotifyName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnNotifyBegin_43B6BDC842C06881C9B692BFD035DF0D
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnNotifyBegin_43B6BDC842C06881C9B692BFD035DF0D(struct FName NotifyName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnInterrupted_43B6BDC842C06881C9B692BFD035DF0D
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnInterrupted_43B6BDC842C06881C9B692BFD035DF0D(struct FName NotifyName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnBlendOut_43B6BDC842C06881C9B692BFD035DF0D
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnBlendOut_43B6BDC842C06881C9B692BFD035DF0D(struct FName NotifyName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnCompleted_43B6BDC842C06881C9B692BFD035DF0D
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnCompleted_43B6BDC842C06881C9B692BFD035DF0D(struct FName NotifyName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.BndEvt__OwnershipComponent_K2Node_ComponentBoundEvent_0_OnOwnershipChangedSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__OwnershipComponent_K2Node_ComponentBoundEvent_0_OnOwnershipChangedSignature__DelegateSignature(StrProperty OldOwnership, StrProperty NewOwnership); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.BndEvt__AirdropMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__AirdropMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x88)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnSimulationStop
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	void OnSimulationStop(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.PlayAnim
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlayAnim(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.BndEvt__Container_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Container_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnVehicleSpawned
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	void OnVehicleSpawned(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnLanded
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	void OnLanded(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnCollisionChanged
	// Flags: [Event|Protected|BlueprintCallable|BlueprintEvent]
	void OnCollisionChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.OnChangeAvatarFinesh
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnChangeAvatarFinesh(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VehicleContainer.BP_VehicleContainer_C.ExecuteUbergraph_BP_VehicleContainer
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_VehicleContainer(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

