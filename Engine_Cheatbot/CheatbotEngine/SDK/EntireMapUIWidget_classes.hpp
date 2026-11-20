#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass EntireMapUIWidget.EntireMapUIWidget_C
// Size: 0x720 // Inherited bytes: 0x4c0
struct UEntireMapUIWidget_C : UMapUIWidgetBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetAnimation* Anim_RingFX; // Offset: 0x4c8 // Size: 0x08
	struct UWidgetAnimation* DX_Button_Out; // Offset: 0x4d0 // Size: 0x08
	struct UWidgetAnimation* DX_Button_In; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* AdapationCanvasPanel; // Offset: 0x4e0 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x4e8 // Size: 0x08
	struct UButton* Button_AutoLock; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_ClearMultiMark; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_DelMarkIcon; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_GameGuideTab; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_HideMap; // Offset: 0x510 // Size: 0x08
	struct UButton* Button_MapTab; // Offset: 0x518 // Size: 0x08
	struct UButton* Button_MultiMark; // Offset: 0x520 // Size: 0x08
	struct UButton* Button_RevertMultiMark; // Offset: 0x528 // Size: 0x08
	struct UButton* Button_SelfLock; // Offset: 0x530 // Size: 0x08
	struct UButton* Button_SelfMark; // Offset: 0x538 // Size: 0x08
	struct UButton* Button_SingleMark; // Offset: 0x540 // Size: 0x08
	struct UButton* Button_ZoomIn; // Offset: 0x548 // Size: 0x08
	struct UButton* Button_ZoomOut; // Offset: 0x550 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AutoLock; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ClipMaskBox; // Offset: 0x568 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_GuideHideMap; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_GuideTab; // Offset: 0x578 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Line; // Offset: 0x580 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Line2; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Line3; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Line4; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MapGroup; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MapImageSize; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MapOverlap; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MapTab; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MarkRoot1; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MarkRoot2; // Offset: 0x5c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Player; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ReshowRoute; // Offset: 0x5d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ReshowRouteEffect; // Offset: 0x5e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x5e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_ScaleButton; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Station; // Offset: 0x5f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Task; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TaskTips; // Offset: 0x608 // Size: 0x08
	struct UCheckBox* CheckBox_ReshowRoute; // Offset: 0x610 // Size: 0x08
	struct UCanvasPanel* CommonFunctionAddPanel; // Offset: 0x618 // Size: 0x08
	struct UCanvasPanel* DynamicMarkPanel; // Offset: 0x620 // Size: 0x08
	struct UEditableTextBox* EditableTextBox_Location; // Offset: 0x628 // Size: 0x08
	struct UCanvasPanel* EntireMapCanvas; // Offset: 0x630 // Size: 0x08
	struct UImage* EntireMapImage; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* ExtraAddBottomPanel; // Offset: 0x640 // Size: 0x08
	struct UCanvasPanel* ExtraAddTopPanel; // Offset: 0x648 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Route; // Offset: 0x650 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x658 // Size: 0x08
	struct UImage* Image_10; // Offset: 0x660 // Size: 0x08
	struct UImage* Image_13; // Offset: 0x668 // Size: 0x08
	struct UImage* Image_14; // Offset: 0x670 // Size: 0x08
	struct UImage* Image_15; // Offset: 0x678 // Size: 0x08
	struct UImage* Image_16; // Offset: 0x680 // Size: 0x08
	struct UImage* Image_GuideTab; // Offset: 0x688 // Size: 0x08
	struct UImage* Image_MapTab; // Offset: 0x690 // Size: 0x08
	struct UImage* Image_Reddot; // Offset: 0x698 // Size: 0x08
	struct UImage* Image_SliderLine; // Offset: 0x6a0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_PlayerAddPanel; // Offset: 0x6a8 // Size: 0x08
	struct UMapCircleAndLineBlackboard_C* MapCircleAndLineBlackboard; // Offset: 0x6b0 // Size: 0x08
	struct UOverlay* Overlay_Map; // Offset: 0x6b8 // Size: 0x08
	struct UCanvasPanel* PlayerAddPanel; // Offset: 0x6c0 // Size: 0x08
	struct UCanvasPanel* SimpleModeHideCanvas; // Offset: 0x6c8 // Size: 0x08
	struct UCanvasPanel* SimpleModeShowCanvas; // Offset: 0x6d0 // Size: 0x08
	struct USlider* Slider_MapZoom; // Offset: 0x6d8 // Size: 0x08
	struct UImage* Station_Icon; // Offset: 0x6e0 // Size: 0x08
	struct UVerticalBox* VerticalBox_LeftTop; // Offset: 0x6e8 // Size: 0x08
	struct UVerticalBox* VerticalBox_Right; // Offset: 0x6f0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_AutoLock; // Offset: 0x6f8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_GuideTab; // Offset: 0x700 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_MapMark; // Offset: 0x708 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_MapTab; // Offset: 0x710 // Size: 0x08
	struct UEntireMapUI_BP_C* CurrentMapUIBP; // Offset: 0x718 // Size: 0x08

	// Functions

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.InitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Destruct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.UpdatePlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdatePlayerState(enum class ExtraPlayerLiveState State, struct ACharacter* OwnerCharacter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function EntireMapUIWidget.EntireMapUIWidget_C.ExecuteUbergraph_EntireMapUIWidget
	// Flags: [None]
	void ExecuteUbergraph_EntireMapUIWidget(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

