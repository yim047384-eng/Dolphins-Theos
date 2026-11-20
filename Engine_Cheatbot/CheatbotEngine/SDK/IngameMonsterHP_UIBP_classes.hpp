#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass IngameMonsterHP_UIBP.IngameMonsterHP_UIBP_C
// Size: 0x468 // Inherited bytes: 0x418
struct UIngameMonsterHP_UIBP_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* CanvasPanel_Health; // Offset: 0x418 // Size: 0x08
	struct UProgressBar* ProgressBar_Health_Green; // Offset: 0x420 // Size: 0x08
	struct UProgressBar* ProgressBar_Health_Red; // Offset: 0x428 // Size: 0x08
	struct UTextBlock* TextBlock_HPName; // Offset: 0x430 // Size: 0x08
	struct UTextBlock* TextBlock_Lv; // Offset: 0x438 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_BarFrame; // Offset: 0x440 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ProgressBar; // Offset: 0x448 // Size: 0x08
	IntProperty TraceDistance; // Offset: 0x450 // Size: 0x04
	char pad_0x454[0x4]; // Offset: 0x454 // Size: 0x04
	struct TArray<struct ACharacter*> ShowPawnClassArr; // Offset: 0x458 // Size: 0x10

	// Functions

	// Object Name: Function IngameMonsterHP_UIBP.IngameMonsterHP_UIBP_C.GetFocusMonster
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetFocusMonster(struct AActor*& res); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

