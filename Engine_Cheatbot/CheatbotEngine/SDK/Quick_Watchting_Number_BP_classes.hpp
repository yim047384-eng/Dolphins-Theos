#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Quick_Watchting_Number_BP.Quick_Watchting_Number_BP_C
// Size: 0x280 // Inherited bytes: 0x260
struct UQuick_Watchting_Number_BP_C : UUserWidget {
	// Fields
	struct UImage* Image_gender; // Offset: 0x260 // Size: 0x08
	struct UImage* Image_Man; // Offset: 0x268 // Size: 0x08
	struct UUTRichTextBlock* RichTextBlock; // Offset: 0x270 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_gender; // Offset: 0x278 // Size: 0x08

	// Functions

	// Object Name: Function Quick_Watchting_Number_BP.Quick_Watchting_Number_BP_C.RefreshSpectatorItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshSpectatorItem(struct FText SpectatorName, IntProperty SpectatorGender); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Quick_Watchting_Number_BP.Quick_Watchting_Number_BP_C.SetName
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetName(struct FText SpectatorName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Quick_Watchting_Number_BP.Quick_Watchting_Number_BP_C.SetGender
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetGender(IntProperty TargetGender); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

