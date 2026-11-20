#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C
// Size: 0x3c9 // Inherited bytes: 0x260
struct UIngamePlayerInfoItem_UIBP_C : UUserWidget {
	// Fields
	struct UButton* Button_3; // Offset: 0x260 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x268 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x270 // Size: 0x08
	struct UImage* Image_colour; // Offset: 0x278 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x280 // Size: 0x08
	struct UImage* Image_Select; // Offset: 0x288 // Size: 0x08
	struct UImage* Image_tag; // Offset: 0x290 // Size: 0x08
	struct UImage* Image_tag1; // Offset: 0x298 // Size: 0x08
	struct UImage* Image_UnDownload; // Offset: 0x2a0 // Size: 0x08
	struct UImage* Logo; // Offset: 0x2a8 // Size: 0x08
	struct UTextBlock* TextBlock_UsingTips; // Offset: 0x2b0 // Size: 0x08
	struct FItemRecordData ItemInfo; // Offset: 0x2b8 // Size: 0x100
	struct FScriptMulticastDelegate OnPlayerInfoItemClicked; // Offset: 0x3b8 // Size: 0x10
	enum class EAvatarSlotType SlotType; // Offset: 0x3c8 // Size: 0x01

	// Functions

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.On_Button_2_MouseButtonDown_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply On_Button_2_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.SetEquipQuality
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEquipQuality(IntProperty InQuality); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.ToggleItemSelected
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ToggleItemSelected(IntProperty InSelectedItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.OnItemIconLoadDone
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnItemIconLoadDone(struct UObject* LoadedObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.RefreshItemInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshItemInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.HideInfoItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideInfoItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.ShowInfoItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowInfoItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.SetItemInfo
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetItemInfo(IntProperty ItemSpecificID, enum class EAvatarSlotType ItemSlotType, bool& IsShow); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function IngamePlayerInfoItem_UIBP.IngamePlayerInfoItem_UIBP_C.OnPlayerInfoItemClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnPlayerInfoItemClicked__DelegateSignature(bool ShowTips, IntProperty ItemId, StrProperty ItemName, StrProperty ItemDescription, struct FSlateBrush ItemIconBrush, IntProperty ItemQuality, enum class EAvatarSlotType ItemSlotType); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0xe5)
};

