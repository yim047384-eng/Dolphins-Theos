#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass RedSight_UIBP.RedSight_UIBP_C
// Size: 0x45a // Inherited bytes: 0x418
struct URedSight_UIBP_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct UMultiEventsButton_C* MultiRedButton; // Offset: 0x420 // Size: 0x08
	struct UCanvasPanel* Redsight_Panel; // Offset: 0x428 // Size: 0x08
	struct UTextBlock* TextBlock_Main; // Offset: 0x430 // Size: 0x08
	struct UTextBlock* TextBlock_side; // Offset: 0x438 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_P90_Redsight; // Offset: 0x440 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Redsight; // Offset: 0x448 // Size: 0x08
	struct UWidgetSwitcher* WidgetSwitcher_Redsight02; // Offset: 0x450 // Size: 0x08
	bool RotateViewWithSniperSwitch; // Offset: 0x458 // Size: 0x01
	bool ISP90; // Offset: 0x459 // Size: 0x01

	// Functions

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_HighLightWeaponSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_HighLightWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_NormalWeaponSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_NormalWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_ShootWeaponSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShootWeaponSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_ShowSideSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_ShowSideSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.SetSideSightMode
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetSideSightMode(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_HideSideSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_HideSideSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_HighLightSideSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_HighLightSideSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.UIMsg_NormalSideSight
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UIMsg_NormalSideSight(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.EventRotateViewWithSniperSwitch
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventRotateViewWithSniperSwitch(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.BndEvt__MultiRedButton_K2Node_ComponentBoundEvent_148_OnButtonHoldEndedEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__MultiRedButton_K2Node_ComponentBoundEvent_148_OnButtonHoldEndedEvent__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.BndEvt__MultiRedButton_K2Node_ComponentBoundEvent_88_OnButtonPressDownEvent__DelegateSignature
	// Flags: [BlueprintEvent]
	void BndEvt__MultiRedButton_K2Node_ComponentBoundEvent_88_OnButtonPressDownEvent__DelegateSignature(IntProperty PointerIndex); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RedSight_UIBP.RedSight_UIBP_C.ExecuteUbergraph_RedSight_UIBP
	// Flags: [None]
	void ExecuteUbergraph_RedSight_UIBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

