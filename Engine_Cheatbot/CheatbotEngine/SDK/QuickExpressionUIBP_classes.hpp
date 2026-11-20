#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickExpressionUIBP.QuickExpressionUIBP_C
// Size: 0xc08 // Inherited bytes: 0x488
struct UQuickExpressionUIBP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UWidgetAnimation* Open; // Offset: 0x490 // Size: 0x08
	struct UBorder* BorderEX_Ring; // Offset: 0x498 // Size: 0x08
	struct UButton* Button_Bubble_01; // Offset: 0x4a0 // Size: 0x08
	struct UButton* Button_Bubble_02; // Offset: 0x4a8 // Size: 0x08
	struct UButton* Button_ChangeAvatarForm; // Offset: 0x4b0 // Size: 0x08
	struct UButton* Button_CheckGun; // Offset: 0x4b8 // Size: 0x08
	struct UButton* Button_CollectionOrFlaunt_01; // Offset: 0x4c0 // Size: 0x08
	struct UButton* Button_CollectionOrFlaunt_02; // Offset: 0x4c8 // Size: 0x08
	struct UButton* Button_EmoteOrPet_01; // Offset: 0x4d0 // Size: 0x08
	struct UButton* Button_EmoteOrPet_02; // Offset: 0x4d8 // Size: 0x08
	struct UButton* Button_EX_Ring_11; // Offset: 0x4e0 // Size: 0x08
	struct UButton* Button_EX_Ring_12; // Offset: 0x4e8 // Size: 0x08
	struct UButton* Button_EX_Ring_13; // Offset: 0x4f0 // Size: 0x08
	struct UButton* Button_EX_Ring_01; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_EX_Ring_02; // Offset: 0x500 // Size: 0x08
	struct UButton* Button_EX_Ring_03; // Offset: 0x508 // Size: 0x08
	struct UButton* Button_EX_Ring_04; // Offset: 0x510 // Size: 0x08
	struct UButton* Button_EX_Ring_05; // Offset: 0x518 // Size: 0x08
	struct UButton* Button_EX_Ring_06; // Offset: 0x520 // Size: 0x08
	struct UButton* Button_EX_Ring_07; // Offset: 0x528 // Size: 0x08
	struct UButton* Button_EX_Ring_08; // Offset: 0x530 // Size: 0x08
	struct UButton* Button_EX_Ring_09; // Offset: 0x538 // Size: 0x08
	struct UButton* Button_Left; // Offset: 0x540 // Size: 0x08
	struct UButton* Button_PetFeature; // Offset: 0x548 // Size: 0x08
	struct UButton* Button_Right; // Offset: 0x550 // Size: 0x08
	struct UButton* Button_Robot_01; // Offset: 0x558 // Size: 0x08
	struct UButton* Button_Robot_02; // Offset: 0x560 // Size: 0x08
	struct UButton* Button_Selfie; // Offset: 0x568 // Size: 0x08
	struct UButton* Button_ShowPet; // Offset: 0x570 // Size: 0x08
	struct UButton* Button_SubTypeSwitch; // Offset: 0x578 // Size: 0x08
	struct UButton* Button_Transfiguration; // Offset: 0x580 // Size: 0x08
	struct UButton* Button_XSuit; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_BubblePage; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_11; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_12; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_13; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_01; // Offset: 0x5b0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_02; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_03; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_04; // Offset: 0x5c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_05; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_06; // Offset: 0x5d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_07; // Offset: 0x5e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_08; // Offset: 0x5e8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CD_09; // Offset: 0x5f0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Collection; // Offset: 0x5f8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_EmotePage; // Offset: 0x600 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_11; // Offset: 0x608 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_12; // Offset: 0x610 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_13; // Offset: 0x618 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_01; // Offset: 0x620 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_02; // Offset: 0x628 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_03; // Offset: 0x630 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_04; // Offset: 0x638 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_05; // Offset: 0x640 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_06; // Offset: 0x648 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_07; // Offset: 0x650 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_08; // Offset: 0x658 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Exclusive_09; // Offset: 0x660 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Flaunt; // Offset: 0x668 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Null; // Offset: 0x670 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Pages; // Offset: 0x678 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_PetPage; // Offset: 0x680 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Robot; // Offset: 0x688 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x690 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SubTypeSwitch; // Offset: 0x698 // Size: 0x08
	struct UCanvasPanel* EXCanvasPanel_Ring; // Offset: 0x6a0 // Size: 0x08
	struct UImage* Image_5; // Offset: 0x6a8 // Size: 0x08
	struct UImage* Image_6; // Offset: 0x6b0 // Size: 0x08
	struct UImage* Image_51; // Offset: 0x6b8 // Size: 0x08
	struct UImage* Image_52; // Offset: 0x6c0 // Size: 0x08
	struct UImage* Image_53; // Offset: 0x6c8 // Size: 0x08
	struct UImage* Image_54; // Offset: 0x6d0 // Size: 0x08
	struct UImage* Image_55; // Offset: 0x6d8 // Size: 0x08
	struct UImage* Image_65; // Offset: 0x6e0 // Size: 0x08
	struct UImage* Image_CDTime; // Offset: 0x6e8 // Size: 0x08
	struct UImage* Image_ChangeAvatarForm; // Offset: 0x6f0 // Size: 0x08
	struct UImage* Image_CheckGun; // Offset: 0x6f8 // Size: 0x08
	struct UImage* Image_EX_Ring_11; // Offset: 0x700 // Size: 0x08
	struct UImage* Image_EX_Ring_12; // Offset: 0x708 // Size: 0x08
	struct UImage* Image_EX_Ring_13; // Offset: 0x710 // Size: 0x08
	struct UImage* Image_EX_Ring_01; // Offset: 0x718 // Size: 0x08
	struct UImage* Image_EX_Ring_02; // Offset: 0x720 // Size: 0x08
	struct UImage* Image_EX_Ring_03; // Offset: 0x728 // Size: 0x08
	struct UImage* Image_EX_Ring_04; // Offset: 0x730 // Size: 0x08
	struct UImage* Image_EX_Ring_05; // Offset: 0x738 // Size: 0x08
	struct UImage* Image_EX_Ring_06; // Offset: 0x740 // Size: 0x08
	struct UImage* Image_EX_Ring_07; // Offset: 0x748 // Size: 0x08
	struct UImage* Image_EX_Ring_08; // Offset: 0x750 // Size: 0x08
	struct UImage* Image_EX_Ring_09; // Offset: 0x758 // Size: 0x08
	struct UImage* Image_lock; // Offset: 0x760 // Size: 0x08
	struct UImage* Image_lock_11; // Offset: 0x768 // Size: 0x08
	struct UImage* Image_lock_12; // Offset: 0x770 // Size: 0x08
	struct UImage* Image_lock_13; // Offset: 0x778 // Size: 0x08
	struct UImage* Image_Lock_01; // Offset: 0x780 // Size: 0x08
	struct UImage* Image_Lock_02; // Offset: 0x788 // Size: 0x08
	struct UImage* Image_Lock_03; // Offset: 0x790 // Size: 0x08
	struct UImage* Image_Lock_04; // Offset: 0x798 // Size: 0x08
	struct UImage* Image_Lock_05; // Offset: 0x7a0 // Size: 0x08
	struct UImage* Image_Lock_06; // Offset: 0x7a8 // Size: 0x08
	struct UImage* Image_Lock_07; // Offset: 0x7b0 // Size: 0x08
	struct UImage* Image_Lock_08; // Offset: 0x7b8 // Size: 0x08
	struct UImage* Image_Lock_09; // Offset: 0x7c0 // Size: 0x08
	struct UImage* Image_Mask; // Offset: 0x7c8 // Size: 0x08
	struct UImage* Image_Together_11; // Offset: 0x7d0 // Size: 0x08
	struct UImage* Image_Together_12; // Offset: 0x7d8 // Size: 0x08
	struct UImage* Image_Together_13; // Offset: 0x7e0 // Size: 0x08
	struct UImage* Image_Together_01; // Offset: 0x7e8 // Size: 0x08
	struct UImage* Image_Together_02; // Offset: 0x7f0 // Size: 0x08
	struct UImage* Image_Together_03; // Offset: 0x7f8 // Size: 0x08
	struct UImage* Image_Together_04; // Offset: 0x800 // Size: 0x08
	struct UImage* Image_Together_05; // Offset: 0x808 // Size: 0x08
	struct UImage* Image_Together_06; // Offset: 0x810 // Size: 0x08
	struct UImage* Image_Together_07; // Offset: 0x818 // Size: 0x08
	struct UImage* Image_Together_08; // Offset: 0x820 // Size: 0x08
	struct UImage* Image_Together_09; // Offset: 0x828 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_11; // Offset: 0x830 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_12; // Offset: 0x838 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_13; // Offset: 0x840 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_01; // Offset: 0x848 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_02; // Offset: 0x850 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_03; // Offset: 0x858 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_04; // Offset: 0x860 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_05; // Offset: 0x868 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_06; // Offset: 0x870 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_07; // Offset: 0x878 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_08; // Offset: 0x880 // Size: 0x08
	struct UTextBlock* Text_EX_Ring_09; // Offset: 0x888 // Size: 0x08
	struct UTextBlock* Text_Pet; // Offset: 0x890 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x898 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x8a0 // Size: 0x08
	struct UTextBlock* TextBlock_3; // Offset: 0x8a8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_11; // Offset: 0x8b0 // Size: 0x08
	struct UTextBlock* TextBlock_CD_12; // Offset: 0x8b8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_13; // Offset: 0x8c0 // Size: 0x08
	struct UTextBlock* TextBlock_CD_01; // Offset: 0x8c8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_02; // Offset: 0x8d0 // Size: 0x08
	struct UTextBlock* TextBlock_CD_03; // Offset: 0x8d8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_04; // Offset: 0x8e0 // Size: 0x08
	struct UTextBlock* TextBlock_CD_05; // Offset: 0x8e8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_06; // Offset: 0x8f0 // Size: 0x08
	struct UTextBlock* TextBlock_CD_07; // Offset: 0x8f8 // Size: 0x08
	struct UTextBlock* TextBlock_CD_08; // Offset: 0x900 // Size: 0x08
	struct UTextBlock* TextBlock_CD_09; // Offset: 0x908 // Size: 0x08
	struct UTextBlock* TextBlock_ChangeAvatarForm; // Offset: 0x910 // Size: 0x08
	struct UTextBlock* TextBlock_CheckGun; // Offset: 0x918 // Size: 0x08
	struct UTextBlock* TextBlock_CustomCheck; // Offset: 0x920 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x928 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_11; // Offset: 0x930 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_12; // Offset: 0x938 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_13; // Offset: 0x940 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_01; // Offset: 0x948 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_02; // Offset: 0x950 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_03; // Offset: 0x958 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_04; // Offset: 0x960 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_05; // Offset: 0x968 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_06; // Offset: 0x970 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_07; // Offset: 0x978 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_08; // Offset: 0x980 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_09; // Offset: 0x988 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Bubble; // Offset: 0x990 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Center; // Offset: 0x998 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Check; // Offset: 0x9a0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Collection; // Offset: 0x9a8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_CollectionOrFlaunt; // Offset: 0x9b0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Emote; // Offset: 0x9b8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_EmoteOrPet; // Offset: 0x9c0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Flaunt; // Offset: 0x9c8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Pet; // Offset: 0x9d0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Robot; // Offset: 0x9d8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX01; // Offset: 0x9e0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX02; // Offset: 0x9e8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX03; // Offset: 0x9f0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX04; // Offset: 0x9f8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX05; // Offset: 0xa00 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX06; // Offset: 0xa08 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX07; // Offset: 0xa10 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX08; // Offset: 0xa18 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX09; // Offset: 0xa20 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX10; // Offset: 0xa28 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX11; // Offset: 0xa30 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherEX12; // Offset: 0xa38 // Size: 0x08
	struct FVector2D RingCenter; // Offset: 0xa40 // Size: 0x08
	struct TArray<struct UImage*> EmoteImageArray; // Offset: 0xa48 // Size: 0x10
	struct TArray<struct UWidgetSwitcher*> SlotSwitcherArray; // Offset: 0xa58 // Size: 0x10
	struct TArray<struct UTextBlock*> EmoteNameArray; // Offset: 0xa68 // Size: 0x10
	struct UBackpackComponent* BackpackComp; // Offset: 0xa78 // Size: 0x08
	struct TArray<struct FBattleItemData> EmoteBackpackItem; // Offset: 0xa80 // Size: 0x10
	MapProperty ItemIDToImagePathMap; // Offset: 0xa90 // Size: 0x50
	struct TArray<IntProperty> ItemInTheRing; // Offset: 0xae0 // Size: 0x10
	IntProperty InnerCircleRadius; // Offset: 0xaf0 // Size: 0x04
	IntProperty ButtonLength; // Offset: 0xaf4 // Size: 0x04
	float SectorButtonDegree; // Offset: 0xaf8 // Size: 0x04
	float SectorButtonHalfDegree; // Offset: 0xafc // Size: 0x04
	float RingLength; // Offset: 0xb00 // Size: 0x04
	bool IsClothDirty; // Offset: 0xb04 // Size: 0x01
	char pad_0xB05[0x3]; // Offset: 0xb05 // Size: 0x03
	struct FScriptMulticastDelegate ED_QuickExpressBtnClick; // Offset: 0xb08 // Size: 0x10
	struct FScriptMulticastDelegate ED_QuickExpressShowHide; // Offset: 0xb18 // Size: 0x10
	SetProperty ClothBackpackItem; // Offset: 0xb28 // Size: 0x50
	SetProperty AllLimitEmoteList; // Offset: 0xb78 // Size: 0x50
	struct TArray<struct UImage*> LockImageArray; // Offset: 0xbc8 // Size: 0x10
	struct TArray<struct UWidgetSwitcher*> EmoteEffectSwitcherArray; // Offset: 0xbd8 // Size: 0x10
	struct TArray<struct UCanvasPanel*> CDPanelArray; // Offset: 0xbe8 // Size: 0x10
	struct TArray<struct UTextBlock*> CDTextArray; // Offset: 0xbf8 // Size: 0x10

	// Functions

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.IsCustomUIDataValid
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsCustomUIDataValid(struct UWidget* Widget, struct FVector2D SaveDataSize, bool& IsValid); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.InitExpression
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitExpression(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.MakeWidgetArray
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MakeWidgetArray(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.CheckIsBanInBattle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckIsBanInBattle(IntProperty EmoteId, bool& IsBanned, IntProperty& TipsID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.GetIsEmoteExist
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetIsEmoteExist(IntProperty DefineID, bool& IsExist); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.HideRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HideRing(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.CheckIsWearingGoldEmoteInBattle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool CheckIsWearingGoldEmoteInBattle(IntProperty EmoteId, IntProperty& Tips); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.CheckPlayEmote
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CheckPlayEmote(IntProperty EmoteIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.IsBornisland
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	bool IsBornisland(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.SetEmoteColorState
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEmoteColorState(IntProperty EmoteId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.CheckIsWearingEmoteLimitCloth
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckIsWearingEmoteLimitCloth(IntProperty EmoteId, bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ShowHideRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowHideRing(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.RefreshEmoteWhenShow
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshEmoteWhenShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.OnLoadSoundFromPath
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void OnLoadSoundFromPath(struct UObject* audio); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.PlayRedClothAudio
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void PlayRedClothAudio(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.GetEmoteImagePalthMap
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void GetEmoteImagePalthMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ShowOrHideRing
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ShowOrHideRing(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.TryToPlayEmote
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void TryToPlayEmote(IntProperty EmoteIndex); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.OnMouseButtonDownOnBorder
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnMouseButtonDownOnBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.SetEmoteImage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetEmoteImage(struct UObject* ImageObject, IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.RefreshEmote
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshEmote(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.SetSettingControlUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSettingControlUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.BackpackReceive
	// Flags: [BlueprintCallable|BlueprintEvent]
	void BackpackReceive(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.SingleItemDeleteDelegate
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void SingleItemDeleteDelegate(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.BndEvt__Button_Normal_EX_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_Normal_EX_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.BndEvt__EXButton_close_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__EXButton_close_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.SetCustomizeUIInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetCustomizeUIInfo(struct UBP_SAVEGAME_UIElemLayout_C* SaveGame, IntProperty LayoutIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ExecuteUbergraph_QuickExpressionUIBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_QuickExpressionUIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ED_QuickExpressShowHide__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_QuickExpressShowHide__DelegateSignature(bool IsShow); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QuickExpressionUIBP.QuickExpressionUIBP_C.ED_QuickExpressBtnClick__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_QuickExpressBtnClick__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

