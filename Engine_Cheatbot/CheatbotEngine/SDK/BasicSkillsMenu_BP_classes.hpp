#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BasicSkillsMenu_BP.BasicSkillsMenu_BP_C
// Size: 0x648 // Inherited bytes: 0x418
struct UBasicSkillsMenu_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* DX_DriverEnter; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* DX_PassengerEnter; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* DX_OpenDoor; // Offset: 0x430 // Size: 0x08
	struct UButton* BtnRescue; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_AutoDoor; // Offset: 0x440 // Size: 0x08
	struct UButton* Button_CancelUse; // Offset: 0x448 // Size: 0x08
	struct UButton* Button_Captive; // Offset: 0x450 // Size: 0x08
	struct UButton* Button_Door; // Offset: 0x458 // Size: 0x08
	struct UButton* Button_InteractiveMove; // Offset: 0x460 // Size: 0x08
	struct UButton* Button_PullDoor; // Offset: 0x468 // Size: 0x08
	struct UButton* Button_PushDoor; // Offset: 0x470 // Size: 0x08
	struct UButton* Button_PutDown; // Offset: 0x478 // Size: 0x08
	struct UButton* Button_PutDownDeadBox; // Offset: 0x480 // Size: 0x08
	struct UButton* Button_PutDownInVehicle; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_8; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_11; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_12; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CancelUse; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ColdMode; // Offset: 0x4b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_InteractibleObject; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_NewBieGuidePutDown; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_NewBieGuideSave; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PutDown; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TeamUpFail; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TeamUpPanel; // Offset: 0x4e0 // Size: 0x08
	struct UHorizontalBox* CDBox; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* CircleBox; // Offset: 0x4f0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizeCanvasPanel_Door; // Offset: 0x4f8 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizeCanvasPanel_DriveAndGetIn; // Offset: 0x500 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomPanel_InteractibleObject; // Offset: 0x508 // Size: 0x08
	struct UGridPanel* GridPanel_Door; // Offset: 0x510 // Size: 0x08
	struct UGridPanel* GridPanel_DriveAndGetIn; // Offset: 0x518 // Size: 0x08
	struct UGridPanel* GridPanel_Save; // Offset: 0x520 // Size: 0x08
	struct UImage* Icon; // Offset: 0x528 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x530 // Size: 0x08
	struct UImage* Image_8; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_9; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_10; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_11; // Offset: 0x550 // Size: 0x08
	struct UImage* Image_13; // Offset: 0x558 // Size: 0x08
	struct UImage* Image_15; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_31; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_Breath; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_BreathBG; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_Captive; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_CarryBG; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_Door; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_ItemCDBar; // Offset: 0x598 // Size: 0x08
	struct UImage* Image_PutDown; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_PutDownDeadBox; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* InteractiveComponentCDBar; // Offset: 0x5b0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x5b8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_7; // Offset: 0x5c0 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Interact; // Offset: 0x5c8 // Size: 0x08
	struct ULoopScrollBox* LoopScrollBox_Operation; // Offset: 0x5d0 // Size: 0x08
	struct UTextBlock* Text_CarryBack; // Offset: 0x5d8 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x5e0 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x5e8 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x5f0 // Size: 0x08
	struct UTextBlock* TextBlock_12; // Offset: 0x5f8 // Size: 0x08
	struct UTextBlock* TextBlock_18; // Offset: 0x600 // Size: 0x08
	struct UTextBlock* TextBlock_19; // Offset: 0x608 // Size: 0x08
	struct UTextBlock* TextBlock_BtnName; // Offset: 0x610 // Size: 0x08
	struct UTextBlock* TextBlock_Door; // Offset: 0x618 // Size: 0x08
	struct UTextBlock* TextBlock_ItemCDTime2; // Offset: 0x620 // Size: 0x08
	struct UTextBlock* TextBlock_PutDownDeadBox; // Offset: 0x628 // Size: 0x08
	struct UTextBlock* TextBlock_Time; // Offset: 0x630 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Door; // Offset: 0x638 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ModeSwitch; // Offset: 0x640 // Size: 0x08

	// Functions

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.CheckColdSkillBtn_Lighter
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckColdSkillBtn_Lighter(bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.CheckColdSkillBtn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CheckColdSkillBtn(bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BasicSkillsMenu_BP.BasicSkillsMenu_BP_C.ExecuteUbergraph_BasicSkillsMenu_BP
	// Flags: [None]
	void ExecuteUbergraph_BasicSkillsMenu_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

