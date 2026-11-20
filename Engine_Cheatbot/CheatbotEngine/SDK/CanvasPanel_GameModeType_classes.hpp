#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CanvasPanel_GameModeType.CanvasPanel_GameModeType_C
// Size: 0x168 // Inherited bytes: 0x130
struct UCanvasPanel_GameModeType_C : UUAECanvasPanel {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x130 // Size: 0x08
	struct TArray<enum class EGameModeType> ForbidGameModeType; // Offset: 0x138 // Size: 0x10
	struct TArray<enum class EGameModeSubType> ForbidGameModeSubType; // Offset: 0x148 // Size: 0x10
	struct TArray<IntProperty> ForbidGameModeID; // Offset: 0x158 // Size: 0x10

	// Functions

	// Object Name: Function CanvasPanel_GameModeType.CanvasPanel_GameModeType_C.ReceiveInitCanvasPanel
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitCanvasPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CanvasPanel_GameModeType.CanvasPanel_GameModeType_C.ExecuteUbergraph_CanvasPanel_GameModeType
	// Flags: [None]
	void ExecuteUbergraph_CanvasPanel_GameModeType(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

