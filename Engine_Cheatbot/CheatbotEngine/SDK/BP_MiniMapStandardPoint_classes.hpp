#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_MiniMapStandardPoint.BP_MiniMapStandardPoint_C
// Size: 0x5d9 // Inherited bytes: 0x5b8
struct ABP_MiniMapStandardPoint_C : AMiniMapStandardPoint {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x5b8 // Size: 0x08
	struct USceneComponent* DefaultSceneRoot; // Offset: 0x5c0 // Size: 0x08
	struct TArray<StrProperty> TagStrArray; // Offset: 0x5c8 // Size: 0x10
	bool bUseLuaConfig; // Offset: 0x5d8 // Size: 0x01

	// Functions

	// Object Name: Function BP_MiniMapStandardPoint.BP_MiniMapStandardPoint_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void UserConstructionScript(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MiniMapStandardPoint.BP_MiniMapStandardPoint_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_MiniMapStandardPoint.BP_MiniMapStandardPoint_C.ExecuteUbergraph_BP_MiniMapStandardPoint
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_MiniMapStandardPoint(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

