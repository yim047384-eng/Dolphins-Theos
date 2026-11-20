#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Chat_Teammate_ItemUIBP.Chat_Teammate_ItemUIBP_C
// Size: 0x4e8 // Inherited bytes: 0x488
struct UChat_Teammate_ItemUIBP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Anim_Selection; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anim_DisAppear; // Offset: 0x498 // Size: 0x08
	struct UWidgetAnimation* Anim_Appear; // Offset: 0x4a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x4a8 // Size: 0x08
	struct UUTRichTextBlock* ChatChannelText; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_AnimBG; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x4c0 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Image_IconBG; // Offset: 0x4d0 // Size: 0x08
	struct UImage* Image_Mark; // Offset: 0x4d8 // Size: 0x08
	struct UImage* Image_MarkBG; // Offset: 0x4e0 // Size: 0x08

	// Functions

	// Object Name: Function Chat_Teammate_ItemUIBP.Chat_Teammate_ItemUIBP_C.ExecuteUbergraph_Chat_Teammate_ItemUIBP
	// Flags: [None]
	void ExecuteUbergraph_Chat_Teammate_ItemUIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

