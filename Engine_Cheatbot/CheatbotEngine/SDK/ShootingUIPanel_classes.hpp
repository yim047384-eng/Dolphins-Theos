#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass ShootingUIPanel.ShootingUIPanel_C
// Size: 0x1100 // Inherited bytes: 0x538
struct UShootingUIPanel_C : UShootingUIWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x538 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* AttackBtnPanel_Lside; // Offset: 0x540 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* AttackBtnPanel_Rside; // Offset: 0x548 // Size: 0x08
	struct UWidgetSwitcher* AttackModeSwitcher_Rside; // Offset: 0x550 // Size: 0x08
	struct UButton* CancelFireBtn_Rside; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CancelReleaseFire_LSide; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CancelReleaseFire_RSide; // Offset: 0x568 // Size: 0x08
	struct UButton* CancelReleaseFireBtn; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AICommand; // Offset: 0x578 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BtnGroup; // Offset: 0x580 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BuffList; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CustomWeaponUI; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_KillCounter; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Weapon; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanelLAttack; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanelLowRate; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanelMediumRate; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanelRAttack; // Offset: 0x5c8 // Size: 0x08
	struct UCanvasPanel* ConsumableSocket; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* ConsumeList_SwimControl; // Offset: 0x5d8 // Size: 0x08
	struct UCanvasPanel* ConsumeListPanel; // Offset: 0x5e0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* Crouch; // Offset: 0x5e8 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomShootRed; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CustomSkillLayer; // Offset: 0x5f8 // Size: 0x08
	struct UIngame_Fade_UIBP_C* Fade; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* FirBtnL_SwimControl; // Offset: 0x608 // Size: 0x08
	struct UCanvasPanel* FirBtnR_SwimControl; // Offset: 0x610 // Size: 0x08
	struct UCanvasPanel* FireBtnModelContainerL; // Offset: 0x618 // Size: 0x08
	struct UCanvasPanel* FireBtnModelContainerR; // Offset: 0x620 // Size: 0x08
	struct UGrenadeAimBtn_LSide_C* GrenadeAimBtn_LSide; // Offset: 0x628 // Size: 0x08
	struct UGrenadeAimBtn_C* GrenadeAimBtn_Rside; // Offset: 0x630 // Size: 0x08
	struct UImage* GrenadeBG_LSide; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* GrenadeBtn_LSide; // Offset: 0x640 // Size: 0x08
	struct UImage* GrenadeBtnBG_Rside; // Offset: 0x648 // Size: 0x08
	struct UImage* GrenadeBtnImage_Rside; // Offset: 0x650 // Size: 0x08
	struct UImage* GrenadeImage_LSide; // Offset: 0x658 // Size: 0x08
	struct UCanvasPanel* GrenadeListPanel; // Offset: 0x660 // Size: 0x08
	struct UCanvasPanel* HistoricalNews; // Offset: 0x668 // Size: 0x08
	struct UCanvasPanel* HistoricalNewsCanvasPanel; // Offset: 0x670 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_3; // Offset: 0x678 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_WeaponSlot; // Offset: 0x680 // Size: 0x08
	struct UInvalidationBox* InvalidationBoxLAttack; // Offset: 0x688 // Size: 0x08
	struct UInvalidationBox* InvalidationBoxLowRate; // Offset: 0x690 // Size: 0x08
	struct UInvalidationBox* InvalidationBoxMediumRate; // Offset: 0x698 // Size: 0x08
	struct UInvalidationBox* InvalidationBoxRAttack; // Offset: 0x6a0 // Size: 0x08
	struct UCanvasPanel* JumpVaultPanel; // Offset: 0x6a8 // Size: 0x08
	struct UCanvasPanel* LeanBtnPanel; // Offset: 0x6b0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* LeftWeaponBtnPanel; // Offset: 0x6b8 // Size: 0x08
	struct UCanvasPanel* LFireSocket; // Offset: 0x6c0 // Size: 0x08
	struct UCanvasPanel* MultiLayer_ChatCanvas; // Offset: 0x6c8 // Size: 0x08
	struct UCanvasPanel* MultiLayer_ConsumableCanvas; // Offset: 0x6d0 // Size: 0x08
	struct UCanvasPanel* MultiLayer_GrenadeCanvas; // Offset: 0x6d8 // Size: 0x08
	struct UCanvasPanel* MultiLayer_LeftFireCanvas; // Offset: 0x6e0 // Size: 0x08
	struct UCanvasPanel* MultiLayer_LeftWeaponSlot; // Offset: 0x6e8 // Size: 0x08
	struct UCanvasPanel* MultiLayer_Pistol; // Offset: 0x6f0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* MultiLayer_PMode; // Offset: 0x6f8 // Size: 0x08
	struct UCanvasPanel* MultiLayer_RightFireCanvas; // Offset: 0x700 // Size: 0x08
	struct UCanvasPanel* MultiLayer_RightWeaponSlot; // Offset: 0x708 // Size: 0x08
	struct UCanvasPanel* MultiLayer_ThemePropCanvas; // Offset: 0x710 // Size: 0x08
	struct UCanvasPanel* NewbieGuideCanvas; // Offset: 0x718 // Size: 0x08
	struct UButton* OnFireBtn_LReleaseBtn; // Offset: 0x720 // Size: 0x08
	struct UImage* OnFireBtn_Lside; // Offset: 0x728 // Size: 0x08
	struct UImage* OnFireBtn_LsideImage; // Offset: 0x730 // Size: 0x08
	struct UButton* OnFireBtn_ReleaseBtn; // Offset: 0x738 // Size: 0x08
	struct UImage* OnFireBtn_Rside; // Offset: 0x740 // Size: 0x08
	struct UImage* OnFireBtnBG_Lside; // Offset: 0x748 // Size: 0x08
	struct UImage* OnFireBtnBG_Rside; // Offset: 0x750 // Size: 0x08
	struct UCanvasPanel* OnFireBtnPanel_Lside; // Offset: 0x758 // Size: 0x08
	struct UCanvasPanel* OnFireBtnPanel_Rside; // Offset: 0x760 // Size: 0x08
	struct UCanvasPanel* OnThrowGrenadePanel_Rside; // Offset: 0x768 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* PistolBtnPanel; // Offset: 0x770 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* Prone; // Offset: 0x778 // Size: 0x08
	struct UCanvasPanel* QuickThrowTips; // Offset: 0x780 // Size: 0x08
	struct UUTRichTextBlock* QuickThrowTipsText; // Offset: 0x788 // Size: 0x08
	struct UWidgetSwitcher* ReleaseFireSwitcher; // Offset: 0x790 // Size: 0x08
	struct UWidgetSwitcher* ReleaseFireSwitcher_Lside; // Offset: 0x798 // Size: 0x08
	struct UCanvasPanel* ReloadPanel; // Offset: 0x7a0 // Size: 0x08
	struct UCanvasPanel* RFireSocket; // Offset: 0x7a8 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* RightWeaponBtnPanel; // Offset: 0x7b0 // Size: 0x08
	struct UCanvasPanel* RingThrowSocket; // Offset: 0x7b8 // Size: 0x08
	struct UCanvasPanel* ScopeZoomPanel; // Offset: 0x7c0 // Size: 0x08
	struct UCanvasPanel* SettingConfig_FireBtn_L; // Offset: 0x7c8 // Size: 0x08
	struct UCanvasPanel* ShootAimBtnPanel; // Offset: 0x7d0 // Size: 0x08
	struct UCanvasPanel* ShootingUI_AutoSprint; // Offset: 0x7d8 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* ShoulderBtnPanel; // Offset: 0x7e0 // Size: 0x08
	struct UCanvasPanel* ShoulderBtnSocket; // Offset: 0x7e8 // Size: 0x08
	struct UCanvasPanel* SkillLayer; // Offset: 0x7f0 // Size: 0x08
	struct UCanvasPanel* SwitchThrowBtnPanel; // Offset: 0x7f8 // Size: 0x08
	struct UTextBlock* TextBlock_6; // Offset: 0x800 // Size: 0x08
	struct UTextBlock* TextBlock_11; // Offset: 0x808 // Size: 0x08
	struct UCanvasPanel* ThemePropListPanel; // Offset: 0x810 // Size: 0x08
	struct UCanvasPanel* ThemePropsSocket; // Offset: 0x818 // Size: 0x08
	struct UCanvasPanel* ThrowTimeInfo; // Offset: 0x820 // Size: 0x08
	struct UCanvasPanel* TipsLeftFire_BareHandControl; // Offset: 0x828 // Size: 0x08
	struct UCanvasPanel* TipsLeftFire_SwimControl; // Offset: 0x830 // Size: 0x08
	struct UCanvasPanel* TipsReload_BareHandControl; // Offset: 0x838 // Size: 0x08
	struct UCanvasPanel* TipsReload_SwimControl; // Offset: 0x840 // Size: 0x08
	struct UCanvasPanel* TipsRightFire_BareHandControl; // Offset: 0x848 // Size: 0x08
	struct UCanvasPanel* TipsRightFire_SwimControl; // Offset: 0x850 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_FirebtnLSide; // Offset: 0x858 // Size: 0x08
	struct FSlateBrush Fire_NormalIcon; // Offset: 0x860 // Size: 0xb8
	struct FSlateBrush FireBG_NormalIcon; // Offset: 0x918 // Size: 0xb8
	struct FSlateBrush FireBG_HighLight; // Offset: 0x9d0 // Size: 0xb8
	struct FSlateBrush Fist_NormalIcon; // Offset: 0xa88 // Size: 0xb8
	struct FSlateBrush Fist_HighLightIcon; // Offset: 0xb40 // Size: 0xb8
	struct FSlateBrush Melee_NormalIcon; // Offset: 0xbf8 // Size: 0xb8
	struct FSlateBrush Melee_HighLightIcon; // Offset: 0xcb0 // Size: 0xb8
	struct FSlateBrush Jump_HighLightIcon; // Offset: 0xd68 // Size: 0xb8
	struct FSlateBrush Jump_NormalIcon; // Offset: 0xe20 // Size: 0xb8
	struct FSlateBrush Vault_NormalIcon; // Offset: 0xed8 // Size: 0xb8
	struct FSlateBrush Vault_HighLightIcon; // Offset: 0xf90 // Size: 0xb8
	struct FSlateBrush Begging_NormalIcon; // Offset: 0x1048 // Size: 0xb8

	// Functions

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ShootingUIPanel.ShootingUIPanel_C.ExecuteUbergraph_ShootingUIPanel
	// Flags: [None]
	void ExecuteUbergraph_ShootingUIPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

