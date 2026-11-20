#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BP_VoiceCheck.BP_VoiceCheck_C
// Size: 0x1fc // Inherited bytes: 0x178
struct UBP_VoiceCheck_C : UActorComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x178 // Size: 0x08
	struct TArray<struct FBP_VoiceCheckData> checkDataList; // Offset: 0x180 // Size: 0x10
	struct FScriptMulticastDelegate ShowTrigerVoiceIcon; // Offset: 0x190 // Size: 0x10
	struct UBP_VoiceDataObject_C* playerMoveCheck; // Offset: 0x1a0 // Size: 0x08
	struct UBP_VoiceDataObject_C* VehicleMoveChek; // Offset: 0x1a8 // Size: 0x08
	struct UBP_VoiceDataObject_C* weaponCheck; // Offset: 0x1b0 // Size: 0x08
	bool isRainDay; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x7]; // Offset: 0x1b9 // Size: 0x07
	struct ABP_STExtraPlayerController_C* PlayerController; // Offset: 0x1c0 // Size: 0x08
	struct TArray<struct FBP_VoiceCheckWeatherConfig> weatherConfigList; // Offset: 0x1c8 // Size: 0x10
	struct FBP_VoiceCheckWeatherConfig nowWeatherConfig; // Offset: 0x1d8 // Size: 0x10
	enum class EWeatherType nowWeatherType; // Offset: 0x1e8 // Size: 0x01
	char pad_0x1E9[0x3]; // Offset: 0x1e9 // Size: 0x03
	float normalScaleDis; // Offset: 0x1ec // Size: 0x04
	struct ASTExtraGameStateBase* GameState; // Offset: 0x1f0 // Size: 0x08
	IntProperty WeatherID; // Offset: 0x1f8 // Size: 0x04

	// Functions

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.GetWeatherID
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetWeatherID(IntProperty& WeatherID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.IsVoiceCheckEnable
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure]
	void IsVoiceCheckEnable(bool& Result); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.UpdateRainDay
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void UpdateRainDay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.TrigerVoiceCheck
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void TrigerVoiceCheck(struct AActor* nowActor, float checkDis); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckObjectByType
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void InitCheckObjectByType(enum class BP_VoiceCheckType NewParam, struct UBP_VoiceDataObject_C*& NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.GetCheckData
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetCheckData(enum class BP_VoiceCheckType checkType, struct FBP_VoiceCheckData& Result); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.InitCheckMap
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InitCheckMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveTick(float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.SetAllWeatherType
	// Flags: [Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent]
	void SetAllWeatherType(IntProperty WeatherType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.ExecuteUbergraph_BP_VoiceCheck
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BP_VoiceCheck(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_VoiceCheck.BP_VoiceCheck_C.ShowTrigerVoiceIcon__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	void ShowTrigerVoiceIcon__DelegateSignature(struct UBP_VoiceDataSubObject_C* nowSubObject); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)
};

