#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MiniMapUIWidget.MiniMapUIWidget_C
// Size: 0x591 // Inherited bytes: 0x4c0
struct UMiniMapUIWidget_C : UMapUIWidgetBase {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4c0 // Size: 0x08
	struct UWidgetAnimation* Animation_Tips; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MarkRoot1; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MarkRoot2; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_MarkSystem; // Offset: 0x4e0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Root; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* CommonFunctionAddPanel; // Offset: 0x4f0 // Size: 0x08
	struct UCanvasPanel* DynamicMarkPanel; // Offset: 0x4f8 // Size: 0x08
	struct UCanvasPanel* ExtraAddBottomPanel; // Offset: 0x500 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_MarkSystem; // Offset: 0x508 // Size: 0x08
	struct UCanvasPanel* MapAndCircleCanvas; // Offset: 0x510 // Size: 0x08
	struct UImage* MINIMAP; // Offset: 0x518 // Size: 0x08
	struct UImage* MiniMapCover; // Offset: 0x520 // Size: 0x08
	struct UCanvasPanel* PlayerAddPanel; // Offset: 0x528 // Size: 0x08
	struct UMiniMapUI_BP_C* CurrentMapUIBP; // Offset: 0x530 // Size: 0x08
	MapProperty MapDataPathMap; // Offset: 0x538 // Size: 0x50
	struct UMapUIMarkManager* MapUIMarkComponent; // Offset: 0x588 // Size: 0x08
	bool IsMiniMapUIReady; // Offset: 0x590 // Size: 0x01

	// Functions

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	void OnPaint(struct FPaintContext& Context); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.OpenOrHideEntireMap
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OpenOrHideEntireMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.UpdatePlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdatePlayerState(enum class ExtraPlayerLiveState State, struct ACharacter* OwnerCharacter); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.PreConstruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void PreConstruct(bool IsDesignTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.InitPlayerState
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPlayerState(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.ResetUIStateAfterRespawn
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ResetUIStateAfterRespawn(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.Destruct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Destruct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.OnMiniMapPointerException
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnMiniMapPointerException(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MiniMapUIWidget.MiniMapUIWidget_C.ExecuteUbergraph_MiniMapUIWidget
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MiniMapUIWidget(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

