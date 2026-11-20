#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_Like_UIBP.Ingame_Like_UIBP_C
// Size: 0x300 // Inherited bytes: 0x260
struct UIngame_Like_UIBP_C : UUserWidget {
	// Fields
	struct UBorder* Border_Setting; // Offset: 0x260 // Size: 0x08
	struct UButton* Button_Cooperate; // Offset: 0x268 // Size: 0x08
	struct UButton* Button_EnterVehicle; // Offset: 0x270 // Size: 0x08
	struct UButton* Button_Ganxie; // Offset: 0x278 // Size: 0x08
	struct UButton* Button_HoldOn; // Offset: 0x280 // Size: 0x08
	struct UButton* Button_Huikui; // Offset: 0x288 // Size: 0x08
	struct UButton* Button_Jiayou; // Offset: 0x290 // Size: 0x08
	struct UButton* Button_Qinzhu; // Offset: 0x298 // Size: 0x08
	struct UButton* Button_QuickResponse; // Offset: 0x2a0 // Size: 0x08
	struct UButton* Button_Reply; // Offset: 0x2a8 // Size: 0x08
	struct UButton* Button_ReplyTactical; // Offset: 0x2b0 // Size: 0x08
	struct UButton* ButtonLike; // Offset: 0x2b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Progress_Circle; // Offset: 0x2c0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizePanel_Like; // Offset: 0x2c8 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x2d0 // Size: 0x08
	struct UImage* Image_17; // Offset: 0x2d8 // Size: 0x08
	struct UImage* Image_Progress; // Offset: 0x2e0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x2e8 // Size: 0x08
	struct FScriptMulticastDelegate OnTouchEndedEvent; // Offset: 0x2f0 // Size: 0x10

	// Functions

	// Object Name: Function Ingame_Like_UIBP.Ingame_Like_UIBP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function Ingame_Like_UIBP.Ingame_Like_UIBP_C.OnTouchEndedEvent__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnTouchEndedEvent__DelegateSignature(struct FPointerEvent TouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)
};

