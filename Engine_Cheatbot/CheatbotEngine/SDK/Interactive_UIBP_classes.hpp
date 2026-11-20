#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Interactive_UIBP.Interactive_UIBP_C
// Size: 0x420 // Inherited bytes: 0x260
struct UInteractive_UIBP_C : UUserWidget {
	// Fields
	struct UButton* Button_1; // Offset: 0x260 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x268 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x270 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x278 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x280 // Size: 0x08
	IntProperty MusicID; // Offset: 0x288 // Size: 0x04
	bool isMusicPlayer; // Offset: 0x28c // Size: 0x01
	bool ButtonLRReverted; // Offset: 0x28d // Size: 0x01
	char pad_0x28E[0x2]; // Offset: 0x28e // Size: 0x02
	struct FSlateBrush FireBG_NormalIcon; // Offset: 0x290 // Size: 0xb8
	struct FSlateBrush FireBG_HighLight; // Offset: 0x348 // Size: 0xb8
	bool LeftDown; // Offset: 0x400 // Size: 0x01
	bool RightDown; // Offset: 0x401 // Size: 0x01
	char pad_0x402[0x6]; // Offset: 0x402 // Size: 0x06
	struct FTimerHandle ComboTimer; // Offset: 0x408 // Size: 0x08
	struct UUIDuplicatedItemPool* EffectPool; // Offset: 0x410 // Size: 0x08
	struct UUIDuplicatedItemPool* rightPool; // Offset: 0x418 // Size: 0x08
};

