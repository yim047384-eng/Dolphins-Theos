#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass UIUtilsImp_BP.UIUtilsImp_BP_C
// Size: 0x260 // Inherited bytes: 0x1a0
struct UUIUtilsImp_BP_C : USTExtraUIBPUtils {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1a0 // Size: 0x08
	struct FSlateBrush LocalBrush; // Offset: 0x1a8 // Size: 0xb8

	// Functions

	// Object Name: Function UIUtilsImp_BP.UIUtilsImp_BP_C.GetSettingConfigSaveGameData
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct USaveGame* GetSettingConfigSaveGameData(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UIUtilsImp_BP.UIUtilsImp_BP_C.OnAsyncLoadOtherAsset
	// Flags: [Event|Public|BlueprintEvent]
	void OnAsyncLoadOtherAsset(struct UObject* AsyAsset, struct UImage* TarImage, bool KeepSize); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function UIUtilsImp_BP.UIUtilsImp_BP_C.ExecuteUbergraph_UIUtilsImp_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_UIUtilsImp_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

