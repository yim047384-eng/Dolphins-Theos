#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C
// Size: 0x1f0 // Inherited bytes: 0x1f0
struct UVirtualBackpackEmoteHandleBase_BP_C : UBackpackEmoteHandle {
	// Functions

	// Object Name: Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.ExtractItemData
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	struct FBattleItemData ExtractItemData(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleDisuse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandleUse
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function VirtualBackpackEmoteHandleBase_BP.VirtualBackpackEmoteHandleBase_BP_C.HandlePickup
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x6a)
};

