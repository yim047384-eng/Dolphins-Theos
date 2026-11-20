#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass TurnplateBtn_UIBP.TurnplateBtn_UIBP_C
// Size: 0x2a0 // Inherited bytes: 0x260
struct UTurnplateBtn_UIBP_C : UUserWidget {
	// Fields
	struct FScriptMulticastDelegate ED_TurnplateBtnTouchMove; // Offset: 0x260 // Size: 0x10
	struct FVector2D PressedPosition; // Offset: 0x270 // Size: 0x08
	struct FVector2D CurPosition; // Offset: 0x278 // Size: 0x08
	struct FScriptMulticastDelegate ED_TurnplateBtnTouchEnd; // Offset: 0x280 // Size: 0x10
	struct FScriptMulticastDelegate ED_TurnplateBtnTouchStart; // Offset: 0x290 // Size: 0x10

	// Functions

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.ED_TurnplateBtnTouchStart__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_TurnplateBtnTouchStart__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.ED_TurnplateBtnTouchEnd__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_TurnplateBtnTouchEnd__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TurnplateBtn_UIBP.TurnplateBtn_UIBP_C.ED_TurnplateBtnTouchMove__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ED_TurnplateBtnTouchMove__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

