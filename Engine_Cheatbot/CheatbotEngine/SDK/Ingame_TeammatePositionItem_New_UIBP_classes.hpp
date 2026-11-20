#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Ingame_TeammatePositionItem_New_UIBP.Ingame_TeammatePositionItem_New_UIBP_C
// Size: 0x6c4 // Inherited bytes: 0x540
struct UIngame_TeammatePositionItem_New_UIBP_C : UTeammatePositionWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x540 // Size: 0x08
	struct UWidgetAnimation* Anim_Guide; // Offset: 0x548 // Size: 0x08
	struct UImage* BG_Frame; // Offset: 0x550 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x558 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_AliasPanel; // Offset: 0x560 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_CardLv; // Offset: 0x568 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DistanceInfo; // Offset: 0x570 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_name; // Offset: 0x578 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_QuickTips; // Offset: 0x580 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SavingProgress; // Offset: 0x588 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SelfVisibility; // Offset: 0x590 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_StateIcon_Slot; // Offset: 0x598 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_TreasureLv; // Offset: 0x5a0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_UnknowPass; // Offset: 0x5a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_VisibilityNew; // Offset: 0x5b0 // Size: 0x08
	struct UCardCollection_Collect_Level_02_C* CardCollection_Level; // Offset: 0x5b8 // Size: 0x08
	struct UCommon_Collect_Level_DynamicLoading_UIBP_C* Common_Collect_Level_DynamicLoading_UIBP; // Offset: 0x5c0 // Size: 0x08
	struct UCanvasPanel* DistanceInfo2; // Offset: 0x5c8 // Size: 0x08
	struct UGridPanel* GridPanel_1; // Offset: 0x5d0 // Size: 0x08
	struct UImage* Image_Arrow; // Offset: 0x5d8 // Size: 0x08
	struct UImage* Image_InAirCraftState; // Offset: 0x5e0 // Size: 0x08
	struct UImage* Image_InAirCraftStateBG; // Offset: 0x5e8 // Size: 0x08
	struct UImage* Image_LandingTeammate; // Offset: 0x5f0 // Size: 0x08
	struct UImage* Image_Parachuting; // Offset: 0x5f8 // Size: 0x08
	struct UImage* Image_ParachutingBG; // Offset: 0x600 // Size: 0x08
	struct UImage* Image_PlayerDead; // Offset: 0x608 // Size: 0x08
	struct UImage* Image_PlayerDeadBG; // Offset: 0x610 // Size: 0x08
	struct UImage* Image_PlayerFallToTheGround; // Offset: 0x618 // Size: 0x08
	struct UImage* Image_PlayerFallToTheGroundBG; // Offset: 0x620 // Size: 0x08
	struct UImage* Image_PlayerOffOnline; // Offset: 0x628 // Size: 0x08
	struct UImage* Image_PlayerOffOnlineBG; // Offset: 0x630 // Size: 0x08
	struct UImage* Image_Prime; // Offset: 0x638 // Size: 0x08
	struct UImage* Image_Progress; // Offset: 0x640 // Size: 0x08
	struct UImage* Image_VFXtips; // Offset: 0x648 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x650 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_2; // Offset: 0x658 // Size: 0x08
	struct UImage* recruit; // Offset: 0x660 // Size: 0x08
	struct UHorizontalBox* TeammateNameHorizontalBox; // Offset: 0x668 // Size: 0x08
	struct UTextBlock* TextBlock_Distance; // Offset: 0x670 // Size: 0x08
	struct UTextBlock* TextBlock_Distance2; // Offset: 0x678 // Size: 0x08
	struct UTextBlock* TextBlock_TeamIndex; // Offset: 0x680 // Size: 0x08
	struct UTextBlock* TextBlock_Teammate_Name; // Offset: 0x688 // Size: 0x08
	struct UTitle_ingame_UIBP_C* Title_ingame_UIBP; // Offset: 0x690 // Size: 0x08
	struct UUnknowPass_ContinuousBuy_BP_C* UnknowPass_ContinuousBuy_BP; // Offset: 0x698 // Size: 0x08
	struct UImage* veteran; // Offset: 0x6a0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_TeammateState; // Offset: 0x6a8 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_TipsType; // Offset: 0x6b0 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Veteran; // Offset: 0x6b8 // Size: 0x08
	IntProperty nTeamMemberIndex; // Offset: 0x6c0 // Size: 0x04

	// Functions

	// Object Name: Function Ingame_TeammatePositionItem_New_UIBP.Ingame_TeammatePositionItem_New_UIBP_C.InitDefaultWidgets
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitDefaultWidgets(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Ingame_TeammatePositionItem_New_UIBP.Ingame_TeammatePositionItem_New_UIBP_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Ingame_TeammatePositionItem_New_UIBP.Ingame_TeammatePositionItem_New_UIBP_C.ExecuteUbergraph_Ingame_TeammatePositionItem_New_UIBP
	// Flags: [None]
	void ExecuteUbergraph_Ingame_TeammatePositionItem_New_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

