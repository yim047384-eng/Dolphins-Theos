#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass NavigatorPlayerMarkInterface.NavigatorPlayerMarkInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UNavigatorPlayerMarkInterface_C : UInterface {
	// Functions

	// Object Name: Function NavigatorPlayerMarkInterface.NavigatorPlayerMarkInterface_C.InitCustomData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void InitCustomData(IntProperty CustomStaus, bool& res); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function NavigatorPlayerMarkInterface.NavigatorPlayerMarkInterface_C.GetMarkDistWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetMarkDistWidget(struct UTextBlock*& Return); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPlayerMarkInterface.NavigatorPlayerMarkInterface_C.GetIconDisplayWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetIconDisplayWidget(struct UWidget*& Widget); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function NavigatorPlayerMarkInterface.NavigatorPlayerMarkInterface_C.SetMarkColor
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetMarkColor(struct FLinearColor Color, struct FLinearColor& Return); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)
};

