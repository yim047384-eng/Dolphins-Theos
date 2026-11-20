#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass FreeCameraBtn.FreeCameraBtn_C
// Size: 0x664 // Inherited bytes: 0x488
struct UFreeCameraBtn_C : UCustomUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UGridPanel* AimControlGrid; // Offset: 0x490 // Size: 0x08
	struct UImage* BtnImg; // Offset: 0x498 // Size: 0x08
	struct UImage* Image_2; // Offset: 0x4a0 // Size: 0x08
	struct UInvalidationBox* InvalidationBox_1; // Offset: 0x4a8 // Size: 0x08
	struct UGridPanel* ScopeControl; // Offset: 0x4b0 // Size: 0x08
	struct FSlateBrush PressImg; // Offset: 0x4b8 // Size: 0xb8
	struct FSlateBrush NormalImg; // Offset: 0x570 // Size: 0xb8
	bool CanUseFreeCam; // Offset: 0x628 // Size: 0x01
	bool ActiveFreeCamera; // Offset: 0x629 // Size: 0x01
	char pad_0x62A[0x2]; // Offset: 0x62a // Size: 0x02
	struct FGeometry MyGeometry; // Offset: 0x62c // Size: 0x38

	// Functions

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.OnSelfieModeChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnSelfieModeChange(bool IsSelfie); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.UIMsg_ScopeChanged
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ScopeChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.UpdateIconPosition
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void UpdateIconPosition(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.TouchStartLogic
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void TouchStartLogic(enum class ETouchIndex TouchIndex); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.UIInGameEvent_BackpackOpen_StopFreeLook
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIInGameEvent_BackpackOpen_StopFreeLook(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.StopFreeCamera
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void StopFreeCamera(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.SwitchCameraModeScope_Aim
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchCameraModeScope_Aim(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.StateEnter
	// Flags: [BlueprintCallable|BlueprintEvent]
	void StateEnter(enum class EPawnState State); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function FreeCameraBtn.FreeCameraBtn_C.ExecuteUbergraph_FreeCameraBtn
	// Flags: [HasDefaults]
	void ExecuteUbergraph_FreeCameraBtn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

