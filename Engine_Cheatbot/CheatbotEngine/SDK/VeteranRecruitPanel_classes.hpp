#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass VeteranRecruitPanel.VeteranRecruitPanel_C
// Size: 0x485 // Inherited bytes: 0x418
struct UVeteranRecruitPanel_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* TipAnimation; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_2; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x430 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x438 // Size: 0x08
	struct TArray<StrProperty> AllTipsArray; // Offset: 0x440 // Size: 0x10
	struct FTimerHandle ShowTipTimeHandler; // Offset: 0x450 // Size: 0x08
	IntProperty NowShowTipIndex; // Offset: 0x458 // Size: 0x04
	char pad_0x45C[0x4]; // Offset: 0x45c // Size: 0x04
	struct FScriptMulticastDelegate SwitchVeteranStatus_TeamItem; // Offset: 0x460 // Size: 0x10
	struct FScriptMulticastDelegate SwitchVeteranStatus_TeamPositionItem; // Offset: 0x470 // Size: 0x10
	IntProperty ShowTipsNum; // Offset: 0x480 // Size: 0x04
	bool HaveShown; // Offset: 0x484 // Size: 0x01

	// Functions

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.ShowSingleTip
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ShowSingleTip(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.MakeToShowTipsArray
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MakeToShowTipsArray(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.BeginShowTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BeginShowTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.EndShowTips
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EndShowTips(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.ExecuteUbergraph_VeteranRecruitPanel
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VeteranRecruitPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.SwitchVeteranStatus_TeamPositionItem__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void SwitchVeteranStatus_TeamPositionItem__DelegateSignature(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function VeteranRecruitPanel.VeteranRecruitPanel_C.SwitchVeteranStatus_TeamItem__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void SwitchVeteranStatus_TeamItem__DelegateSignature(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

