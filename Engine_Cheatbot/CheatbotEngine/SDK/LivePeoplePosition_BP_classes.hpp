#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass LivePeoplePosition_BP.LivePeoplePosition_BP_C
// Size: 0x510 // Inherited bytes: 0x4c0
struct ULivePeoplePosition_BP_C : UAnchorFlagWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CorpsInfo; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_State; // Offset: 0x4d8 // Size: 0x08
	struct UGridPanel* GridPanel_Name; // Offset: 0x4e0 // Size: 0x08
	struct UImage* Image_blank_HideOrCollapsed; // Offset: 0x4e8 // Size: 0x08
	struct UImage* Image_PlatformIcon; // Offset: 0x4f0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_3; // Offset: 0x4f8 // Size: 0x08
	struct UTextBlock* TextBlock_CorpsName; // Offset: 0x500 // Size: 0x08
	struct UUTRichTextBlock* TextBlock_Teammate_Name; // Offset: 0x508 // Size: 0x08

	// Functions

	// Object Name: Function LivePeoplePosition_BP.LivePeoplePosition_BP_C.SetCorpName
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetCorpName(StrProperty CorpName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function LivePeoplePosition_BP.LivePeoplePosition_BP_C.CreateIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CreateIcon(struct UObject* Icon, IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function LivePeoplePosition_BP.LivePeoplePosition_BP_C.SetPlatIconAndName
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetPlatIconAndName(IntProperty PlatID, IntProperty ColorID, StrProperty Name); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function LivePeoplePosition_BP.LivePeoplePosition_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LivePeoplePosition_BP.LivePeoplePosition_BP_C.ExecuteUbergraph_LivePeoplePosition_BP
	// Flags: [None]
	void ExecuteUbergraph_LivePeoplePosition_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

