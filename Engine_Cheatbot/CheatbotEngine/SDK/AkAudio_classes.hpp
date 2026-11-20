#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AkAudio.AkAcousticPortal
// Size: 0x4f0 // Inherited bytes: 0x4e0
struct AAkAcousticPortal : AVolume {
	// Fields
	float Gain; // Offset: 0x4e0 // Size: 0x04
	enum class AkAcousticPortalState InitialState; // Offset: 0x4e4 // Size: 0x01
	char pad_0x4E5[0xb]; // Offset: 0x4e5 // Size: 0x0b

	// Functions

	// Object Name: Function AkAudio.AkAcousticPortal.OpenPortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenPortal(); // Offset: 0x1019c5454 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAcousticPortal.GetCurrentState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class AkAcousticPortalState GetCurrentState(); // Offset: 0x1019c5420 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkAcousticPortal.ClosePortal
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClosePortal(); // Offset: 0x1019c540c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AkAcousticTexture
// Size: 0x28 // Inherited bytes: 0x28
struct UAkAcousticTexture : UObject {
};

// Object Name: Class AkAudio.AkAmbientSound
// Size: 0x508 // Inherited bytes: 0x4b0
struct AAkAmbientSound : AActor {
	// Fields
	struct UAkAudioEvent* AkAudioEvent; // Offset: 0x4b0 // Size: 0x08
	struct UAkComponent* AkComponent; // Offset: 0x4b8 // Size: 0x08
	bool StopWhenOwnerIsDestroyed; // Offset: 0x4c0 // Size: 0x01
	bool AutoPost; // Offset: 0x4c1 // Size: 0x01
	char pad_0x4C2[0x46]; // Offset: 0x4c2 // Size: 0x46

	// Functions

	// Object Name: Function AkAudio.AkAmbientSound.StopAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void StopAmbientSound(); // Offset: 0x1019c5834 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAmbientSound.StartAmbientSound
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void StartAmbientSound(); // Offset: 0x1019c5820 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AkAreaCheckComponent
// Size: 0x1c8 // Inherited bytes: 0x178
struct UAkAreaCheckComponent : UActorComponent {
	// Fields
	MapProperty RegistedAreaVolume; // Offset: 0x178 // Size: 0x50

	// Functions

