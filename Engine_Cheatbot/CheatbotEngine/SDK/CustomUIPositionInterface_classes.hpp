#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CustomUIPositionInterface.CustomUIPositionInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct UCustomUIPositionInterface_C : UInterface {
	// Functions

	// Object Name: Function CustomUIPositionInterface.CustomUIPositionInterface_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomUIPositionInterface.CustomUIPositionInterface_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)
};

