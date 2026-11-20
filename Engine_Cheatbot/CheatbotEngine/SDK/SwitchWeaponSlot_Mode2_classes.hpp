#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C
// Size: 0xc38 // Inherited bytes: 0x488
struct USwitchWeaponSlot_Mode2_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Anim_Bullet_Fall; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anim_FlowLight_02; // Offset: 0x498 // Size: 0x08
	struct UWidgetAnimation* Anim_FlowLight_01; // Offset: 0x4a0 // Size: 0x08
	struct UWidgetAnimation* Anim_CurrentBullets; // Offset: 0x4a8 // Size: 0x08
	struct UWidgetAnimation* Anim_WeaponDurability; // Offset: 0x4b0 // Size: 0x08
	struct UWidgetAnimation* BulletFull; // Offset: 0x4b8 // Size: 0x08
	struct UWidgetAnimation* DX_GetItem; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetAnimation* BulletChangeAnim; // Offset: 0x4c8 // Size: 0x08
	struct UImage* Bg; // Offset: 0x4d0 // Size: 0x08
	struct UBorder* Border_1; // Offset: 0x4d8 // Size: 0x08
	struct UBorder* Border_WeaponIcon; // Offset: 0x4e0 // Size: 0x08
	struct UBorder* Border_WeaponSlot; // Offset: 0x4e8 // Size: 0x08
	struct UWrapBox* Box_AttributeItem; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_2; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_3; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_Pistol_Fire; // Offset: 0x510 // Size: 0x08
	struct UCanvasPanel* Canvas_Pistol_Fire; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x520 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DP12_Info; // Offset: 0x528 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_M1_2; // Offset: 0x530 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Main; // Offset: 0x538 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MSwitch; // Offset: 0x540 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MSwitch_LSide; // Offset: 0x548 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_NextSelect; // Offset: 0x550 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Reload; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UIEffect; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CanvasUnlimited; // Offset: 0x568 // Size: 0x08
	struct UImage* FX_LightBox; // Offset: 0x570 // Size: 0x08
	struct UGridPanel* GridPanel_6; // Offset: 0x578 // Size: 0x08
	struct UGridPanel* GridPanel_Base; // Offset: 0x580 // Size: 0x08
	struct UGridPanel* GridPanel_FireMode; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* HitRecordTagSelected; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* HitRecordTagUnSelected; // Offset: 0x598 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_1; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_Neostead_Fire_Mode; // Offset: 0x5a8 // Size: 0x08
	struct UImage* Image_Neostead_OneShot_Mode; // Offset: 0x5b0 // Size: 0x08
	struct UImage* Image_NextSelect; // Offset: 0x5b8 // Size: 0x08
	struct UImage* Image_Selected; // Offset: 0x5c0 // Size: 0x08
	struct UImage* Image_ShootingMode; // Offset: 0x5c8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x5d0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_2; // Offset: 0x5d8 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_3; // Offset: 0x5e0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_4; // Offset: 0x5e8 // Size: 0x08
	struct UImage* Item; // Offset: 0x5f0 // Size: 0x08
	struct UImage* KillCounterImg; // Offset: 0x5f8 // Size: 0x08
	struct UOverlay* Overlay_MaxBulletNum; // Offset: 0x600 // Size: 0x08
	struct UImage* Pistol_Fire_icon; // Offset: 0x608 // Size: 0x08
	struct UImage* ProfileImg; // Offset: 0x610 // Size: 0x08
	struct UProgressBar* ProgressBar_1; // Offset: 0x618 // Size: 0x08
	struct UImage* specal_icon_unselected; // Offset: 0x620 // Size: 0x08
	struct UImage* special_icon; // Offset: 0x628 // Size: 0x08
	struct UTextBlock* Text_Pistol_Fire; // Offset: 0x630 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x638 // Size: 0x08
	struct UTextBlock* TextBlock_CurrentNumberOfBullets; // Offset: 0x640 // Size: 0x08
	struct UTextBlock* TextBlock_MaxNumberOfBullets; // Offset: 0x648 // Size: 0x08
	struct UTextBlock* TextBlock_ShootingMode; // Offset: 0x650 // Size: 0x08
	struct UTextBlock* TextBlock_WeaponName; // Offset: 0x658 // Size: 0x08
	struct UTextBlock* TextBlock_wuqiong; // Offset: 0x660 // Size: 0x08
	struct UCanvasPanel* Tips21_23; // Offset: 0x668 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_Tips22_Text1; // Offset: 0x670 // Size: 0x08
	struct UImage* WeaponDurability; // Offset: 0x678 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x680 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x688 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Slot_01; // Offset: 0x690 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Slot_02; // Offset: 0x698 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_SlotBtnSelected; // Offset: 0x6a0 // Size: 0x08
	enum class ESwitchWeaponActionType ActionType; // Offset: 0x6a8 // Size: 0x01
	char pad_0x6A9[0x7]; // Offset: 0x6a9 // Size: 0x07
	struct FScriptMulticastDelegate ClickOnSwitchWeapon; // Offset: 0x6b0 // Size: 0x10
	struct ASTExtraShootWeapon* CurWeapon; // Offset: 0x6c0 // Size: 0x08
	struct FScriptMulticastDelegate ClickOnChangeWeaponFireMode; // Offset: 0x6c8 // Size: 0x10
	struct FSlateBrush FireMode_Single; // Offset: 0x6d8 // Size: 0xb8
	struct FSlateBrush FireMode_Burst; // Offset: 0x790 // Size: 0xb8
	struct FSlateBrush FireMode_Auto; // Offset: 0x848 // Size: 0xb8
	struct FSlateBrush BlankBrush; // Offset: 0x900 // Size: 0xb8
	struct FLinearColor OutOfAmmoRed; // Offset: 0x9b8 // Size: 0x10
	struct FLinearColor NormalAmmoWhite; // Offset: 0x9c8 // Size: 0x10
	struct FLinearColor NormalAmmoGrey; // Offset: 0x9d8 // Size: 0x10
	struct FItemDefineID CurBulletType; // Offset: 0x9e8 // Size: 0x18
	struct TArray<struct UTexture2D*> AnimationQueue; // Offset: 0xa00 // Size: 0x10
	MapProperty AttachmentImagePath; // Offset: 0xa10 // Size: 0x50
	enum class ESurviveWeaponPropSlot WeaponSlotType; // Offset: 0xa60 // Size: 0x01
	char pad_0xA61[0x7]; // Offset: 0xa61 // Size: 0x07
	StrProperty ImagePath; // Offset: 0xa68 // Size: 0x10
	bool ASyncFinish; // Offset: 0xa78 // Size: 0x01
	char pad_0xA79[0x3]; // Offset: 0xa79 // Size: 0x03
	IntProperty weaponBulletCount; // Offset: 0xa7c // Size: 0x04
	bool IsInitWidget; // Offset: 0xa80 // Size: 0x01
	char pad_0xA81[0x3]; // Offset: 0xa81 // Size: 0x03
	IntProperty AttachmentType; // Offset: 0xa84 // Size: 0x04
	bool bNeedShowEndlessBulletNum; // Offset: 0xa88 // Size: 0x01
	bool ShowBarrelBulletNumUI; // Offset: 0xa89 // Size: 0x01
	char pad_0xA8A[0x2]; // Offset: 0xa8a // Size: 0x02
	struct FLinearColor WeaponDurabilityColor; // Offset: 0xa8c // Size: 0x10
	IntProperty WeaponDurabilityStatus; // Offset: 0xa9c // Size: 0x04
	bool bEndlessBullet; // Offset: 0xaa0 // Size: 0x01
	char pad_0xAA1[0x3]; // Offset: 0xaa1 // Size: 0x03
	IntProperty MaxBulletNumInOneClip; // Offset: 0xaa4 // Size: 0x04
	struct FSlateBrush FireModeShootRate; // Offset: 0xaa8 // Size: 0xb8
	struct FSlateBrush FireModeShootExtraRate; // Offset: 0xb60 // Size: 0xb8
	float CountRed; // Offset: 0xc18 // Size: 0x04
	float CountYellow; // Offset: 0xc1c // Size: 0x04
	bool bGunOutOfAmmo; // Offset: 0xc20 // Size: 0x01
	bool bPlayBulletChangeAnim; // Offset: 0xc21 // Size: 0x01
	bool bCanPlayBulletCountAnim; // Offset: 0xc22 // Size: 0x01
	bool bIsRed; // Offset: 0xc23 // Size: 0x01
	bool bIsYellow; // Offset: 0xc24 // Size: 0x01
	char pad_0xC25[0x3]; // Offset: 0xc25 // Size: 0x03
	struct FScriptMulticastDelegate ReleaseOnSwitchWeapon; // Offset: 0xc28 // Size: 0x10

	// Functions

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetWeaponShootType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWeaponShootType(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnNeosteadFireModeChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnNeosteadFireModeChange(bool bIsGunADS); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CheckShowXTModeUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckShowXTModeUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddDXGetitemAnimFinished
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddDXGetitemAnimFinished(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HandleWeaponUpdateUpgradeInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleWeaponUpdateUpgradeInfo(struct ASTExtraShootWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CheckLowBullet
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void CheckLowBullet(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.HasInfinityBullet
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void HasInfinityBullet(bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetCurrentBulletNumText
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCurrentBulletNumText(struct ASTExtraShootWeapon* Weapon, struct FText& BulletNumText); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.StopGetItemAnimation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopGetItemAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClearAnimationQueue
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearAnimationQueue(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetLeftBulletRate
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetLeftBulletRate(float CountYellow, float CountRed); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.IsLowBulletToYellow
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsLowBulletToYellow(bool& IsYellow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.IsLowBulletToRed
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsLowBulletToRed(bool& isRed); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RefreshMaxAmmoVisible
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshMaxAmmoVisible(struct ASTExtraShootWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateWeaponDurabilityAnimation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurabilityAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateWeaponDurabilityColor
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurabilityColor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateWeaponDurability
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateWeaponDurability(struct ASTExtraShootWeapon* InputWeapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateBulletByWeapon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBulletByWeapon(struct ASTExtraShootWeapon* Weapon, bool NeedUpdateBackpackNum); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeSlotWeapon
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeSlotWeapon(struct ASTExtraShootWeapon* Weapon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateShield
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateShield(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetWeaponMgr
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponMgr(struct UWeaponManagerComponent*& weaponComp); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateFireModeShape
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateFireModeShape(bool Show); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.Show_HideSwitchWeaponTips
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void Show_HideSwitchWeaponTips(bool NewParam, struct FBP_STRUCT_GuideText_type NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuereAsync
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddAttachmentAnimationToQuereAsync(struct UObject* Icon); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.RefreshWeaponImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponImage(struct UObject* Image); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetAttachmentImage
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetAttachmentImage(struct FItemDefineID DefineID, StrProperty& ImagePath); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AddAttachmentAnimationToQuere
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddAttachmentAnimationToQuere(struct FItemDefineID ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.PlayAnimationInQueue
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayAnimationInQueue(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.Selected_UnSelected
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void Selected_UnSelected(bool IsSelected); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeImageAndTextColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeImageAndTextColor(bool IsGunRunOutOfAmmo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateBulletCounts
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateBulletCounts(struct ASTExtraShootWeapon* Weapon, IntProperty BulletInWeapon, IntProperty BulletInBackpack, struct FItemDefineID BulletType); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClearWeaponSlotData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ClearWeaponSlotData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetBorderOpacity
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetBorderOpacity(float Opacity); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.SetFireModeText
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetFireModeText(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.CanShowFireModeSwitchBtn
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CanShowFireModeSwitchBtn(struct ASTExtraShootWeapon* Weapon, bool& CanSwitch); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetNextFireMode
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetNextFireMode(struct ASTExtraShootWeapon* InputPin, enum class ESTEWeaponShootType& FireMode); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.Show_HideFireMode
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void Show_HideFireMode(bool bIsShow, struct ASTExtraShootWeapon* ShootWeapon); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ChangeWeaponImage
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeWeaponImage(StrProperty IconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.OnMouseButtonDown
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.UpdateImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateImage(struct FSlateBrush Brush, enum class ESlateVisibility Visible); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xb9)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.StopToSwitchIfSprint
	// Flags: [BlueprintCallable|BlueprintEvent]
	void StopToSwitchIfSprint(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Pistol_Fire_K2Node_ComponentBoundEvent_78_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.DelayCheckImage
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayCheckImage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.GetItemAnimFinished
	// Flags: [BlueprintCallable|BlueprintEvent]
	void GetItemAnimFinished(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.AnimWeaponDurabilityFinishied
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AnimWeaponDurabilityFinishied(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ExecuteUbergraph_SwitchWeaponSlot_Mode2
	// Flags: [None]
	void ExecuteUbergraph_SwitchWeaponSlot_Mode2(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ReleaseOnSwitchWeapon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ReleaseOnSwitchWeapon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnChangeWeaponFireMode__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickOnChangeWeaponFireMode__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function SwitchWeaponSlot_Mode2.SwitchWeaponSlot_Mode2_C.ClickOnSwitchWeapon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ClickOnSwitchWeapon__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

