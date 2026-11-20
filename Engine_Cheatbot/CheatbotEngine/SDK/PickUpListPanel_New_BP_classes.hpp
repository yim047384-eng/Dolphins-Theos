#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpListPanel_New_BP.PickUpListPanel_New_BP_C
// Size: 0x5f8 // Inherited bytes: 0x4f0
struct UPickUpListPanel_New_BP_C : UPickupListWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_Ninepalaces; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_OBmode_HideList; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_PickupTombBox; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_Sixpalaces; // Offset: 0x510 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* Canvas_PickBox; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* CanvasGroup_Pickup; // Offset: 0x520 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CustomizeMount; // Offset: 0x528 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PickBoxItemGuide; // Offset: 0x530 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PickupDetail_XAndT; // Offset: 0x538 // Size: 0x08
	struct UCustomizePickUpPanel_BP_C* CustomizePickUpPanel_BP; // Offset: 0x540 // Size: 0x08
	struct UCanvasPanel* DeadBoxBtnExistControl; // Offset: 0x548 // Size: 0x08
	struct UGridPanel* GridPanel_7; // Offset: 0x550 // Size: 0x08
	struct UGridPanel* GridPanel_Mode; // Offset: 0x558 // Size: 0x08
	struct UGridPanel* GridPanel_PickUpList; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* GridPanel_Root; // Offset: 0x568 // Size: 0x08
	struct UImage* ImageNine; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* PickUpBtnExistControl; // Offset: 0x578 // Size: 0x08
	struct UPickUpListItem_Row_BP_C* PickUpListItem_Row_BP; // Offset: 0x580 // Size: 0x08
	struct UCustomScrollBox* ScrollBox_PickUpListMode1; // Offset: 0x588 // Size: 0x08
	struct UCustomScrollBox* ScrollBox_PickUpListMode2; // Offset: 0x590 // Size: 0x08
	struct UShortcutMenu_BP_C* ShortcutMenu_BP; // Offset: 0x598 // Size: 0x08
	struct USizeBox* SizeBox_PanelList; // Offset: 0x5a0 // Size: 0x08
	struct UTextBlock* TextBlockNine; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* Tips14; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* Tips14_2; // Offset: 0x5b8 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips14; // Offset: 0x5c0 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips14_2; // Offset: 0x5c8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x5d0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherCol; // Offset: 0x5d8 // Size: 0x08
	struct UWrapBox* WrapBox_Mode2; // Offset: 0x5e0 // Size: 0x08
	struct FScriptMulticastDelegate CollapseStuffList; // Offset: 0x5e8 // Size: 0x10

	// Functions

	// Object Name: Function PickUpListPanel_New_BP.PickUpListPanel_New_BP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function PickUpListPanel_New_BP.PickUpListPanel_New_BP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PickUpListPanel_New_BP.PickUpListPanel_New_BP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpListPanel_New_BP.PickUpListPanel_New_BP_C.ExecuteUbergraph_PickUpListPanel_New_BP
	// Flags: [None]
	void ExecuteUbergraph_PickUpListPanel_New_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PickUpListPanel_New_BP.PickUpListPanel_New_BP_C.CollapseStuffList__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void CollapseStuffList__DelegateSignature(bool bDeadBox); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

