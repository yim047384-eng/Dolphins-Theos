#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MiniMapPlayerMarkItem.MiniMapPlayerMarkItem_C
// Size: 0x268 // Inherited bytes: 0x260
struct UMiniMapPlayerMarkItem_C : UUserWidget {
	// Fields
	struct UImage* Image_PlayerMarkInMap; // Offset: 0x260 // Size: 0x08

	// Functions

	// Object Name: Function MiniMapPlayerMarkItem.MiniMapPlayerMarkItem_C.SetMarkDist
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkDist(IntProperty Dist, bool IsShow, IntProperty& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MiniMapPlayerMarkItem.MiniMapPlayerMarkItem_C.SetMarkColor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkColor(struct FLinearColor Color, struct FLinearColor& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function MiniMapPlayerMarkItem.MiniMapPlayerMarkItem_C.UpdateMark
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateMark(bool IsShow, struct FVector2D MarkRenderTranslation, float Opacity, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function MiniMapPlayerMarkItem.MiniMapPlayerMarkItem_C.GetIconDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIconDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

