#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C
// Size: 0x4e8 // Inherited bytes: 0x418
struct UWatchGameUIAvatarItem_UIBP_C : UUAEUserWidget {
	// Fields
	struct UImage* Image_AvatarIcon; // Offset: 0x418 // Size: 0x08
	struct USceneCaptureWidget* SceneCaptureWidget_1; // Offset: 0x420 // Size: 0x08
	bool IsPressed; // Offset: 0x428 // Size: 0x01
	char pad_0x429[0x3]; // Offset: 0x429 // Size: 0x03
	float LocationX; // Offset: 0x42c // Size: 0x04
	struct FSlateBrush ImgBrush; // Offset: 0x430 // Size: 0xb8

	// Functions

	// Object Name: Function WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C.HDRSwitch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HDRSwitch(bool IsHDR); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C.GetAvatarCapture
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetAvatarCapture(struct AAvatarCapture*& AvatarCapture); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function WatchGameUIAvatarItem_UIBP.WatchGameUIAvatarItem_UIBP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)
};

