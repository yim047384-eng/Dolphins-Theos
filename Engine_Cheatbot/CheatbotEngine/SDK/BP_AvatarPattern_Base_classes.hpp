#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_AvatarPattern_Base.BP_AvatarPattern_Base_C
// Size: 0x80 // Inherited bytes: 0x78
struct UBP_AvatarPattern_Base_C : UBackpackAvatarItemPattern {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x78 // Size: 0x08

	// Functions

	// Object Name: Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.GetPatternNumTexturePath
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetPatternNumTexturePath(IntProperty InNumID, struct FSoftObjectPath& OutTexture1, struct FSoftObjectPath& OutTexture2); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPattern_Implementation
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetCustomPattern_Implementation(struct UMaterialInterface* InMaterial, struct FSlotToMatPattern InMatPattern); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPatternNum_Implementation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomPatternNum_Implementation(struct UMaterialInterface* InMaterial, struct FSlotToMatPattern InMatPattern); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.SetCustomPatternDeffered
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetCustomPatternDeffered(struct UMaterialInterface* InMaterial, struct FSlotToMatPattern& InMatPattern); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x80)

	// Object Name: Function BP_AvatarPattern_Base.BP_AvatarPattern_Base_C.ExecuteUbergraph_BP_AvatarPattern_Base
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_AvatarPattern_Base(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

