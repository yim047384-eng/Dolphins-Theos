#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MapUIBase_BP.MapUIBase_BP_C
// Size: 0x190 // Inherited bytes: 0x98
struct UMapUIBase_BP_C : UMapObjct {
	// Fields
	struct ULuaUAEUserWidget* HoldWidget; // Offset: 0x98 // Size: 0x08
	struct UMapDataBase_BP_C* CurrentMapData_BP; // Offset: 0xa0 // Size: 0x08
	struct UMapUIBase* CurrentMapUI; // Offset: 0xa8 // Size: 0x08
	bool IsInitUIDuplicatedItemPool; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
	struct ABP_STExtraPlayerController_C* STExtraPlayerController; // Offset: 0xb8 // Size: 0x08
	struct ASTExtraGameStateBase* STEGameStateBase; // Offset: 0xc0 // Size: 0x08
	StrProperty DuplicatedPoolPath; // Offset: 0xc8 // Size: 0x10
	struct TArray<struct ASTExtraPlayerState*> TeamMatePlayerStateList; // Offset: 0xd8 // Size: 0x10
	struct TArray<struct ASTExtraPlayerState*> TeamPlayerWithoutLocalPlayer; // Offset: 0xe8 // Size: 0x10
	struct TArray<struct UPanelWidget*> PlayerInfoInMapGridArray; // Offset: 0xf8 // Size: 0x10
	IntProperty MateCount; // Offset: 0x108 // Size: 0x04
	char pad_0x10C[0x4]; // Offset: 0x10c // Size: 0x04
	struct TArray<struct UImage*> PlayerInfoInMapImageArray; // Offset: 0x110 // Size: 0x10
	struct TArray<struct FLinearColor> TeamColor; // Offset: 0x120 // Size: 0x10
	struct ASTExtraPlayerState* STEPlayerState; // Offset: 0x130 // Size: 0x08
	float LevelLandscapeExtent; // Offset: 0x138 // Size: 0x04
	float GuideLineMaxLength; // Offset: 0x13c // Size: 0x04
	struct FVector2D MapCurSize; // Offset: 0x140 // Size: 0x08
	float Offset; // Offset: 0x148 // Size: 0x04
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04
	struct TArray<StrProperty> InnerCircleGameModeID; // Offset: 0x150 // Size: 0x10
	enum class EPlayerOperation PlayerOperation; // Offset: 0x160 // Size: 0x01
	char pad_0x161[0x7]; // Offset: 0x161 // Size: 0x07
	struct AMiniMapStandardPoint* CurrentMinimapStandardPoint; // Offset: 0x168 // Size: 0x08
	struct UImage* MapImage; // Offset: 0x170 // Size: 0x08
	bool bIsMiniMap; // Offset: 0x178 // Size: 0x01
	bool bIsInfectMode; // Offset: 0x179 // Size: 0x01
	bool bIsVehicleWarMode; // Offset: 0x17a // Size: 0x01
	bool bIsShow; // Offset: 0x17b // Size: 0x01
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
	StrProperty CurTag; // Offset: 0x180 // Size: 0x10

	// Functions

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.OnDestroy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnDestroy(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleChangeMapTexture
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleChangeMapTexture(StrProperty MapTexturePath, float MapScale, StrProperty MapStandTag); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.OnSpectatorChanged
	// Flags: [Protected|BlueprintCallable|BlueprintEvent]
	void OnSpectatorChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleOnPlayerEnterFlying
	// Flags: [Protected|BlueprintCallable|BlueprintEvent]
	void HandleOnPlayerEnterFlying(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleReceiveInitWidget
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleReceiveInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleInitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleInitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapUIBase_BP.MapUIBase_BP_C.HandleConstruct
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleConstruct(struct ULuaUAEUserWidget* InWidget, struct UMapDataBase_BP_C* InMapDataBaseBp); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)
};

