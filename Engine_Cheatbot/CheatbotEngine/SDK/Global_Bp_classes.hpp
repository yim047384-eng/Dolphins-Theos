#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// Size: 0x448 // Inherited bytes: 0x418
struct UGlobal_Bp_C : UUAEUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x418 // Size: 0x08
	struct USettingConfig_C* SettingConfigObject; // Offset: 0x420 // Size: 0x08
	struct Abp_global_C* bp_global; // Offset: 0x428 // Size: 0x08
	bool isPostProcessVolumeInit; // Offset: 0x430 // Size: 0x01
	char pad_0x431[0x7]; // Offset: 0x431 // Size: 0x07
	struct APostProcessVolume* postProcessClassic; // Offset: 0x438 // Size: 0x08
	struct ACameraPostProcessActor_C* cameraPostProcessActor; // Offset: 0x440 // Size: 0x08

	// Functions

	// Object Name: Function Global_Bp.Global_Bp_C.InitOBSettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitOBSettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitCustomizeSettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitCustomizeSettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitFireGyroSensibilitySettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitFireGyroSensibilitySettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.MapFromCBToESBH
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESBH(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitMirrorObjMapPickupSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitMirrorObjMapPickupSetting(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitThrowObjMapPickupSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitThrowObjMapPickupSetting(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitDrugMapPickupSetting
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitDrugMapPickupSetting(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitBasicSettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitBasicSettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitPickupSettingData_XT
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPickupSettingData_XT(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitPickupSettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitPickupSettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.InitSensibilitySettingData
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitSensibilitySettingData(struct USettingConfig_C* ServerSettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.SetGrenadeDefaultPickValue
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetGrenadeDefaultPickValue(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Global_Bp.Global_Bp_C.InitMapFromCBToES
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitMapFromCBToES(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Global_Bp.Global_Bp_C.MapFromCBToESGlobal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESGlobal(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.MapFromCBToESJK
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESJK(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.MapFromCBToESVN
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void MapFromCBToESVN(struct USettingConfig_C* SettingConfig); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Global_Bp.Global_Bp_C.LoadSettingConfigFromSlot
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void LoadSettingConfigFromSlot(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Global_Bp.Global_Bp_C.SetPostProcessSettings
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void SetPostProcessSettings(IntProperty ID, float Time, bool isReverse, bool isClosing); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function Global_Bp.Global_Bp_C.EventAndroidQuitGame
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EventAndroidQuitGame(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Global_Bp.Global_Bp_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp
	// Flags: [None]
	void ExecuteUbergraph_Global_Bp(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

