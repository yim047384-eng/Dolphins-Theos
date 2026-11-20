#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass FlauntBtn_UIBP.FlauntBtn_UIBP_C
// Size: 0x4d8 // Inherited bytes: 0x418
struct UFlauntBtn_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* Anim_Tips_In; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* Loop; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* FadeIn; // Offset: 0x430 // Size: 0x08
	struct UBorder* Border_Flaunt; // Offset: 0x438 // Size: 0x08
	struct UBorder* Border_Flaunt_02; // Offset: 0x440 // Size: 0x08
	struct UBorder* Border_FX; // Offset: 0x448 // Size: 0x08
	struct UBorder* Border_FX_02; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_Flaunt; // Offset: 0x458 // Size: 0x08
	struct UButton* Button_Flaunt_02; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* CanvasPanel; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x470 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizePanel_Flaunt; // Offset: 0x478 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizePanel_Flaunt_02; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* TextBlock_Flaunt; // Offset: 0x4a0 // Size: 0x08
	struct UTextBlock* TextBlock_Flaunt_02; // Offset: 0x4a8 // Size: 0x08
	struct UTextBlock* TextBlock_KillInfo; // Offset: 0x4b0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // Offset: 0x4b8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Icon_02; // Offset: 0x4c0 // Size: 0x08
	struct TArray<struct UObject*> WidgetRefrence; // Offset: 0x4c8 // Size: 0x10

	// Functions

	// Object Name: Function FlauntBtn_UIBP.FlauntBtn_UIBP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function FlauntBtn_UIBP.FlauntBtn_UIBP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FlauntBtn_UIBP.FlauntBtn_UIBP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function FlauntBtn_UIBP.FlauntBtn_UIBP_C.ExecuteUbergraph_FlauntBtn_UIBP
	// Flags: [None]
	void ExecuteUbergraph_FlauntBtn_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

