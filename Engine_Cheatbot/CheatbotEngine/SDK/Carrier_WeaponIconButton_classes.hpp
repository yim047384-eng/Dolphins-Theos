#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Carrier_WeaponIconButton.Carrier_WeaponIconButton_C
// Size: 0x460 // Inherited bytes: 0x418
struct UCarrier_WeaponIconButton_C : UUAEUserWidget {
	// Fields
	struct UHorizontalBox* BulletsPanel; // Offset: 0x418 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UIEffect; // Offset: 0x428 // Size: 0x08
	struct UImage* ProfileImg; // Offset: 0x430 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x438 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x440 // Size: 0x08
	struct UTextBlock* TextBlock_CarrierBullets_Surplus; // Offset: 0x448 // Size: 0x08
	struct UTextBlock* TextBlock_CarrierBullets_Total; // Offset: 0x450 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x458 // Size: 0x08

	// Functions

	// Object Name: Function Carrier_WeaponIconButton.Carrier_WeaponIconButton_C.RefreshBullets
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshBullets(struct ASTExtraShootWeapon* ShootingWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Carrier_WeaponIconButton.Carrier_WeaponIconButton_C.RefreshWeaponImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponImage(struct UObject* Image); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Carrier_WeaponIconButton.Carrier_WeaponIconButton_C.UpdateWeaponImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponImage(struct ASTExtraWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

