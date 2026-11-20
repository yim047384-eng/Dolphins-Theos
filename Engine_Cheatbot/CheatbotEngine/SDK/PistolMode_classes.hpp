#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PistolMode.PistolMode_C
// Size: 0x66c // Inherited bytes: 0x488
struct UPistolMode_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Anim_WeaponDurabilitySelected; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anim_WeaponDurabilityUnSelected; // Offset: 0x498 // Size: 0x08
	struct UWidgetAnimation* FullBullet; // Offset: 0x4a0 // Size: 0x08
	struct UWidgetAnimation* DX_GetItem; // Offset: 0x4a8 // Size: 0x08
	struct UWidgetAnimation* BulletChangeAnim; // Offset: 0x4b0 // Size: 0x08
	struct UBorder* Border_WeaponIcon1; // Offset: 0x4b8 // Size: 0x08
	struct UWrapBox* Box_AttributeItem; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_ChangeShootingType; // Offset: 0x4c8 // Size: 0x08
	struct UButton* Button_Pisto_Select; // Offset: 0x4d0 // Size: 0x08
	struct UButton* Button_UnSelect; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AirDrop; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Dynamic; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* fireModePanel; // Offset: 0x4f0 // Size: 0x08
	struct UImage* FX_LightBox; // Offset: 0x4f8 // Size: 0x08
	struct UCanvasPanel* HitRecordTagSelected; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* HitRecordTagUnSelected; // Offset: 0x508 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_BulletNum; // Offset: 0x510 // Size: 0x08
	struct UImage* Item; // Offset: 0x518 // Size: 0x08
	struct UImage* Little_Icon; // Offset: 0x520 // Size: 0x08
	struct UTextBlock* pistol_CurrBullets2; // Offset: 0x528 // Size: 0x08
	struct UTextBlock* pistol_MaxTBullets2; // Offset: 0x530 // Size: 0x08
	struct UImage* profile1; // Offset: 0x538 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x540 // Size: 0x08
	struct UImage* TankDropIcon; // Offset: 0x548 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x550 // Size: 0x08
	struct UTextBlock* TextBlock_43; // Offset: 0x558 // Size: 0x08
	struct UImage* Weapon_select; // Offset: 0x560 // Size: 0x08
	struct UImage* WeaponDurabilitySelected; // Offset: 0x568 // Size: 0x08
	struct UImage* WeaponDurabilityUnselected; // Offset: 0x570 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x578 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x580 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_AirDropType; // Offset: 0x588 // Size: 0x08
	struct FScriptMulticastDelegate ClickOnSwitchWeapon; // Offset: 0x590 // Size: 0x10
	bool needCollpase; // Offset: 0x5a0 // Size: 0x01
	char pad_0x5A1[0x7]; // Offset: 0x5a1 // Size: 0x07
	MapProperty AttachmentImagePath; // Offset: 0x5a8 // Size: 0x50
	struct FLinearColor OutOfAmmoRed; // Offset: 0x5f8 // Size: 0x10
	struct FLinearColor NormalAmmoWhite; // Offset: 0x608 // Size: 0x10
	struct FLinearColor NormalAmmoGrey; // Offset: 0x618 // Size: 0x10
	struct FScriptMulticastDelegate ShowLongGunFireMode; // Offset: 0x628 // Size: 0x10
	struct TArray<struct UTexture2D*> AnimationQueue; // Offset: 0x638 // Size: 0x10
	bool IsInitWidget; // Offset: 0x648 // Size: 0x01
	char pad_0x649[0x3]; // Offset: 0x649 // Size: 0x03
	IntProperty AttachmentType; // Offset: 0x64c // Size: 0x04
	struct FLinearColor WeaponDurabilityColor; // Offset: 0x650 // Size: 0x10
	IntProperty WeaponDurabilityStatus; // Offset: 0x660 // Size: 0x04
	float CountYellow; // Offset: 0x664 // Size: 0x04
	float CountRed; // Offset: 0x668 // Size: 0x04

	// Functions

	// Object Name: Function PistolMode.PistolMode_C.UpdateSlotUnSelectedIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateSlotUnSelectedIcon(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.SetWeaponShootType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWeaponShootType(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.SetDropIconByDropCategory
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetDropIconByDropCategory(struct ASTExtraFlareGunShootWeapon* Flaregun); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.SetLeftBulletRate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetLeftBulletRate(float CountYellow, float CountRed); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.IsLowBulletToYellow
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsLowBulletToYellow(bool& IsYellow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.IsLowBulletToRed
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsLowBulletToRed(bool& isRed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.UpdateWeaponDurabilityAnimation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurabilityAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.UpdateWeaponDurabilityColor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurabilityColor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.UpdateWeaponDurability
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurability(struct ASTExtraShootWeapon* InputWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.UpdateAirdropType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateAirdropType(bool IsInWhiteCircle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.GetAttachmentImage
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetAttachmentImage(struct FItemDefineID DefineID, StrProperty& ImagePath); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuere
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddAttachmentAnimationToQuere(struct FItemDefineID ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function PistolMode.PistolMode_C.AddAttachmentAnimationToQuereAsync
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddAttachmentAnimationToQuereAsync(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.PlayAnimationInQueue
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayAnimationInQueue(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PistolMode.PistolMode_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function PistolMode.PistolMode_C.GetWeaponMgr
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UWeaponManagerComponent* GetWeaponMgr(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.GetCurrWeapon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetCurrWeapon(struct ASTExtraShootWeapon*& AsSTExtra Shoot Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.CanShowFireModeSwitchBtn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanShowFireModeSwitchBtn(struct ASTExtraShootWeapon* Weapon, bool& CanSwitch); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PistolMode.PistolMode_C.SetFireModeText
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetFireModeText(struct ASTExtraShootWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.ShowOrHideFireMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowOrHideFireMode(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.GetNextFireMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetNextFireMode(struct ASTExtraShootWeapon* InputPin, enum class ESTEWeaponShootType& FireMode); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PistolMode.PistolMode_C.UpdatePistol
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdatePistol(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.SetBorderOpacity
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetBorderOpacity(float Opacity); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PistolMode.PistolMode_C.GetBackPackBulletNum
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetBackPackBulletNum(struct FItemDefineID BulletType, IntProperty& Num); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function PistolMode.PistolMode_C.UpdateBulletCounts
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBulletCounts(IntProperty BulletInWeapon, IntProperty BulletInBackpack, struct FItemDefineID BulletType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function PistolMode.PistolMode_C.RefreshWeaponImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponImage(struct UObject* Image); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PistolMode.PistolMode_C.ChangeImageAndTextColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeImageAndTextColor(bool IsGunRunOutOfAmmo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.ClearWeaponSlotData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearWeaponSlotData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.ChangeWeaponImage
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeWeaponImage(StrProperty IconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PistolMode.PistolMode_C.BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Pisto_Exp_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_ChangeShootingType_K2Node_ComponentBoundEvent_350_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_UnSelect_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.GetItemAnimFinished
	// Flags: [BlueprintCallable|BlueprintEvent]
	void GetItemAnimFinished(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.AnimWeaponDurabilityFinishied
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimWeaponDurabilityFinishied(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PistolMode.PistolMode_C.ExecuteUbergraph_PistolMode
	// Flags: [None]
	void ExecuteUbergraph_PistolMode(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PistolMode.PistolMode_C.ShowLongGunFireMode__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ShowLongGunFireMode__DelegateSignature(bool Show); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PistolMode.PistolMode_C.ClickOnSwitchWeapon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickOnSwitchWeapon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

