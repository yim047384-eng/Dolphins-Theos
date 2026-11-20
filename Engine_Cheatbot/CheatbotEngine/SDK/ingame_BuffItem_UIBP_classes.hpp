#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C
// Size: 0x510 // Inherited bytes: 0x488
struct Uingame_BuffItem_UIBP_C : ULuaUAEUserWidget {
	// Fields
	struct UButton* Button_ShowTips; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DescDown; // Offset: 0x490 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DescUp; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x4a0 // Size: 0x08
	struct UImage* Image_BG_card; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_BOXCDBar; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_CoolDownMask; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_LeftLine; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_RightLine; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_SkillTipCIrcle; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* Skill_Desc_Tips; // Offset: 0x4d8 // Size: 0x08
	struct UTextBlock* Text_Buff; // Offset: 0x4e0 // Size: 0x08
	struct UTextBlock* Text_CD; // Offset: 0x4e8 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_SkillDEsc; // Offset: 0x4f0 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_SkillDEsc_Down; // Offset: 0x4f8 // Size: 0x08
	struct FScriptMulticastDelegate OnShowBuffDesc; // Offset: 0x500 // Size: 0x10

	// Functions

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.HideBuffDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideBuffDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.AutoShowBuffDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AutoShowBuffDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.SetBuffDesc
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetBuffDesc(IntProperty txtid); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.TickBuffItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TickBuffItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.UpdateBuffInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateBuffInfo(IntProperty BuffID, struct UObject* ubuffobj); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.InitBuffInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitBuffInfo(IntProperty BuffID, struct UObject* ubuffobj); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function ingame_BuffItem_UIBP.ingame_BuffItem_UIBP_C.OnShowBuffDesc__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnShowBuffDesc__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

