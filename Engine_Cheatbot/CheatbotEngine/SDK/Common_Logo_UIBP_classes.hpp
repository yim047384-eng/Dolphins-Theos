#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Common_Logo_UIBP.Common_Logo_UIBP_C
// Size: 0x290 // Inherited bytes: 0x260
struct UCommon_Logo_UIBP_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UWidgetAnimation* ProgressBar_Countdown; // Offset: 0x268 // Size: 0x08
	struct UImage* 18+; // Offset: 0x270 // Size: 0x08
	struct UBorder* Border_Logo; // Offset: 0x278 // Size: 0x08
	struct UImage* ImageLogo; // Offset: 0x280 // Size: 0x08
	struct USTInvalidationBox* STInvalidationBox_1; // Offset: 0x288 // Size: 0x08

	// Functions

	// Object Name: Function Common_Logo_UIBP.Common_Logo_UIBP_C.UpdateUI
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateUI(bool bSocialIsLand); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Common_Logo_UIBP.Common_Logo_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Common_Logo_UIBP.Common_Logo_UIBP_C.ChangeLogoShow
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ChangeLogoShow(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Common_Logo_UIBP.Common_Logo_UIBP_C.ExecuteUbergraph_Common_Logo_UIBP
	// Flags: [None]
	void ExecuteUbergraph_Common_Logo_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

