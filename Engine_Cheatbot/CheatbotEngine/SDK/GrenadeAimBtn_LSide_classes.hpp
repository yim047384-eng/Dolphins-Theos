#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C
// Size: 0x509 // Inherited bytes: 0x4f1
struct UGrenadeAimBtn_LSide_C : UGrenadeAimBtn_C {
	// Fields
	char pad_0x4F1[0x7]; // Offset: 0x4f1 // Size: 0x07
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x4f8 // Size: 0x08
	struct UButton* Button_1; // Offset: 0x500 // Size: 0x08
	bool TempPressing; // Offset: 0x508 // Size: 0x01

	// Functions

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.OnTouchEnded
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.OnTouchStarted
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GrenadeAimBtn_LSide.GrenadeAimBtn_LSide_C.ExecuteUbergraph_GrenadeAimBtn_LSide
	// Flags: [HasDefaults]
	void ExecuteUbergraph_GrenadeAimBtn_LSide(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

