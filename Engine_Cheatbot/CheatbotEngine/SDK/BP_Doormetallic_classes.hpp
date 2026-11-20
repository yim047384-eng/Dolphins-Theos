#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_Doormetallic.BP_DoorMetallic_C
// Size: 0x7e0 // Inherited bytes: 0x780
struct ABP_DoorMetallic_C : APUBGDoor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x780 // Size: 0x08
	struct UBoxComponent* InterForce; // Offset: 0x788 // Size: 0x08
	struct UBoxComponent* Interaction; // Offset: 0x790 // Size: 0x08
	struct USceneComponent* Scene; // Offset: 0x798 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x7a0 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x7a8 // Size: 0x08
	float Timeline_0_DoorNormalCurve_3AD59F7245D2BF58B24C7D8879A0FBEE; // Offset: 0x7b0 // Size: 0x04
	enum class ETimelineDirection Timeline_0__Direction_3AD59F7245D2BF58B24C7D8879A0FBEE; // Offset: 0x7b4 // Size: 0x01
	char pad_0x7B5[0x3]; // Offset: 0x7b5 // Size: 0x03
	struct UTimelineComponent* Timeline_1; // Offset: 0x7b8 // Size: 0x08
	float From; // Offset: 0x7c0 // Size: 0x04
	float To; // Offset: 0x7c4 // Size: 0x04
	IntProperty FromState; // Offset: 0x7c8 // Size: 0x04
	IntProperty ToState; // Offset: 0x7cc // Size: 0x04
	struct UAkAudioEvent* OpenDoorAudio; // Offset: 0x7d0 // Size: 0x08
	struct UAkAudioEvent* CloseDoorAudio; // Offset: 0x7d8 // Size: 0x08

	// Functions

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.Timeline_0__FinishedFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__FinishedFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.Timeline_0__UpdateFunc
	// Flags: [BlueprintEvent]
	void Timeline_0__UpdateFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.ActionDoorOnClient
	// Flags: [Event|Public|BlueprintEvent]
	void ActionDoorOnClient(IntProperty doorStateDst, bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.ActionDoorImmediatly
	// Flags: [Event|Public|BlueprintEvent]
	void ActionDoorImmediatly(IntProperty doorStateDst, bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.OnBPRespawned
	// Flags: [Event|Public|BlueprintEvent]
	void OnBPRespawned(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_Doormetallic.BP_DoorMetallic_C.ExecuteUbergraph_BP_DoorMetallic
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_DoorMetallic(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

