#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Title_ingame_UIBP.Title_ingame_UIBP_C
// Size: 0x450 // Inherited bytes: 0x2c8
struct UTitle_ingame_UIBP_C : ULuaUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x2c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x2d0 // Size: 0x08
	struct UCanvasPanel* DynamicIcon_Root; // Offset: 0x2d8 // Size: 0x08
	struct UImage* Icon; // Offset: 0x2e0 // Size: 0x08
	struct UImage* icon_nation; // Offset: 0x2e8 // Size: 0x08
	struct UImage* Image_1; // Offset: 0x2f0 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x2f8 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x300 // Size: 0x08
	struct UImage* Image_4; // Offset: 0x308 // Size: 0x08
	struct UImage* Image_fen4; // Offset: 0x310 // Size: 0x08
	struct UImage* Image_hong5; // Offset: 0x318 // Size: 0x08
	struct UImage* Image_hong6; // Offset: 0x320 // Size: 0x08
	struct UImage* Image_lan2; // Offset: 0x328 // Size: 0x08
	struct UImage* Image_lv1; // Offset: 0x330 // Size: 0x08
	struct UImage* Image_zi3; // Offset: 0x338 // Size: 0x08
	struct UTextBlock* Title; // Offset: 0x340 // Size: 0x08
	struct UTextBlock* Title_hidden; // Offset: 0x348 // Size: 0x08
	struct FBP_STRUCT_RegionConfig_type NationInfoRet2; // Offset: 0x350 // Size: 0x90
	MapProperty Relation2LocalizeIDMap; // Offset: 0x3e0 // Size: 0x50
	struct FLuaBPVar NewVar_1; // Offset: 0x430 // Size: 0x20

	// Functions

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.FinishedProduct
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void FinishedProduct(IntProperty aliasID, StrProperty DynamicTitlePath, StrProperty Title); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__SetDynamicBG
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void __SetDynamicBG(StrProperty DynamicIconPath); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__GetAliasTitle
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void __GetAliasTitle(IntProperty ID, IntProperty Rank, StrProperty partnerName, IntProperty partnerRelation, IntProperty AreaID, StrProperty SpecialTitle, StrProperty& Title); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x40)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__SetLbsGlobalAliasInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void __SetLbsGlobalAliasInfo(IntProperty RankID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.SetAliasInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetAliasInfo(IntProperty ID, StrProperty Nation, IntProperty Rank, StrProperty partnerName, IntProperty partnerRelation, float Available len, IntProperty AreaID, StrProperty Title); // Offset: 0x1048d7660 // Return & Params: Num(8) Size(0x50)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__SetImageWithsSpriteRes
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void __SetImageWithsSpriteRes(StrProperty ResPath, struct UImage* Image); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__GetNationInfo
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void __GetNationInfo(StrProperty NationCode, struct FBP_STRUCT_RegionConfig_type& NationInfo); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xa0)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.__SetAliasData
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void __SetAliasData(StrProperty Nation, IntProperty Quality, StrProperty PathUrl, StrProperty Title, float availableLen, IntProperty AreaID, StrProperty DynamicIconPath, IntProperty FinishedProduct); // Offset: 0x1048d7660 // Return & Params: Num(8) Size(0x54)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.HideAll
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void HideAll(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.DelayCheckAliasLength
	// Flags: [BlueprintCallable|BlueprintEvent]
	void DelayCheckAliasLength(float AvaliableLen, StrProperty Title); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Title_ingame_UIBP.Title_ingame_UIBP_C.ExecuteUbergraph_Title_ingame_UIBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_Title_ingame_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

