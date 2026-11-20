#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ChangeSight_UIBP.ChangeSight_UIBP_C
// Size: 0x4a8 // Inherited bytes: 0x418
struct UChangeSight_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBorder* Border_Sight; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_ChangeSight; // Offset: 0x428 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_Sight; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Tips; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanelList; // Offset: 0x440 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP; // Offset: 0x448 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP_1; // Offset: 0x450 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP_8; // Offset: 0x458 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP_9; // Offset: 0x460 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP_10; // Offset: 0x468 // Size: 0x08
	struct UChangeSight_Item01_UIBP_C* ChangeSight_Item01_UIBP_213; // Offset: 0x470 // Size: 0x08
	struct UCustomScrollBox* CustomScrollBox_1; // Offset: 0x478 // Size: 0x08
	struct USizeBox* SizeBox_Sight; // Offset: 0x480 // Size: 0x08
	struct UTextBlock* TextBlock_SightName; // Offset: 0x488 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ChangeSight; // Offset: 0x490 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Tips; // Offset: 0x498 // Size: 0x08
	struct UWrapBox* WrapBox_List; // Offset: 0x4a0 // Size: 0x08

	// Functions

	// Object Name: Function ChangeSight_UIBP.ChangeSight_UIBP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ChangeSight_UIBP.ChangeSight_UIBP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function ChangeSight_UIBP.ChangeSight_UIBP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ChangeSight_UIBP.ChangeSight_UIBP_C.ExecuteUbergraph_ChangeSight_UIBP
	// Flags: [None]
	void ExecuteUbergraph_ChangeSight_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

