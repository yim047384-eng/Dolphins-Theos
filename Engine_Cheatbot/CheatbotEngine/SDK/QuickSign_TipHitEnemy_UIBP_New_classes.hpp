#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C
// Size: 0x6ec // Inherited bytes: 0x630
struct UQuickSign_TipHitEnemy_UIBP_New_C : UNormalActorPositionWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x630 // Size: 0x08
	struct UWidgetAnimation* Auto_Fadein; // Offset: 0x638 // Size: 0x08
	struct UBorder* Border_Content; // Offset: 0x640 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Content; // Offset: 0x648 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_DistInfo; // Offset: 0x650 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Pointer; // Offset: 0x658 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_QuickSignTips; // Offset: 0x660 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x668 // Size: 0x08
	struct UImage* CenterImage; // Offset: 0x670 // Size: 0x08
	struct UImage* DistanceBG; // Offset: 0x678 // Size: 0x08
	struct UImage* DotImg; // Offset: 0x680 // Size: 0x08
	struct UCanvasPanel* HeightLinePnael; // Offset: 0x688 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x690 // Size: 0x08
	struct UImage* Image_bg; // Offset: 0x698 // Size: 0x08
	struct UImage* Image_Effect; // Offset: 0x6a0 // Size: 0x08
	struct UImage* Image_Icon; // Offset: 0x6a8 // Size: 0x08
	struct UImage* LineImg; // Offset: 0x6b0 // Size: 0x08
	struct UVerticalBox* MainIconPanel; // Offset: 0x6b8 // Size: 0x08
	struct UImage* PointerWIdget; // Offset: 0x6c0 // Size: 0x08
	struct UTextBlock* Text_Distance; // Offset: 0x6c8 // Size: 0x08
	float DivisionFactor; // Offset: 0x6d0 // Size: 0x04
	float DivisionDistance; // Offset: 0x6d4 // Size: 0x04
	bool IsDivision; // Offset: 0x6d8 // Size: 0x01
	char pad_0x6D9[0x3]; // Offset: 0x6d9 // Size: 0x03
	float UnFireDelayShowTime; // Offset: 0x6dc // Size: 0x04
	float ScopeCoefficient; // Offset: 0x6e0 // Size: 0x04
	float SmallIconDistance; // Offset: 0x6e4 // Size: 0x04
	float FireAlpha; // Offset: 0x6e8 // Size: 0x04

	// Functions

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.RegistEvents
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RegistEvents(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.HandleOnWidgetAlphaChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleOnWidgetAlphaChange(float Alpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.OnScopeChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnScopeChange(IntProperty PlayerKey, bool bIsGunADS); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.LoadIconFinished
	// Flags: [Private|HasDefaults|BlueprintCallable|BlueprintEvent]
	void LoadIconFinished(struct UObject* Icon, IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.ShowSelf
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void ShowSelf(struct FVector& Loc, StrProperty IconPath, StrProperty bgPath, bool IsSelfMark); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.OnWidgetAlphaChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWidgetAlphaChange(float NewAlpha); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QuickSign_TipHitEnemy_UIBP_New.QuickSign_TipHitEnemy_UIBP_New_C.ExecuteUbergraph_QuickSign_TipHitEnemy_UIBP_New
	// Flags: [HasDefaults]
	void ExecuteUbergraph_QuickSign_TipHitEnemy_UIBP_New(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

