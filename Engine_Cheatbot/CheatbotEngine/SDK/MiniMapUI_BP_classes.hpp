#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MiniMapUI_BP.MiniMapUI_BP_C
// Size: 0x1e5 // Inherited bytes: 0x190
struct UMiniMapUI_BP_C : UMapUIBase_BP_C {
	// Fields
	float MapWindowHalfExtent; // Offset: 0x190 // Size: 0x04
	IntProperty CurPlayerId; // Offset: 0x194 // Size: 0x04
	struct TArray<struct UImage*> PlayerInfoNumImageArray; // Offset: 0x198 // Size: 0x10
	struct TArray<struct UCanvasPanel*> arrowImageArray_DeadControl; // Offset: 0x1a8 // Size: 0x10
	struct TArray<struct UImage*> DeadIconArray; // Offset: 0x1b8 // Size: 0x10
	struct UMiniMapUIWidget_C* HoldMiniWidget; // Offset: 0x1c8 // Size: 0x08
	float StandardScale; // Offset: 0x1d0 // Size: 0x04
	IntProperty SpectatorNum; // Offset: 0x1d4 // Size: 0x04
	IntProperty AirDropIndex2; // Offset: 0x1d8 // Size: 0x04
	bool UseOutMinimapscale; // Offset: 0x1dc // Size: 0x01
	char pad_0x1DD[0x3]; // Offset: 0x1dd // Size: 0x03
	float OutMiniMapScale; // Offset: 0x1e0 // Size: 0x04
	bool bNotChangeScale; // Offset: 0x1e4 // Size: 0x01
};

