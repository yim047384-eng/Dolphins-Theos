#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class PlanCHRuntime.PlanCH_GameMode
// Size: 0x22b8 // Inherited bytes: 0x22b0
struct APlanCH_GameMode : ABattleRoyaleGameMode {
	// Fields
	struct ADynamicSublevelGenerator* LevelGenerator; // Offset: 0x22b0 // Size: 0x08

	// Functions

	// Object Name: Function PlanCHRuntime.PlanCH_GameMode.HandleNavigationInfo
	// Flags: [Final|Native|Private]
	void HandleNavigationInfo(struct AController* Controller); // Offset: 0x10221a45c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PlanCHRuntime.PlanCH_GameMode.GetPlayerStart
	// Flags: [Event|Public|BlueprintEvent]
	struct ASTExtraPlayerStart* GetPlayerStart(IntProperty LandId, IntProperty SkinID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function PlanCHRuntime.PlanCH_GameMode.DSPlayerKickOut
	// Flags: [Final|Native|Public]
	void DSPlayerKickOut(uint64 UID, struct FName PlayerType, StrProperty ExitReason); // Offset: 0x10221a2f4 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class PlanCHRuntime.PlanCH_GameModeState_Active
// Size: 0xc8 // Inherited bytes: 0xc8
struct UPlanCH_GameModeState_Active : UGameModeStateActive {
};

// Object Name: Class PlanCHRuntime.PlanCH_GameModeState_Fighting
// Size: 0xd8 // Inherited bytes: 0xd8
struct UPlanCH_GameModeState_Fighting : UGameModeStateFightingTeam {
};

// Object Name: Class PlanCHRuntime.PlanCH_GameState
// Size: 0x16b0 // Inherited bytes: 0x1620
struct APlanCH_GameState : ASTExtraGameStateBase {
	// Fields
	struct FScriptMulticastDelegate OnIslandPlayerChangeDelegate; // Offset: 0x1620 // Size: 0x10
	struct FPlanCH_CommonOccupy PartyDanceLeadInfo_2; // Offset: 0x1630 // Size: 0x20
	struct FPlanCH_CommonOccupy PartyDanceLeadInfo_3; // Offset: 0x1650 // Size: 0x20
	struct FPlanCH_CommonOccupy PartyDanceLeadInfo_4; // Offset: 0x1670 // Size: 0x20
	struct FPlanCH_CommonOccupy PartyDanceLeadInfo_5; // Offset: 0x1690 // Size: 0x20

	// Functions

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_5
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_5(); // Offset: 0x10221ac54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_4
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_4(); // Offset: 0x10221ac40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_3
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_3(); // Offset: 0x10221ac2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.OnRep_PartyDanceLeadInfo_2
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_2(); // Offset: 0x10221ac18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.LuaOnRep_PartyDanceLeadInfo
	// Flags: [Event|Public|BlueprintEvent]
	void LuaOnRep_PartyDanceLeadInfo(IntProperty LandId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlanCHRuntime.PlanCH_GameState.ChangePartyLeadInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangePartyLeadInfo(IntProperty LandId, bool bOccupied, IntProperty BeginTime, IntProperty EndTime, StrProperty PlayerUID); // Offset: 0x10221aa24 // Return & Params: Num(5) Size(0x20)
};

// Object Name: Class PlanCHRuntime.PlanCH_PlayerState
// Size: 0x1ce0 // Inherited bytes: 0x1cd8
struct APlanCH_PlayerState : ASTExtraPlayerState {
	// Fields
	IntProperty LandId; // Offset: 0x1cd8 // Size: 0x04
	IntProperty SkinID; // Offset: 0x1cdc // Size: 0x04

	// Functions

	// Object Name: Function PlanCHRuntime.PlanCH_PlayerState.RequestPaintDecal
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void RequestPaintDecal(IntProperty DecalId, struct FTransform& TargetTransform); // Offset: 0x10221b078 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function PlanCHRuntime.PlanCH_PlayerState.OnRep_SkinId
	// Flags: [Final|Native|Public]
	void OnRep_SkinId(); // Offset: 0x10221b064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_PlayerState.OnRep_LandId
	// Flags: [Final|Native|Public]
	void OnRep_LandId(); // Offset: 0x10221b050 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_PlayerState.InitLandId
	// Flags: [Event|Public|BlueprintEvent]
	void InitLandId(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCH_PlayerState.CanPaintDecal
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CanPaintDecal(IntProperty DecalId); // Offset: 0x10221afbc // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class PlanCHRuntime.PlanCHBinFileHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UPlanCHBinFileHelper : UObject {
	// Functions

	// Object Name: Function PlanCHRuntime.PlanCHBinFileHelper.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty Init(IntProperty z4BufferSize, IntProperty zeroListSize); // Offset: 0x10221b3d4 // Return & Params: Num(3) Size(0xc)
};

// Object Name: Class PlanCHRuntime.PlanCHGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct UPlanCHGameplayStatics : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function PlanCHRuntime.PlanCHGameplayStatics.SpinEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable]
	float SpinEvaluate(float S, float T); // Offset: 0x10221b870 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function PlanCHRuntime.PlanCHGameplayStatics.SetPlayerMovementBlendTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetPlayerMovementBlendTime(struct ASTExtraPlayerCharacter* PlayerChar, IntProperty nType, float BlendTime); // Offset: 0x10221b76c // Return & Params: Num(4) Size(0x11)

	// Object Name: Function PlanCHRuntime.PlanCHGameplayStatics.GetActorBound
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GetActorBound(struct AActor* Actor, struct FVector& Size); // Offset: 0x10221b6a8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function PlanCHRuntime.PlanCHGameplayStatics.ChangeLightChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangeLightChannel(struct UPrimitiveComponent* InComponent, IntProperty InChannelBitMask); // Offset: 0x10221b5f0 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class PlanCHRuntime.PlanCHMapData
// Size: 0xb8 // Inherited bytes: 0x98
struct UPlanCHMapData : UMapDataBase {
	// Fields
	struct TArray<struct ASTExtraPlayerCharacter*> PlayerCharacterArrayC; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FVector> OffsetLocations; // Offset: 0xa8 // Size: 0x10

	// Functions

	// Object Name: Function PlanCHRuntime.PlanCHMapData.RemovePlayerItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemovePlayerItem(struct ASTExtraPlayerCharacter* PlayerCharacterItem); // Offset: 0x10221bca8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PlanCHRuntime.PlanCHMapData.AddPlayerItem
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool AddPlayerItem(struct ASTExtraPlayerCharacter* PlayerCharacterItem, struct UWidget* PlayerInfoBPItem, struct UWidget* PlayerInfoRotWidgetItem, struct FVector OffsetLocation); // Offset: 0x10221bb6c // Return & Params: Num(5) Size(0x25)
};

// Object Name: Class PlanCHRuntime.PlanCHSpectatorPawn
// Size: 0x5a8 // Inherited bytes: 0x538
struct APlanCHSpectatorPawn : ASpectatorPawn {
	// Fields
	char pad_0x538[0x58]; // Offset: 0x538 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x590 // Size: 0x10
	float PlaneMoveMaxSpeed; // Offset: 0x5a0 // Size: 0x04
	float VerticalMoveMaxSpeed; // Offset: 0x5a4 // Size: 0x04

	// Functions

	// Object Name: Function PlanCHRuntime.PlanCHSpectatorPawn.OnSpectatorRestart
	// Flags: [Event|Public|BlueprintEvent]
	void OnSpectatorRestart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanCHRuntime.PlanCHSpectatorPawn.MoveRight
	// Flags: [Native|Public|BlueprintCallable]
	void MoveRight(float Val); // Offset: 0x10221bfb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlanCHRuntime.PlanCHSpectatorPawn.MoveForward
	// Flags: [Native|Public|BlueprintCallable]
	void MoveForward(float Val); // Offset: 0x10221bf30 // Return & Params: Num(1) Size(0x4)
};

