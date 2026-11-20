#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_TeamShowTransform.BP_TeamShowTransform_C
// Size: 0x5ac // Inherited bytes: 0x4b0
struct ABP_TeamShowTransform_C : AActor {
	// Fields
	struct UChildActorComponent* BP_LobbyPetDog3; // Offset: 0x4b0 // Size: 0x08
	struct UChildActorComponent* BP_LobbyPetDog2; // Offset: 0x4b8 // Size: 0x08
	struct UChildActorComponent* BP_LobbyPetDog1; // Offset: 0x4c0 // Size: 0x08
	struct UChildActorComponent* BP_LobbyPetDog; // Offset: 0x4c8 // Size: 0x08
	struct USceneComponent* FourPetPos4; // Offset: 0x4d0 // Size: 0x08
	struct USceneComponent* FourPetPos3; // Offset: 0x4d8 // Size: 0x08
	struct USceneComponent* FourPetPos2; // Offset: 0x4e0 // Size: 0x08
	struct USceneComponent* FourPetPos1; // Offset: 0x4e8 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMesh2; // Offset: 0x4f0 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMesh1; // Offset: 0x4f8 // Size: 0x08
	struct USceneComponent* FourCarPos4; // Offset: 0x500 // Size: 0x08
	struct USceneComponent* FourCarPos3; // Offset: 0x508 // Size: 0x08
	struct USkeletalMeshComponent* SkeletalMesh; // Offset: 0x510 // Size: 0x08
	struct USceneComponent* FourCarPos2; // Offset: 0x518 // Size: 0x08
	struct USkeletalMeshComponent* SK_VH_UAZ_New_2; // Offset: 0x520 // Size: 0x08
	struct USceneComponent* FourCarPos1; // Offset: 0x528 // Size: 0x08
	struct USkeletalMeshComponent* Sceneltem_int_266_DT3; // Offset: 0x530 // Size: 0x08
	struct USceneComponent* FourWingmanPos4; // Offset: 0x538 // Size: 0x08
	struct USkeletalMeshComponent* Sceneltem_int_266_DT2; // Offset: 0x540 // Size: 0x08
	struct USceneComponent* FourWingmanPos3; // Offset: 0x548 // Size: 0x08
	struct USkeletalMeshComponent* Sceneltem_int_266_DT; // Offset: 0x550 // Size: 0x08
	struct USkeletalMeshComponent* Sceneltem_int_266_DT1; // Offset: 0x558 // Size: 0x08
	struct USceneComponent* FourWingmanPos2; // Offset: 0x560 // Size: 0x08
	struct USceneComponent* FourWingmanPos1; // Offset: 0x568 // Size: 0x08
	struct UChildActorComponent* FourPos4; // Offset: 0x570 // Size: 0x08
	struct UChildActorComponent* FourPos3; // Offset: 0x578 // Size: 0x08
	struct UChildActorComponent* FourPos2; // Offset: 0x580 // Size: 0x08
	struct UChildActorComponent* FourPos1; // Offset: 0x588 // Size: 0x08
	struct UArrowComponent* FourPlayer; // Offset: 0x590 // Size: 0x08
	struct UChildActorComponent* CameraActor; // Offset: 0x598 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x5a0 // Size: 0x08
	IntProperty PlayerNum; // Offset: 0x5a8 // Size: 0x04

	// Functions

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.GetPetTransfroms
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPetTransfroms(IntProperty PlayerNum, struct TArray<struct FTransform>& AttachActors); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.GetCarTransfroms
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCarTransfroms(IntProperty PlayerNum, struct TArray<struct FTransform>& AttachActors); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.GetWingmanTransfroms
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetWingmanTransfroms(IntProperty PlayerNum, struct TArray<struct FTransform>& AttachActors); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.GetRootTransform
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetRootTransform(struct FTransform& RootTransform); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.GetTransfroms
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTransfroms(IntProperty PlayerNum, struct TArray<struct FTransform>& AttachActors); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BP_TeamShowTransform.BP_TeamShowTransform_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

