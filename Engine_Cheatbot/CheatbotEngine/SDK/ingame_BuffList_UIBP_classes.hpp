#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ingame_BuffList_UIBP.ingame_BuffList_UIBP_C
// Size: 0x461 // Inherited bytes: 0x418
struct Uingame_BuffList_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UHorizontalBox* BuffListHorizontalBox; // Offset: 0x420 // Size: 0x08
	struct UVerticalBox* BuffListLeftBox; // Offset: 0x428 // Size: 0x08
	struct UVerticalBox* BuffListRightBox; // Offset: 0x430 // Size: 0x08
	struct UVerticalBox* BuffListVerticalBox; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_OneBox; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TwoBox; // Offset: 0x450 // Size: 0x08
	struct UPanelWidget* BuffListBox; // Offset: 0x458 // Size: 0x08
	bool IsVerticle; // Offset: 0x460 // Size: 0x01

	// Functions

	// Object Name: Function ingame_BuffList_UIBP.ingame_BuffList_UIBP_C.HideAllBuffDesc
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideAllBuffDesc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ingame_BuffList_UIBP.ingame_BuffList_UIBP_C.OnBuffGuidMatchCountAdd
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnBuffGuidMatchCountAdd(IntProperty BuffID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ingame_BuffList_UIBP.ingame_BuffList_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ingame_BuffList_UIBP.ingame_BuffList_UIBP_C.ExecuteUbergraph_ingame_BuffList_UIBP
	// Flags: [None]
	void ExecuteUbergraph_ingame_BuffList_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

