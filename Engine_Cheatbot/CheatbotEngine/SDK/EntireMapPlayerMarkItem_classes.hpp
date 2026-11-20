#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass EntireMapPlayerMarkItem.EntireMapPlayerMarkItem_C
// Size: 0x4a0 // Inherited bytes: 0x488
struct UEntireMapPlayerMarkItem_C : ULuaUAEUserWidget {
	// Fields
	struct UImage* Image_PlayerMarkInMap; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* PlayerMarkInMap; // Offset: 0x490 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerMarkDistance; // Offset: 0x498 // Size: 0x08

	// Functions

	// Object Name: Function EntireMapPlayerMarkItem.EntireMapPlayerMarkItem_C.GetIconDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIconDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function EntireMapPlayerMarkItem.EntireMapPlayerMarkItem_C.SetMarkColor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkColor(struct FLinearColor Color, struct FLinearColor& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function EntireMapPlayerMarkItem.EntireMapPlayerMarkItem_C.SetMarkDist
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetMarkDist(IntProperty Dist, bool IsShow, IntProperty& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function EntireMapPlayerMarkItem.EntireMapPlayerMarkItem_C.UpdateMark
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateMark(bool IsShow, struct FVector2D MarkRenderTranslation, float Opacity, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x11)
};

