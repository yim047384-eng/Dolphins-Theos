#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass VehicleBackpackItem.VehicleBackpackItem_C
// Size: 0x2e4 // Inherited bytes: 0x260
struct UVehicleBackpackItem_C : UUserWidget {
	// Fields
	struct UCanvasPanel* CanvasPanel_ColdModeInfo; // Offset: 0x260 // Size: 0x08
	struct UCustomSocketPanel* EnergySocket; // Offset: 0x268 // Size: 0x08
	struct UImage* Image_CanEquippedItemBG; // Offset: 0x270 // Size: 0x08
	struct UImage* Image_GiftBoxBG; // Offset: 0x278 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x280 // Size: 0x08
	struct UProgressBar* ProgressBar_Damage; // Offset: 0x288 // Size: 0x08
	struct UTextBlock* TextBlock_Num; // Offset: 0x290 // Size: 0x08
	struct FPickUpItemData Item; // Offset: 0x298 // Size: 0x38
	bool Useful; // Offset: 0x2d0 // Size: 0x01
	bool StartTouch; // Offset: 0x2d1 // Size: 0x01
	char pad_0x2D2[0x6]; // Offset: 0x2d2 // Size: 0x06
	struct APlayerController* Player; // Offset: 0x2d8 // Size: 0x08
	IntProperty ItemId; // Offset: 0x2e0 // Size: 0x04

	// Functions

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.GetLuaFilePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	StrProperty GetLuaFilePath(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.OnDragDetected
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xb8)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.RefreshElectricty
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshElectricty(struct TArray<struct FBattleItemAdditionalData>& Data); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.FindDualbility
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void FindDualbility(struct TArray<struct FBattleItemAdditionalData>& Data, float& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.ShowDurable
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowDurable(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.UpdateUseless
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateUseless(bool use); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function VehicleBackpackItem.VehicleBackpackItem_C.SetItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetItem(struct FPickUpItemData PickupItem, bool use, struct APlayerController* Player); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x48)
};