	// Object Name: Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistAKAreaVolume(struct AActor* AreaVolume, enum class ECustomAKAreaType AreaType); // Offset: 0x1019c5cac // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistAKAreaVolume(struct AActor* AreaVolume, enum class ECustomAKAreaType AreaType); // Offset: 0x1019c5bf4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool CheckVoiceAvailable(struct FVector& VoicePostion); // Offset: 0x1019c5b5c // Return & Params: Num(2) Size(0xd)
};

// Object Name: Class AkAudio.AkAreaCheckVolumeBase
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct AAkAreaCheckVolumeBase : AActor {
	// Fields
	enum class ECustomAKAreaType AKAreaType; // Offset: 0x4a9 // Size: 0x01

	// Functions

	// Object Name: Function AkAudio.AkAreaCheckVolumeBase.UnRegisterFromAreaCheck
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterFromAreaCheck(); // Offset: 0x1019c6270 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAreaCheckVolumeBase.RegisterToAreaCheck
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterToAreaCheck(); // Offset: 0x1019c625c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAreaCheckVolumeBase.IsInsideVolume
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsInsideVolume(struct FVector& OrignPosition); // Offset: 0x1019c61bc // Return & Params: Num(2) Size(0xd)

	// Object Name: Function AkAudio.AkAreaCheckVolumeBase.GetAKAreaType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	enum class ECustomAKAreaType GetAKAreaType(); // Offset: 0x1019c61a0 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AkAudio.AkAreaCheckSphereVolume
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AAkAreaCheckSphereVolume : AAkAreaCheckVolumeBase {
	// Fields
	struct USphereComponent* SphereComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class AkAudio.AkAreaCheckVolume
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct AAkAreaCheckVolume : AAkAreaCheckVolumeBase {
	// Fields
	struct UBoxComponent* CollisionComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class AkAudio.AkAudioBank
// Size: 0x40 // Inherited bytes: 0x28
struct UAkAudioBank : UObject {
	// Fields
	bool AutoLoad; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x17]; // Offset: 0x29 // Size: 0x17
};

// Object Name: Class AkAudio.AkAudioDeviceSettings
// Size: 0x58 // Inherited bytes: 0x28
struct UAkAudioDeviceSettings : UObject {
	// Fields
	IntProperty SuperHighDefaultPoolSize; // Offset: 0x28 // Size: 0x04
	IntProperty SuperHighEngineDefaultPoolSize; // Offset: 0x2c // Size: 0x04
	IntProperty HighDefaultPoolSize; // Offset: 0x30 // Size: 0x04
	IntProperty HighEngineDefaultPoolSize; // Offset: 0x34 // Size: 0x04
	IntProperty LowDefaultPoolSize; // Offset: 0x38 // Size: 0x04
	IntProperty LowEngineDefaultPoolSize; // Offset: 0x3c // Size: 0x04
	IntProperty DefaultCommandQueueSize; // Offset: 0x40 // Size: 0x04
	IntProperty DefaultBluetoothDelay; // Offset: 0x44 // Size: 0x04
	float DefaultBluetoothErrThres; // Offset: 0x48 // Size: 0x04
	float DefaultBluetoothErrRatio; // Offset: 0x4c // Size: 0x04
	float DefaultBluetoothMaxTime; // Offset: 0x50 // Size: 0x04
	bool bEnableSilence; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03

	// Functions

	// Object Name: Function AkAudio.AkAudioDeviceSettings.InitConfig
	// Flags: [Final|Native|Public]
	void InitConfig(); // Offset: 0x1019c660c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AkAudioEvent
// Size: 0x40 // Inherited bytes: 0x28
struct UAkAudioEvent : UObject {
	// Fields
	struct UAkAudioBank* RequiredBank; // Offset: 0x28 // Size: 0x08
	float MaxAttenuationRadius; // Offset: 0x30 // Size: 0x04
	bool IsInfinite; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	float MinimumDuration; // Offset: 0x38 // Size: 0x04
	float MaximumDuration; // Offset: 0x3c // Size: 0x04
};

// Object Name: Class AkAudio.AkAudioMonitor
// Size: 0x28 // Inherited bytes: 0x28
struct UAkAudioMonitor : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void UpdateAkComponentInfo(MapProperty& OutList); // Offset: 0x1019c8460 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitor.Update
	// Flags: [Final|Native|Static|Public]
	void Update(float DeltaTime); // Offset: 0x1019c83ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkAudioMonitor.SetUpdateInterval
	// Flags: [Final|Native|Static|Public]
	void SetUpdateInterval(float NewUpdateInterval); // Offset: 0x1019c8378 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkAudioMonitor.SetMonitorFlag
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetMonitorFlag(struct TArray<char>& InFlags, char TotalPlayCount, char ObjectPlayCount); // Offset: 0x1019c8254 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function AkAudio.AkAudioMonitor.OnReportError
	// Flags: [Final|Native|Static|Public]
	void OnReportError(StrProperty FunctionName, char ErrorAkCode, uint64 NumericParam, StrProperty StrParam); // Offset: 0x1019c8058 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger
	// Flags: [Final|Native|Static|Public]
	void OnAkAudioEventTrigger(StrProperty Name, IntProperty code); // Offset: 0x1019c7f3c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger
	// Flags: [Final|Native|Static|Public]
	void OnAkAudioBankTrigger(bool bUnload, StrProperty BankName, uint8_t RefCount); // Offset: 0x1019c7ddc // Return & Params: Num(3) Size(0x19)

	// Object Name: Function AkAudio.AkAudioMonitor.IsMonitorInit
	// Flags: [Final|Native|Static|Public]
	bool IsMonitorInit(); // Offset: 0x1019c7da8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAkOutOfAttenuation(struct UAkComponent* AkComp, float Attenuation); // Offset: 0x1019c7cf0 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function AkAudio.AkAudioMonitor.InitMonitorDataPtr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void InitMonitorDataPtr(); // Offset: 0x1019c7cdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAudioMonitor.GetTotalPlayRecord
	// Flags: [Final|Native|Static|Public]
	struct TArray<uint16_t> GetTotalPlayRecord(); // Offset: 0x1019c7c78 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioMonitor.GetSwitchValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetSwitchValue(struct UAkComponent* Component, StrProperty SwitchName); // Offset: 0x1019c7b30 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function AkAudio.AkAudioMonitor.GetSwitchNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetSwitchNames(struct UAkComponent* Component); // Offset: 0x1019c7a8c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetRTPCValueByID
	// Flags: [Final|Native|Static|Public]
	float GetRTPCValueByID(struct UAkComponent* Component, uint32_t RTPCID); // Offset: 0x1019c79d4 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function AkAudio.AkAudioMonitor.GetRTPCValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetRTPCValue(struct UAkComponent* Component, StrProperty RTPCName); // Offset: 0x1019c78b0 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function AkAudio.AkAudioMonitor.GetRTPCNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetRTPCNames(struct UAkComponent* Component); // Offset: 0x1019c780c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetRTPCIDs
	// Flags: [Final|Native|Static|Public]
	struct TArray<uint32_t> GetRTPCIDs(struct UAkComponent* Component); // Offset: 0x1019c7768 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetReportErrorRecord
	// Flags: [Final|Native|Static|Public]
	MapProperty GetReportErrorRecord(); // Offset: 0x1019c7704 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitor.GetPostion
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector GetPostion(struct UAkComponent* Component); // Offset: 0x1019c7684 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AkAudio.AkAudioMonitor.GetPlayingID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<IntProperty> GetPlayingID(struct UAkComponent* Component); // Offset: 0x1019c75e0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetPlayEventName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPlayEventName(struct UAkComponent* Component, IntProperty PlayID); // Offset: 0x1019c7500 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function AkAudio.AkAudioMonitor.GetObjectPlayRecord
	// Flags: [Final|Native|Static|Public]
	MapProperty GetObjectPlayRecord(); // Offset: 0x1019c749c // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID
	// Flags: [Final|Native|Static|Public]
	StrProperty GetObjectNameByObjectID(uint64 ObjectID); // Offset: 0x1019c73f8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetMonitorDataPtr
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAkAudioMonitorData* GetMonitorDataPtr(); // Offset: 0x1019c73c4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetGlobalSwitchValue(StrProperty SwitchName); // Offset: 0x1019c72bc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetGlobalSwitchNames(); // Offset: 0x1019c7258 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetGlobalRTPCValue(StrProperty RTPCName); // Offset: 0x1019c7174 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetGlobalRTPCNames(); // Offset: 0x1019c7110 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioMonitor.GetEventList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetEventList(struct TArray<StrProperty>& OutRes); // Offset: 0x1019c7070 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioMonitor.GetEventInMemoryByName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UAkAudioEvent* GetEventInMemoryByName(struct TArray<struct UAkAudioEvent*>& AllAk, StrProperty AkName); // Offset: 0x1019c6f1c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function AkAudio.AkAudioMonitor.GetDetailErrorCodeRecord
	// Flags: [Final|Native|Static|Public]
	MapProperty GetDetailErrorCodeRecord(); // Offset: 0x1019c6eb8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitor.GetBankRefList
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetBankRefList(MapProperty& OutRes); // Offset: 0x1019c6e14 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<struct FName> GetAllEventNameInMemory(struct UObject* WorldContent); // Offset: 0x1019c6d70 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetAllEventInMemory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetAllEventInMemory(struct UObject* WorldContent, struct TArray<struct UAkAudioEvent*>& AllAk); // Offset: 0x1019c6c94 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetAllAkComponentFormDevice(struct TArray<struct UAkComponent*>& AkList, struct TArray<struct UAkComponent*>& recycledAkList); // Offset: 0x1019c6b8c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function AkAudio.AkAudioMonitor.GetActiveObjCount
	// Flags: [Final|Native|Static|Public]
	IntProperty GetActiveObjCount(); // Offset: 0x1019c6b58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkAudioMonitor.GetActiveEventCount
	// Flags: [Final|Native|Static|Public]
	IntProperty GetActiveEventCount(); // Offset: 0x1019c6b24 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkAudioMonitor.GetActiveBankCount
	// Flags: [Final|Native|Static|Public]
	IntProperty GetActiveBankCount(); // Offset: 0x1019c6af0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AkAudio.AkAudioMonitorData
// Size: 0x378 // Inherited bytes: 0x28
struct UAkAudioMonitorData : UObject {
	// Fields
	SetProperty IgnoreErrorCode; // Offset: 0x28 // Size: 0x50
	SetProperty IgnoreDetailErrorCode; // Offset: 0x78 // Size: 0x50
	MapProperty ErrorCodeMsgMap; // Offset: 0xc8 // Size: 0x50
	MapProperty NotifyCodeMsgMap; // Offset: 0x118 // Size: 0x50
	char pad_0x168[0x80]; // Offset: 0x168 // Size: 0x80
	struct TArray<uint16_t> TotalPlayCountRecord; // Offset: 0x1e8 // Size: 0x10
	MapProperty ObjectPlayCountRecord; // Offset: 0x1f8 // Size: 0x50
	MapProperty AkErrorRecord; // Offset: 0x248 // Size: 0x50
	MapProperty AkDetailErrorCodeRecord; // Offset: 0x298 // Size: 0x50
	struct FScriptMulticastDelegate AkAudioDetailErrorCodeDelegate; // Offset: 0x2e8 // Size: 0x10
	struct FScriptMulticastDelegate AkAudioEventTrigger; // Offset: 0x2f8 // Size: 0x10
	float nPassedTime; // Offset: 0x308 // Size: 0x04
	float nUpdateInterval; // Offset: 0x30c // Size: 0x04
	MapProperty BankRefList; // Offset: 0x310 // Size: 0x50
	struct TArray<StrProperty> EventList; // Offset: 0x360 // Size: 0x10
	char pad_0x370[0x8]; // Offset: 0x370 // Size: 0x08

	// Functions

	// Object Name: Function AkAudio.AkAudioMonitorData.UpdateEventList
	// Flags: [Final|Native|Public]
	void UpdateEventList(bool bStop, StrProperty InEventName); // Offset: 0x1019c95d4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkAudioMonitorData.UpdateBankRefList
	// Flags: [Final|Native|Public]
	void UpdateBankRefList(bool bUnload, StrProperty BankName, uint8_t RefCount); // Offset: 0x1019c9464 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void UpdateAkComponentInfo(MapProperty& OutList); // Offset: 0x1019c93b8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal
	// Flags: [Final|Native|Public|HasOutParms]
	void SetMonitorFlagInternal(struct TArray<char>& InFlags, char TotalPlayCount, char ObjectPlayCount); // Offset: 0x1019c9284 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function AkAudio.AkAudioMonitorData.OnReportErrorInternal
	// Flags: [Final|Native|Public]
	void OnReportErrorInternal(StrProperty FunctionName, char ErrorAkCode, uint64 NumericParam, StrProperty StrParam); // Offset: 0x1019c9078 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function AkAudio.AkAudioMonitorData.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(); // Offset: 0x1019c9064 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AkAudioVisualComponent
// Size: 0x1420 // Inherited bytes: 0x3a0
struct UAkAudioVisualComponent : USceneComponent {
	// Fields
	StrProperty BankName; // Offset: 0x3a0 // Size: 0x10
	StrProperty EventName; // Offset: 0x3b0 // Size: 0x10
	enum class EFrequencyRange RangeType; // Offset: 0x3c0 // Size: 0x01
	char pad_0x3C1[0x3]; // Offset: 0x3c1 // Size: 0x03
	IntProperty BinNumber; // Offset: 0x3c4 // Size: 0x04
	char pad_0x3C8[0x1010]; // Offset: 0x3c8 // Size: 0x1010
	bool UseOfflineData; // Offset: 0x13d8 // Size: 0x01
	char pad_0x13D9[0x7]; // Offset: 0x13d9 // Size: 0x07
	struct TArray<struct FAudioOfflineVisualBeatData> OfflineData; // Offset: 0x13e0 // Size: 0x10
	char pad_0x13F0[0x30]; // Offset: 0x13f0 // Size: 0x30

	// Functions

	// Object Name: Function AkAudio.AkAudioVisualComponent.StartOfflineTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartOfflineTime(); // Offset: 0x1019c9cdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAudioVisualComponent.ResetOfflineTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetOfflineTime(); // Offset: 0x1019c9cc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnTickVisualInfo(struct TArray<float>& VisualInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnTickOfflineVisualInfo(struct FAudioOfflineVisualBeatData& VisualInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitOfflineDataWithBeatTime(struct TArray<float> Datas); // Offset: 0x1019c9be4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioVisualComponent.InitOfflineData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitOfflineData(struct TArray<struct FAudioOfflineVisualBeatData> Datas); // Offset: 0x1019c9b00 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkAudioVisualComponent.GetCurrentBeat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData& Result); // Offset: 0x1019c9a44 // Return & Params: Num(2) Size(0x19)
};

// Object Name: Class AkAudio.AkAuxBus
// Size: 0x38 // Inherited bytes: 0x28
struct UAkAuxBus : UObject {
	// Fields
	struct UAkAudioBank* RequiredBank; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class AkAudio.AkComponent
// Size: 0x610 // Inherited bytes: 0x3a0
struct UAkComponent : USceneComponent {
	// Fields
	struct UAkAuxBus* EarlyReflectionAuxBus; // Offset: 0x3a0 // Size: 0x08
	StrProperty EarlyReflectionAuxBusName; // Offset: 0x3a8 // Size: 0x10
	IntProperty EarlyReflectionOrder; // Offset: 0x3b8 // Size: 0x04
	float EarlyReflectionBusSendGain; // Offset: 0x3bc // Size: 0x04
	float EarlyReflectionMaxPathLength; // Offset: 0x3c0 // Size: 0x04
	char pad_0x3C4[0x4]; // Offset: 0x3c4 // Size: 0x04
	char EnableSpotReflectors : 1; // Offset: 0x3c8 // Size: 0x01
	char DrawFirstOrderReflections : 1; // Offset: 0x3c8 // Size: 0x01
	char DrawSecondOrderReflections : 1; // Offset: 0x3c8 // Size: 0x01
	char DrawHigherOrderReflections : 1; // Offset: 0x3c8 // Size: 0x01
	char pad_0x3C8_4 : 4; // Offset: 0x3c8 // Size: 0x01
	bool StopWhenOwnerDestroyed; // Offset: 0x3c9 // Size: 0x01
	char bIsUpdateEmmiterTransform : 1; // Offset: 0x3ca // Size: 0x01
	char bAllIsInstanceSound : 1; // Offset: 0x3ca // Size: 0x01
	char pad_0x3CA_2 : 6; // Offset: 0x3ca // Size: 0x01
	char pad_0x3CB[0x1]; // Offset: 0x3cb // Size: 0x01
	float AttenuationScalingFactor; // Offset: 0x3cc // Size: 0x04
	float OcclusionRefreshInterval; // Offset: 0x3d0 // Size: 0x04
	char pad_0x3D4[0x4]; // Offset: 0x3d4 // Size: 0x04
	struct UAkAudioEvent* AkAudioEvent; // Offset: 0x3d8 // Size: 0x08
	StrProperty EventName; // Offset: 0x3e0 // Size: 0x10
	struct FAkRangedEmitterInfo RangedEmitterInfo; // Offset: 0x3f0 // Size: 0x18
	char pad_0x408[0x208]; // Offset: 0x408 // Size: 0x208

	// Functions

	// Object Name: Function AkAudio.AkComponent.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void UseReverbVolumes(bool inUseReverbVolumes); // Offset: 0x1019cb2cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkComponent.UseEarlyReflections
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, StrProperty AuxBusName); // Offset: 0x1019caff4 // Return & Params: Num(9) Size(0x20)

	// Object Name: Function AkAudio.AkComponent.UpdateGameObjectPosition
	// Flags: [Final|Native|Public]
	void UpdateGameObjectPosition(); // Offset: 0x1019cafe0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkComponent.TriggerEventWithRangedEmitter
	// Flags: [Final|Native|Public]
	void TriggerEventWithRangedEmitter(bool bEnable); // Offset: 0x1019caf5c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkComponent.StopPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void StopPlayingID(IntProperty StopEventID); // Offset: 0x1019caee0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.StopEventInRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopEventInRange(); // Offset: 0x1019caecc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkComponent.Stop
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x1019caeb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkComponent.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	IntProperty SetSwitch(StrProperty SwitchGroup, StrProperty SwitchState); // Offset: 0x1019cad2c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Offset: 0x1019caca8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkComponent.SetRTPCValueGlobally
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetRTPCValueGlobally(StrProperty RTPC, float Value); // Offset: 0x1019cab84 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AkAudio.AkComponent.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetRTPCValue(StrProperty RTPC, float Value, IntProperty InterpolationTimeMs); // Offset: 0x1019caa20 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AkAudio.AkComponent.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetOutputBusVolume(float BusVolume); // Offset: 0x1019ca9a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.SetListeners
	// Flags: [Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable]
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Offset: 0x1019ca8fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkComponent.SetEarlyReflectionOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEarlyReflectionOrder(IntProperty NewEarlyReflectionOrder); // Offset: 0x1019ca880 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.SetAutoDestroy
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetAutoDestroy(bool in_AutoDestroy); // Offset: 0x1019ca800 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkComponent.SetAttenuationScalingFactor
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void SetAttenuationScalingFactor(float Value); // Offset: 0x1019ca784 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.SeekOnEvent
	// Flags: [Final|Native|Public]
	IntProperty SeekOnEvent(StrProperty in_EventName, IntProperty in_iPosition); // Offset: 0x1019ca69c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AkAudio.AkComponent.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	void PostTrigger(StrProperty Trigger); // Offset: 0x1019ca5b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkComponent.PostEventInRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PostEventInRange(struct UAkAudioEvent* AkEvent, float RangeSquare); // Offset: 0x1019ca500 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AkAudio.AkComponent.PostAssociatedAkEventInRange
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PostAssociatedAkEventInRange(); // Offset: 0x1019ca4ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkComponent.PostAssociatedAkEvent
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	IntProperty PostAssociatedAkEvent(); // Offset: 0x1019ca4b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.PostAkEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	IntProperty PostAkEventByName(StrProperty in_EventName); // Offset: 0x1019ca410 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AkAudio.AkComponent.PostAkEvent
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	IntProperty PostAkEvent(struct UAkAudioEvent* AkEvent, StrProperty in_EventName); // Offset: 0x1019ca32c // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function AkAudio.AkComponent.GetAttenuationRadius
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetAttenuationRadius(); // Offset: 0x1019ca2f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkComponent.GetAkGameObjectName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	void GetAkGameObjectName(StrProperty& Name); // Offset: 0x1019ca250 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AkAudio.AkGameplayStatics
// Size: 0x28 // Inherited bytes: 0x28
struct UAkGameplayStatics : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AkAudio.AkGameplayStatics.WakeupFromSuspend
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void WakeupFromSuspend(); // Offset: 0x1019ceaf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.UseReverbVolumes
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Offset: 0x1019cea3c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.UseEarlyReflections
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, StrProperty AuxBusName); // Offset: 0x1019ce73c // Return & Params: Num(10) Size(0x28)

	// Object Name: Function AkAudio.AkGameplayStatics.UnloadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void UnloadBankByName(StrProperty BankName); // Offset: 0x1019ce6ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.UnloadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void UnloadBank(struct UAkAudioBank* Bank, StrProperty BankName); // Offset: 0x1019ce5e0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkGameplayStatics.Suspend
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void Suspend(); // Offset: 0x1019ce5cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.StopProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopProfilerCapture(); // Offset: 0x1019ce5b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.StopPlayingID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopPlayingID(IntProperty PlayingID); // Offset: 0x1019ce544 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkGameplayStatics.StopOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopOutputCapture(); // Offset: 0x1019ce530 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Offset: 0x1019ce4bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AkAudio.AkGameplayStatics.StopAll
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopAll(); // Offset: 0x1019ce4a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.StopAkEventByID
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopAkEventByID(IntProperty ID); // Offset: 0x1019ce434 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkGameplayStatics.StopActor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StopActor(struct AActor* Actor); // Offset: 0x1019ce3c0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AkAudio.AkGameplayStatics.StartProfilerCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StartProfilerCapture(StrProperty Filename); // Offset: 0x1019ce330 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.StartOutputCapture
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StartOutputCapture(StrProperty Filename); // Offset: 0x1019ce2a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Offset: 0x1019ce22c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct UAkAuxBus* EarlyReflectionsBus, struct FVector Location, struct FRotator Orientation, bool AutoPost, StrProperty EventName, StrProperty EarlyReflectionsBusName, bool AutoDestroy); // Offset: 0x1019cdf84 // Return & Params: Num(10) Size(0x68)

	// Object Name: Function AkAudio.AkGameplayStatics.ShowAKComponentPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ShowAKComponentPosition(bool _IsShow); // Offset: 0x1019cdf08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkGameplayStatics.ShouldPostEvent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool ShouldPostEvent(struct UObject* WorldContext, struct FVector& VoicePosition); // Offset: 0x1019cde44 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetSwitchWithDummyActor(struct FName SwitchGroup, struct FName SwitchState); // Offset: 0x1019cdd98 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.SetSwitch
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetSwitch(struct FName SwitchGroup, struct FName SwitchState, struct AActor* Actor); // Offset: 0x1019cdcb0 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AkAudio.AkGameplayStatics.SetState
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty SetState(struct FName StateGroup, struct FName State); // Offset: 0x1019cdbfc // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AkAudio.AkGameplayStatics.SetRTPCValue
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetRTPCValue(struct FName RTPC, float Value, IntProperty InterpolationTimeMs, struct AActor* Actor); // Offset: 0x1019cdad4 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function AkAudio.AkGameplayStatics.SetRegionIpMute
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetRegionIpMute(bool bMuted); // Offset: 0x1019cda58 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkGameplayStatics.SetPanningRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetPanningRule(enum class PanningRule PanRule); // Offset: 0x1019cd9e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Offset: 0x1019cd934 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOcclusionScalingFactor(float ScalingFactor); // Offset: 0x1019cd8b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Offset: 0x1019cd808 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.SetMultiplePositions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetMultiplePositions(struct TArray<struct FTransform>& InTransforms, struct UAkComponent* AkComponent); // Offset: 0x1019cd724 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkGameplayStatics.SetBusConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetBusConfig(StrProperty BusName, enum class AkChannelConfiguration ChannelConfiguration); // Offset: 0x1019cd654 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function AkAudio.AkGameplayStatics.SeekOnEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty SeekOnEvent(struct UAkAudioEvent* in_pAkEvent, struct AActor* in_pActor, IntProperty in_iPosition, StrProperty EventName, bool in_bSeekToNearestMarker); // Offset: 0x1019cd45c // Return & Params: Num(6) Size(0x30)

	// Object Name: Function AkAudio.AkGameplayStatics.RefreshModDirectories
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RefreshModDirectories(); // Offset: 0x1019cd448 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.PostTrigger
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void PostTrigger(struct FName Trigger, struct AActor* Actor); // Offset: 0x1019cd39c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventWithVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty PostEventWithVolume(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, StrProperty EventName, float Volume); // Offset: 0x1019cd1ac // Return & Params: Num(6) Size(0x30)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventWithDummyActor
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty PostEventWithDummyActor(struct UAkAudioEvent* AkEvent, StrProperty EventName, struct UObject* WorldContextObject); // Offset: 0x1019cd048 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventInRange
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	struct UAkComponent* PostEventInRange(struct UAkAudioEvent* AkEvent, struct AActor* Actor, float RangeSquare); // Offset: 0x1019ccf58 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void PostEventByName(StrProperty EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Offset: 0x1019cce40 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventAttached
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, StrProperty EventName); // Offset: 0x1019ccc4c // Return & Params: Num(6) Size(0x34)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventAtLocationWithVolume
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	IntProperty PostEventAtLocationWithVolume(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, StrProperty EventName, struct UObject* WorldContextObject, float Volume); // Offset: 0x1019cca80 // Return & Params: Num(7) Size(0x40)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	void PostEventAtLocationByName(StrProperty EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Offset: 0x1019cc930 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEventAtLocation
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable]
	IntProperty PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, StrProperty EventName, struct UObject* WorldContextObject); // Offset: 0x1019cc7a4 // Return & Params: Num(6) Size(0x3c)

	// Object Name: Function AkAudio.AkGameplayStatics.PostEvent
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	IntProperty PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, StrProperty EventName); // Offset: 0x1019cc5f4 // Return & Params: Num(5) Size(0x2c)

