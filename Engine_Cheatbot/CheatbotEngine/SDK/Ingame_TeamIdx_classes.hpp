#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_TeamIdx.Ingame_TeamIdx_C
// Size: 0x2a5 // Inherited bytes: 0x260
struct UIngame_TeamIdx_C : UUserWidget {
	// Fields
	struct UWidgetAnimation* Anim_Loop_01; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* Anim_Fire_01; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Fadien; // Offset: 0x270 // Size: 0x08
	struct UBorder* Border_AnimBot; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AnimFront; // Offset: 0x280 // Size: 0x08
	struct UGridPanel* GridPanel_Normal; // Offset: 0x288 // Size: 0x08
	struct UImage* Image_IDBG; // Offset: 0x290 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIdx; // Offset: 0x298 // Size: 0x08
	IntProperty TeamIdx; // Offset: 0x2a0 // Size: 0x04
	bool BlazeAnimPlayed; // Offset: 0x2a4 // Size: 0x01

	// Functions

	// Object Name: Function Ingame_TeamIdx.Ingame_TeamIdx_C.SetTeamIndex
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetTeamIndex(IntProperty Index); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

