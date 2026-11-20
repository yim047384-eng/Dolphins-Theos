#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BattlePass_Coating_Item.BattlePass_Coating_Item_C
// Size: 0x2f1 // Inherited bytes: 0x260
struct UBattlePass_Coating_Item_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* RP_Switch; // Offset: 0x268 // Size: 0x08
	struct UUTRichTextBlock* AvatarName_RichText; // Offset: 0x270 // Size: 0x08
	struct UBorder* Border_2; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_xsuit; // Offset: 0x280 // Size: 0x08
	struct UCommon_Collect_Level_DynamicLoading_UIBP_C* Common_Collect_Level_DynamicLoading_UIBP; // Offset: 0x288 // Size: 0x08
	struct UGridPanel* GridPanel_Normal; // Offset: 0x290 // Size: 0x08
	struct UImage* Image_IDBG; // Offset: 0x298 // Size: 0x08
	struct UImage* Image_Nation; // Offset: 0x2a0 // Size: 0x08
	struct UImage* Image_Sele; // Offset: 0x2a8 // Size: 0x08
	struct UImage* Image_xsuit; // Offset: 0x2b0 // Size: 0x08
	struct UTextBlock* Level; // Offset: 0x2b8 // Size: 0x08
	struct UTextBlock* Name; // Offset: 0x2c0 // Size: 0x08
	struct UTextBlock* Point; // Offset: 0x2c8 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x2d0 // Size: 0x08
	struct UTitle_ingame_UIBP_C* Title_ingame_UIBP; // Offset: 0x2d8 // Size: 0x08
	struct UUnknowPass_ContinuousBuy_BP_C* UnknowPass_ContinuousBuy_BP; // Offset: 0x2e0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x2e8 // Size: 0x08
	bool bCheckShowScore; // Offset: 0x2f0 // Size: 0x01

	// Functions

	// Object Name: Function BattlePass_Coating_Item.BattlePass_Coating_Item_C.Show
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Show(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_Coating_Item.BattlePass_Coating_Item_C.SetData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetData(struct FGameModePlayerShowUpassInfo Data); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xb0)

	// Object Name: Function BattlePass_Coating_Item.BattlePass_Coating_Item_C.DelayShowScore
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayShowScore(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BattlePass_Coating_Item.BattlePass_Coating_Item_C.ExecuteUbergraph_BattlePass_Coating_Item
	// Flags: [None]
	void ExecuteUbergraph_BattlePass_Coating_Item(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

