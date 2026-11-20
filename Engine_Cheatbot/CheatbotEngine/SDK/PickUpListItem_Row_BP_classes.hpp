#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass PickUpListItem_Row_BP.PickUpListItem_Row_BP_C
// Size: 0x5d8 // Inherited bytes: 0x488
struct UPickUpListItem_Row_BP_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UButton* Button_Ninepalaces; // Offset: 0x490 // Size: 0x08
	struct UButton* Button_Sixpalaces; // Offset: 0x498 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x4a0 // Size: 0x08
	struct UPickUpItemListRow_ExtraEffect_C* ExtraDropEffect; // Offset: 0x4a8 // Size: 0x08
	struct UHorizontalBox* HorizontalBox_EmptyBoxTips; // Offset: 0x4b0 // Size: 0x08
	struct UGridPanel* HorizontalBox_stop; // Offset: 0x4b8 // Size: 0x08
	struct UImage* ImageNine; // Offset: 0x4c0 // Size: 0x08
	struct UUTRichTextBlock* PlayerName; // Offset: 0x4c8 // Size: 0x08
	struct USizeBox* SizeBox_ItemList; // Offset: 0x4d0 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x4d8 // Size: 0x08
	struct UTextBlock* TextBlockNine; // Offset: 0x4e0 // Size: 0x08
	struct UTextBlock* TextBox; // Offset: 0x4e8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcherCol; // Offset: 0x4f0 // Size: 0x08
	struct UWrapBox* WrapBox_List; // Offset: 0x4f8 // Size: 0x08
	struct UUserWidget* ParentUserWidget; // Offset: 0x500 // Size: 0x08
	IntProperty Checksum; // Offset: 0x508 // Size: 0x04
	char pad_0x50C[0x4]; // Offset: 0x50c // Size: 0x04
	StrProperty TombName; // Offset: 0x510 // Size: 0x10
	bool bDivisionTick; // Offset: 0x520 // Size: 0x01
	char pad_0x521[0x3]; // Offset: 0x521 // Size: 0x03
	IntProperty WrapBoxTargetCount; // Offset: 0x524 // Size: 0x04
	bool bUseTickOptimize; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x3]; // Offset: 0x529 // Size: 0x03
	IntProperty CacheEachTickShowCount; // Offset: 0x52c // Size: 0x04
	bool bCacheData; // Offset: 0x530 // Size: 0x01
	char pad_0x531[0x7]; // Offset: 0x531 // Size: 0x07
	struct TArray<struct FBattleSearchBoxSortingInfo> CacheBoxList; // Offset: 0x538 // Size: 0x10
	IntProperty CacheLength; // Offset: 0x548 // Size: 0x04
	IntProperty CacheIndex; // Offset: 0x54c // Size: 0x04
	struct ASTExtraPlayerState* CachePlayerState; // Offset: 0x550 // Size: 0x08
	bool bCacheHadeRevivalCard; // Offset: 0x558 // Size: 0x01
	char pad_0x559[0x7]; // Offset: 0x559 // Size: 0x07
	struct FBattleSearchBoxSortingInfo CacheTempListData; // Offset: 0x560 // Size: 0x50
	IntProperty LoadingItemNum; // Offset: 0x5b0 // Size: 0x04
	bool bNeedUpdate; // Offset: 0x5b4 // Size: 0x01
	char pad_0x5B5[0x3]; // Offset: 0x5b5 // Size: 0x03
	struct APlayerTombBox* TombBox; // Offset: 0x5b8 // Size: 0x08
	IntProperty NeedUpdateUICount; // Offset: 0x5c0 // Size: 0x04
	char pad_0x5C4[0x4]; // Offset: 0x5c4 // Size: 0x04
	StrProperty ItemPath; // Offset: 0x5c8 // Size: 0x10

	// Functions

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.OnInitUI
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnInitUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.OnCreatedItemBP
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnCreatedItemBP(struct UUserWidget* Object, IntProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.LowDeviceOptimise
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LowDeviceOptimise(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateOneItem
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateOneItem(bool bIgnoreVisible); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.IsLimitShow
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void IsLimitShow(struct FBattleSearchBoxSortingInfo BattleSearchBoxSortingInfo, bool& IsLimit); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.GetFixedBoxName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetFixedBoxName(struct APlayerTombBox* Box, StrProperty& Name); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.IsBoxNameNeedTranslate
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsBoxNameNeedTranslate(struct APlayerTombBox* Box, bool& needTrans); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.IsRevivalCard
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void IsRevivalCard(struct FBattleSearchBoxSortingInfo BattleSearchBoxSortingInfo, bool& Ret); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.IsFixedName
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsFixedName(struct APlayerTombBox* Box, bool& IsAirdropName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateGroundItemData
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void UpdateGroundItemData(struct TArray<struct FBattleSearchItemSortingInfo>& sortInfoList); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.UpdateTombBoxData
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateTombBoxData(struct APlayerTombBox* Box, struct TArray<struct FBattleSearchBoxSortingInfo>& BoxList); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.MakesureListEnough
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MakesureListEnough(IntProperty Count); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function PickUpListItem_Row_BP.PickUpListItem_Row_BP_C.ExecuteUbergraph_PickUpListItem_Row_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PickUpListItem_Row_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

