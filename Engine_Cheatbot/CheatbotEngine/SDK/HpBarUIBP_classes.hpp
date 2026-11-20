#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass HpBarUIBP.HpBarUIBP_C
// Size: 0x689 // Inherited bytes: 0x630
struct UHpBarUIBP_C : UNormalActorPositionWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x630 // Size: 0x08
	struct UWidgetAnimation* Animation_Appear; // Offset: 0x638 // Size: 0x08
	struct UBorder* Border_Monster; // Offset: 0x640 // Size: 0x08
	struct UCanvasPanel* Canvas_Root; // Offset: 0x648 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x650 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_Panel; // Offset: 0x658 // Size: 0x08
	struct UProgressBar* ProgressBar_Health; // Offset: 0x660 // Size: 0x08
	struct UProgressBar* ProgressBar_Health_Green; // Offset: 0x668 // Size: 0x08
	struct UProgressBar* ProgressBar_VirtualHealth; // Offset: 0x670 // Size: 0x08
	struct UProgressBar* ProgressBar_White; // Offset: 0x678 // Size: 0x08
	struct UTextBlock* TextBlock_HPName; // Offset: 0x680 // Size: 0x08
	bool bIsTeammate_1; // Offset: 0x688 // Size: 0x01

	// Functions

	// Object Name: Function HpBarUIBP.HpBarUIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HpBarUIBP.HpBarUIBP_C.ExecuteUbergraph_HpBarUIBP
	// Flags: [None]
	void ExecuteUbergraph_HpBarUIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

