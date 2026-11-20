#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass BulletReload.BulletReload_C
// Size: 0x488 // Inherited bytes: 0x418
struct UBulletReload_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UWidgetAnimation* ReloadCountDown; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Reload; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CDMask; // Offset: 0x430 // Size: 0x08
	struct UCanvasPanel* ChangeBullet_CanvasPanel; // Offset: 0x438 // Size: 0x08
	struct UImage* Image_CDmaskBG; // Offset: 0x440 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_5; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* MultiLayer_ReloadCanvas; // Offset: 0x450 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* ReloadBtnAndBullet; // Offset: 0x458 // Size: 0x08
	struct UImage* ReloadBtnBGImage; // Offset: 0x460 // Size: 0x08
	struct UButton* ReloadButton; // Offset: 0x468 // Size: 0x08
	struct UImage* ReloadCDBar; // Offset: 0x470 // Size: 0x08
	struct UTextBlock* ReloadCountDownTextBlock; // Offset: 0x478 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_ReloadMod; // Offset: 0x480 // Size: 0x08

	// Functions

	// Object Name: Function BulletReload.BulletReload_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BulletReload.BulletReload_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BulletReload.BulletReload_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BulletReload.BulletReload_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BulletReload.BulletReload_C.ExecuteUbergraph_BulletReload
	// Flags: [None]
	void ExecuteUbergraph_BulletReload(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

