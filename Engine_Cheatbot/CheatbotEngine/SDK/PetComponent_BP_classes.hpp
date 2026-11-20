#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetComponent_BP.PetComponent_BP_C
// Size: 0x2f1 // Inherited bytes: 0x280
struct UPetComponent_BP_C : USTExtraFightPetComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x280 // Size: 0x08
	struct ABasePetCharacter_BP_C* SpawnPetClass; // Offset: 0x288 // Size: 0x08
	struct FTransform SpawnTrans; // Offset: 0x290 // Size: 0x30
	struct TArray<struct AActor*> NewVar_1; // Offset: 0x2c0 // Size: 0x10
	struct FScriptMulticastDelegate OnRepPetPawnCalled; // Offset: 0x2d0 // Size: 0x10
	struct FScriptMulticastDelegate OnRepPetInfo; // Offset: 0x2e0 // Size: 0x10
	bool bNeedRecreateMiniTv; // Offset: 0x2f0 // Size: 0x01

	// Functions

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.SetSpawnPetPosZ
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetSpawnPetPosZ(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.IsFPPMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsFPPMode(bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.GetPetOwnerPlayerPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetOwnerPlayerPawn(struct ABP_PlayerPawn_C*& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.GetPetPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPetPawn(struct ABasePetCharacter_BP_C*& Out); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.SetPetPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPetPawn(struct ASTExtraPetCharacter* InPetPawn, struct ASTExtraPetCharacter*& Out); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.SetPetOwnerPlayerPawn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetPetOwnerPlayerPawn(struct ASTExtraBaseCharacter* InPlayerPawn, struct ASTExtraBaseCharacter*& Out); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.ResetAttachTrans
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ResetAttachTrans(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.SpawnPetWithInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SpawnPetWithInfo(struct FGameModePlayerPetInfo Info); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.SpawnPet
	// Flags: [BlueprintCallable|BlueprintEvent]
	void SpawnPet(struct ABasePetCharacter_BP_C* PetClass); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.RemovePet
	// Flags: [BlueprintCallable|BlueprintEvent]
	void RemovePet(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.PlayerStateChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayerStateChange(enum class EPawnState State, enum class EPawnStateChangeType ChangeType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnOwnerPlayerPossessed
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerPlayerPossessed(struct FGameModePlayerPetInfo PetInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnOwnerDetachedVehicle
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnOwnerDetachedVehicle(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnRep_PetPawn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRep_PetPawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnRep_PetOwnerPlayerPawn
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRep_PetOwnerPlayerPawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnRep_PetInfo
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRep_PetInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.DoChangePetWithInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void DoChangePetWithInfo(struct FGameModePlayerPetInfo& InPetInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnPlayerStateEnterEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerStateEnterEvent(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnPlayerStateLeaveEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerStateLeaveEvent(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.ExecuteUbergraph_PetComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PetComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnRepPetInfo__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnRepPetInfo__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetComponent_BP.PetComponent_BP_C.OnRepPetPawnCalled__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnRepPetPawnCalled__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

