#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass MapPlayerMarkInterface.MapPlayerMarkInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UMapPlayerMarkInterface_C : UInterface {
	// Functions

	// Object Name: Function MapPlayerMarkInterface.MapPlayerMarkInterface_C.GetIconDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIconDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapPlayerMarkInterface.MapPlayerMarkInterface_C.UpdateMark
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateMark(bool IsShow, struct FVector2D MarkRenderTranslation, float Opacity, bool& Return); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function MapPlayerMarkInterface.MapPlayerMarkInterface_C.SetMarkDist
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkDist(IntProperty Dist, bool IsShow, IntProperty& Return); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MapPlayerMarkInterface.MapPlayerMarkInterface_C.SetMarkColor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkColor(struct FLinearColor Color, struct FLinearColor& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)
};

