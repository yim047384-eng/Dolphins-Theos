#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_DoorNormal.BP_DoorNormal_C
// Size: 0x7f8 // Inherited bytes: 0x780
struct ABP_DoorNormal_C : APUBGDoor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x780 // Size: 0x08
	struct UBoxComponent* InterForce; // Offset: 0x788 // Size: 0x08
	struct UBoxComponent* Interaction; // Offset: 0x790 // Size: 0x08
	struct USceneComponent* Scene; // Offset: 0x798 // Size: 0x08
	struct UBoxComponent* Box; // Offset: 0x7a0 // Size: 0x08
	struct UStaticMeshComponent* StaticMesh; // Offset: 0x7a8 // Size: 0x08
	struct UStaticMesh* BrokenMesh; // Offset: 0x7b0 // Size: 0x08
	float Hp; // Offset: 0x7b8 // Size: 0x04
	float HPTimer; // Offset: 0x7bc // Size: 0x04
	float To; // Offset: 0x7c0 // Size: 0x04
	float From; // Offset: 0x7c4 // Size: 0x04
	float HPDummy; // Offset: 0x7c8 // Size: 0x04
	char pad_0x7CC[0x4]; // Offset: 0x7cc // Size: 0x04
	struct FTimerHandle DummyTimerHandler; // Offset: 0x7d0 // Size: 0x08
	float GrenadeDamageRatio; // Offset: 0x7d8 // Size: 0x04
	IntProperty FromState; // Offset: 0x7dc // Size: 0x04
	IntProperty ToState; // Offset: 0x7e0 // Size: 0x04
	char pad_0x7E4[0x4]; // Offset: 0x7e4 // Size: 0x04
	struct UAkAudioEvent* CloseDoorAudio; // Offset: 0x7e8 // Size: 0x08
	struct UAkAudioEvent* OpenDoorAudio; // Offset: 0x7f0 // Size: 0x08

	// Functions

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.ReceiveAnyDamage
	// Flags: [BlueprintAuthorityOnly|Event|Public|BlueprintEvent]
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.EventTimer
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventTimer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// Flags: [HasOutParms|BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, IntProperty OtherBodyIndex); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.ActionDoorOnClient
	// Flags: [Event|Public|BlueprintEvent]
	void ActionDoorOnClient(IntProperty doorStateDst, bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.BP_DoorBroken
	// Flags: [Event|Public|BlueprintEvent]
	void BP_DoorBroken(bool isBeginPlay, bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.ActionDoorImmediatly
	// Flags: [Event|Public|BlueprintEvent]
	void ActionDoorImmediatly(IntProperty doorStateDst, bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.OnBPRespawned
	// Flags: [Event|Public|BlueprintEvent]
	void OnBPRespawned(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.SetInnerBoxOverlap
	// Flags: [Event|Public|BlueprintEvent]
	void SetInnerBoxOverlap(bool bGenerateOverlap); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_DoorNormal.BP_DoorNormal_C.ExecuteUbergraph_BP_DoorNormal
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_DoorNormal(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

