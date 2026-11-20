#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C
// Size: 0xba0 // Inherited bytes: 0xb92
struct UVirtualBattleItemHandle_AvatarBP_C : UBattleItemHandle_AvatarBP_C {
	// Fields
	char pad_0xB92[0x6]; // Offset: 0xb92 // Size: 0x06
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xb98 // Size: 0x08

	// Functions

	// Object Name: Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.GetWrapperClass
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetWrapperClass(struct APickUpWrapperActor*& WrapperClass); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.Constuct
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void Constuct(struct FItemDefineID& InDefineID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

