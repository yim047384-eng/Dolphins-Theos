#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class PlanPHRuntime.BinFileHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UBinFileHelper : UObject {
	// Functions

	// Object Name: Function PlanPHRuntime.BinFileHelper.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty Init(IntProperty z4BufferSize, IntProperty zeroListSize); // Offset: 0x102232a38 // Return & Params: Num(3) Size(0xc)
};

// Object Name: Class PlanPHRuntime.MapBarrierWidget
// Size: 0x130 // Inherited bytes: 0x100
struct UMapBarrierWidget : UWidget {
	// Fields
	char pad_0x100[0x30]; // Offset: 0x100 // Size: 0x30

	// Functions

	// Object Name: Function PlanPHRuntime.MapBarrierWidget.SetMapStructureData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMapStructureData(struct TArray<struct FStructureData> InMapStructureData); // Offset: 0x102232fec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PlanPHRuntime.MapBarrierWidget.SetMapMidPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetMapMidPoint(struct FVector2D& InMapMidPoint); // Offset: 0x102232f64 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLevelBoundExtent(IntProperty InLevelBoundExtent); // Offset: 0x102232ee8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlanPHRuntime.MapBarrierWidget.SetGridSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGridSize(float InGridSize); // Offset: 0x102232e6c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PlanPHRuntime.PlanPH_GameMode
// Size: 0x22b8 // Inherited bytes: 0x22b0
struct APlanPH_GameMode : ABattleRoyaleGameMode {
	// Fields
	char pad_0x22B0[0x8]; // Offset: 0x22b0 // Size: 0x08

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo
	// Flags: [Final|Native|Private]
	void HandleNavigationInfo(struct AController* Controller); // Offset: 0x1022334b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart
	// Flags: [Event|Public|BlueprintEvent]
	struct ASTExtraPlayerStart* GetPlayerStart(IntProperty LandId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut
	// Flags: [Final|Native|Public]
	void DSPlayerKickOut(uint64 UID, struct FName PlayerType, StrProperty ExitReason); // Offset: 0x102233350 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class PlanPHRuntime.PlanPH_GameModeState_Active
// Size: 0xc8 // Inherited bytes: 0xc8
struct UPlanPH_GameModeState_Active : UGameModeStateActive {
};

// Object Name: Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// Size: 0xd8 // Inherited bytes: 0xd8
struct UPlanPH_GameModeState_Fighting : UGameModeStateFightingTeam {
};

// Object Name: Class PlanPHRuntime.PlanPH_GameState
// Size: 0x16d0 // Inherited bytes: 0x1620
struct APlanPH_GameState : ASTExtraGameStateBase {
	// Fields
	struct FScriptMulticastDelegate OnIslandPlayerChangeDelegate; // Offset: 0x1620 // Size: 0x10
	struct FPlanPH_CommonOccupy PartyDanceLeadInfo_2; // Offset: 0x1630 // Size: 0x28
	struct FPlanPH_CommonOccupy PartyDanceLeadInfo_3; // Offset: 0x1658 // Size: 0x28
	struct FPlanPH_CommonOccupy PartyDanceLeadInfo_4; // Offset: 0x1680 // Size: 0x28
	struct FPlanPH_CommonOccupy PartyDanceLeadInfo_5; // Offset: 0x16a8 // Size: 0x28

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_5
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_5(); // Offset: 0x102233cc0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_4
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_4(); // Offset: 0x102233cac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_3
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_3(); // Offset: 0x102233c98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_2
	// Flags: [Final|Native|Public]
	void OnRep_PartyDanceLeadInfo_2(); // Offset: 0x102233c84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.LuaOnRep_PartyDanceLeadInfo
	// Flags: [Event|Public|BlueprintEvent]
	void LuaOnRep_PartyDanceLeadInfo(IntProperty LandId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlanPHRuntime.PlanPH_GameState.ChangePartyLeadInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangePartyLeadInfo(IntProperty LandId, bool bOccupied, IntProperty BeginTime, IntProperty EndTime, StrProperty PlayerUID, bool bIsWedding); // Offset: 0x102233a48 // Return & Params: Num(6) Size(0x21)
};

// Object Name: Class PlanPHRuntime.PlanPH_PlayerState
// Size: 0x1ce0 // Inherited bytes: 0x1cd8
struct APlanPH_PlayerState : ASTExtraPlayerState {
	// Fields
	IntProperty LandId; // Offset: 0x1cd8 // Size: 0x04
	char pad_0x1CDC[0x4]; // Offset: 0x1cdc // Size: 0x04

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPH_PlayerState.RequestPaintDecal
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void RequestPaintDecal(IntProperty DecalId, struct FTransform& TargetTransform); // Offset: 0x1022340dc // Return & Params: Num(2) Size(0x40)

	// Object Name: Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId
	// Flags: [Final|Native|Public]
	void OnRep_LandId(); // Offset: 0x1022340c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_PlayerState.InitLandId
	// Flags: [Event|Public|BlueprintEvent]
	void InitLandId(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPH_PlayerState.CanPaintDecal
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool CanPaintDecal(IntProperty DecalId); // Offset: 0x102234034 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class PlanPHRuntime.PlanPHCustomStaticMeshComponent
// Size: 0xc30 // Inherited bytes: 0xbd0
struct UPlanPHCustomStaticMeshComponent : UStaticMeshComponent {
	// Fields
	char pad_0xBD0[0x50]; // Offset: 0xbd0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xc20 // Size: 0x10

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPreSetStaticMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void BPPreSetStaticMesh(struct UStaticMesh* NewMesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPostSetStaticMesh
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void BPPostSetStaticMesh(struct UStaticMesh* NewMesh); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class PlanPHRuntime.PlanPHDoor
// Size: 0x588 // Inherited bytes: 0x570
struct APlanPHDoor : ALuaActor {
	// Fields
	bool bUseDoorWaitPush; // Offset: 0x569 // Size: 0x01
	struct FVector WrapExtentsOffset; // Offset: 0x56c // Size: 0x0c
	struct FVector TransformDirVector; // Offset: 0x578 // Size: 0x0c

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Refresh_DoorCollisionChanel(struct UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision); // Offset: 0x1022346d4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PlanPHRuntime.PlanPHDoor.DoorAniFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DoorAniFinish(struct UStaticMeshComponent* InDoorCheckBox, bool Bright); // Offset: 0x102234614 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class PlanPHRuntime.PlanPHGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct UPlanPHGameplayStatics : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHGameplayStatics.SpinEvaluate
	// Flags: [Final|Native|Public|BlueprintCallable]
	float SpinEvaluate(float S, float T); // Offset: 0x102234bdc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function PlanPHRuntime.PlanPHGameplayStatics.SetPlayerMovementBlendTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetPlayerMovementBlendTime(struct ASTExtraPlayerCharacter* PlayerChar, IntProperty nType, float BlendTime); // Offset: 0x102234ad8 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function PlanPHRuntime.PlanPHGameplayStatics.GetActorBound
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GetActorBound(struct AActor* Actor, struct FVector& Size); // Offset: 0x102234a14 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangeLightChannel(struct UPrimitiveComponent* InComponent, IntProperty InChannelBitMask); // Offset: 0x10223495c // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class PlanPHRuntime.PlanPHHomeArea
// Size: 0x5a8 // Inherited bytes: 0x570
struct APlanPHHomeArea : ALuaActor {
	// Fields
	struct FVector BlockDimension; // Offset: 0x56c // Size: 0x0c
	struct FIntVector BlockNumXYZ; // Offset: 0x578 // Size: 0x0c
	struct FIntVector MinGridIndexXYZ; // Offset: 0x584 // Size: 0x0c
	struct FIntVector MaxGridIndexXYZ; // Offset: 0x590 // Size: 0x0c
	struct UPlanPHHomeAreaVisualizationComponent* VisComponent; // Offset: 0x5a0 // Size: 0x08

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void UpdateEditableArea(struct FIntVector InMinGridIndexXYZ, struct FIntVector InMaxGridIndexXYZ); // Offset: 0x102234ed8 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// Size: 0x9e0 // Inherited bytes: 0x9d0
struct UPlanPHHomeAreaVisualizationComponent : UPrimitiveComponent {
	// Fields
	char pad_0x9D0[0x10]; // Offset: 0x9d0 // Size: 0x10

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowGrids(bool InBShow); // Offset: 0x1022350f4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class PlanPHRuntime.PlanPHMapData
// Size: 0xb8 // Inherited bytes: 0x98
struct UPlanPHMapData : UMapDataBase {
	// Fields
	struct TArray<struct ASTExtraPlayerCharacter*> PlayerCharacterArrayC; // Offset: 0x98 // Size: 0x10
	struct TArray<struct FVector> OffsetLocations; // Offset: 0xa8 // Size: 0x10

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemovePlayerItem(struct ASTExtraPlayerCharacter* PlayerCharacterItem); // Offset: 0x102235420 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PlanPHRuntime.PlanPHMapData.AddPlayerItem
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool AddPlayerItem(struct ASTExtraPlayerCharacter* PlayerCharacterItem, struct UWidget* PlayerInfoBPItem, struct UWidget* PlayerInfoRotWidgetItem, struct FVector OffsetLocation); // Offset: 0x1022352e4 // Return & Params: Num(5) Size(0x25)
};

// Object Name: Class PlanPHRuntime.PlanPHSpectatorPawn
// Size: 0x5a8 // Inherited bytes: 0x538
struct APlanPHSpectatorPawn : ASpectatorPawn {
	// Fields
	char pad_0x538[0x58]; // Offset: 0x538 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x590 // Size: 0x10
	float PlaneMoveMaxSpeed; // Offset: 0x5a0 // Size: 0x04
	float VerticalMoveMaxSpeed; // Offset: 0x5a4 // Size: 0x04

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart
	// Flags: [Event|Public|BlueprintEvent]
	void OnSpectatorRestart(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight
	// Flags: [Native|Public|BlueprintCallable]
	void MoveRight(float Val); // Offset: 0x102235728 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward
	// Flags: [Native|Public|BlueprintCallable]
	void MoveForward(float Val); // Offset: 0x1022356a4 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PlanPHRuntime.PlanPHVisualGridComponent
// Size: 0xa30 // Inherited bytes: 0x9d0
struct UPlanPHVisualGridComponent : UPrimitiveComponent {
	// Fields
	struct FVector BlockDimension; // Offset: 0x9c8 // Size: 0x0c
	struct FIntVector BlockNumXYZ; // Offset: 0x9d4 // Size: 0x0c
	struct FLinearColor XColor; // Offset: 0x9e0 // Size: 0x10
	struct FLinearColor YColor; // Offset: 0x9f0 // Size: 0x10
	struct FLinearColor ZColor; // Offset: 0xa00 // Size: 0x10
	float LineThickness; // Offset: 0xa10 // Size: 0x04
	char pad_0xA1C[0x4]; // Offset: 0xa1c // Size: 0x04
	bool bShouldShowGrids; // Offset: 0xa20 // Size: 0x01
	char pad_0xA21[0xf]; // Offset: 0xa21 // Size: 0x0f

	// Functions

	// Object Name: Function PlanPHRuntime.PlanPHVisualGridComponent.ShowGrids
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowGrids(bool InBShow); // Offset: 0x1022359a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PlanPHRuntime.PlanPHVisualGridComponent.RefreshGrids
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshGrids(); // Offset: 0x102235994 // Return & Params: Num(0) Size(0x0)
};

