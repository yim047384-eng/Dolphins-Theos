#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MainBackPackRolewearTab.MainBackPackRolewearTab_C
// Size: 0x2f8 // Inherited bytes: 0x260
struct UMainBackPackRolewearTab_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* percent; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Percent_Battle; // Offset: 0x270 // Size: 0x08
	struct UButton* Button_Index; // Offset: 0x278 // Size: 0x08
	struct UImage* Image_39; // Offset: 0x280 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x288 // Size: 0x08
	struct UImage* Image_Exchange; // Offset: 0x290 // Size: 0x08
	struct UImage* Image_lock2; // Offset: 0x298 // Size: 0x08
	struct UImage* Image_mask2; // Offset: 0x2a0 // Size: 0x08
	struct UImage* Image_Select; // Offset: 0x2a8 // Size: 0x08
	struct UImage* Image_yijia; // Offset: 0x2b0 // Size: 0x08
	struct UImage* Image_yijiaSel; // Offset: 0x2b8 // Size: 0x08
	struct UTextBlock* Text_index; // Offset: 0x2c0 // Size: 0x08
	struct FScriptMulticastDelegate OnIndexTabClicked; // Offset: 0x2c8 // Size: 0x10
	IntProperty Index; // Offset: 0x2d8 // Size: 0x04
	char pad_0x2DC[0x4]; // Offset: 0x2dc // Size: 0x04
	struct FTimerHandle TimerHandle; // Offset: 0x2e0 // Size: 0x08
	float AnimationCurrentTime; // Offset: 0x2e8 // Size: 0x04
	float AnimationLength; // Offset: 0x2ec // Size: 0x04
	bool IsSelect; // Offset: 0x2f0 // Size: 0x01
	char pad_0x2F1[0x3]; // Offset: 0x2f1 // Size: 0x03
	float StartCDTime; // Offset: 0x2f4 // Size: 0x04

	// Functions

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.RefreshCountDownAni
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshCountDownAni(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.SetData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetData(IntProperty Index, bool IsSelected, bool IsLocked, bool NeedCD, StrProperty ShowText); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.CoolDown
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CoolDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.BndEvt__Button_Index_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Index_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.ClearCoolDown
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ClearCoolDown(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.ExecuteUbergraph_MainBackPackRolewearTab
	// Flags: [None]
	void ExecuteUbergraph_MainBackPackRolewearTab(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MainBackPackRolewearTab.MainBackPackRolewearTab_C.OnIndexTabClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnIndexTabClicked__DelegateSignature(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