	// Object Name: Function AkAudio.AkGameplayStatics.MuteListener
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MuteListener(struct APlayerController* Controller, IntProperty WindowID); // Offset: 0x1019cc544 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AkAudio.AkGameplayStatics.LoadInitBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void LoadInitBank(); // Offset: 0x1019cc530 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.LoadBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable]
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Offset: 0x1019cc444 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function AkAudio.AkGameplayStatics.LoadBankByName
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void LoadBankByName(StrProperty BankName); // Offset: 0x1019cc3b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.LoadBank
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void LoadBank(struct UAkAudioBank* Bank, StrProperty BankName); // Offset: 0x1019cc2e8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AkAudio.AkGameplayStatics.IsGame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsGame(struct UObject* WorldContextObject); // Offset: 0x1019cc26c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AkAudio.AkGameplayStatics.IsEditor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsEditor(); // Offset: 0x1019cc238 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AkGameplayStatics.GetSourcePlayPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetSourcePlayPosition(IntProperty AkEvent); // Offset: 0x1019cc1bc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetOcclusionScalingFactor(); // Offset: 0x1019cc198 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AkGameplayStatics.GetDefaultListenerLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetDefaultListenerLocation(struct UObject* WorldContextObject, struct FVector& OutLocation); // Offset: 0x1019cc0d4 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function AkAudio.AkGameplayStatics.GetAkComponent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Offset: 0x1019cbfa8 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function AkAudio.AkGameplayStatics.ClearBanks
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void ClearBanks(); // Offset: 0x1019cbf94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkGameplayStatics.AKSetRTPCValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AKSetRTPCValue(StrProperty RTPC, float Value, bool in_bBypassInternalValueInterpolation); // Offset: 0x1019cbe30 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// Flags: [Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable]
	void AddOutputCaptureMarker(StrProperty MarkerText); // Offset: 0x1019cbda0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AkGameplayStatics.AddModDirectory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddModDirectory(StrProperty Path); // Offset: 0x1019cbd10 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AkAudio.AkLateReverbComponent
// Size: 0x3e0 // Inherited bytes: 0x3a0
struct UAkLateReverbComponent : USceneComponent {
	// Fields
	char bEnable : 1; // Offset: 0x399 // Size: 0x01
	struct UAkAuxBus* AuxBus; // Offset: 0x3a0 // Size: 0x08
	StrProperty AuxBusName; // Offset: 0x3a8 // Size: 0x10
	float SendLevel; // Offset: 0x3b8 // Size: 0x04
	float FadeRate; // Offset: 0x3bc // Size: 0x04
	float Priority; // Offset: 0x3c0 // Size: 0x04
	char pad_0x3C4_1 : 7; // Offset: 0x3c4 // Size: 0x01
	char pad_0x3C5[0x1b]; // Offset: 0x3c5 // Size: 0x1b
};

// Object Name: Class AkAudio.AkReverbVolume
// Size: 0x518 // Inherited bytes: 0x4e0
struct AAkReverbVolume : AVolume {
	// Fields
	char bEnabled : 1; // Offset: 0x4e0 // Size: 0x01
	char pad_0x4E0_1 : 7; // Offset: 0x4e0 // Size: 0x01
	char pad_0x4E1[0x7]; // Offset: 0x4e1 // Size: 0x07
	struct UAkAuxBus* AuxBus; // Offset: 0x4e8 // Size: 0x08
	StrProperty AuxBusName; // Offset: 0x4f0 // Size: 0x10
	float SendLevel; // Offset: 0x500 // Size: 0x04
	float FadeRate; // Offset: 0x504 // Size: 0x04
	float Priority; // Offset: 0x508 // Size: 0x04
	char pad_0x50C[0x4]; // Offset: 0x50c // Size: 0x04
	struct UAkLateReverbComponent* LateReverbComponent; // Offset: 0x510 // Size: 0x08
};

// Object Name: Class AkAudio.AkRoomComponent
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UAkRoomComponent : USceneComponent {
	// Fields
	char bEnable : 1; // Offset: 0x399 // Size: 0x01
	char pad_0x3A0_1 : 7; // Offset: 0x3a0 // Size: 0x01
	char pad_0x3A1[0x7]; // Offset: 0x3a1 // Size: 0x07
	float Priority; // Offset: 0x3a8 // Size: 0x04
	char pad_0x3AC[0x14]; // Offset: 0x3ac // Size: 0x14

	// Functions

	// Object Name: Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveSpatialAudioRoom(); // Offset: 0x1019d36d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkRoomComponent.AddSpatialAudioRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddSpatialAudioRoom(); // Offset: 0x1019d36c4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AkSettings
// Size: 0xa0 // Inherited bytes: 0x28
struct UAkSettings : UObject {
	// Fields
	char MaxSimultaneousReverbVolumes; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct FFilePath WwiseProjectPath; // Offset: 0x30 // Size: 0x10
	struct FDirectoryPath WwiseWindowsInstallationPath; // Offset: 0x40 // Size: 0x10
	struct FFilePath WwiseMacInstallationPath; // Offset: 0x50 // Size: 0x10
	bool SuppressWwiseProjectPathWarnings; // Offset: 0x60 // Size: 0x01
	bool UseAlternateObstructionOcclusionFeature; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x3e]; // Offset: 0x62 // Size: 0x3e
};

// Object Name: Class AkAudio.AkSpatialAudioVolume
// Size: 0x4f8 // Inherited bytes: 0x4e0
struct AAkSpatialAudioVolume : AVolume {
	// Fields
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // Offset: 0x4e0 // Size: 0x08
	struct UAkLateReverbComponent* LateReverb; // Offset: 0x4e8 // Size: 0x08
	struct UAkRoomComponent* Room; // Offset: 0x4f0 // Size: 0x08
};

// Object Name: Class AkAudio.AkSpotReflector
// Size: 0x4e0 // Inherited bytes: 0x4b0
struct AAkSpotReflector : AActor {
	// Fields
	struct UAkAuxBus* AuxBus; // Offset: 0x4b0 // Size: 0x08
	StrProperty AuxBusName; // Offset: 0x4b8 // Size: 0x10
	struct UAkAcousticTexture* AcousticTexture; // Offset: 0x4c8 // Size: 0x08
	float DistanceScalingFactor; // Offset: 0x4d0 // Size: 0x04
	float Level; // Offset: 0x4d4 // Size: 0x04
	char pad_0x4D8[0x8]; // Offset: 0x4d8 // Size: 0x08
};

// Object Name: Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	// Fields
	char bEnableSurfaceReflectors : 1; // Offset: 0x399 // Size: 0x01
	struct TArray<struct FAkPoly> AcousticPolys; // Offset: 0x3a0 // Size: 0x10
	char pad_0x3B0_1 : 7; // Offset: 0x3b0 // Size: 0x01
	char pad_0x3B1[0xf]; // Offset: 0x3b1 // Size: 0x0f

