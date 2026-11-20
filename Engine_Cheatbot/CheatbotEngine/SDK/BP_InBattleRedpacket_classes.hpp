#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_InBattleRedpacket.BP_InBattleRedpacket_C
// Size: 0xa7c // Inherited bytes: 0x9b9
struct ABP_InBattleRedpacket_C : AConstructableActorBase_C {
	// Fields
	char pad_0x9B9[0x7]; // Offset: 0x9b9 // Size: 0x07
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x9c0 // Size: 0x08
	struct UParticleSystemComponent* P_Scene_CarePackage_Gz01_xjq; // Offset: 0x9c8 // Size: 0x08
	struct UInteractiveComponent_C* InteractiveComponent; // Offset: 0x9d0 // Size: 0x08
	struct USphereComponent* InteractCollision; // Offset: 0x9d8 // Size: 0x08
	float MoveDisCount; // Offset: 0x9e0 // Size: 0x04
	float MoveSpeed; // Offset: 0x9e4 // Size: 0x04
	float MoveStepMax; // Offset: 0x9e8 // Size: 0x04
	char pad_0x9EC[0x4]; // Offset: 0x9ec // Size: 0x04
	struct TArray<struct USceneComponent*> BlockArray; // Offset: 0x9f0 // Size: 0x10
	float HitMoveSpeed; // Offset: 0xa00 // Size: 0x04
	char pad_0xA04[0x4]; // Offset: 0xa04 // Size: 0x04
	MapProperty ChildCompTransforms; // Offset: 0xa08 // Size: 0x50
	float MoveDeltaTime; // Offset: 0xa58 // Size: 0x04
	float MoveSpeedScale; // Offset: 0xa5c // Size: 0x04
	float NormalSpeed; // Offset: 0xa60 // Size: 0x04
	float ReconnectTimeDelay; // Offset: 0xa64 // Size: 0x04
	struct FVector ServerStartPosition; // Offset: 0xa68 // Size: 0x0c
	bool bStartMove; // Offset: 0xa74 // Size: 0x01
	char pad_0xA75[0x3]; // Offset: 0xa75 // Size: 0x03
	IntProperty RedpacketItemID; // Offset: 0xa78 // Size: 0x04

	// Functions

	// Object Name: Function BP_InBattleRedpacket.BP_InBattleRedpacket_C.CheckOverlap
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckOverlap(struct UObject* WorldContextObject, struct FVector pos, struct FRotator Rot, bool& return value); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BP_InBattleRedpacket.BP_InBattleRedpacket_C.BPCheckPlacement
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	bool BPCheckPlacement(struct UWorld* World, struct FTransform& tranx, IntProperty checkType, IntProperty CurrentAvatarID, struct AActor* Builder); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x51)

	// Object Name: Function BP_InBattleRedpacket.BP_InBattleRedpacket_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_InBattleRedpacket.BP_InBattleRedpacket_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_InBattleRedpacket.BP_InBattleRedpacket_C.ExecuteUbergraph_BP_InBattleRedpacket
	// Flags: [None]
	void ExecuteUbergraph_BP_InBattleRedpacket(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

