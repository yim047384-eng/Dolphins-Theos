#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_AvatarColor_Base.BP_AvatarColor_Base_C
// Size: 0x58 // Inherited bytes: 0x40
struct UBP_AvatarColor_Base_C : UBackpackAvatarItemColor {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x40 // Size: 0x08
	struct TArray<struct FName> MaskColorNames; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function BP_AvatarColor_Base.BP_AvatarColor_Base_C.SetCustomColorDeffered
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetCustomColorDeffered(struct UMaterialInterface* InMaterial, struct FSlotToMatColor& InMatColor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x50)

	// Object Name: Function BP_AvatarColor_Base.BP_AvatarColor_Base_C.ExecuteUbergraph_BP_AvatarColor_Base
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_AvatarColor_Base(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

