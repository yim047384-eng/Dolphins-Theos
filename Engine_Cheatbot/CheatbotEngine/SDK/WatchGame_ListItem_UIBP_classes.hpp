#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass WatchGame_ListItem_UIBP.WatchGame_ListItem_UIBP_C
// Size: 0x4e0 // Inherited bytes: 0x418
struct UWatchGame_ListItem_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_Selected; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_NormalBG; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_SelectedBG; // Offset: 0x430 // Size: 0x08
	struct UTextBlock* TextBlock_Namber; // Offset: 0x438 // Size: 0x08
	struct UTextBlock* TextBlock_TeamName; // Offset: 0x440 // Size: 0x08
	struct UTextBlock* TextBlock_TeamName01; // Offset: 0x448 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Name; // Offset: 0x450 // Size: 0x08
	IntProperty TeammatePlayerID; // Offset: 0x458 // Size: 0x04
	char pad_0x45C[0x4]; // Offset: 0x45c // Size: 0x04
	struct UWatchGame_UIBP_C* MyParent; // Offset: 0x460 // Size: 0x08
	IntProperty MyIndex; // Offset: 0x468 // Size: 0x04
	bool Dead; // Offset: 0x46c // Size: 0x01
	char pad_0x46D[0x3]; // Offset: 0x46d // Size: 0x03
	StrProperty PlayerName; // Offset: 0x470 // Size: 0x10
	struct FSlateColor Color1; // Offset: 0x480 // Size: 0x28
	struct FSlateColor colo2; // Offset: 0x4a8 // Size: 0x28
	StrProperty PlayerUID; // Offset: 0x4d0 // Size: 0x10

	// Functions

	// Object Name: Function WatchGame_ListItem_UIBP.WatchGame_ListItem_UIBP_C.SetSelect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSelect(bool Sel); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function WatchGame_ListItem_UIBP.WatchGame_ListItem_UIBP_C.SetInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetInfo(IntProperty PlayerID, StrProperty PlayerName, struct UWatchGame_UIBP_C* Parent, IntProperty Index, bool IsAlive, StrProperty PlayerUID); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x38)

	// Object Name: Function WatchGame_ListItem_UIBP.WatchGame_ListItem_UIBP_C.BndEvt__Button_Selected_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Selected_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function WatchGame_ListItem_UIBP.WatchGame_ListItem_UIBP_C.ExecuteUbergraph_WatchGame_ListItem_UIBP
	// Flags: [None]
	void ExecuteUbergraph_WatchGame_ListItem_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

