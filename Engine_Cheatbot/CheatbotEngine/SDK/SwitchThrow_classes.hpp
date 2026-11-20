#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SwitchThrow.SwitchThrow_C
// Size: 0x460 // Inherited bytes: 0x418
struct USwitchThrow_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* ReloadCountDown; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_Throw_Mode; // Offset: 0x428 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_8; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* MultiLayer_SwitchThrowCanvas; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* SwimControlThrowGrid; // Offset: 0x440 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* SwitchThrowPanel; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_ThrowTextTips; // Offset: 0x450 // Size: 0x08
	struct UImage* Throw_Mode_Image; // Offset: 0x458 // Size: 0x08

	// Functions

	// Object Name: Function SwitchThrow.SwitchThrow_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function SwitchThrow.SwitchThrow_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchThrow.SwitchThrow_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function SwitchThrow.SwitchThrow_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchThrow.SwitchThrow_C.ExecuteUbergraph_SwitchThrow
	// Flags: [None]
	void ExecuteUbergraph_SwitchThrow(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

