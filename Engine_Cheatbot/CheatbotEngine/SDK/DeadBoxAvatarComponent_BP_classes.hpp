#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C
// Size: 0x568 // Inherited bytes: 0x568
struct UDeadBoxAvatarComponent_BP_C : UDeadBoxAvatarComponent {
	// Functions

	// Object Name: Function DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C.GetVehicleDiedPath
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	void GetVehicleDiedPath(IntProperty ItemId, StrProperty& Path); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C.IsVehicleAvatarID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	void IsVehicleAvatarID(IntProperty ItemId, bool& IsVehicleAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C.GetItemAvatarHandlePath
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	StrProperty GetItemAvatarHandlePath(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function DeadBoxAvatarComponent_BP.DeadBoxAvatarComponent_BP_C.GetItemAvatarHandle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackCommonAvatarHandle* GetItemAvatarHandle(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)
};

