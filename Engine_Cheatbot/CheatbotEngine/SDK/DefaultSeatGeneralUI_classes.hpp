#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass DefaultSeatGeneralUI.DefaultSeatGeneralUI_C
// Size: 0x4d0 // Inherited bytes: 0x418
struct UDefaultSeatGeneralUI_C : UUAEUserWidget {
	// Fields
	struct UButton* Button_ChangeSeat; // Offset: 0x418 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Socket; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_SeatBG_1; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_SeatBG_2; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_SeatBG_3; // Offset: 0x440 // Size: 0x08
	struct UImage* Image_SeatBG_4; // Offset: 0x448 // Size: 0x08
	struct UImage* Image_SeatBG_5; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_SeatBG_6; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_SeatBG_7; // Offset: 0x460 // Size: 0x08
	struct UImage* Image_SeatBG_8; // Offset: 0x468 // Size: 0x08
	struct UImage* Image_SeatTag_1; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_SeatTag_2; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_SeatTag_3; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_SeatTag_4; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_SeatTag_5; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_SeatTag_6; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_SeatTag_7; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_SeatTag_8; // Offset: 0x4a8 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* VehicleChangeSeat; // Offset: 0x4b0 // Size: 0x08
	struct UVerticalBox* VerticalBox_Seat; // Offset: 0x4b8 // Size: 0x08
	struct FScriptMulticastDelegate OnClose; // Offset: 0x4c0 // Size: 0x10

	// Functions

	// Object Name: Function DefaultSeatGeneralUI.DefaultSeatGeneralUI_C.OnClose__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnClose__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

