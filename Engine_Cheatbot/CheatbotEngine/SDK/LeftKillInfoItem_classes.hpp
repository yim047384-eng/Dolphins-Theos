#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass LeftKillInfoItem.LeftKillInfoItem_C
// Size: 0x534 // Inherited bytes: 0x418
struct ULeftKillInfoItem_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x420 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomizeCanvasPanel_BP; // Offset: 0x428 // Size: 0x08
	struct UKillInfoItem_BP_C* KillInfoItem_BP_2; // Offset: 0x430 // Size: 0x08
	struct UKillInfoItem_BP_C* KillInfoItem_BP_3; // Offset: 0x438 // Size: 0x08
	struct UKillInfoItem_BP_C* KillInfoItem_BP_4; // Offset: 0x440 // Size: 0x08
	struct UKillInfoItem_BP_C* KillInfoItem_BP_5; // Offset: 0x448 // Size: 0x08
	struct UKillInfoItem_BP_C* KillInfoItem_BP_6; // Offset: 0x450 // Size: 0x08
	struct UGridPanel* KillTipContainer; // Offset: 0x458 // Size: 0x08
	MapProperty KillInfoPanelCache; // Offset: 0x460 // Size: 0x50
	IntProperty KillInfoPanelCacheIndex; // Offset: 0x4b0 // Size: 0x04
	char pad_0x4B4[0x4]; // Offset: 0x4b4 // Size: 0x04
	struct TArray<struct FClientFatalDamageRecordData> FatalDamageRecordCache; // Offset: 0x4b8 // Size: 0x10
	struct UKillInfoItem_BP_C* CurFatalDamageWidget; // Offset: 0x4c8 // Size: 0x08
	struct UKillInfoItem_BP_C* PrevFatalDamageWidget; // Offset: 0x4d0 // Size: 0x08
	struct FTimerHandle CurFatalDamageClearTimer; // Offset: 0x4d8 // Size: 0x08
	struct FVector2D KillTipRelativePos; // Offset: 0x4e0 // Size: 0x08
	bool bNeedShowKillInfo; // Offset: 0x4e8 // Size: 0x01
	char pad_0x4E9[0x7]; // Offset: 0x4e9 // Size: 0x07
	struct TArray<struct FClientLeftUIInfoRecordData> LeftUIRecordCache; // Offset: 0x4f0 // Size: 0x10
	struct TArray<IntProperty> SingleModePhase; // Offset: 0x500 // Size: 0x10
	struct TArray<IntProperty> DoubleModePhase; // Offset: 0x510 // Size: 0x10
	struct TArray<IntProperty> FourModePhase; // Offset: 0x520 // Size: 0x10
	IntProperty LastAlivePlayerNum; // Offset: 0x530 // Size: 0x04

	// Functions

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.CheckPhaseInfo
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void CheckPhaseInfo(IntProperty InPhase, IntProperty AivePlayerNum, bool& bMatch); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.AddNewPhaseRecordInfo
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void AddNewPhaseRecordInfo(IntProperty Phase); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.AddNewFatalDamageInfo
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void AddNewFatalDamageInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.InitKillInfoPanel
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitKillInfoPanel(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.GetKillInfoPanel
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetKillInfoPanel(struct UKillInfoItem_BP_C*& Output_Get); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.UpdateFatalDamageUI
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UpdateFatalDamageUI(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.AddOneNewItem
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AddOneNewItem(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.ClearCurFatalDamagetWidget
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ClearCurFatalDamagetWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.CheckSwitchMode
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CheckSwitchMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.OnPlayerNumChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerNumChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.InitBind
	// Flags: [BlueprintCallable|BlueprintEvent]
	void InitBind(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function LeftKillInfoItem.LeftKillInfoItem_C.ExecuteUbergraph_LeftKillInfoItem
	// Flags: [HasDefaults]
	void ExecuteUbergraph_LeftKillInfoItem(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

