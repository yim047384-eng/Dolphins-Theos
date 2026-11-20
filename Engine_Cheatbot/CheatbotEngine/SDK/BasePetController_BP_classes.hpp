#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BasePetController_BP.BasePetController_BP_C
// Size: 0x678 // Inherited bytes: 0x630
struct ABasePetController_BP_C : ASTExtraFightPetController {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x630 // Size: 0x08
	struct UBehaviorTree* CurBT; // Offset: 0x638 // Size: 0x08
	struct FName PetOwnerEmoteId; // Offset: 0x640 // Size: 0x08
	struct FName IsAirAttacking; // Offset: 0x648 // Size: 0x08
	struct FName AirAttackArea; // Offset: 0x650 // Size: 0x08
	struct FTimerHandle CheckAirAttackTimer; // Offset: 0x658 // Size: 0x08
	struct FVector CurAttackArea; // Offset: 0x660 // Size: 0x0c
	char pad_0x66C[0x4]; // Offset: 0x66c // Size: 0x04
	struct UBehaviorTree* FlyBt; // Offset: 0x670 // Size: 0x08

	// Functions

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.LoadBehaviorTree
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadBehaviorTree(IntProperty Clothes); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.CalcInAirAttackArea
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CalcInAirAttackArea(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.OnPlayerStopEmote
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPlayerStopEmote(IntProperty EmoteId, IntProperty Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.OnPlayerPlayEmote
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnPlayerPlayEmote(IntProperty Emote); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasePetController_BP.BasePetController_BP_C.ExecuteUbergraph_BasePetController_BP
	// Flags: [None]
	void ExecuteUbergraph_BasePetController_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

