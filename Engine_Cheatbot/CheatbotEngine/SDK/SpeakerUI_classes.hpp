#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SpeakerUI.SpeakerUI_C
// Size: 0x2a8 // Inherited bytes: 0x260
struct USpeakerUI_C : UUserWidget {
	// Fields
	struct UButton* Button_showSpeaker; // Offset: 0x260 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_Speaker; // Offset: 0x268 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UGCVoicePanel_Speaker; // Offset: 0x270 // Size: 0x08
	struct UImage* Image_HideVoicePanel; // Offset: 0x278 // Size: 0x08
	struct UImage* Image_Voice; // Offset: 0x280 // Size: 0x08
	struct UImage* Image_VoiceDisabled; // Offset: 0x288 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_3; // Offset: 0x290 // Size: 0x08
	struct UImage* SpeakerBG; // Offset: 0x298 // Size: 0x08
	struct UTextBlock* TextBlock_SpeakerStatus; // Offset: 0x2a0 // Size: 0x08
};

