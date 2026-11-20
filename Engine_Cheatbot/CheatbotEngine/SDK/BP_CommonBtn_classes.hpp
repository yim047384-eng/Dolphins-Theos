#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_CommonBtn.BP_CommonBtn_C
// Size: 0x1a7 // Inherited bytes: 0x198
struct UBP_CommonBtn_C : UCommonBtnComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x198 // Size: 0x08
	IntProperty OpenMode; // Offset: 0x1a0 // Size: 0x04
	enum class ECommonBtn BtnType; // Offset: 0x1a4 // Size: 0x01
	bool bShow; // Offset: 0x1a5 // Size: 0x01
	bool bOpen; // Offset: 0x1a6 // Size: 0x01

	// Functions

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.OnChangeOpenDoorMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnChangeOpenDoorMode(IntProperty OpenMode); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.UnRegistShowDoorButton
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void UnRegistShowDoorButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.OnShowDoorButton
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnShowDoorButton(enum class ECommonBtn Type, IntProperty OpenParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.RegistShowDoorButton
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void RegistShowDoorButton(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.ShowDoorButton
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void ShowDoorButton(bool Show, bool Open, IntProperty OpenMode); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x8)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.GetPlayerController
	// Flags: [Private|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetPlayerController(struct ABP_STExtraPlayerController_C*& PlayerController); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.CharacterStatusChanged
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CharacterStatusChanged(bool IsNearDeath, bool IsRescueingOther); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.PlayerControllerReconnectedDelegate_Event_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void PlayerControllerReconnectedDelegate_Event_1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.UI_Click
	// Flags: [BlueprintCallable|BlueprintEvent]
	void UI_Click(bool bSimulateExtraDoor, IntProperty OpenParam); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.ToogleDoor
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ToogleDoor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.BP_ShowDoorBtn
	// Flags: [Event|Public|BlueprintEvent]
	void BP_ShowDoorBtn(bool bShow, bool bOpen, IntProperty doorOpenMode); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x8)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.AutoOpenDoor
	// Flags: [BlueprintCallable|BlueprintEvent]
	void AutoOpenDoor(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.BP_SimulateUIClick
	// Flags: [Event|Public|BlueprintEvent]
	void BP_SimulateUIClick(bool bExtraDoor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_CommonBtn.BP_CommonBtn_C.ExecuteUbergraph_BP_CommonBtn
	// Flags: [None]
	void ExecuteUbergraph_BP_CommonBtn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

