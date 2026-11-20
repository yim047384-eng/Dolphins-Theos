#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass VehileControlPanel.VehileControlPanel_C
// Size: 0x590 // Inherited bytes: 0x488
struct UVehileControlPanel_C : ULuaUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x488 // Size: 0x08
	struct UButton* BtnLeaveVehicle; // Offset: 0x490 // Size: 0x08
	struct UButton* Button_PhotoEdit; // Offset: 0x498 // Size: 0x08
	struct UButton* Button_ShootingOnTheVehile; // Offset: 0x4a0 // Size: 0x08
	struct UButton* ButtonRacingReset; // Offset: 0x4a8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_1; // Offset: 0x4b0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_CarSpeaker; // Offset: 0x4b8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Driver; // Offset: 0x4c0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_LeaveVehicle; // Offset: 0x4c8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_Miscellaneous; // Offset: 0x4d0 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_RacingReset; // Offset: 0x4d8 // Size: 0x08
	struct UCanvasPanel* CanvasPanel_SeatSocket; // Offset: 0x4e0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CanvasPanel_ShootingOnTheVehile; // Offset: 0x4e8 // Size: 0x08
	struct UCanvasPanel* Carrier_WeaponIconSlot; // Offset: 0x4f0 // Size: 0x08
	struct UCustomizeCanvasPanel_BP_C* CustomPanel_Photo; // Offset: 0x4f8 // Size: 0x08
	struct UImage* Image_LeanOut_Off; // Offset: 0x500 // Size: 0x08
	struct UImage* Image_LeanOut_On; // Offset: 0x508 // Size: 0x08
	struct UImage* Image_LeaveVehicle; // Offset: 0x510 // Size: 0x08
	struct UCanvasPanel* InvalidationBox_3; // Offset: 0x518 // Size: 0x08
	struct UCanvasPanel* PanelVehicleCommonGUI2; // Offset: 0x520 // Size: 0x08
	struct UButton* RightCarSpeaker; // Offset: 0x528 // Size: 0x08
	struct UTextBlock* TextBlock_LeaveVehicle; // Offset: 0x530 // Size: 0x08
	struct UCustomSocketPanel* VehicleWeaponUISocket; // Offset: 0x538 // Size: 0x08
	MapProperty HornButtonStyleMap; // Offset: 0x540 // Size: 0x50

	// Functions

	// Object Name: Function VehileControlPanel.VehileControlPanel_C.ExecuteUbergraph_VehileControlPanel
	// Flags: [None]
	void ExecuteUbergraph_VehileControlPanel(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

