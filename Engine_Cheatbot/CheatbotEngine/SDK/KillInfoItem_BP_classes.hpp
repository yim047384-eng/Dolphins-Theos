#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass KillInfoItem_BP.KillInfoItem_BP_C
// Size: 0x83d // Inherited bytes: 0x488
struct UKillInfoItem_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Fadein_Base; // Offset: 0x490 // Size: 0x08
	struct UWidgetAnimation* Anima_KnockoutKing_Dispear; // Offset: 0x498 // Size: 0x08
	struct UWidgetAnimation* Anima_KnockoutKing_Up; // Offset: 0x4a0 // Size: 0x08
	struct UWidgetAnimation* Anima_KnockoutKing_Right; // Offset: 0x4a8 // Size: 0x08
	struct UWidgetAnimation* ani_effect; // Offset: 0x4b0 // Size: 0x08
	struct UWidgetAnimation* NewAnimation_2; // Offset: 0x4b8 // Size: 0x08
	struct UWidgetAnimation* Mode4_anima; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetAnimation* Mode3_anima; // Offset: 0x4c8 // Size: 0x08
	struct UWidgetAnimation* Mode2_anima; // Offset: 0x4d0 // Size: 0x08
	struct UWidgetAnimation* Mode1_anima; // Offset: 0x4d8 // Size: 0x08
	struct UBorder* Border_1; // Offset: 0x4e0 // Size: 0x08
	struct UBorder* Border_5; // Offset: 0x4e8 // Size: 0x08
	struct UBorder* Border_ColorSet; // Offset: 0x4f0 // Size: 0x08
	struct UBorder* Border_Eliminatedking; // Offset: 0x4f8 // Size: 0x08
	struct UBorder* Border_SetColor; // Offset: 0x500 // Size: 0x08
	struct UCanvasPanel* CanvasEffect; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_5; // Offset: 0x510 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_12; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_14; // Offset: 0x520 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_KingElimination_Root; // Offset: 0x528 // Size: 0x08
	struct UImage* EliminatedKing_Icon_2; // Offset: 0x530 // Size: 0x08
	struct UImage* EliminatedKing_Icon_3; // Offset: 0x538 // Size: 0x08
	struct UCanvasPanel* GoldClothEffectPanel; // Offset: 0x540 // Size: 0x08
	struct UGridPanel* GridPanel_main; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x550 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x558 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_35; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_37; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_Causer; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_Causer_TeamLogo; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_CustomCauser; // Offset: 0x598 // Size: 0x08
	struct UImage* Image_CustomVictim; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_KillType; // Offset: 0x5a8 // Size: 0x08
	struct UImage* Image_Victim; // Offset: 0x5b0 // Size: 0x08
	struct UImage* Image_Victim_TeamLogo; // Offset: 0x5b8 // Size: 0x08
	struct UImage* Image_WeaponIcon; // Offset: 0x5c0 // Size: 0x08
	struct UImage* infoBg; // Offset: 0x5c8 // Size: 0x08
	struct UImage* isBuy; // Offset: 0x5d0 // Size: 0x08
	struct UImage* nobuy; // Offset: 0x5d8 // Size: 0x08
	struct USizeBox* SizeBox_15; // Offset: 0x5e0 // Size: 0x08
	struct USizeBox* SizeBox_26; // Offset: 0x5e8 // Size: 0x08
	struct USizeBox* SizeBox_28; // Offset: 0x5f0 // Size: 0x08
	struct USizeBox* SizeBox_killtype; // Offset: 0x5f8 // Size: 0x08
	struct UTextBlock* TextBlock_5; // Offset: 0x600 // Size: 0x08
	struct UTextBlock* TextBlock_8; // Offset: 0x608 // Size: 0x08
	struct UTextBlock* TextBlock_EliminatedKing_2; // Offset: 0x610 // Size: 0x08
	struct UTextBlock* TextBlock_EliminatedKing_3; // Offset: 0x618 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName01; // Offset: 0x620 // Size: 0x08
	struct UTextBlock* TextBlock_PlayerName02; // Offset: 0x628 // Size: 0x08
	struct UUTRichTextBlock* TextPhaseRecord; // Offset: 0x630 // Size: 0x08
	struct UUnknowPass_ContinuousBuy_BP_C* UnknowPass_ContinuousBuy_BP; // Offset: 0x638 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_1; // Offset: 0x640 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_9; // Offset: 0x648 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_CustomNationCauser; // Offset: 0x650 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_CustomNationVictim; // Offset: 0x658 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Record; // Offset: 0x660 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Upass1; // Offset: 0x668 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Upass2; // Offset: 0x670 // Size: 0x08
	bool IsMode2; // Offset: 0x678 // Size: 0x01
	char pad_0x679[0x7]; // Offset: 0x679 // Size: 0x07
	MapProperty DamageTypeMapIcon; // Offset: 0x680 // Size: 0x50
	IntProperty DebugIsUniqueIndex; // Offset: 0x6d0 // Size: 0x04
	char pad_0x6D4[0x4]; // Offset: 0x6d4 // Size: 0x04
	struct FSlateColor Upass_Color_Orange; // Offset: 0x6d8 // Size: 0x28
	float BgOpacity; // Offset: 0x700 // Size: 0x04
	char pad_0x704[0x4]; // Offset: 0x704 // Size: 0x04
	struct UUAEUserWidget* EffectWidget; // Offset: 0x708 // Size: 0x08
	MapProperty EffectCache; // Offset: 0x710 // Size: 0x50
	IntProperty WeaponAvatarIDForLoading; // Offset: 0x760 // Size: 0x04
	char pad_0x764[0x4]; // Offset: 0x764 // Size: 0x04
	SetProperty AdditionalWeaponList; // Offset: 0x768 // Size: 0x50
	struct UUAEUserWidget* ClothEffectWidget; // Offset: 0x7b8 // Size: 0x08
	MapProperty ClothEffectCache; // Offset: 0x7c0 // Size: 0x50
	IntProperty ClothAvatarIDForLoading; // Offset: 0x810 // Size: 0x04
	bool bInitFuzzy; // Offset: 0x814 // Size: 0x01
	bool bShouldFuzzy; // Offset: 0x815 // Size: 0x01
	char pad_0x816[0x2]; // Offset: 0x816 // Size: 0x02
	StrProperty causerName; // Offset: 0x818 // Size: 0x10
	StrProperty VictimName; // Offset: 0x828 // Size: 0x10
	bool CustomNation; // Offset: 0x838 // Size: 0x01
	bool bShowKillMode; // Offset: 0x839 // Size: 0x01
	bool bIsShowSizeBox; // Offset: 0x83a // Size: 0x01
	bool bHasKillCounter; // Offset: 0x83b // Size: 0x01
	bool bHasKingEliminationInfo; // Offset: 0x83c // Size: 0x01

	// Functions

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetSkillIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSkillIcon(IntProperty DamageType, IntProperty AdditionalParam, IntProperty PreviousHealthStatus); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetKillCounterType
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetKillCounterType(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetDBZVictimName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetDBZVictimName(struct UTextBlock* TextName, struct FText PlayerName, IntProperty WeaponId, struct TArray<char>& ExpandData); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetDBZCauserName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void SetDBZCauserName(struct UTextBlock* TextName, struct FText PlayerName, IntProperty DamageType, IntProperty WeaponId, struct TArray<char>& ExpandData); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.TriggerEffect
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TriggerEffect(IntProperty WeaponAvatarID, IntProperty ClothAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetAnimationWidget
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetAnimationWidget(IntProperty AvatarID, struct UWidgetAnimation*& WidgetAnimation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetGMTestFlag
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetGMTestFlag(bool& flag); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetWeaponAvatarID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeaponAvatarID(IntProperty DamageType, IntProperty cuaserweaponavatarid, IntProperty AdditionalParam, struct TArray<char>& exxpand, IntProperty& waeponAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.UpdateKillKingTitle
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateKillKingTitle(struct FClientFatalDamageRecordData NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xd0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.UpdateKillKingInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateKillKingInfo(struct TArray<char>& NewParam, StrProperty causerName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetKillKingInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetKillKingInfo(struct FClientFatalDamageRecordData FatalDamageStruct); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xd0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.ShowKill
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowKill(bool bShow, IntProperty SwitcherIndex, bool NewParam); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetPhaseInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetPhaseInfo(IntProperty nPhaseInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetCustomNation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomNation(struct UImage* Image, IntProperty TeamID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.InitCustomNation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitCustomNation(bool Custom); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.InitFuzzy
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitFuzzy(struct FClientFatalDamageRecordData Data); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xd0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetWeaponIconByPath
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetWeaponIconByPath(StrProperty IconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.OnClothEffectResLoaded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnClothEffectResLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.UpdateClothEffect
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateClothEffect(IntProperty ClothAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetZombieIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetZombieIcon(enum class EFatalDamageCharacterType Type); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.DoUpdateColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void DoUpdateColor(struct FLinearColor Color); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.PlayAnimIn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PlayAnimIn(IntProperty AvatarID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.LobbyUpdateView
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LobbyUpdateView(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.OnEffectResLoaded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnEffectResLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.UpdateEffect
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateEffect(IntProperty WeaponAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.UpdateColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateColor(enum class EFatalDamageRelationShip Relationship, IntProperty WeaponAvatarID, bool IsUseColor, struct FLinearColor UseColor); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.OnBgResLoaded
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnBgResLoaded(struct UObject* Obj); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.ChangeInfoBg
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ChangeInfoBg(StrProperty Path, float Opacity); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.ChangeInfoBgByWeaponAvatarID
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ChangeInfoBgByWeaponAvatarID(IntProperty WeaponAvatarID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetUpassName
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetUpassName(struct FText Name, IntProperty upass_show, struct UTextBlock* TextName, struct UWidgetSwitcher* Switcher, enum class EFatalDamageRelationShip Record_Relation_Ship); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x31)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.ParseUpassShow
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ParseUpassShow(IntProperty upass_show, bool& upass_is_buy, bool& upass_is_show); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SetNation
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetNation(StrProperty Nation, struct UImage* Img, IntProperty Type); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.RefreshWeaponIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshWeaponIcon(struct UObject* NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetIsDeadIcon
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetIsDeadIcon(bool IsHeadShot, IntProperty HealthStatus); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetIconByItemID
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetIconByItemID(IntProperty inInt, bool& HasFound); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.GetWeapIcon
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeapIcon(IntProperty DamageType, IntProperty AdditionalParam, IntProperty PreviousHealthStatus, struct UTexture2D*& AsTexture 2D); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.FileItem
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void FileItem(struct FClientFatalDamageRecordData NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0xd0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.SwitchToMode2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void SwitchToMode2(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.EventBeginAnim
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventBeginAnim(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.OBCustomKillInfoChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OBCustomKillInfoChange(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KillInfoItem_BP.KillInfoItem_BP_C.ExecuteUbergraph_KillInfoItem_BP
	// Flags: [None]
	void ExecuteUbergraph_KillInfoItem_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

