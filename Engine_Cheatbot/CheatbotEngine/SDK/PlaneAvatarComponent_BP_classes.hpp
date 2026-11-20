#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C
// Size: 0x4fc // Inherited bytes: 0x4e8
struct UPlaneAvatarComponent_BP_C : UPlaneAvatarComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4e8 // Size: 0x08
	float ChangeDissolveTime; // Offset: 0x4f0 // Size: 0x04
	bool BOpenDissolve; // Offset: 0x4f4 // Size: 0x01
	char pad_0x4F5[0x3]; // Offset: 0x4f5 // Size: 0x03
	float DissolveValue; // Offset: 0x4f8 // Size: 0x04

	// Functions

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.CreateItemAvatarHandle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBattleItemHandleBase* CreateItemAvatarHandle(IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_SetMatDissolve
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BP_SetMatDissolve(float NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.BP_OnPlaneAvatarChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void BP_OnPlaneAvatarChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.GetPlaneAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackPlaneAvatarHandle* GetPlaneAvatarHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.PlaneAvatarChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlaneAvatarChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PlaneAvatarComponent_BP.PlaneAvatarComponent_BP_C.ExecuteUbergraph_PlaneAvatarComponent_BP
	// Flags: [None]
	void ExecuteUbergraph_PlaneAvatarComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

