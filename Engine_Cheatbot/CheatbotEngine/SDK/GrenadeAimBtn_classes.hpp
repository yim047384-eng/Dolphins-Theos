#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass GrenadeAimBtn.GrenadeAimBtn_C
// Size: 0x4f1 // Inherited bytes: 0x488
struct UGrenadeAimBtn_C : UCustomUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UImage* Profile; // Offset: 0x490 // Size: 0x08
	struct FScriptMulticastDelegate GrenadeTriggerHit; // Offset: 0x498 // Size: 0x10
	struct FScriptMulticastDelegate GrenadeThrown; // Offset: 0x4a8 // Size: 0x10
	float CircularHitTestRadius; // Offset: 0x4b8 // Size: 0x04
	bool bIsGrenadeTriggerHit; // Offset: 0x4bc // Size: 0x01
	bool bIsUseEnhancedHitTest; // Offset: 0x4bd // Size: 0x01
	char pad_0x4BE[0x2]; // Offset: 0x4be // Size: 0x02
	float DoubleClickValidTime; // Offset: 0x4c0 // Size: 0x04
	float CurPressTime; // Offset: 0x4c4 // Size: 0x04
	enum class ETouchIndex PointerIndex; // Offset: 0x4c8 // Size: 0x01
	bool IsAlreadyClickOnce; // Offset: 0x4c9 // Size: 0x01
	bool IsPressing; // Offset: 0x4ca // Size: 0x01
	char pad_0x4CB[0x1]; // Offset: 0x4cb // Size: 0x01
	float TimeAfterFirstClick; // Offset: 0x4cc // Size: 0x04
	struct FScriptMulticastDelegate GrenadeHighlightFireBtn; // Offset: 0x4d0 // Size: 0x10
	struct FScriptMulticastDelegate GrenadeNormalFireBtn; // Offset: 0x4e0 // Size: 0x10
	bool QuickThrowSwitch; // Offset: 0x4f0 // Size: 0x01

	// Functions

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchStartFunction
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnTouchStartFunction(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchEndFunction
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void OnTouchEndFunction(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.CanUseQuickThrow
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void CanUseQuickThrow(bool& CanUse); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.FetchQuickThrowSwitch
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void FetchQuickThrowSwitch(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.ThrowGrenadeLowMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ThrowGrenadeLowMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.RealTriggerHit
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void RealTriggerHit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.SwitchCamera
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SwitchCamera(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.ExecuteUbergraph_GrenadeAimBtn
	// Flags: [HasDefaults]
	void ExecuteUbergraph_GrenadeAimBtn(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeNormalFireBtn__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void GrenadeNormalFireBtn__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeHighlightFireBtn__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void GrenadeHighlightFireBtn__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeThrown__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void GrenadeThrown__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn.GrenadeAimBtn_C.GrenadeTriggerHit__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void GrenadeTriggerHit__DelegateSignature(enum class ETouchIndex NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

