#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C
// Size: 0x321 // Inherited bytes: 0x260
struct ULobby_RoleInfo_IntimacyItem_UIBP_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* Anim_Out; // Offset: 0x268 // Size: 0x08
	struct UWidgetAnimation* Anim_in; // Offset: 0x270 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_2; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_3; // Offset: 0x280 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_4; // Offset: 0x288 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_5; // Offset: 0x290 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_6; // Offset: 0x298 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Glow_7; // Offset: 0x2a0 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x2a8 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x2b0 // Size: 0x08
	struct UIntimacyItemChildItem_Glow01_UIBP_C* IntimacyItemChildItem_Glow01_UIBP; // Offset: 0x2b8 // Size: 0x08
	struct UIntimacyItemChildItem_Glow02_UIBP_C* IntimacyItemChildItem_Glow02_UIBP; // Offset: 0x2c0 // Size: 0x08
	struct UIntimacyItemChildItem_Glow03_UIBP_C* IntimacyItemChildItem_Glow03_UIBP; // Offset: 0x2c8 // Size: 0x08
	struct UIntimacyItemChildItem_Glow04_UIBP_C* IntimacyItemChildItem_Glow04_UIBP; // Offset: 0x2d0 // Size: 0x08
	struct UIntimacyItemChildItem_Glow05_UIBP_C* IntimacyItemChildItem_Glow05_UIBP; // Offset: 0x2d8 // Size: 0x08
	struct UIntimacyItemChildItem_Glow06_UIBP_C* IntimacyItemChildItem_Glow06_UIBP; // Offset: 0x2e0 // Size: 0x08
	struct UTextBlock* TextBlock_Lv; // Offset: 0x2e8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Glow; // Offset: 0x2f0 // Size: 0x08
	struct FSlateColor TextColor; // Offset: 0x2f8 // Size: 0x28
	enum class ESlateVisibility TextBG; // Offset: 0x320 // Size: 0x01

	// Functions

	// Object Name: Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Lobby_RoleInfo_IntimacyItem_UIBP.Lobby_RoleInfo_IntimacyItem_UIBP_C.ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP
	// Flags: [None]
	void ExecuteUbergraph_Lobby_RoleInfo_IntimacyItem_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

