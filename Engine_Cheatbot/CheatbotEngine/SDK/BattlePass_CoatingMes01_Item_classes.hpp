#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BattlePass_CoatingMes01_Item.BattlePass_CoatingMes01_Item_C
// Size: 0x468 // Inherited bytes: 0x418
struct UBattlePass_CoatingMes01_Item_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* DX_Entrance; // Offset: 0x418 // Size: 0x08
	struct UGridPanel* GridPanel_Normal; // Offset: 0x420 // Size: 0x08
	struct UImage* Image_IDBG; // Offset: 0x428 // Size: 0x08
	struct UImage* Image_Sele; // Offset: 0x430 // Size: 0x08
	struct UImage* ImageArrow; // Offset: 0x438 // Size: 0x08
	struct UTextBlock* Level; // Offset: 0x440 // Size: 0x08
	struct UTextBlock* Name; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x450 // Size: 0x08
	struct UUnknowPass_ContinuousBuy_BP_C* UnknowPass_ContinuousBuy_BP; // Offset: 0x458 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x460 // Size: 0x08

	// Functions

	// Object Name: Function BattlePass_CoatingMes01_Item.BattlePass_CoatingMes01_Item_C.SetSelectShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSelectShow(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes01_Item.BattlePass_CoatingMes01_Item_C.SetArrowShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetArrowShow(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BattlePass_CoatingMes01_Item.BattlePass_CoatingMes01_Item_C.SetData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetData(struct FGameModePlayerShowUpassInfo Data); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xb0)
};

