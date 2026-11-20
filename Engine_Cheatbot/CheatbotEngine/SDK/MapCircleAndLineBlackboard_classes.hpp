#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C
// Size: 0x6f0 // Inherited bytes: 0x488
struct UMapCircleAndLineBlackboard_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_3; // Offset: 0x490 // Size: 0x08
	struct UImage* Image_3; // Offset: 0x498 // Size: 0x08
	struct FScriptMulticastDelegate MoveMap; // Offset: 0x4a0 // Size: 0x10
	struct TArray<struct FVector2D> LastTickFingerPosition; // Offset: 0x4b0 // Size: 0x10
	float PutMarkerThreshold; // Offset: 0x4c0 // Size: 0x04
	char pad_0x4C4[0x4]; // Offset: 0x4c4 // Size: 0x04
	struct TArray<struct FVector2D> TouchStartFingerPosition; // Offset: 0x4c8 // Size: 0x10
	struct ASTExtraPlayerController* STExtraPC; // Offset: 0x4d8 // Size: 0x08
	struct FScriptMulticastDelegate SetMarker; // Offset: 0x4e0 // Size: 0x10
	struct TArray<float> FingerMoveDis; // Offset: 0x4f0 // Size: 0x10
	bool bMultiTouch; // Offset: 0x500 // Size: 0x01
	char pad_0x501[0x7]; // Offset: 0x501 // Size: 0x07
	struct FScriptMulticastDelegate ScaleMap; // Offset: 0x508 // Size: 0x10
	float MultiTouchScaleRatio; // Offset: 0x518 // Size: 0x04
	float MultiTouchToScaleInitDis; // Offset: 0x51c // Size: 0x04
	struct TArray<IntProperty> TouchInMouseIndex; // Offset: 0x520 // Size: 0x10
	struct FScriptMulticastDelegate OperateEnd; // Offset: 0x530 // Size: 0x10
	struct FScriptMulticastDelegate OperateBegin; // Offset: 0x540 // Size: 0x10
	struct UMapUIBase* MapUI; // Offset: 0x550 // Size: 0x08
	struct FMapRealTimeInfo MapRealTimeInfo; // Offset: 0x558 // Size: 0x170
	float MapSize; // Offset: 0x6c8 // Size: 0x04
	bool bAntiAlias; // Offset: 0x6cc // Size: 0x01
	char pad_0x6CD[0x3]; // Offset: 0x6cd // Size: 0x03
	struct FVector2D ScaleVector; // Offset: 0x6d0 // Size: 0x08
	struct UMapUIBase_BP_C* MapUIBaseBP; // Offset: 0x6d8 // Size: 0x08
	struct FScriptMulticastDelegate OnClickEntireMap; // Offset: 0x6e0 // Size: 0x10

	// Functions

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.InitOB
	// Flags: [Private|BlueprintCallable|BlueprintEvent]
	void InitOB(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	void OnPaint(struct FPaintContext& Context); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetAnotherFingerIndex
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetAnotherFingerIndex(IntProperty CurIndex, IntProperty& AnotherIndex); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.GetPlayerController
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void GetPlayerController(struct ASTExtraPlayerController*& NewParam); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchMoved
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchGesture
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnMouseLeave
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent]
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x78)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ExecuteUbergraph_MapCircleAndLineBlackboard
	// Flags: [HasDefaults]
	void ExecuteUbergraph_MapCircleAndLineBlackboard(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OnClickEntireMap__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OnClickEntireMap__DelegateSignature(struct FVector2D ScreenPosition); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateBegin__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OperateBegin__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.OperateEnd__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void OperateEnd__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.ScaleMap__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ScaleMap__DelegateSignature(float ScaleValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.SetMarker__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void SetMarker__DelegateSignature(struct FVector2D Position); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MapCircleAndLineBlackboard.MapCircleAndLineBlackboard_C.MoveMap__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void MoveMap__DelegateSignature(struct FVector2D Offset); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

