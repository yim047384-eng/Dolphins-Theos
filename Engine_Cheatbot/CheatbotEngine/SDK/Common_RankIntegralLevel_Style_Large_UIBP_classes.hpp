#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C
// Size: 0x2e0 // Inherited bytes: 0x2c8
struct UCommon_RankIntegralLevel_Style_Large_UIBP_C : ULuaUserWidget {
	// Fields
	struct UImage* Image_Base; // Offset: 0x2c8 // Size: 0x08
	struct UImage* Image_Level; // Offset: 0x2d0 // Size: 0x08
	struct UImage* Image_Level_S20; // Offset: 0x2d8 // Size: 0x08

	// Functions

	// Object Name: Function Common_RankIntegralLevel_Style_Large_UIBP.Common_RankIntegralLevel_Style_Large_UIBP_C.SetRankInteral
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetRankInteral(IntProperty rankIntegral, struct UTextBlock* textIntegralName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)
};

