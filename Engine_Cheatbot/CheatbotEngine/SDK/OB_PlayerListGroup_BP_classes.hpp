#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C
// Size: 0x4c8 // Inherited bytes: 0x488
struct UOB_PlayerListGroup_BP_C : ULuaUAEUserWidget {
	// Fields
	struct UImage* GroupLine; // Offset: 0x488 // Size: 0x08
	struct UImage* Image_TeamLogo; // Offset: 0x490 // Size: 0x08
	struct UVerticalBox* itemListRoot; // Offset: 0x498 // Size: 0x08
	struct UUTRichTextBlock* UTRichTextBlock_TeamNumber; // Offset: 0x4a0 // Size: 0x08
	struct TArray<struct UOB_PlayerListItem_BP_C*> PlayerItemList; // Offset: 0x4a8 // Size: 0x10
	StrProperty PicUrl; // Offset: 0x4b8 // Size: 0x10

	// Functions

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshPlayerItemList
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RefreshPlayerItemList(IntProperty PlayerNum); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshReportNum
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshReportNum(StrProperty& OpenID, IntProperty NewNum); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshReportRing
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void RefreshReportRing(StrProperty& OpenID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.OnDownloaderSuccess
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void OnDownloaderSuccess(struct UTexture2D* Texture, struct UImageDownloader* Download); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.OBPlayerChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OBPlayerChange(StrProperty OBPlayerName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function OB_PlayerListGroup_BP.OB_PlayerListGroup_BP_C.RefreshData
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void RefreshData(struct TArray<struct FPlayerInfoInOB>& PlayerDataList, StrProperty ObserverPlayerName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)
};

