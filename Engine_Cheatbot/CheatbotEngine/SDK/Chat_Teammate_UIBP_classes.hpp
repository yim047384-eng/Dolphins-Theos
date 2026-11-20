#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Chat_Teammate_UIBP.Chat_Teammate_UIBP_C
// Size: 0x498 // Inherited bytes: 0x488
struct UChat_Teammate_UIBP_C : ULuaUAEUserWidget {
	// Fields
	struct UChat_Teammate_ItemUIBP_C* Chat_Item1; // Offset: 0x488 // Size: 0x08
	struct UChat_Teammate_ItemUIBP_C* Chat_Item2; // Offset: 0x490 // Size: 0x08

	// Functions

	// Object Name: Function Chat_Teammate_UIBP.Chat_Teammate_UIBP_C.ClearMark
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearMark(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Chat_Teammate_UIBP.Chat_Teammate_UIBP_C.AddOneMark
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddOneMark(struct FQuickSignMsg QuickSignMsg, struct FInGameChatMsg ChatMsg, StrProperty Content); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x110)
};

