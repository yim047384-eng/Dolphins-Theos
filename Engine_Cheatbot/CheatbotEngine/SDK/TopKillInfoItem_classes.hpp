#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass TopKillInfoItem.TopKillInfoItem_C
// Size: 0x4f0 // Inherited bytes: 0x488
struct UTopKillInfoItem_C : ULuaUAEUserWidget {
	// Fields
	struct UWidgetAnimation* Anima1; // Offset: 0x488 // Size: 0x08
	struct UBorder* Border_TopPlatformTipsColor; // Offset: 0x490 // Size: 0x08
	struct UImage* FX_ZBLight01; // Offset: 0x498 // Size: 0x08
	struct UImage* FX_ZBLight02; // Offset: 0x4a0 // Size: 0x08
	struct UImage* FX_ZBLight03; // Offset: 0x4a8 // Size: 0x08
	struct UImage* Image_PlatformIcon; // Offset: 0x4b0 // Size: 0x08
	struct UImage* Image_TopPlatformIcon1; // Offset: 0x4b8 // Size: 0x08
	struct UImage* Image_TopPlatformIcon2; // Offset: 0x4c0 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x4c8 // Size: 0x08
	struct UUTRichTextBlock* TopPlatformPlayerName1; // Offset: 0x4d0 // Size: 0x08
	struct UUTRichTextBlock* TopPlatformPlayerName2; // Offset: 0x4d8 // Size: 0x08
	struct UUTRichTextBlock* TopPlatformPlayerName3; // Offset: 0x4e0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher; // Offset: 0x4e8 // Size: 0x08

	// Functions

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformVictimIconCallBack_1
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformVictimIconCallBack_1(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformVictimIcon
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformVictimIcon(IntProperty Index, StrProperty& RetPrefix); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformCauserIconCallback
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformCauserIconCallback(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformCauserIcon
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformCauserIcon(IntProperty Index, StrProperty& RetPrefix); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformVictimeColoredText
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FText GetTopPlatformVictimeColoredText(StrProperty inString, IntProperty AnchorColorID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformCauserColoredText
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FText GetTopPlatformCauserColoredText(StrProperty inString, IntProperty AnchorColorID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformVictimNonIconCallback
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformVictimNonIconCallback(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformVictimNonIcon
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformVictimNonIcon(IntProperty Index, StrProperty& RetPrefix); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformAnchorColor
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformAnchorColor(IntProperty Index, StrProperty& RetPrefix); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.GetTopPlatformKilledString
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetTopPlatformKilledString(StrProperty Victim, IntProperty DamageType, IntProperty AnchorColorID, struct FText& Result); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function TopKillInfoItem.TopKillInfoItem_C.IsTopPlatformUseSingleLineTips
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsTopPlatformUseSingleLineTips(StrProperty Causer, IntProperty DamageType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x15)
};

