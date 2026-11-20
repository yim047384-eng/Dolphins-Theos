#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass CancelGrenadeBtn.CancelGrenadeBtn_C
// Size: 0x448 // Inherited bytes: 0x418
struct UCancelGrenadeBtn_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_CancelThrowGrenade; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* GridPanel_CancelThrowGrenade; // Offset: 0x428 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x430 // Size: 0x08
	struct UTextBlock* TextCancel; // Offset: 0x438 // Size: 0x08
	struct UWidgetSwitcher* TextSwitch; // Offset: 0x440 // Size: 0x08

	// Functions

	// Object Name: Function CancelGrenadeBtn.CancelGrenadeBtn_C.CancelThrow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CancelThrow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CancelGrenadeBtn.CancelGrenadeBtn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CancelGrenadeBtn.CancelGrenadeBtn_C.ExecuteUbergraph_CancelGrenadeBtn
	// Flags: [None]
	void ExecuteUbergraph_CancelGrenadeBtn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

