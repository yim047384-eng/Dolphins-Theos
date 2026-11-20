#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass SlotStatusInterface.SlotStatusInterface_C
// Size: 0x28 // Inherited bytes: 0x28
struct USlotStatusInterface_C : UInterface {
	// Functions

	// Object Name: Function SlotStatusInterface.SlotStatusInterface_C.UpdateIconSlotStatus_PickUpItem_S
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateIconSlotStatus_PickUpItem_S(struct FSearchedPickUpItemResult ItemData, bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x41)

	// Object Name: Function SlotStatusInterface.SlotStatusInterface_C.UpdateIconSlotStatus_PickUpItem
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateIconSlotStatus_PickUpItem(struct TArray<struct FBattleItemAdditionalData>& AdditionData, struct FItemDefineID DefineID, bool& bResult); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x29)

	// Object Name: Function SlotStatusInterface.SlotStatusInterface_C.UpdateIconSlotStatus
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateIconSlotStatus(struct FBattleItemData BattleItemData, bool& bReturn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc1)
};

