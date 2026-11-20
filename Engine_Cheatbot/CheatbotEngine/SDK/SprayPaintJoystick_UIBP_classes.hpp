#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SprayPaintJoystick_UIBP.SprayPaintJoystick_UIBP_C
// Size: 0x4f8 // Inherited bytes: 0x418
struct USprayPaintJoystick_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UBorder* Border_Opacity; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Mark; // Offset: 0x428 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SignIcon; // Offset: 0x430 // Size: 0x08
	struct UImage* Image_Sign; // Offset: 0x438 // Size: 0x08
	struct UCanvasPanel* MountPanel; // Offset: 0x440 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Base; // Offset: 0x448 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_UnPressed; // Offset: 0x450 // Size: 0x08
	MapProperty SignMarkWidgetMap; // Offset: 0x458 // Size: 0x50
	MapProperty SpecialMarkWidgetMap; // Offset: 0x4a8 // Size: 0x50

	// Functions

	// Object Name: Function SprayPaintJoystick_UIBP.SprayPaintJoystick_UIBP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function SprayPaintJoystick_UIBP.SprayPaintJoystick_UIBP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function SprayPaintJoystick_UIBP.SprayPaintJoystick_UIBP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SprayPaintJoystick_UIBP.SprayPaintJoystick_UIBP_C.ExecuteUbergraph_SprayPaintJoystick_UIBP
	// Flags: [None]
	void ExecuteUbergraph_SprayPaintJoystick_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

