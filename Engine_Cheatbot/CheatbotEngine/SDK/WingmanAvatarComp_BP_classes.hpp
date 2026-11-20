#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass WingmanAvatarComp_BP.WingmanAvatarComp_BP_C
// Size: 0x4e8 // Inherited bytes: 0x4e8
struct UWingmanAvatarComp_BP_C : UWingmanAvatarComponent {
	// Functions

	// Object Name: Function WingmanAvatarComp_BP.WingmanAvatarComp_BP_C.CreateItemAvatarHandle
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CreateItemAvatarHandle(IntProperty ItemId, struct UBattleItemHandleBase*& ItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function WingmanAvatarComp_BP.WingmanAvatarComp_BP_C.GetWingmanAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackWingmanAvatarHandle* GetWingmanAvatarHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)
};

