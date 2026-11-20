#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickExpressionDecalUI.QuickExpressionDecalUI_C
// Size: 0x498 // Inherited bytes: 0x418
struct UQuickExpressionDecalUI_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UButton* Button_ChangeSight; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Button; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Guide1; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_JoyStick; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x448 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_Sight; // Offset: 0x450 // Size: 0x08
	struct UImage* Image_MoreRedPoint; // Offset: 0x458 // Size: 0x08
	struct UImage* Image_Paint; // Offset: 0x460 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x468 // Size: 0x08
	struct UTextBlock* TextBlock_Guide1; // Offset: 0x470 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Button; // Offset: 0x478 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ChangeSight; // Offset: 0x480 // Size: 0x08
	struct TArray<struct UObject*> WidgetRefrence; // Offset: 0x488 // Size: 0x10

	// Functions

	// Object Name: Function QuickExpressionDecalUI.QuickExpressionDecalUI_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function QuickExpressionDecalUI.QuickExpressionDecalUI_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionDecalUI.QuickExpressionDecalUI_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function QuickExpressionDecalUI.QuickExpressionDecalUI_C.ExecuteUbergraph_QuickExpressionDecalUI
	// Flags: [None]
	void ExecuteUbergraph_QuickExpressionDecalUI(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

