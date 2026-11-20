#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetAvatarComponent_BP.PetAvatarComponent_BP_C
// Size: 0xc68 // Inherited bytes: 0xc68
struct UPetAvatarComponent_BP_C : UPetAvatarComponent {
	// Functions

	// Object Name: Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.GetFakeAvatarHandleItem
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetFakeAvatarHandleItem(IntProperty InSlotID, IntProperty InItemID, IntProperty AdditionalItemID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetHasEquippedItem
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void PetHasEquippedItem(IntProperty ID, bool& Out); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetUnequipItemById
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PetUnequipItemById(IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetAvatarComponent_BP.PetAvatarComponent_BP_C.PetEquipItemById
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PetEquipItemById(IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

