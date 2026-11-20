#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass NavigatorPlayerMarkItem.NavigatorPlayerMarkItem_C
// Size: 0x430 // Inherited bytes: 0x418
struct UNavigatorPlayerMarkItem_C : UUAEUserWidget {
	// Fields
	struct UCanvasPanel* Canvas_PlayerMark; // Offset: 0x418 // Size: 0x08
	struct UImage* DirectionMarker; // Offset: 0x420 // Size: 0x08
	struct UTextBlock* DirectionMarker_Dist; // Offset: 0x428 // Size: 0x08

	// Functions

	// Object Name: Function NavigatorPlayerMarkItem.NavigatorPlayerMarkItem_C.InitCustomData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void InitCustomData(IntProperty CustomStaus, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function NavigatorPlayerMarkItem.NavigatorPlayerMarkItem_C.SetMarkColor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkColor(struct FLinearColor Color, struct FLinearColor& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function NavigatorPlayerMarkItem.NavigatorPlayerMarkItem_C.GetIconDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIconDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPlayerMarkItem.NavigatorPlayerMarkItem_C.GetMarkDistWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMarkDistWidget(struct UTextBlock*& Return); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

