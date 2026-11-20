#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C
// Size: 0x320 // Inherited bytes: 0x318
struct UBP_GameEventListener_C : UGameEventListener {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x318 // Size: 0x08

	// Functions

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultNearClipPlane
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDefaultNearClipPlane(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.IsIOSPlatform
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void IsIOSPlatform(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.SetDefaultRendering
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDefaultRendering(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.EnableGrassLOD
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnableGrassLOD(IntProperty Enable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.ChangeStreamingLevel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangeStreamingLevel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.InitIncaseReconnect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitIncaseReconnect(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.ReceiveEndPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.UnloadTree
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UnloadTree(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.LoadTree
	// Flags: [BlueprintCallable|BlueprintEvent]
	void LoadTree(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_GameEventListener.BP_GameEventListener_C.ExecuteUbergraph_BP_GameEventListener
	// Flags: [None]
	void ExecuteUbergraph_BP_GameEventListener(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