	// Functions

	// Object Name: Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateSurfaceReflectorSet(); // Offset: 0x1019d3cb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SendSurfaceReflectorSet(); // Offset: 0x1019d3ca0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveSurfaceReflectorSet(); // Offset: 0x1019d3c8c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AkAudio.AudioOfflineDataRecorder
// Size: 0x1410 // Inherited bytes: 0x3a0
struct UAudioOfflineDataRecorder : USceneComponent {
	// Fields
	StrProperty BankName; // Offset: 0x3a0 // Size: 0x10
	StrProperty EventName; // Offset: 0x3b0 // Size: 0x10
	enum class EFrequencyRange RangeType; // Offset: 0x3c0 // Size: 0x01
	char pad_0x3C1[0x3]; // Offset: 0x3c1 // Size: 0x03
	IntProperty BinNumber; // Offset: 0x3c4 // Size: 0x04
	struct TArray<float> BeatTimeArray; // Offset: 0x3c8 // Size: 0x10
	struct TArray<struct FAudioOfflineVisualBeatData> Result; // Offset: 0x3d8 // Size: 0x10
	char pad_0x3E8[0x1028]; // Offset: 0x3e8 // Size: 0x1028
};

// Object Name: Class AkAudio.AudioOfflineVisual
// Size: 0x48 // Inherited bytes: 0x28
struct UAudioOfflineVisual : UObject {
	// Fields
	struct TArray<struct FAudioOfflineVisualBeatData> OfflineData; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10

