#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MicrophoneButton.MicrophoneButton_C
// Size: 0x2f8 // Inherited bytes: 0x260
struct UMicrophoneButton_C : UUserWidget {
	// Fields
	struct UBorder* Border_Touch; // Offset: 0x260 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_Micphone; // Offset: 0x268 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Micphone_Socket; // Offset: 0x270 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MicrophoneGuide; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UGCVoicePanel_Micro; // Offset: 0x280 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x288 // Size: 0x08
	struct UTextBlock* TextBlock_Microphonestatus; // Offset: 0x290 // Size: 0x08
	struct FSoftObjectPath SOP_MicON; // Offset: 0x298 // Size: 0x18
	struct FSoftObjectPath SOP_MicOFF; // Offset: 0x2b0 // Size: 0x18
	struct FSoftObjectPath SOP_PTT; // Offset: 0x2c8 // Size: 0x18
	struct FSoftObjectPath SOP_Close; // Offset: 0x2e0 // Size: 0x18
};

