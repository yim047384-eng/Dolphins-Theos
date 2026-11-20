#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass IngamePlayerInfo_UIBP.IngamePlayerInfo_UIBP_C
// Size: 0x900 // Inherited bytes: 0x418
struct UIngamePlayerInfo_UIBP_C : UUAEUserWidget {
	// Fields
	struct UWidgetAnimation* FadeIn; // Offset: 0x418 // Size: 0x08
	struct UAceImprintItem_C* AceImprintItem; // Offset: 0x420 // Size: 0x08
	struct UButton* Button_AddFavourite; // Offset: 0x428 // Size: 0x08
	struct UButton* Button_AddFriend; // Offset: 0x430 // Size: 0x08
	struct UButton* Button_Close; // Offset: 0x438 // Size: 0x08
	struct UButton* Button_RPAppreciates; // Offset: 0x440 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x448 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_7; // Offset: 0x450 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_25; // Offset: 0x458 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_34; // Offset: 0x460 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AddFavourite; // Offset: 0x468 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AddFriend; // Offset: 0x470 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AliasPanel; // Offset: 0x478 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Left; // Offset: 0x480 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Tips; // Offset: 0x488 // Size: 0x08
	struct UTextBlock* CombatKillBeatenRatioText; // Offset: 0x490 // Size: 0x08
	struct UTextBlock* CombatKillCountText; // Offset: 0x498 // Size: 0x08
	struct UTextBlock* CombatMatchModeText; // Offset: 0x4a0 // Size: 0x08
	struct UTextBlock* CombatTopTenCountText; // Offset: 0x4a8 // Size: 0x08
	struct UTextBlock* CombatTotalCountText; // Offset: 0x4b0 // Size: 0x08
	struct UTextBlock* CombatWinCountText; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CornerIcon; // Offset: 0x4c0 // Size: 0x08
	struct UCustomScrollBox* CustomScrollBox_1; // Offset: 0x4c8 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu1; // Offset: 0x4d0 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu10; // Offset: 0x4d8 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu11; // Offset: 0x4e0 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu12; // Offset: 0x4e8 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu13; // Offset: 0x4f0 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu14; // Offset: 0x4f8 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu2; // Offset: 0x500 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu3; // Offset: 0x508 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu4; // Offset: 0x510 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu5; // Offset: 0x518 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu6; // Offset: 0x520 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu7; // Offset: 0x528 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu8; // Offset: 0x530 // Size: 0x08
	struct UIngamePlayerInfoItem_UIBP_C* EquipmentMenu9; // Offset: 0x538 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x540 // Size: 0x08
	struct UImage* Image_7; // Offset: 0x548 // Size: 0x08
	struct UImage* Image_15; // Offset: 0x550 // Size: 0x08
	struct UImage* Image_28; // Offset: 0x558 // Size: 0x08
	struct UImage* Image_33; // Offset: 0x560 // Size: 0x08
	struct UImage* Image_46; // Offset: 0x568 // Size: 0x08
	struct UImage* Image_60; // Offset: 0x570 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x578 // Size: 0x08
	struct UImage* Image_CornerIcon; // Offset: 0x580 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x588 // Size: 0x08
	struct UImage* Image_Icon_Quality; // Offset: 0x590 // Size: 0x08
	struct UImage* Image_Nation; // Offset: 0x598 // Size: 0x08
	struct UImage* Image_Placelogo; // Offset: 0x5a0 // Size: 0x08
	struct UImage* Image_SubIcon; // Offset: 0x5a8 // Size: 0x08
	struct UImage* Image_TplanRank; // Offset: 0x5b0 // Size: 0x08
	struct UIngamePlayerInfoTips_UIBP_C* IngamePlayerInfoTips_BP; // Offset: 0x5b8 // Size: 0x08
	struct UCanvasPanel* ItemInfoTips; // Offset: 0x5c0 // Size: 0x08
	struct UMultiLineEditableText* ItemName1; // Offset: 0x5c8 // Size: 0x08
	struct UImage* Line; // Offset: 0x5d0 // Size: 0x08
	struct UCanvasPanel* PlaceTitle; // Offset: 0x5d8 // Size: 0x08
	struct UButton* SendGifts; // Offset: 0x5e0 // Size: 0x08
	struct USizeBox* SizeBox_1; // Offset: 0x5e8 // Size: 0x08
	struct UTextBlock* Text_PlayerName; // Offset: 0x5f0 // Size: 0x08
	struct UTextBlock* TextBlock_1; // Offset: 0x5f8 // Size: 0x08
	struct UTextBlock* TextBlock_2; // Offset: 0x600 // Size: 0x08
	struct UTextBlock* TextBlock_6; // Offset: 0x608 // Size: 0x08
	struct UTextBlock* TextBlock_7; // Offset: 0x610 // Size: 0x08
	struct UTextBlock* TextBlock_9; // Offset: 0x618 // Size: 0x08
	struct UTextBlock* TextBlock_11; // Offset: 0x620 // Size: 0x08
	struct UTextBlock* TextBlock_12; // Offset: 0x628 // Size: 0x08
	struct UTextBlock* TextBlock_13; // Offset: 0x630 // Size: 0x08
	struct UTextBlock* TextBlock_17; // Offset: 0x638 // Size: 0x08
	struct UTextBlock* TextBlock_23; // Offset: 0x640 // Size: 0x08
	struct UTextBlock* TextBlock_25; // Offset: 0x648 // Size: 0x08
	struct UTextBlock* TextBlock_27; // Offset: 0x650 // Size: 0x08
	struct UTextBlock* TextBlock_35; // Offset: 0x658 // Size: 0x08
	struct UTextBlock* TextBlock_36; // Offset: 0x660 // Size: 0x08
	struct UTextBlock* TextBlock_37; // Offset: 0x668 // Size: 0x08
	struct UTextBlock* TextBlock_39; // Offset: 0x670 // Size: 0x08
	struct UTextBlock* TextBlock_49; // Offset: 0x678 // Size: 0x08
	struct UTextBlock* TextBlock_55; // Offset: 0x680 // Size: 0x08
	struct UTextBlock* TextBlock_57; // Offset: 0x688 // Size: 0x08
	struct UTextBlock* TextBlock_GameCount; // Offset: 0x690 // Size: 0x08
	struct UTextBlock* TextBlock_KDNum; // Offset: 0x698 // Size: 0x08
	struct UTextBlock* TextBlock_KillNum; // Offset: 0x6a0 // Size: 0x08
	struct UTextBlock* TextBlock_RankTitleName; // Offset: 0x6a8 // Size: 0x08
	struct UTextBlock* TextBlock_SeasonAndZone; // Offset: 0x6b0 // Size: 0x08
	struct UTextBlock* TextBlock_TopTenCount; // Offset: 0x6b8 // Size: 0x08
	struct UTextBlock* TextBlock_TPlanBattleCount; // Offset: 0x6c0 // Size: 0x08
	struct UTextBlock* TextBlock_TplanEscapeRate; // Offset: 0x6c8 // Size: 0x08
	struct UTextBlock* TextBlock_TplanIncome; // Offset: 0x6d0 // Size: 0x08
	struct UTextBlock* TextBlock_TplanKD; // Offset: 0x6d8 // Size: 0x08
	struct UTextBlock* TextBlock_TplanKill; // Offset: 0x6e0 // Size: 0x08
	struct UTextBlock* TextBlock_TplanRank; // Offset: 0x6e8 // Size: 0x08
	struct UTextBlock* TextBlock_WinCount; // Offset: 0x6f0 // Size: 0x08
	struct UTitle_ingame_UIBP_C* Title_ingame_UIBP; // Offset: 0x6f8 // Size: 0x08
	struct UUnknowPass_ContinuousBuy_BP_C* UnknowPass_ContinuousBuy_BP; // Offset: 0x700 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_ItemDesc; // Offset: 0x708 // Size: 0x08
	struct UVerticalBox* VerticalBox_ItemInfo; // Offset: 0x710 // Size: 0x08
	struct UWatchGameUIAvatarItem_UIBP_C* WatchUIAvatarItem_UIBP; // Offset: 0x718 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_1; // Offset: 0x720 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_2; // Offset: 0x728 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_3; // Offset: 0x730 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_4; // Offset: 0x738 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_DataPanel; // Offset: 0x740 // Size: 0x08
	struct TArray<struct UIngamePlayerInfoItem_UIBP_C*> PlayerInfoWearItemArray; // Offset: 0x748 // Size: 0x10
	struct TArray<StrProperty> TitleBGIconName; // Offset: 0x758 // Size: 0x10
	struct TArray<StrProperty> TitleIconName; // Offset: 0x768 // Size: 0x10
	struct FScriptMulticastDelegate OnCloseButtonClicked; // Offset: 0x778 // Size: 0x10
	struct FPlayerOBInfo WatchPlayerInfo; // Offset: 0x788 // Size: 0x58
	struct FObservedData ObservedPlayerData; // Offset: 0x7e0 // Size: 0x50
	StrProperty WatchPlayerName; // Offset: 0x830 // Size: 0x10
	IntProperty CurrentEquipWearItemIndex; // Offset: 0x840 // Size: 0x04
	IntProperty CurrentSelectedItemID; // Offset: 0x844 // Size: 0x04
	MapProperty AlreadyAddFriend; // Offset: 0x848 // Size: 0x50
	bool CurrentItemFoundAfterRefresh; // Offset: 0x898 // Size: 0x01
	enum class EAvatarSlotType CurrentSelectedSlotType; // Offset: 0x899 // Size: 0x01
	char pad_0x89A[0x6]; // Offset: 0x89a // Size: 0x06
	struct TArray<struct UIngamePlayerInfoItem_UIBP_C*> PlayerInfoBattleItemArray; // Offset: 0x8a0 // Size: 0x10
	struct TArray<IntProperty> BodyItemIDList; // Offset: 0x8b0 // Size: 0x10
	IntProperty CurrentEquipBattleItemIndex; // Offset: 0x8c0 // Size: 0x04
	char pad_0x8C4[0x4]; // Offset: 0x8c4 // Size: 0x04
	struct TArray<enum class EAvatarSlotType> BattleItemSlotOrder; // Offset: 0x8c8 // Size: 0x10
	IntProperty ShowingWearItemNum; // Offset: 0x8d8 // Size: 0x04
	IntProperty ShowinBattleItemNum; // Offset: 0x8dc // Size: 0x04
	struct TArray<enum class EAvatarSlotType> AvatarItemSlotOrder; // Offset: 0x8e0 // Size: 0x10
	struct TArray<IntProperty> NotFavouriteItems; // Offset: 0x8f0 // Size: 0x10

	// Functions

	// Object Name: Function IngamePlayerInfo_UIBP.IngamePlayerInfo_UIBP_C.OnCloseButtonClicked__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnCloseButtonClicked__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