	// Functions

	// Object Name: Function AkAudio.AudioOfflineVisual.StartBeatOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartBeatOffset(float Offset); // Offset: 0x1019d446c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AudioOfflineVisual.StartBeat
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartBeat(); // Offset: 0x1019d4458 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AudioOfflineVisual.ResetBeatTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetBeatTime(); // Offset: 0x1019d4444 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AudioOfflineVisual.InitWithBeatTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitWithBeatTime(struct TArray<float> Datas); // Offset: 0x1019d4360 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AudioOfflineVisual.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Init(struct TArray<struct FAudioOfflineVisualBeatData> Datas); // Offset: 0x1019d427c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData& Result); // Offset: 0x1019d4184 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function AkAudio.AudioOfflineVisual.GetCurrentBeat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetCurrentBeat(struct FAudioOfflineVisualBeatData& Result); // Offset: 0x1019d40c8 // Return & Params: Num(2) Size(0x19)
};

// Object Name: Class AkAudio.AudioVisual
// Size: 0x1028 // Inherited bytes: 0x28
struct UAudioVisual : UObject {
	// Fields
	char pad_0x28[0x1000]; // Offset: 0x28 // Size: 0x1000

	// Functions

	// Object Name: Function AkAudio.AudioVisual.TryInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool TryInit(); // Offset: 0x1019d4de8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AudioVisual.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(); // Offset: 0x1019d4dd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AkAudio.AudioVisual.IsInited
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInited(); // Offset: 0x1019d4da0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AkAudio.AudioVisual.GetRMS
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetRMS(); // Offset: 0x1019d4d6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AudioVisual.GetInstantEnergy
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetInstantEnergy(); // Offset: 0x1019d4d38 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AkAudio.AudioVisual.GetFrequencyVol
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetFrequencyVol(enum class EFrequencyRange freqRange); // Offset: 0x1019d4cac // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AkAudio.AudioVisual.GetFrequencyDataWithBin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetFrequencyDataWithBin(struct TArray<float>& pFreqData, enum class EFrequencyRange freqRange, IntProperty nBin, bool bAbsolute); // Offset: 0x1019d4b2c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function AkAudio.AudioVisual.GetFrequencyData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetFrequencyData(struct TArray<float>& pFreqData, enum class EFrequencyRange freqRange); // Offset: 0x1019d4a30 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AkAudio.AudioVisual.GetAudioSamplesWithBin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetAudioSamplesWithBin(struct TArray<float>& pAudioData, IntProperty nBin, bool bAbsolute); // Offset: 0x1019d48f0 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function AkAudio.AudioVisual.GetAudioSamples
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty GetAudioSamples(struct TArray<float>& pAudioData); // Offset: 0x1019d4838 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class AkAudio.AudioVisualBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAudioVisualBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAudioVisual* GetAudioVisual(struct UObject* Outer); // Offset: 0x1019d5288 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAudioOfflineVisual* GetAudioOfflineVisual(struct UObject* Outer); // Offset: 0x1019d520c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 // Inherited bytes: 0x90
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	// Fields
	struct TArray<struct FAkAudioEventTrackKey> Events; // Offset: 0x90 // Size: 0x10
	char bContinueEventOnMatineeEnd : 1; // Offset: 0xa0 // Size: 0x01
	char pad_0xA0_1 : 7; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
};

// Object Name: Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 // Inherited bytes: 0x90
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	// Fields
	StrProperty Param; // Offset: 0x90 // Size: 0x10
	char bPlayOnReverse : 1; // Offset: 0xa0 // Size: 0x01
	char bContinueRTPCOnMatineeEnd : 1; // Offset: 0xa0 // Size: 0x01
	char pad_0xA0_2 : 6; // Offset: 0xa0 // Size: 0x01
	char pad_0xA1[0x7]; // Offset: 0xa1 // Size: 0x07
};

// Object Name: Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 // Inherited bytes: 0x28
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	// Fields
	float LastUpdatePosition; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 // Inherited bytes: 0x28
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	// Fields
	float LastUpdatePosition; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0xd0 // Inherited bytes: 0xb0
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	// Fields
	struct UAkAudioEvent* Event; // Offset: 0xb0 // Size: 0x08
	bool StopAtSectionEnd; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x7]; // Offset: 0xb9 // Size: 0x07
	StrProperty EventName; // Offset: 0xc0 // Size: 0x10
};

// Object Name: Class AkAudio.MovieSceneAkTrack
// Size: 0x70 // Inherited bytes: 0x58
struct UMovieSceneAkTrack : UMovieSceneTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> Sections; // Offset: 0x58 // Size: 0x10
	char bIsAMasterTrack : 1; // Offset: 0x68 // Size: 0x01
	char pad_0x68_1 : 7; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 // Inherited bytes: 0x70
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Object Name: Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x138 // Inherited bytes: 0xb0
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	StrProperty Name; // Offset: 0xb8 // Size: 0x10
	struct FRichCurve FloatCurve; // Offset: 0xc8 // Size: 0x70
};

// Object Name: Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 // Inherited bytes: 0x70
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

