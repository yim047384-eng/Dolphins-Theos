#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CanvasPanel_HandleState.CanvasPanel_HandleState_C
// Size: 0x251 // Inherited bytes: 0x230
struct UCanvasPanel_HandleState_C : UUAECanvasPanelHandleState {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x230 // Size: 0x08
	bool Ñv,TU; // Offset: 0x238 // Size: 0x01
	bool Ñv,T8nól¶r`ØSS; // Offset: 0x239 // Size: 0x01
	bool (W8nólb—g>f:yöe>f:yå‹§cöN; // Offset: 0x23a // Size: 0x01
	char pad_0x23B[0x5]; // Offset: 0x23b // Size: 0x05
	struct TArray<enum class EOperation> (WS_MRU; // Offset: 0x240 // Size: 0x10
	bool bShootingUIPanel; // Offset: 0x250 // Size: 0x01

	// Functions

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.OnWeaponChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnWeaponChanged(IntProperty PlayerKey); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.RegisterWeaponChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RegisterWeaponChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.OnSwimUIStateChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnSwimUIStateChanged(bool bShowSwimUI); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.OnSwitchUIOperation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnSwitchUIOperation(IntProperty UIOperation); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.RegisterSwimStateChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RegisterSwimStateChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.RegisterSwitchUIOperation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RegisterSwitchUIOperation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.ReceiveInitCanvasPanel
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitCanvasPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CanvasPanel_HandleState.CanvasPanel_HandleState_C.ExecuteUbergraph_CanvasPanel_HandleState
	// Flags: [None]
	void ExecuteUbergraph_CanvasPanel_HandleState(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

