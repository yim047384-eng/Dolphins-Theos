#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C
// Size: 0x4f8 // Inherited bytes: 0x418
struct UUnknowPass_ContinuousBuy_BP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* RpIconGlow_LOD2; // Offset: 0x420 // Size: 0x08
	struct UWidgetAnimation* RpIconGlow_LOD0; // Offset: 0x428 // Size: 0x08
	struct UWidgetAnimation* GetTitle; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x440 // Size: 0x08
	struct USizeBox* FX0; // Offset: 0x448 // Size: 0x08
	struct USizeBox* FX1; // Offset: 0x450 // Size: 0x08
	struct UCanvasPanel* FX1_A; // Offset: 0x458 // Size: 0x08
	struct USizeBox* FX2; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* FX3; // Offset: 0x468 // Size: 0x08
	struct UImage* FX30; // Offset: 0x470 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x478 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x480 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_22; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_Elite_vpass; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_None_A; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_Normal_A; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_Plus_A; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher; // Offset: 0x4c8 // Size: 0x08
	struct FScriptMulticastDelegate OnClickBg; // Offset: 0x4d0 // Size: 0x10
	StrProperty LevelName; // Offset: 0x4e0 // Size: 0x10
	IntProperty thisSeasonId; // Offset: 0x4f0 // Size: 0x04
	IntProperty HighestLevel; // Offset: 0x4f4 // Size: 0x04

	// Functions

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.GetSeasonId
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetSeasonId(IntProperty InSeasonId, IntProperty& SeasonID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetTypeData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetTypeData(IntProperty SeasonID, IntProperty KeepBuy, bool IsElite, IntProperty Online, IntProperty Value, IntProperty PassType); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetEliteImage
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEliteImage(IntProperty SeasonID, IntProperty Level, IntProperty Value, bool IsElite); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.HideFx
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideFx(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetSeasonImage
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetSeasonImage(IntProperty KeepBuy); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.SetData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetData(IntProperty SeasonID, IntProperty KeepBuy, bool IsElite, IntProperty Online, IntProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.HideAll
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAll(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.ExecuteUbergraph_UnknowPass_ContinuousBuy_BP
	// Flags: [None]
	void ExecuteUbergraph_UnknowPass_ContinuousBuy_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UnknowPass_ContinuousBuy_BP.UnknowPass_ContinuousBuy_BP_C.OnClickBg__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnClickBg__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

