#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BtnEnterSelfie.BtnEnterSelfie_C
// Size: 0x678 // Inherited bytes: 0x488
struct UBtnEnterSelfie_C : UCustomUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UButton* BtnEnterTakePhotos; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_12; // Offset: 0x498 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x4a0 // Size: 0x08
	struct FSlateBrush PressImg; // Offset: 0x4a8 // Size: 0xb8
	struct FSlateBrush NormalImg; // Offset: 0x560 // Size: 0xb8
	bool IsInTakePhotoMode; // Offset: 0x618 // Size: 0x01
	bool ActiveFreeCamera; // Offset: 0x619 // Size: 0x01
	char pad_0x61A[0x2]; // Offset: 0x61a // Size: 0x02
	struct FGeometry MyGeometry; // Offset: 0x61c // Size: 0x38
	bool TickSwitch; // Offset: 0x654 // Size: 0x01
	char pad_0x655[0x3]; // Offset: 0x655 // Size: 0x03
	StrProperty CapturePath; // Offset: 0x658 // Size: 0x10
	StrProperty MySelfObj; // Offset: 0x668 // Size: 0x10

	// Functions

	// Object Name: Function BtnEnterSelfie.BtnEnterSelfie_C.BndEvt__BtnEnterTakePhotos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__BtnEnterTakePhotos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BtnEnterSelfie.BtnEnterSelfie_C.ExecuteUbergraph_BtnEnterSelfie
	// Flags: [None]
	void ExecuteUbergraph_BtnEnterSelfie(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

