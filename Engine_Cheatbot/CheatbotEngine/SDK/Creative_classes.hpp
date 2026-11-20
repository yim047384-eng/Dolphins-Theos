#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Creative.CameraDeviceSpringArmComponent
// Size: 0xe90 // Inherited bytes: 0xe70
struct UCameraDeviceSpringArmComponent : UCustomSpringArmComponent {
	// Fields
	bool bCameraDeviceMode; // Offset: 0xe68 // Size: 0x01
	struct TWeakObjectPtr<struct AActor> TargetPawn; // Offset: 0xe6c // Size: 0x08
	char pad_0xE79[0x7]; // Offset: 0xe79 // Size: 0x07
	float DebugAngle; // Offset: 0xe80 // Size: 0x04
	char pad_0xE84[0xc]; // Offset: 0xe84 // Size: 0x0c
};

// Object Name: Class Creative.CreateBackpackRepActor
// Size: 0x4f8 // Inherited bytes: 0x4e8
struct ACreateBackpackRepActor : ABackpackRepActor {
	// Fields
	IntProperty CustomItemDataInitFlag; // Offset: 0x4e8 // Size: 0x04
	IntProperty CustomItemIDMin; // Offset: 0x4ec // Size: 0x04
	IntProperty CustomItemIDMax; // Offset: 0x4f0 // Size: 0x04
	bool NeedUpdateCustomItemList; // Offset: 0x4f4 // Size: 0x01
	char pad_0x4F5[0x3]; // Offset: 0x4f5 // Size: 0x03

	// Functions

	// Object Name: Function Creative.CreateBackpackRepActor.InitCustomItemDataInfo
	// Flags: [Final|Native|Public]
	void InitCustomItemDataInfo(); // Offset: 0x101e30318 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreateBackpackRepActor.CustomItemDataInitComplete
	// Flags: [Final|Native|Public]
	void CustomItemDataInitComplete(); // Offset: 0x101e30304 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeAbilitySystemComponent
// Size: 0x1370 // Inherited bytes: 0x1218
struct UCreativeAbilitySystemComponent : USAbilitySystemComponent {
	// Fields
	struct ASTExtraPlayerController* PlayerController; // Offset: 0x1218 // Size: 0x08
	struct ASTExtraPlayerCharacter* PlayerCharacter; // Offset: 0x1220 // Size: 0x08
	char pad_0x1228[0x8]; // Offset: 0x1228 // Size: 0x08
	struct FTransform GhostBuildingTransform; // Offset: 0x1230 // Size: 0x30
	struct TArray<struct AActor*> GetLocationActorsToIgnore; // Offset: 0x1260 // Size: 0x10
	float LandOnOffsetZ; // Offset: 0x1270 // Size: 0x04
	float LandHitPointZ; // Offset: 0x1274 // Size: 0x04
	float LandHitDeltaZ; // Offset: 0x1278 // Size: 0x04
	float WaterHeight; // Offset: 0x127c // Size: 0x04
	bool bForceLandOnGround; // Offset: 0x1280 // Size: 0x01
	char pad_0x1281[0x3]; // Offset: 0x1281 // Size: 0x03
	IntProperty LandGroundType; // Offset: 0x1284 // Size: 0x04
	bool bUseLandOnOffsetZ; // Offset: 0x1288 // Size: 0x01
	bool bSnapTransValid; // Offset: 0x1289 // Size: 0x01
	bool bSnapGridEnable; // Offset: 0x128a // Size: 0x01
	char pad_0x128B[0x5]; // Offset: 0x128b // Size: 0x05
	struct AActor* SnapGrid; // Offset: 0x1290 // Size: 0x08
	bool bIgnoreLandOn; // Offset: 0x1298 // Size: 0x01
	bool bIgnoreWaterHeightCheck; // Offset: 0x1299 // Size: 0x01
	bool bIgnoreCameraRotate; // Offset: 0x129a // Size: 0x01
	char pad_0x129B[0x1]; // Offset: 0x129b // Size: 0x01
	struct FRotator ModifiedRotation; // Offset: 0x129c // Size: 0x0c
	struct FVector ModifiedScale; // Offset: 0x12a8 // Size: 0x0c
	struct FRotator RelativeRotation; // Offset: 0x12b4 // Size: 0x0c
	struct FVector RelativeLocation; // Offset: 0x12c0 // Size: 0x0c
	struct FVector RelativeScale; // Offset: 0x12cc // Size: 0x0c
	char pad_0x12D8[0x8]; // Offset: 0x12d8 // Size: 0x08
	struct FTransform SnapBaseTransform; // Offset: 0x12e0 // Size: 0x30
	struct FVector DeviceLocationOffset; // Offset: 0x1310 // Size: 0x0c
	struct FVector InstanceBoxCenter; // Offset: 0x131c // Size: 0x0c
	struct FVector InstanceBoxExtent; // Offset: 0x1328 // Size: 0x0c
	bool bSpecificPlaceStartEnd; // Offset: 0x1334 // Size: 0x01
	char pad_0x1335[0x3]; // Offset: 0x1335 // Size: 0x03
	struct FVector PlaceRayStart; // Offset: 0x1338 // Size: 0x0c
	struct FVector PlaceRayEnd; // Offset: 0x1344 // Size: 0x0c
	bool bNeedGetBuildDistance; // Offset: 0x1350 // Size: 0x01
	bool bOpenLandPosCheckDebug; // Offset: 0x1351 // Size: 0x01
	char pad_0x1352[0x2]; // Offset: 0x1352 // Size: 0x02
	struct FVector OverridePos; // Offset: 0x1354 // Size: 0x0c
	struct FRotator OverrideRot; // Offset: 0x1360 // Size: 0x0c
	bool bOverrideBuild; // Offset: 0x136c // Size: 0x01
	char pad_0x136D[0x3]; // Offset: 0x136d // Size: 0x03

	// Functions

	// Object Name: Function Creative.CreativeAbilitySystemComponent.UpdateGridGhostBuildingLocation
	// Flags: [Final|Native|Private]
	void UpdateGridGhostBuildingLocation(float X, float Y, float Z); // Offset: 0x101e30aec // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
	// Flags: [Final|Native|Private]
	void UpdateGhostBuildingTransform(); // Offset: 0x101e30ad8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void SetSnapTargetTransform(struct FTransform& SnapTargetTransform); // Offset: 0x101e30a34 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.SetOverrideBuild
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void SetOverrideBuild(struct FVector& Position, struct FRotator& Rotation); // Offset: 0x101e3095c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
	// Flags: [Event|Public|BlueprintEvent]
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
	// Flags: [Event|Public|BlueprintEvent]
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
	// Flags: [Event|Public|BlueprintEvent]
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.LuaGhostBuildingInstaUpdate
	// Flags: [Event|Public|BlueprintEvent]
	void LuaGhostBuildingInstaUpdate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ
	// Flags: [Event|Public|BlueprintEvent]
	float GetSnappedLocAxisZ(float Loc, float Base); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
	// Flags: [Event|Public|BlueprintEvent]
	float GetSnappedLocAxis(float Value, IntProperty AxisType); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
	// Flags: [Event|Public|BlueprintEvent]
	IntProperty GetSetupBuildingID(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetPlayerController
	// Flags: [Final|Native|Public]
	struct ASTExtraPlayerController* GetPlayerController(); // Offset: 0x101e30928 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetLuaSnapTargetTransform
	// Flags: [Event|Public|BlueprintEvent]
	bool GetLuaSnapTargetTransform(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetLuaInstanceBoundingBox
	// Flags: [Event|Public|BlueprintEvent]
	float GetLuaInstanceBoundingBox(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
	// Flags: [Final|Native|Public|HasDefaults]
	struct FTransform GetGhostBuildingTransform(); // Offset: 0x101e308e0 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetBuildingInstanceID(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
	// Flags: [Event|Public|BlueprintEvent]
	float GetBuildDistance(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeAbilitySystemComponent.ClearOverrideBuild
	// Flags: [Final|Native|Private]
	void ClearOverrideBuild(); // Offset: 0x101e308cc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeActorDataManager
// Size: 0x2b0 // Inherited bytes: 0x168
struct UCreativeActorDataManager : USTExtraManagerBase {
	// Fields
	char pad_0x168[0x4]; // Offset: 0x168 // Size: 0x04
	IntProperty SingleSerializeNum; // Offset: 0x16c // Size: 0x04
	struct FCreativeActorNodeContainer ActorDataContainer; // Offset: 0x170 // Size: 0xc8
	char pad_0x238[0x64]; // Offset: 0x238 // Size: 0x64
	float DataNodePullInterval; // Offset: 0x29c // Size: 0x04
	IntProperty SinglePullDataNodeNum; // Offset: 0x2a0 // Size: 0x04
	IntProperty TotalPullDataNodeNum; // Offset: 0x2a4 // Size: 0x04
	float DataNodePullTimeroutInterval; // Offset: 0x2a8 // Size: 0x04
	char pad_0x2AC[0x4]; // Offset: 0x2ac // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeActorDataManager.SetActorDataNodes
	// Flags: [Final|Native|Public]
	void SetActorDataNodes(struct TArray<struct FCreativeActorDataNode> ActorDataNodes); // Offset: 0x101e31e9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeActorDataManager.RemoveActorData
	// Flags: [Final|Native|Public]
	void RemoveActorData(uint32_t ID, char Type); // Offset: 0x101e31de4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.CreativeActorDataManager.ReceiveOnPostSetLuaEventBridgeInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostSetLuaEventBridgeInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeActorDataManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeActorDataManager.OnPostSetLuaEventBridgeInstance
	// Flags: [Final|Native|Public]
	void OnPostSetLuaEventBridgeInstance(); // Offset: 0x101e31dd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeActorDataManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e31d54 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeActorDataManager.GetActorDataNodes
	// Flags: [Final|Native|Public]
	struct TArray<struct FCreativeActorDataNode> GetActorDataNodes(struct TArray<uint32_t> DataHashKeys); // Offset: 0x101e31c3c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeActorDataManager.GetActorDataContent
	// Flags: [Final|Native|Public|HasOutParms]
	bool GetActorDataContent(uint32_t ID, char Type, struct TArray<char>& OutContent); // Offset: 0x101e31b0c // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Creative.CreativeActorDataManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeActorDataManager* Get(struct UObject* WorldContext); // Offset: 0x101e31a90 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeActorDataManager.ChangeActorData
	// Flags: [Final|Native|Public|HasOutParms]
	void ChangeActorData(uint32_t ID, char Type, struct TArray<char>& Content); // Offset: 0x101e31970 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeActorDataManager.CallOnReceivePreActorDataRemove
	// Flags: [Final|Native|Public]
	void CallOnReceivePreActorDataRemove(uint32_t ID, char Type); // Offset: 0x101e318b8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.CreativeActorDataManager.CallOnReceivePostActorDataChange
	// Flags: [Final|Native|Public|HasOutParms]
	void CallOnReceivePostActorDataChange(uint32_t ID, char Type, struct TArray<char>& Content); // Offset: 0x101e31798 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeActorDataManager.CallOnReceivePostActorDataAdd
	// Flags: [Final|Native|Public|HasOutParms]
	void CallOnReceivePostActorDataAdd(uint32_t ID, char Type, struct TArray<char>& Content); // Offset: 0x101e31678 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeActorDataManager.AddActorData
	// Flags: [Final|Native|Public|HasOutParms]
	void AddActorData(uint32_t ID, char Type, struct TArray<char>& Content); // Offset: 0x101e31558 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Creative.CreativeModeActorInteractionComponent
// Size: 0x2c0 // Inherited bytes: 0x238
struct UCreativeModeActorInteractionComponent : ULuaActorComponent {
	// Fields
	bool bCrossHairCheckEnabled; // Offset: 0x231 // Size: 0x01
	float CrossHairCheckCD; // Offset: 0x234 // Size: 0x04
	StrProperty HitComponentName; // Offset: 0x238 // Size: 0x10
	bool bSectorCheckEnabled; // Offset: 0x248 // Size: 0x01
	float SectorCheckCD; // Offset: 0x24c // Size: 0x04
	bool bTransformCrossHairCheckEnabled; // Offset: 0x250 // Size: 0x01
	char pad_0x253[0x1]; // Offset: 0x253 // Size: 0x01
	float TransformCrossHairCheckCD; // Offset: 0x254 // Size: 0x04
	bool bPickCrossHairCheckEnabled; // Offset: 0x258 // Size: 0x01
	char pad_0x259[0x3]; // Offset: 0x259 // Size: 0x03
	float PickCrossHairCheckCD; // Offset: 0x25c // Size: 0x04
	char pad_0x260[0x10]; // Offset: 0x260 // Size: 0x10
	struct APawn* PlayerCharacter; // Offset: 0x270 // Size: 0x08
	struct ASTExtraPlayerController* PlayerController; // Offset: 0x278 // Size: 0x08
	struct TArray<struct AActor*> CrossHairCheckIgnoreActorArray; // Offset: 0x280 // Size: 0x10
	struct TArray<struct AActor*> uTransformCrossHairCheckIgnoreActorArray; // Offset: 0x290 // Size: 0x10
	struct TArray<struct AActor*> PickCrossHairCheckIgnoreActorArray; // Offset: 0x2a0 // Size: 0x10
	struct TArray<struct UObject*> PickActorClassArray; // Offset: 0x2b0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
	// Flags: [Event|Protected|BlueprintEvent]
	void SortCanEditParamsObjs(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
	// Flags: [Event|Protected|BlueprintEvent]
	void SetCrossHairTransformObjInstanceID(StrProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
	// Flags: [Event|Protected|BlueprintEvent]
	void SetCrossHairSelectedObjInstanceID(StrProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.SetCrossHairPickActor
	// Flags: [Event|Protected|BlueprintEvent]
	void SetCrossHairPickActor(struct AActor* PickActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.SectorCheckImplement
	// Flags: [Final|Native|Protected]
	void SectorCheckImplement(float CheckDistance, float CheckAngle); // Offset: 0x101e32994 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
	// Flags: [Event|Protected|BlueprintEvent]
	float GetSectorCheckIntervalCfg(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
	// Flags: [Event|Protected|BlueprintEvent]
	float GetSectorCheckDistance(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
	// Flags: [Event|Protected|BlueprintEvent]
	float GetSectorCheckAngle(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
	// Flags: [Event|Protected|BlueprintEvent]
	float GetPlayerHalfHeight(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetPlayerController
	// Flags: [Final|Native|Protected]
	struct ASTExtraPlayerController* GetPlayerController(); // Offset: 0x101e32960 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetCrossHairTransformDistanceCfg
	// Flags: [Event|Protected|BlueprintEvent]
	float GetCrossHairTransformDistanceCfg(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetCrossHairPickDistanceCfg
	// Flags: [Event|Protected|BlueprintEvent]
	float GetCrossHairPickDistanceCfg(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
	// Flags: [Event|Protected|BlueprintEvent]
	float GetCrossHairCheckIntervalCfg(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
	// Flags: [Event|Protected|BlueprintEvent]
	float GetCrossHairCheckDistanceCfg(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.CrossHairCheckImplement
	// Flags: [Final|Native|Protected]
	void CrossHairCheckImplement(float Distance); // Offset: 0x101e328e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
	// Flags: [Event|Protected|BlueprintEvent]
	void ClearCanEditParamsObjs(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
	// Flags: [Event|Protected|BlueprintEvent]
	void AddCanEditObject(struct UObject* uCanEditObject, float Angle, float Distance); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)
};

// Object Name: Class Creative.CreativeModeManagerBase
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeModeManagerBase : USTExtraManagerBase {
};

// Object Name: Class Creative.CreativeAdaptiveSchedulManager
// Size: 0x270 // Inherited bytes: 0x168
struct UCreativeAdaptiveSchedulManager : UCreativeModeManagerBase {
	// Fields
	bool bOpenLuaProfile; // Offset: 0x168 // Size: 0x01
	bool bOpenProfile; // Offset: 0x169 // Size: 0x01
	bool bOpenFuncCPUProfile; // Offset: 0x16a // Size: 0x01
	char pad_0x16B[0x5d]; // Offset: 0x16b // Size: 0x5d
	MapProperty ProjectTagMap; // Offset: 0x1c8 // Size: 0x50
	MapProperty LuaPathTagMap; // Offset: 0x218 // Size: 0x50
	char pad_0x268[0x8]; // Offset: 0x268 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.SetObjectProfile
	// Flags: [Final|Native|Public]
	void SetObjectProfile(bool bOpen); // Offset: 0x101e33890 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.SetLuaProfile
	// Flags: [Final|Native|Public]
	void SetLuaProfile(bool bOpen); // Offset: 0x101e3380c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty RecordFunctionStart(StrProperty ClassName, StrProperty FunctionName); // Offset: 0x101e33710 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RecordFunctionEnd(StrProperty ClassName, StrProperty FunctionName, IntProperty Cycles); // Offset: 0x101e335e4 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.LuaPath2Tag
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty LuaPath2Tag(StrProperty luaPath, StrProperty FunctionName); // Offset: 0x101e334e8 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.LogOutputObjectMemoryInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LogOutputObjectMemoryInfo(bool bClear); // Offset: 0x101e33464 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.LogOutputLuaFunctionCallInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LogOutputLuaFunctionCallInfo(bool bClear); // Offset: 0x101e333e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.LogoutLuaRecord
	// Flags: [Final|Native|Public]
	MapProperty LogoutLuaRecord(); // Offset: 0x101e3337c // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.LLMEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool LLMEnabled(); // Offset: 0x101e33348 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.InitTagIfNotExist
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty InitTagIfNotExist(StrProperty TagName); // Offset: 0x101e332a0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.InitNewLuaPath2Tag
	// Flags: [Native|Event|Public|BlueprintEvent]
	IntProperty InitNewLuaPath2Tag(StrProperty luaPath, StrProperty FunctionName); // Offset: 0x101e3319c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.GetPureLuaUsedBytes
	// Flags: [Final|Native|Static|Public]
	uint64 GetPureLuaUsedBytes(); // Offset: 0x101e33168 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.GetLuaUsedBytes
	// Flags: [Final|Native|Static|Public]
	uint64 GetLuaUsedBytes(); // Offset: 0x101e33134 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeAdaptiveSchedulManager* Get(struct UObject* WorldContext); // Offset: 0x101e330b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeAdaptiveSchedulManager.AfterDead
	// Flags: [Event|Public|BlueprintEvent]
	void AfterDead(IntProperty SpecType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Creative.CreativeAnimInstance
// Size: 0xcb0 // Inherited bytes: 0xc80
struct UCreativeAnimInstance : USTExtraAnimInstanceBase {
	// Fields
	bool bIsBuilding; // Offset: 0xc7c // Size: 0x01
	float MoveVelocityInterpSpeed; // Offset: 0xc80 // Size: 0x04
	bool bFlyBuilding; // Offset: 0xc84 // Size: 0x01
	char pad_0xC86[0x2]; // Offset: 0xc86 // Size: 0x02
	struct FVector C_ActualMoveVelocity; // Offset: 0xc88 // Size: 0x0c
	float C_FlyMaxSpeed; // Offset: 0xc94 // Size: 0x04
	bool C_SkillFlying; // Offset: 0xc98 // Size: 0x01
	char pad_0xC99[0x3]; // Offset: 0xc99 // Size: 0x03
	float RootAimYaw; // Offset: 0xc9c // Size: 0x04
	float C_AimOffsetAdditiveAlpha; // Offset: 0xca0 // Size: 0x04
	bool bIsProne; // Offset: 0xca4 // Size: 0x01
	char pad_0xCA5[0xb]; // Offset: 0xca5 // Size: 0x0b
};

// Object Name: Class Creative.CreativeLuaSignalObjectBase
// Size: 0xf0 // Inherited bytes: 0x28
struct UCreativeLuaSignalObjectBase : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
	char pad_0x90[0x8]; // Offset: 0x90 // Size: 0x08
	struct UGameLuaAPI* GameLuaAPI; // Offset: 0x98 // Size: 0x08
	MapProperty SignalEventInfoMap; // Offset: 0xa0 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.TryBeginPlay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TryBeginPlay(); // Offset: 0x101e7dd18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.SetLuaFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLuaFilePath(StrProperty FilePath); // Offset: 0x101e7dc34 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.RemoveCommonEvent
	// Flags: [Final|Native|Protected]
	void RemoveCommonEvent(IntProperty EventHandle); // Offset: 0x101e7dbb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.ReceivePostBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceivePostBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.HookObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HookObject(); // Offset: 0x101e7dba4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.ClearAllCommonEvent
	// Flags: [Final|Native|Protected]
	void ClearAllCommonEvent(); // Offset: 0x101e7db90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalObjectBase.AddCommonEvent
	// Flags: [Final|Native|Protected]
	void AddCommonEvent(StrProperty EventType, StrProperty EventID, StrProperty FunctionName); // Offset: 0x101e7da50 // Return & Params: Num(3) Size(0x30)
};

// Object Name: Class Creative.CreativeApiObject
// Size: 0x188 // Inherited bytes: 0xf0
struct UCreativeApiObject : UCreativeLuaSignalObjectBase {
	// Fields
	char pad_0xF0[0x50]; // Offset: 0xf0 // Size: 0x50
	StrProperty ModuleName; // Offset: 0x140 // Size: 0x10
	struct TArray<StrProperty> CrossVMAPIs; // Offset: 0x150 // Size: 0x10
	struct TArray<StrProperty> UGCVMAPIs; // Offset: 0x160 // Size: 0x10
	StrProperty UGCVMAPILuaFilePath; // Offset: 0x170 // Size: 0x10
	bool bEnableRegisterCClosureApi; // Offset: 0x180 // Size: 0x01
	char pad_0x181[0x7]; // Offset: 0x181 // Size: 0x07

	// Functions

	// Object Name: Function Creative.CreativeApiObject.SetModuleName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetModuleName(StrProperty NewName); // Offset: 0x101e33fec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeApiObject.GetModuleName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetModuleName(); // Offset: 0x101e33fd0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeAssetManager
// Size: 0x280 // Inherited bytes: 0x168
struct UCreativeAssetManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x1]; // Offset: 0x168 // Size: 0x01
	bool bColorISMEnable; // Offset: 0x169 // Size: 0x01
	char pad_0x16A[0x2]; // Offset: 0x16a // Size: 0x02
	IntProperty CustomEditMaterialId; // Offset: 0x16c // Size: 0x04
	char pad_0x170[0x110]; // Offset: 0x170 // Size: 0x110

	// Functions

	// Object Name: Function Creative.CreativeAssetManager.RemoveAssetInfo
	// Flags: [Final|Native|Public]
	bool RemoveAssetInfo(IntProperty AssetId); // Offset: 0x101e34d58 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeAssetManager.ReceiveInitAssetInfo
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveInitAssetInfo(IntProperty AssetId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeAssetManager.ReceiveGetCustomAssetAsyncWithStringForManage
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveGetCustomAssetAsyncWithStringForManage(StrProperty CustomAssetKey); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeAssetManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e34cdc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeAssetManager.OnCustomAssetLoadComplete
	// Flags: [Final|Native|Public]
	void OnCustomAssetLoadComplete(StrProperty CustomAssetKey, struct UObject* LoadObject); // Offset: 0x101e34bb8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeAssetManager.GetObbyMeshPath
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	StrProperty GetObbyMeshPath(IntProperty AssetId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeAssetManager.GetMaterialPath
	// Flags: [Event|Public|BlueprintEvent|Const]
	StrProperty GetMaterialPath(IntProperty MaterialID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeAssetManager.GetCustomAssetAsyncWithStringForManage
	// Flags: [Final|Native|Public]
	void GetCustomAssetAsyncWithStringForManage(StrProperty CustomAssetKey, StrProperty InputString, DelegateProperty AssetLoadSuccessDelegate); // Offset: 0x101e349e8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeAssetManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeAssetManager* Get(struct UObject* WorldContext); // Offset: 0x101e3496c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeAssetManager.AddAssetInfo
	// Flags: [Final|Native|Public|HasOutParms]
	void AddAssetInfo(IntProperty AssetId, struct FCreativeAssetInfo& AssetInfo); // Offset: 0x101e34860 // Return & Params: Num(2) Size(0x78)
};

// Object Name: Class Creative.CreativeAudioApiObject
// Size: 0x188 // Inherited bytes: 0x188
struct UCreativeAudioApiObject : UCreativeApiObject {
};

// Object Name: Class Creative.CreativeAudioBlueprintFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeAudioBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeAudioBlueprintFunctionLibrary.SaveWemToConvert
	// Flags: [Final|Native|Static|Public]
	bool SaveWemToConvert(struct TArray<char> WemData, StrProperty SavePath); // Offset: 0x101e355f8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeAudioBlueprintFunctionLibrary.RegisterWwiseBaseDir
	// Flags: [Final|Native|Static|Public]
	void RegisterWwiseBaseDir(StrProperty BaseDir); // Offset: 0x101e35568 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeAudioBlueprintFunctionLibrary.GetWavLength
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	float GetWavLength(struct TArray<char>& WavData); // Offset: 0x101e354c0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeAudioBlueprintFunctionLibrary.GetMp3Length
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	float GetMp3Length(struct TArray<char>& Mp3Data); // Offset: 0x101e35418 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeAudioBlueprintFunctionLibrary.GetAudioWaveform
	// Flags: [Final|Native|Static|Public]
	void GetAudioWaveform(uint32_t WemMediaID, float SampleInterval, DelegateProperty Callback); // Offset: 0x101e35318 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Creative.CreativeAutoGenComponent
// Size: 0x238 // Inherited bytes: 0x238
struct UCreativeAutoGenComponent : ULuaActorComponent {
	// Functions

	// Object Name: Function Creative.CreativeAutoGenComponent.GetNodeSegmentContent
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	struct TArray<char> GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment& Segment); // Offset: 0x101e35c5c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeAutoGenComponent.AddInstanceDataContent
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	bool AddInstanceDataContent(struct FCreativeAutoGenDataSegment& Segment, struct TArray<char>& Content); // Offset: 0x101e35b34 // Return & Params: Num(3) Size(0x29)
};

// Object Name: Class Creative.CreativeModeBackpackUtils
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeModeBackpackUtils : UBackpackUtilsClassical {
	// Functions

	// Object Name: Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty ResCanAddToBackpackNum(struct UBackpackComponent* BackpackComponent, IntProperty resID, IntProperty AddNum); // Offset: 0x101e360e0 // Return & Params: Num(4) Size(0x14)

	// Object Name: Function Creative.CreativeModeBackpackUtils.GetItemMaxCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetItemMaxCount(struct UBackpackComponent* BackpackComponent, IntProperty resID); // Offset: 0x101e36028 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddAIAvatarItem(struct UBackpackComponent* BackpackComponent, IntProperty ID, IntProperty Color, IntProperty Pattern, IntProperty Num); // Offset: 0x101e35ecc // Return & Params: Num(5) Size(0x18)
};

// Object Name: Class Creative.CreativeBaseWidget
// Size: 0x3c0 // Inherited bytes: 0x2c8
struct UCreativeBaseWidget : ULuaUserWidget {
	// Fields
	char pad_0x2C8[0x8]; // Offset: 0x2c8 // Size: 0x08
	bool bOpenZOrderBatch; // Offset: 0x2d0 // Size: 0x01
	char pad_0x2D1[0x7]; // Offset: 0x2d1 // Size: 0x07
	StrProperty ZOrderInstanceID; // Offset: 0x2d8 // Size: 0x10
	IntProperty ZOrderOriginalLayer; // Offset: 0x2e8 // Size: 0x04
	bool bAnimationIsPlaying; // Offset: 0x2ec // Size: 0x01
	char pad_0x2ED[0xab]; // Offset: 0x2ed // Size: 0xab
	struct TArray<struct UCreativeBaseWidget*> FollowerWidgets; // Offset: 0x398 // Size: 0x10
	float TickLimit; // Offset: 0x3a8 // Size: 0x04
	char pad_0x3AC[0x4]; // Offset: 0x3ac // Size: 0x04
	bool bAnimationForceVolatileEnable; // Offset: 0x3b0 // Size: 0x01
	char pad_0x3B1[0x3]; // Offset: 0x3b1 // Size: 0x03
	float EndForceVolatileDelayTime; // Offset: 0x3b4 // Size: 0x04
	char pad_0x3B8[0x8]; // Offset: 0x3b8 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeBaseWidget.StopCustomAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopCustomAnimation(bool bReset); // Offset: 0x101e3b0dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBaseWidget.SetZOrderBatchData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetZOrderBatchData(StrProperty InInstanceID, IntProperty InOriginalLayer); // Offset: 0x101e3b004 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeBaseWidget.SetEndForceVolatileDelayTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEndForceVolatileDelayTime(float InDelayTime); // Offset: 0x101e3af88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBaseWidget.SetAnimationForceVolatileEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimationForceVolatileEnable(bool bEnable); // Offset: 0x101e3af04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBaseWidget.ResumeCustomAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResumeCustomAnimation(); // Offset: 0x101e3aef0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBaseWidget.PlayCustomAnimation
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void PlayCustomAnimation(struct FCreativeUITweenInfo& InTweenInfo, struct FCreativeUIAnimationGoal& InGoal); // Offset: 0x101e3ade8 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function Creative.CreativeBaseWidget.PauseCustomAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PauseCustomAnimation(); // Offset: 0x101e3add4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBaseWidget.IsCustomAnimationPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCustomAnimationPlaying(); // Offset: 0x101e3adb8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBaseWidget.IsCustomAnimationPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCustomAnimationPaused(); // Offset: 0x101e3ad9c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBaseWidget.GetZOrderBatchSize
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetZOrderBatchSize(); // Offset: 0x101e3ad68 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeBinaryDataManager
// Size: 0x188 // Inherited bytes: 0x168
struct UCreativeBinaryDataManager : USTExtraManagerBase {
	// Fields
	char pad_0x168[0x18]; // Offset: 0x168 // Size: 0x18
	uint32_t InitBinaryDataSize; // Offset: 0x180 // Size: 0x04
	char pad_0x184[0x4]; // Offset: 0x184 // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeBinaryDataManager.SetInitBinaryDataSize
	// Flags: [Final|Native|Public]
	void SetInitBinaryDataSize(uint32_t DataSize); // Offset: 0x101e3b84c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBinaryDataManager.ReceiveOnPreLoadMap
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPreLoadMap(StrProperty MapName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBinaryDataManager.ReceiveOnPostSetLuaEventBridgeInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostSetLuaEventBridgeInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBinaryDataManager.ReceiveOnPostLoadMapWithWorld
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBinaryDataManager.OnRep_InitBinaryDataSize
	// Flags: [Final|Native|Public]
	void OnRep_InitBinaryDataSize(); // Offset: 0x101e3b838 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBinaryDataManager.OnPreLoadMap
	// Flags: [Final|Native|Public]
	void OnPreLoadMap(StrProperty MapName); // Offset: 0x101e3b7a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBinaryDataManager.OnPostSetLuaEventBridgeInstance
	// Flags: [Final|Native|Public]
	void OnPostSetLuaEventBridgeInstance(); // Offset: 0x101e3b78c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBinaryDataManager.OnPostLoadMapWithWorld
	// Flags: [Final|Native|Public]
	void OnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x101e3b710 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBinaryDataManager.GetInitBinaryDataSize
	// Flags: [Final|Native|Public]
	uint32_t GetInitBinaryDataSize(); // Offset: 0x101e3b6f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBinaryDataManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeBinaryDataManager* Get(struct UObject* WorldContext); // Offset: 0x101e3b678 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeBlockyLuaManager
// Size: 0x3f0 // Inherited bytes: 0x168
struct UCreativeBlockyLuaManager : UCreativeModeManagerBase {
	// Fields
	MapProperty BindStubFuncMap; // Offset: 0x168 // Size: 0x50
	char pad_0x1B8[0x1]; // Offset: 0x1b8 // Size: 0x01
	bool bConfigInited; // Offset: 0x1b9 // Size: 0x01
	bool bDynamicConfigInited; // Offset: 0x1ba // Size: 0x01
	char pad_0x1BB[0x5]; // Offset: 0x1bb // Size: 0x05
	struct TArray<struct UPresetDesc*> DynamicAddPresetDescList; // Offset: 0x1c0 // Size: 0x10
	struct TArray<struct UPresetDesc*> CachePresetDescList; // Offset: 0x1d0 // Size: 0x10
	char pad_0x1E0[0x50]; // Offset: 0x1e0 // Size: 0x50
	struct TArray<struct UPresetDesc*> BatchRemovePresetDescList; // Offset: 0x230 // Size: 0x10
	char pad_0x240[0x50]; // Offset: 0x240 // Size: 0x50
	MapProperty NoneStrToLocalTextWithIDMap; // Offset: 0x290 // Size: 0x50
	StrProperty AllTypesJsonPath; // Offset: 0x2e0 // Size: 0x10
	StrProperty FunctionJsonPath; // Offset: 0x2f0 // Size: 0x10
	StrProperty FunctionFolderPath; // Offset: 0x300 // Size: 0x10
	StrProperty VariableJsonPath; // Offset: 0x310 // Size: 0x10
	StrProperty PresetsJsonPath; // Offset: 0x320 // Size: 0x10
	StrProperty PresetsFolderPath; // Offset: 0x330 // Size: 0x10
	StrProperty TextrueRectParamJsonPath; // Offset: 0x340 // Size: 0x10
	StrProperty ProjectTextrueRectParamJsonPath; // Offset: 0x350 // Size: 0x10
	StrProperty ProjectAtlasRectParamJsonPath; // Offset: 0x360 // Size: 0x10
	StrProperty ProjectSyncAtlasRectParamJsonPath; // Offset: 0x370 // Size: 0x10
	StrProperty ProjectBlockyNewJsonPath; // Offset: 0x380 // Size: 0x10
	StrProperty TipsJsonPath; // Offset: 0x390 // Size: 0x10
	StrProperty SequenceJsonPath; // Offset: 0x3a0 // Size: 0x10
	StrProperty UAssetConfigDataPath; // Offset: 0x3b0 // Size: 0x10
	StrProperty BlockyLuaTLogJsonPath; // Offset: 0x3c0 // Size: 0x10
	bool ClearCacheCallBeginDestroy; // Offset: 0x3d0 // Size: 0x01
	char pad_0x3D1[0x7]; // Offset: 0x3d1 // Size: 0x07
	struct UBlockyGraphData* GraphDataObject; // Offset: 0x3d8 // Size: 0x08
	struct TArray<struct UBlockyGraphData*> GraphDataObjectList; // Offset: 0x3e0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeBlockyLuaManager.SetRTLOffsetY
	// Flags: [Final|Native|Public]
	void SetRTLOffsetY(float Offset); // Offset: 0x101e3eb08 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBlockyLuaManager.SetLTROffsetY
	// Flags: [Final|Native|Public]
	void SetLTROffsetY(float Offset); // Offset: 0x101e3ea8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBlockyLuaManager.SetFontSize
	// Flags: [Final|Native|Public]
	void SetFontSize(IntProperty FontSize); // Offset: 0x101e3ea10 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBlockyLuaManager.SetBlockIdFromSlotString
	// Flags: [Final|Native|Public|HasOutParms]
	void SetBlockIdFromSlotString(struct FBlockySlotString& SlotString, StrProperty blockId); // Offset: 0x101e3e870 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReturnPresetDescsToCache
	// Flags: [Final|Native|Public]
	void ReturnPresetDescsToCache(struct TArray<struct UPresetDesc*> ReturnDescs); // Offset: 0x101e3e78c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReturnGraphDataObject
	// Flags: [Final|Native|Public]
	bool ReturnGraphDataObject(struct UBlockyGraphData* GraphDataObj); // Offset: 0x101e3e700 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeBlockyLuaManager.RemoveDynamicPresetDescs
	// Flags: [Final|Native|Public]
	void RemoveDynamicPresetDescs(struct TArray<struct UPresetDesc*> PresetDescs); // Offset: 0x101e3e61c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.RegisterNameCache
	// Flags: [Final|Native|Public]
	void RegisterNameCache(struct UBlockyGraphData* GraphData); // Offset: 0x101e3e5a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.RefreshBlockyFont
	// Flags: [Final|Native|Public|HasOutParms]
	void RefreshBlockyFont(struct FSlateFontInfo& DefaultFont); // Offset: 0x101e3e4e8 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceivePresetFromCustomSelection
	// Flags: [Final|Native|Public]
	void ReceivePresetFromCustomSelection(struct UObjectDesc* Desc); // Offset: 0x101e3e46c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceiveOutBlockyluaDownloadImage
	// Flags: [Final|Native|Public]
	void ReceiveOutBlockyluaDownloadImage(struct UTexture2D* Texture, StrProperty IconPath); // Offset: 0x101e3e398 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceiveOpenGuide
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOpenGuide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceivedGetLocalizeResStrHandleFailed
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty ReceivedGetLocalizeResStrHandleFailed(StrProperty IdOrStr); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringValidFunction
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReceiveCheckStringValidFunction(StrProperty CheckString, struct FCheckStringHandleData& Data); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringResult
	// Flags: [Final|Native|Public|HasOutParms]
	void ReceiveCheckStringResult(bool Result, StrProperty ValidString, struct FCheckStringHandleData& Data); // Offset: 0x101e3e25c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeBlockyLuaManager.OnReceiveMessageData
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceiveMessageData(struct TArray<struct FMessageDataWrapper>& MessageDatas); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.OnReceiveInitDisableFunc
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceiveInitDisableFunc(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBlockyLuaManager.OnInitBlockyLuaConfig
	// Flags: [Final|Native|Public]
	void OnInitBlockyLuaConfig(); // Offset: 0x101e3e248 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBlockyLuaManager.OnGameTypePreChanged
	// Flags: [Final|Native|Public]
	void OnGameTypePreChanged(char LastGameType, char CurrentGameType); // Offset: 0x101e3e190 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Creative.CreativeBlockyLuaManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e3e114 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.IsLTRLanguage
	// Flags: [Final|Native|Public]
	bool IsLTRLanguage(); // Offset: 0x101e3e0e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBlockyLuaManager.IsLTR
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsLTR(); // Offset: 0x101e3e0a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBlockyLuaManager.InitDisableFunction
	// Flags: [Final|Native|Public]
	void InitDisableFunction(struct TArray<StrProperty> funcs); // Offset: 0x101e3dfc0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetPresetDescs
	// Flags: [Final|Native|Public|HasOutParms]
	struct TArray<struct UPresetDesc*> GetPresetDescs(StrProperty& TypeName, IntProperty GetCount); // Offset: 0x101e3de9c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetPresetDesc
	// Flags: [Final|Native|Public|HasOutParms]
	struct UPresetDesc* GetPresetDesc(StrProperty& TypeName); // Offset: 0x101e3dde4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormTemplateContent
	// Flags: [Final|Native|Public|HasOutParms]
	struct UBlockyGraphData* GetGraphDataObjectFormTemplateContent(struct TArray<char>& GrapbAstContent, bool CallLoadFinish, bool IsLoadPresetsInGraph); // Offset: 0x101e3dc90 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormContent
	// Flags: [Final|Native|Public|HasOutParms]
	struct UBlockyGraphData* GetGraphDataObjectFormContent(struct TArray<char>& GrapbAstContent, struct TArray<char>& GlobalVarAstContent, bool CallLoadFinish, bool IsSingleton); // Offset: 0x101e3dad4 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetDynamicPresetDescsByKey
	// Flags: [Final|Native|Public]
	struct UPresetDesc* GetDynamicPresetDescsByKey(StrProperty KeyName); // Offset: 0x101e3d9e0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetBlockyLuaConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UBlockyLuaConfig* GetBlockyLuaConfig(); // Offset: 0x101e3d9ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetBlockNameByStr
	// Flags: [Final|Native|Public]
	StrProperty GetBlockNameByStr(StrProperty BlockyId); // Offset: 0x101e3d894 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetBlockIdFromSlotString
	// Flags: [Final|Native|Public|HasOutParms]
	StrProperty GetBlockIdFromSlotString(struct FBlockySlotString& SlotString); // Offset: 0x101e3d774 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GetAllDynamicPresetJson
	// Flags: [Final|Native|Public]
	StrProperty GetAllDynamicPresetJson(); // Offset: 0x101e3d710 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeBlockyLuaManager* Get(struct UObject* WorldContext); // Offset: 0x101e3d694 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormJson
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GenerateLuaCodeFormJson(StrProperty JsonText, StrProperty GlobalVarJsonText, bool GenGlobalVarLua); // Offset: 0x101e3d528 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormGraphDataObject
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GenerateLuaCodeFormGraphDataObject(struct UBlockyGraphData* GraphDataObj, bool GenGlobalVarLua); // Offset: 0x101e3d430 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormContent
	// Flags: [Final|Native|Public|HasOutParms]
	struct TArray<StrProperty> GenerateLuaCodeFormContent(struct TArray<char>& GrapbAstContent, struct TArray<char>& GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish); // Offset: 0x101e3d24c // Return & Params: Num(5) Size(0x38)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ClearNameIndexCache
	// Flags: [Final|Native|Public]
	void ClearNameIndexCache(); // Offset: 0x101e3d238 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ClearDynamicPresetDescs
	// Flags: [Final|Native|Public]
	struct TArray<struct UPresetDesc*> ClearDynamicPresetDescs(); // Offset: 0x101e3d1d4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ClearCacheObjects
	// Flags: [Final|Native|Public]
	void ClearCacheObjects(bool CallBeginDestroy); // Offset: 0x101e3d150 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBlockyLuaManager.ClearBlockyLuaHotfixUtility
	// Flags: [Final|Native|Public]
	void ClearBlockyLuaHotfixUtility(); // Offset: 0x101e3d13c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaShowPresetPanelHandle
	// Flags: [Final|Native|Public]
	void BlockyluaShowPresetPanelHandle(bool IsShow); // Offset: 0x101e3d0b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSoundFunctionHandle
	// Flags: [Final|Native|Public]
	void BlockyluaPresetSoundFunctionHandle(StrProperty SoundPath); // Offset: 0x101e3cfd4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSelectCheckHandle
	// Flags: [Final|Native|Public]
	StrProperty BlockyluaPresetSelectCheckHandle(struct UObjectDesc* Desc); // Offset: 0x101e3cf20 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaModifyTipHandle
	// Flags: [Final|Native|Public]
	struct FText BlockyluaModifyTipHandle(struct FText OriginalTip); // Offset: 0x101e3ce28 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaMessageDataHandle
	// Flags: [Final|Native|Public|HasOutParms]
	void BlockyluaMessageDataHandle(struct TArray<struct FMessageDataStruct>& MessageDatas); // Offset: 0x101e3cd80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaGetLocalizeResStrHandle
	// Flags: [Final|Native|Public]
	StrProperty BlockyluaGetLocalizeResStrHandle(StrProperty IdOrStr); // Offset: 0x101e3cc68 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaDownloadImage
	// Flags: [Final|Native|Public]
	void BlockyluaDownloadImage(StrProperty IconPath); // Offset: 0x101e3cb84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaCustomInputHandle
	// Flags: [Final|Native|Public]
	void BlockyluaCustomInputHandle(StrProperty CustomClickType, struct UObjectDesc* Desc, struct TArray<struct UObjectDesc*> followers); // Offset: 0x101e3c9c4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowPresetFitlerBtnHandle
	// Flags: [Final|Native|Public]
	bool BlockyluaCheckShowPresetFitlerBtnHandle(StrProperty TypeName); // Offset: 0x101e3c8d0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowCustomInputHandle
	// Flags: [Final|Native|Public]
	bool BlockyluaCheckShowCustomInputHandle(StrProperty CustomClickType, struct UObjectDesc* Desc, struct TArray<struct UObjectDesc*> followers); // Offset: 0x101e3c700 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindUndoCustomCommandHandle
	// Flags: [Final|Native|Public]
	void BindUndoCustomCommandHandle(bool IsUndo); // Offset: 0x101e3c67c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindSetBlockNewStatusHandle
	// Flags: [Final|Native|Public]
	void BindSetBlockNewStatusHandle(StrProperty blockId, bool showstate); // Offset: 0x101e3c548 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindGetPresetValidityDurationHandle
	// Flags: [Final|Native|Public]
	IntProperty BindGetPresetValidityDurationHandle(struct UPresetDesc* PresetDesc); // Offset: 0x101e3c4bc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindGetBlockNewStatusHandle
	// Flags: [Final|Native|Public]
	bool BindGetBlockNewStatusHandle(StrProperty blockId); // Offset: 0x101e3c3c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindCallShortCutKeyHandleHandle
	// Flags: [Final|Native|Public]
	void BindCallShortCutKeyHandleHandle(IntProperty ShortCutKey); // Offset: 0x101e3c34c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBlockyLuaManager.BindBlockyLuaStubFunc
	// Flags: [Final|Native|Public]
	void BindBlockyLuaStubFunc(StrProperty BindFuncName, StrProperty OverrdeFuncName); // Offset: 0x101e3c1d0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeBlockyLuaManager.AddEmptyCustomCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddEmptyCustomCommand(struct UBlockyGraphData* GraphData); // Offset: 0x101e3c154 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBlockyLuaManager.AddDynamicPresetDescs
	// Flags: [Final|Native|Public]
	void AddDynamicPresetDescs(struct TArray<struct UPresetDesc*> PresetDescs); // Offset: 0x101e3c070 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeBlockyLuaManager.AddCustomCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddCustomCommand(struct UBlockyCustomCommand* Command, struct UBlockyGraphData* GraphData); // Offset: 0x101e3bfbc // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeModeBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeModeBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ZSTDDecompressData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool ZSTDDecompressData(struct TArray<char>& CompressedData, struct TArray<char>& DecompressedData); // Offset: 0x101e4b36c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ZSTDCompressData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool ZSTDCompressData(struct TArray<char>& UncompressedData, struct TArray<char>& CompressedData, IntProperty CompressionLevel); // Offset: 0x101e4b210 // Return & Params: Num(4) Size(0x25)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.WindowsReadFileSummary
	// Flags: [Final|Native|Static|Public|HasOutParms]
	StrProperty WindowsReadFileSummary(StrProperty FilePath, struct TArray<StrProperty>& Properties); // Offset: 0x101e4b0ec // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.WindowsPickFile
	// Flags: [Final|Native|Static|Public]
	StrProperty WindowsPickFile(StrProperty filter); // Offset: 0x101e4b02c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.WidgetAbsoluteSizeToLocalSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector2D WidgetAbsoluteSizeToLocalSize(struct UWidget* Widget, struct FVector2D AbsoluteSize); // Offset: 0x101e4af78 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.UObjSnapshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UObjSnapshot(struct UWorld* MyWorld); // Offset: 0x101e4af04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TransformRevert
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FTransform TransformRevert(struct FTransform& TransformRelative, struct FTransform& TransformB); // Offset: 0x101e4ade8 // Return & Params: Num(3) Size(0x90)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void TransformMultiplyBy(struct FTransform& Source, struct FTransform& M); // Offset: 0x101e4acec // Return & Params: Num(2) Size(0x60)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TransformBounds
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void TransformBounds(struct FBoxSphereBounds& Bounds, struct FTransform& M); // Offset: 0x101e4ac08 // Return & Params: Num(2) Size(0x50)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ToMilliseconds64
	// Flags: [Final|Native|Static|Public]
	double ToMilliseconds64(uint64 Cycles); // Offset: 0x101e4ab8c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TextureToPNG
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> TextureToPNG(struct UTexture2D* Texture); // Offset: 0x101e4aae8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TextureToJPEG
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> TextureToJPEG(struct UTexture2D* Texture); // Offset: 0x101e4aa44 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.TakeSnapshot
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty TakeSnapshot(struct UWidget* WindowWidget, IntProperty X1, IntProperty Y1, IntProperty X2, IntProperty Y2, StrProperty Filename, bool bUseCrop, bool bFillRect); // Offset: 0x101e4a748 // Return & Params: Num(9) Size(0x40)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SynchronizePropertiesWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SynchronizePropertiesWidget(struct UWidget* TargetWidget); // Offset: 0x101e4a6cc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SphereOverlapComponentsByChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	bool SphereOverlapComponentsByChannel(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<enum class ECollisionChannel>& Channels, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Offset: 0x101e4a458 // Return & Params: Num(8) Size(0x51)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SphereOverlapActorsByChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	bool SphereOverlapActorsByChannel(struct UObject* WorldContextObject, struct FVector SpherePos, float SphereRadius, struct TArray<enum class ECollisionChannel>& Channels, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Offset: 0x101e4a1e4 // Return & Params: Num(8) Size(0x51)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ShouldCreatePhysicsState(struct UPrimitiveComponent* Component); // Offset: 0x101e4a168 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetWorldGravityZ
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float SetWorldGravityZ(float GravityZ, struct UObject* WorldContext); // Offset: 0x101e4a0b0 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetWidgetVisiblePass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWidgetVisiblePass(struct UWidget* Widget, bool bVisiblePass); // Offset: 0x101e49ff8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetStaticMeshMobility(struct UStaticMeshComponent* StaticMeshComponent, enum class EComponentMobility NewMobility); // Offset: 0x101e49f48 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetSpeedOverLimit(struct AActor* Actor); // Offset: 0x101e49ed4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetRelativeCamRotation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetRelativeCamRotation(struct APlayerController* PlayerController, struct USceneComponent* Component); // Offset: 0x101e49e28 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetParticleCullingDistance(struct UParticleSystemComponent* ParticleSystemComponent, float Distance); // Offset: 0x101e49d78 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetInstanceValue(struct UObject* WorldContextObject, StrProperty InstanceID, StrProperty Key, StrProperty Value); // Offset: 0x101e49b2c // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetCreativeInstanceDataContent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SetCreativeInstanceDataContent(struct FCreativeInstanceDataContent& InstanceDataContent, struct TArray<char>& DataContent); // Offset: 0x101e49a1c // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCommandLineValue(StrProperty Key, StrProperty NewValue); // Offset: 0x101e498a8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetCollisionMobility(struct UShapeComponent* Component, enum class EComponentMobility NewMobility); // Offset: 0x101e497f8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetAICrowdSimulationState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetAICrowdSimulationState(struct AAIController* AICtrl, char NewState); // Offset: 0x101e49748 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetAICrowdObstacleAvoidance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetAICrowdObstacleAvoidance(struct AAIController* AICtrl, bool bEnable, bool bUpdateAgent); // Offset: 0x101e4964c // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SetActorRegionBasedNetConsideration
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetActorRegionBasedNetConsideration(struct AActor* Actor, bool bNewValue); // Offset: 0x101e49594 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SaveStringToFileByFullPath
	// Flags: [Final|Native|Static|Public]
	bool SaveStringToFileByFullPath(StrProperty String, StrProperty Filename); // Offset: 0x101e494a8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SaveStringToFile
	// Flags: [Final|Native|Static|Public]
	void SaveStringToFile(StrProperty String, StrProperty Filename); // Offset: 0x101e493c4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SaveRawStringToFile
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void SaveRawStringToFile(struct TArray<char>& Content, StrProperty FilePath); // Offset: 0x101e492cc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SaveAssetStringToFile(StrProperty String, StrProperty Filename); // Offset: 0x101e491e8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RotatorCrossInverse
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FRotator RotatorCrossInverse(struct FRotator& Rot1, struct FRotator& Rot2); // Offset: 0x101e49104 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RotatorCross
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FRotator RotatorCross(struct FRotator& Rot1, struct FRotator& Rot2); // Offset: 0x101e49020 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.Rotation2Vector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector Rotation2Vector(struct FRotator Rotator, IntProperty Axis); // Offset: 0x101e48f64 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RenderTargetToRGB
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> RenderTargetToRGB(struct UTextureRenderTarget2D* RenderTarget); // Offset: 0x101e48ec0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RenderTargetToPNG
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> RenderTargetToPNG(struct UTextureRenderTarget2D* RenderTarget, bool bLinearToGamma); // Offset: 0x101e48dd8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RenameObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RenameObject(struct UObject* Object, StrProperty NewName); // Offset: 0x101e48cb4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RecreatePhysicsState(struct UPrimitiveComponent* Component); // Offset: 0x101e48c40 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.QuatCrossInverse
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FQuat QuatCrossInverse(struct FQuat& Quat1, struct FQuat& Quat2); // Offset: 0x101e48b58 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.QuatCross
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FQuat QuatCross(struct FQuat& Quat1, struct FQuat& Quat2); // Offset: 0x101e48a78 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty ProjectSavedDir(); // Offset: 0x101e48a14 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ProjectContentDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty ProjectContentDir(); // Offset: 0x101e489b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties
	// Flags: [Final|Native|Static|Public]
	void PopulateParticleProperties(struct UParticleSystemComponent* ParticleSystemComponent); // Offset: 0x101e4893c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.MoveComponentToNoLatent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void MoveComponentToNoLatent(struct USceneComponent* Component, struct FVector TargetRelativeLocation, struct FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, enum class EMoveComponentAction MoveAction); // Offset: 0x101e486fc // Return & Params: Num(8) Size(0x2a)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.MoveComponentTo
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void MoveComponentTo(struct USceneComponent* Component, struct FVector WorldLocation, struct FRotator WorldRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, enum class EMoveComponentAction MoveAction); // Offset: 0x101e484bc // Return & Params: Num(8) Size(0x2a)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void MinAreaRectangle(struct UObject* WorldContextObject, struct TArray<struct FVector>& InPoints, struct FVector& SampleSurfaceNormal, struct FVector& OutRectCenter, struct FRotator& OutRectRotation, float& OutRectLengthX, float& OutRectLengthY, bool bDebugDraw, struct TArray<IntProperty>& PolyVertIndices); // Offset: 0x101e4817c // Return & Params: Num(9) Size(0x58)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	StrProperty MD5HashByteArray(struct TArray<char>& inArray); // Offset: 0x101e480ac // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty MD5HashAnsiString(StrProperty str); // Offset: 0x101e47fec // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.Lz4DecompressData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool Lz4DecompressData(struct TArray<char>& CompressedData, struct TArray<char>& DecompressedData); // Offset: 0x101e47ed4 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.Lz4CompressData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool Lz4CompressData(struct TArray<char>& UncompressedData, struct TArray<char>& CompressedData); // Offset: 0x101e47dbc // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LoadRawFileToString
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> LoadRawFileToString(StrProperty FilePath); // Offset: 0x101e47cfc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LoadFileToStringByFullPath
	// Flags: [Final|Native|Static|Public]
	StrProperty LoadFileToStringByFullPath(StrProperty FullPathName); // Offset: 0x101e47c3c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LoadFileToArrayByFullPath
	// Flags: [Final|Native|Static|Public]
	struct TArray<char> LoadFileToArrayByFullPath(StrProperty FullPathName); // Offset: 0x101e47b7c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty LoadAssetFileToString(StrProperty Filename); // Offset: 0x101e47abc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct USceneComponent* LineTraceTouchComponent(struct FVector2D& TouchPos, struct APlayerController* PlayerController, struct FVector& TouchHitLoc, struct TArray<struct AActor*> IgnoreActors); // Offset: 0x101e478f8 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchAxis
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty LineTraceTouchAxis(struct FVector2D& TouchPos, struct APlayerController* PlayerController, struct FVector& TouchHitLoc, struct TArray<struct AActor*> IgnoreActors); // Offset: 0x101e47734 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.LineTraceInstance
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	StrProperty LineTraceInstance(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct AActor*> IgnoreActors); // Offset: 0x101e4754c // Return & Params: Num(5) Size(0x40)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsWindows
	// Flags: [Final|Native|Static|Public]
	bool IsWindows(); // Offset: 0x101e47518 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsPointWithinRotatedBounds
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsPointWithinRotatedBounds(struct FVector& BoxCenter, struct FVector& BoxExtent, float YawDegrees, struct FVector& Point); // Offset: 0x101e473bc // Return & Params: Num(5) Size(0x29)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsPointInVolume
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	bool IsPointInVolume(struct AVolume* Volume, struct FVector Position); // Offset: 0x101e47304 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsPhysicsStateCreated(struct UPrimitiveComponent* Component); // Offset: 0x101e47288 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsPersistentModeEnabled(); // Offset: 0x101e47254 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsPerformanceSensitive
	// Flags: [Final|Native|Static|Public]
	bool IsPerformanceSensitive(); // Offset: 0x101e47220 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsOfflineBuild(); // Offset: 0x101e471ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsMCPModeEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsMCPModeEnabled(); // Offset: 0x101e471b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsLLMEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsLLMEnabled(); // Offset: 0x101e47184 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsCreativeMode(struct UWorld* World); // Offset: 0x101e47108 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsBoxOverlapWithRotatedBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsBoxOverlapWithRotatedBox(struct FVector& StaticBoxCenter, struct FVector& StaticBoxExtent, struct FVector& RotatedBoxCenter, struct FVector& RotatedBoxExtent, float RotatedBoxYaw); // Offset: 0x101e46f5c // Return & Params: Num(6) Size(0x35)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IsAABBVisible
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct TArray<StrProperty> IsAABBVisible(struct TArray<struct FBox>& TargetBoxs, struct TArray<StrProperty>& InstanceIDs, struct FVector FarPlanePoint, struct FVector CameraForward, struct TArray<float>& PlanesParams); // Offset: 0x101e46d34 // Return & Params: Num(6) Size(0x58)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void IgnoreClientMovementErrorChecksAndCorrection(struct ACharacter* Charcter, bool bIsIgnore); // Offset: 0x101e46c7c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.HideEnvironmentalActorsInSceneCapture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty HideEnvironmentalActorsInSceneCapture(struct USceneCaptureComponent2D* SceneCapture, struct ADirectionalLight* LightToKeep, bool bHideSkyBox, bool bHideEnvironmentLights, bool bHideAtmosphere); // Offset: 0x101e46af4 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetWidgetRect
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetWidgetRect(struct UWidget* Widget, IntProperty& X1, IntProperty& Y1, IntProperty& X2, IntProperty& Y2); // Offset: 0x101e46938 // Return & Params: Num(5) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetUrlValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetUrlValue(struct UObject* WorldContext, StrProperty Key); // Offset: 0x101e4683c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetUObjAssetPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetUObjAssetPath(struct UObject* Level); // Offset: 0x101e46798 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetUClassName
	// Flags: [Final|Native|Static|Public]
	StrProperty GetUClassName(struct UObject* UClass); // Offset: 0x101e466f4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetTexture2DFromDiskFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UTexture2D* GetTexture2DFromDiskFile(StrProperty FilePath); // Offset: 0x101e4665c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetSyncDataIsEqual
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool GetSyncDataIsEqual(struct FNetAvatarSyncData& SyncDataFirst, struct FNetAvatarSyncData& SyncDataSecond); // Offset: 0x101e4653c // Return & Params: Num(3) Size(0x41)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetStaticMeshTriangleAndDrawCallCount
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetStaticMeshTriangleAndDrawCallCount(struct UStaticMesh* StaticMesh, IntProperty& TriangleCount, IntProperty& DrawCallCount); // Offset: 0x101e46430 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetRTValidMaxArea(struct UTextureRenderTarget2D* TextureTarget); // Offset: 0x101e463a4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty GetReplicateAddDataArrayVaildNum(struct UObject* WorldContextObject, struct FReplicateAddDataArray& ReplicateAddDataArray, IntProperty StartIndex); // Offset: 0x101e46274 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetRelativeTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct FTransform GetRelativeTransform(struct FTransform& Base, struct FTransform& Other); // Offset: 0x101e46158 // Return & Params: Num(3) Size(0x90)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetPlatformSeconds
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	float GetPlatformSeconds(); // Offset: 0x101e46124 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetObjectScreenPos(struct UObject* WorldContextObject, StrProperty InstanceID, struct FVector2D& pos); // Offset: 0x101e46004 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	MapProperty GetObjectMap(struct UObject* WorldContextObject); // Offset: 0x101e45f60 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetObjectInheritanceChain
	// Flags: [Final|Native|Static|Public]
	struct TArray<struct UObject*> GetObjectInheritanceChain(struct UObject* Object); // Offset: 0x101e45ebc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetMinFovForAABB
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	float GetMinFovForAABB(struct FVector CameraLocation, struct FRotator CameraRotation, struct TArray<struct FVector> AABBVertices, float AspectRatio); // Offset: 0x101e45cf0 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetLastInteractionElapsedTime
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetLastInteractionElapsedTime(); // Offset: 0x101e45cbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetInstanceSpaceBoundingBox
	// Flags: [Final|Native|Static|Public]
	void GetInstanceSpaceBoundingBox(StrProperty InstanceID, float Yaw, struct UCreativeAbilitySystemComponent* Component); // Offset: 0x101e45bac // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetImageSize
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct FVector2D GetImageSize(struct TArray<char>& ImageBuffer, IntProperty Format); // Offset: 0x101e45ab4 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetHashByString
	// Flags: [Final|Native|Static|Public]
	uint32_t GetHashByString(StrProperty str); // Offset: 0x101e459d0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetGroupInstanceSpaceBoundingBox
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetGroupInstanceSpaceBoundingBox(StrProperty GroupID, struct TArray<StrProperty>& ChildrenIds, MapProperty& ChildrenTransforms, float Yaw, struct UCreativeAbilitySystemComponent* Component); // Offset: 0x101e457e0 // Return & Params: Num(5) Size(0x80)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetGameWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UWorld* GetGameWorld(struct UObject* WorldContextObject); // Offset: 0x101e45764 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetGameTypeAsString(enum class ECreativeModeGameType GameType); // Offset: 0x101e456c0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<char> GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent& InstanceDataContent); // Offset: 0x101e45608 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCustomEventHashString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetCustomEventHashString(StrProperty CustomEventName, bool isSampleHash); // Offset: 0x101e45500 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCurFrameNumber
	// Flags: [Final|Native|Static|Public]
	uint32_t GetCurFrameNumber(); // Offset: 0x101e454dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCurFrameCounter
	// Flags: [Final|Native|Static|Public]
	uint32_t GetCurFrameCounter(); // Offset: 0x101e454b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCubeTouchAxisFace
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty GetCubeTouchAxisFace(struct UWidget* Widget, struct FVector2D& ScreenPosition, float Width, float Distance, struct FVector& OffsetLocation); // Offset: 0x101e45330 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCopiedAvatarSyncData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FNetAvatarSyncData GetCopiedAvatarSyncData(struct FNetAvatarSyncData SyncData); // Offset: 0x101e45248 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool GetContentPatchData(struct TArray<char>& OldData, struct TArray<char>& DiffData, struct TArray<char>& outNewData); // Offset: 0x101e450c8 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool GetContentDiffData(struct TArray<char>& OldData, struct TArray<char>& NewData, struct TArray<char>& outDiffData); // Offset: 0x101e44f48 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetCommandLineValue(StrProperty Key); // Offset: 0x101e44e88 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetClassInheritanceChain
	// Flags: [Final|Native|Static|Public]
	struct TArray<struct UObject*> GetClassInheritanceChain(struct UObject* UClass); // Offset: 0x101e44de4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCharacterSocketPos
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector GetCharacterSocketPos(struct ACharacter* Character, struct FName SocketName); // Offset: 0x101e44d2c // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetCameraFrustumPlane
	// Flags: [Final|Native|Static|Public]
	struct TArray<struct FVector4> GetCameraFrustumPlane(struct UObject* WorldContext); // Offset: 0x101e44c88 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void GetBoundingBoxOfInstances(struct UObject* WorldContext, struct TArray<StrProperty>& Ids, float Yaw, struct FVector& Center, struct FVector& BoxExtent); // Offset: 0x101e44ac4 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void GetBoundingBoxOfActors(struct TArray<struct AActor*>& Actors, float Yaw, struct FVector& Center, struct FVector& BoxExtent); // Offset: 0x101e4493c // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetBlockyListInDisplayName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBlockyListInDisplayName(struct UBlockBase* BlockBase); // Offset: 0x101e44898 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetBigUObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetBigUObject(IntProperty MaxN); // Offset: 0x101e447f4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetBigLuaValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetBigLuaValue(struct UObject* WorldContext); // Offset: 0x101e44740 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct TArray<StrProperty> GetAllInstanceInScreenBox(struct UObject* WorldContext, struct FVector2D& Start, struct FVector2D& End, IntProperty CheckDistance, IntProperty CountLimit); // Offset: 0x101e44588 // Return & Params: Num(6) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct TArray<StrProperty> GetAllInstanceInBox(struct UObject* WorldContext, struct FVector& Center, struct FVector& Extent, struct FRotator& Rotator); // Offset: 0x101e443fc // Return & Params: Num(5) Size(0x40)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetAllFilesInDir
	// Flags: [Final|Native|Static|Public]
	struct TArray<StrProperty> GetAllFilesInDir(StrProperty Dir, StrProperty Pattern, bool bRelative); // Offset: 0x101e442a0 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetActorsInCameraFrustumByLayer
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct TArray<struct FOverlapResult> GetActorsInCameraFrustumByLayer(struct UWorld* World, struct FVector& Origin, struct FRotator& CameraRot, float MaxDistance, float AngleWidth, float AngleHeight, IntProperty NumLayers, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bDrawDebug, struct FColor DebugColor, float DebugLifeTime); // Offset: 0x101e43f38 // Return & Params: Num(12) Size(0x60)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GetActorMeshBoundsByTag(struct AActor* Actor, struct FVector& Origin, struct FVector& BoxExtent, StrProperty IgnoreTag, StrProperty IncludeTag); // Offset: 0x101e43d78 // Return & Params: Num(5) Size(0x40)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid
	// Flags: [Final|Native|Static|Public]
	uint32_t GenerateUIntGuid(); // Offset: 0x101e43d44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GenerateMemoryArray
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<IntProperty> GenerateMemoryArray(IntProperty SizeInMB); // Offset: 0x101e43ca0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GenerateGuid(); // Offset: 0x101e43c3c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.FindAttachedActorByName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct AActor* FindAttachedActorByName(struct AActor* ParentActor, StrProperty PartialName, SetProperty& VisitedActors); // Offset: 0x101e43ad0 // Return & Params: Num(4) Size(0x70)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.FindActorByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct AActor* FindActorByName(struct UWorld* World, StrProperty PartialName); // Offset: 0x101e439fc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.EncryptToBase64
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	StrProperty EncryptToBase64(struct TArray<char>& inArray); // Offset: 0x101e4391c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.EditorMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditorMessage(StrProperty Message, float Time); // Offset: 0x101e437f8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DumpCurrentWorldObjects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DumpCurrentWorldObjects(struct UObject* WorldContextObject, StrProperty Suffix); // Offset: 0x101e436dc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DumpActorNetReplicate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DumpActorNetReplicate(struct UObject* WorldContext, StrProperty Name); // Offset: 0x101e43610 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DrawLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawLine(struct FPaintContext& InContext, struct FVector2D& Start, struct FVector2D& End, struct FLinearColor& LineColor, IntProperty LayerOffset, float LineThickness, bool bAntiAlias); // Offset: 0x101e433e4 // Return & Params: Num(7) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DrawGrids
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawGrids(struct FPaintContext& InContext, float CellSize, IntProperty CellCountX, IntProperty CellCountY, float PosOffsetX, float PosOffsetY, struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, IntProperty LayerOffset); // Offset: 0x101e4312c // Return & Params: Num(10) Size(0x60)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void DrawGridCell(struct FPaintContext& InContext, float CellSize, IntProperty CellIndexX, IntProperty CellIndexY, float PosOffsetX, float PosOffsetY, struct FLinearColor& LineColor, IntProperty LayerOffset); // Offset: 0x101e42ef4 // Return & Params: Num(8) Size(0x58)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DestroyUObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DestroyUObject(struct UObject* Object); // Offset: 0x101e42e80 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DestroyInstance(struct UObject* WorldContextObject, StrProperty InstanceID); // Offset: 0x101e42d38 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DecryptFromBase64
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<char> DecryptFromBase64(StrProperty inString); // Offset: 0x101e42c68 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.DarwCameraFrustumDebugLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void DarwCameraFrustumDebugLine(struct UObject* WorldContext, struct FVector FarPlanePoint, struct FVector CameraForward, struct TArray<float>& PlanesParams, float Duration); // Offset: 0x101e42ad0 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct FCreativeInstanceDataContent CreativeInstanceDataContent(struct TArray<char>& DataContent); // Offset: 0x101e42a00 // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CreateRGBATexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UTexture2D* CreateRGBATexture(IntProperty Width, IntProperty Height, bool bSRGB); // Offset: 0x101e42908 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CreateCreativeMovingAudio
	// Flags: [Final|Native|Static|Public]
	struct FCreativeMovingAudio CreateCreativeMovingAudio(struct AActor* Actor, IntProperty Sequence, uint64 ConfigID, bool bShowMark, IntProperty Duration, float Volume); // Offset: 0x101e42740 // Return & Params: Num(7) Size(0x60)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ConvertForwardToRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	struct FRotator ConvertForwardToRotator(struct FVector& Forward); // Offset: 0x101e426b4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CombineRGBATexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CombineRGBATexture(struct UTexture2D* DstTexture, struct UTexture2D* RGSourceTexture, struct UTexture2D* BSourceTexture, struct UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb, char DefaultR, char DefaultG, char DefaultB, char DefaultA); // Offset: 0x101e423c0 // Return & Params: Num(11) Size(0x27)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CombineChannelsToRGBATexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CombineChannelsToRGBATexture(struct UTexture2D* DstTexture, struct UTexture2D* RGSourceTexture, struct UTexture2D* BSourceTexture, struct UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb); // Offset: 0x101e421cc // Return & Params: Num(7) Size(0x23)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void ClearGrassByMaskTexture(struct UObject* WorldContextObject, struct UTexture2D* MaskTexture, struct FVector2D WorldStart, struct FVector2D WorldEnd); // Offset: 0x101e420a8 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CheckWidgetsOverlap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CheckWidgetsOverlap(struct UWidget* Widget1, struct UWidget* Widget2); // Offset: 0x101e41ff4 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CharacterPlayCreativeDynamicMontage
	// Flags: [Final|Native|Static|Public]
	void CharacterPlayCreativeDynamicMontage(struct ACharacter* CharacterOwner, struct UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, IntProperty LoopCount, bool bIsLoop, float InTimeToStartMontageAt, struct FName SlotNodeName); // Offset: 0x101e41d9c // Return & Params: Num(9) Size(0x30)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.CaptureWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool CaptureWidget(struct UObject* WorldContext, struct UObject* WidgetClass, StrProperty& Path, IntProperty& X, IntProperty& Y, bool& FlipY); // Offset: 0x101e41b74 // Return & Params: Num(7) Size(0x2a)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponentsByChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	bool BoxOverlapComponentsByChannel(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<enum class ECollisionChannel>& Channels, struct UObject* ComponentClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComponents); // Offset: 0x101e41900 // Return & Params: Num(8) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool BoxOverlapComponents(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<IntProperty>& ObjectTypes, struct UObject* CompClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct UPrimitiveComponent*>& OutComps); // Offset: 0x101e4168c // Return & Params: Num(8) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActorsByChannel
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	bool BoxOverlapActorsByChannel(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<enum class ECollisionChannel>& Channels, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Offset: 0x101e41418 // Return & Params: Num(8) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool BoxOverlapActors(struct UObject* WorldContextObject, struct FVector BoxPos, struct FVector BoxExtent, struct TArray<IntProperty>& ObjectTypes, struct UObject* ActorClassFilter, struct TArray<struct AActor*>& ActorsToIgnore, struct TArray<struct AActor*>& OutActors); // Offset: 0x101e411a4 // Return & Params: Num(8) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BlueprintSuggestProjectileVelocity
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool BlueprintSuggestProjectileVelocity(struct UObject* WorldContextObject, struct FVector& TossVelocity, struct FVector StartLocation, struct FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, float Tolerance, struct TArray<struct AActor*>& ActorsToIgnore); // Offset: 0x101e40e38 // Return & Params: Num(13) Size(0x59)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct AActor* BeginDeferredActorSpawnWithName(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FTransform& SpawnTransform, struct FName Name, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner); // Offset: 0x101e40c64 // Return & Params: Num(7) Size(0x60)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox
	// Flags: [Final|Native|Static|Public]
	void AttachOutlineBox(struct AActor* AttachedActor, float Yaw, struct AActor* OutlineBox); // Offset: 0x101e40b78 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox
	// Flags: [Final|Native|Static|Public]
	void AttachInstanceOutlineBox(StrProperty AttachedId, bool bGridEnable, float Yaw, struct AActor* OutlineBox); // Offset: 0x101e40a20 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void AttachGroupOutlineBox(struct AActor* GroupObject, struct TArray<struct AActor*>& AttachedActors, float Yaw, struct AActor* OutlineBox); // Offset: 0x101e408c0 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void AttachGroupInstanceOutlineBox(StrProperty GroupID, struct TArray<StrProperty>& ChildrenIds, MapProperty& ChildrenTransforms, bool bGridEnable, float Yaw, struct AActor* OutlineBox); // Offset: 0x101e40688 // Return & Params: Num(6) Size(0x80)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AimSceneCaptureAtPawnSocket
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	bool AimSceneCaptureAtPawnSocket(struct USceneComponent* SceneCapture, struct APawn* TargetPawn, struct FName SocketName, float Distance, float FOV, struct FVector Offset, float PawnHeight); // Offset: 0x101e404ac // Return & Params: Num(8) Size(0x31)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AddVectorCurvePoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void AddVectorCurvePoint(struct FInterpCurveVector& Curve, float InVal, struct FVector& OutVal, struct FVector& ArriveTangent, struct FVector& LeaveTangent, IntProperty InterpCurveMode); // Offset: 0x101e40284 // Return & Params: Num(6) Size(0x44)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddOnScreenDebugMessage(StrProperty Msg); // Offset: 0x101e401a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AddLinearColorCurvePoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void AddLinearColorCurvePoint(struct FInterpCurveLinearColor& Curve, float InVal, struct FLinearColor& OutVal, struct FLinearColor& ArriveTangent, struct FLinearColor& LeaveTangent, IntProperty InterpCurveMode); // Offset: 0x101e3ff80 // Return & Params: Num(6) Size(0x50)

	// Object Name: Function Creative.CreativeModeBlueprintLibrary.AddFloatCurvePoint
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void AddFloatCurvePoint(struct FInterpCurveFloat& Curve, float InVal, float OutVal, float ArriveTangent, float LeaveTangent, IntProperty InterpCurveMode); // Offset: 0x101e3fda0 // Return & Params: Num(6) Size(0x2c)
};

// Object Name: Class Creative.CreativeBounceMovementComponent
// Size: 0x3b8 // Inherited bytes: 0x220
struct UCreativeBounceMovementComponent : UProjectileMovementComponent {
	// Fields
	char pad_0x220[0x58]; // Offset: 0x220 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x278 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x2c8 // Size: 0x10
	float Mass; // Offset: 0x2d8 // Size: 0x04
	float MinSpeedThreshold; // Offset: 0x2dc // Size: 0x04
	float SlideableFloorAngle; // Offset: 0x2e0 // Size: 0x04
	char pad_0x2E4[0x4]; // Offset: 0x2e4 // Size: 0x04
	struct UPrimitiveComponent* BaseFloor; // Offset: 0x2e8 // Size: 0x08
	char pad_0x2F0[0x8]; // Offset: 0x2f0 // Size: 0x08
	struct FScriptMulticastDelegate OnBaseFloorChanged; // Offset: 0x2f8 // Size: 0x10
	float NetSyncInterval; // Offset: 0x308 // Size: 0x04
	float HardSnapThreshold; // Offset: 0x30c // Size: 0x04
	float HardSnapVelocityThreshold; // Offset: 0x310 // Size: 0x04
	float SmoothCorrectionHalfLife; // Offset: 0x314 // Size: 0x04
	bool bEnableLatencyExtrapolation; // Offset: 0x318 // Size: 0x01
	char pad_0x319[0x3]; // Offset: 0x319 // Size: 0x03
	float MaxExtrapolationTime; // Offset: 0x31c // Size: 0x04
	float MaxPacketAge; // Offset: 0x320 // Size: 0x04
	bool bUseHardCorrectionOnStop; // Offset: 0x324 // Size: 0x01
	char pad_0x325[0x3]; // Offset: 0x325 // Size: 0x03
	struct USceneComponent* UpdatedComponentDS; // Offset: 0x328 // Size: 0x08
	float SlideableFloorAngleDS; // Offset: 0x330 // Size: 0x04
	float MassDS; // Offset: 0x334 // Size: 0x04
	float ProjectileGravityScaleDS; // Offset: 0x338 // Size: 0x04
	float FrictionDS; // Offset: 0x33c // Size: 0x04
	float BouncinessDS; // Offset: 0x340 // Size: 0x04
	char pad_0x344[0x74]; // Offset: 0x344 // Size: 0x74

	// Functions

	// Object Name: Function Creative.CreativeBounceMovementComponent.SyncUpdatedComponentDS
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SyncUpdatedComponentDS(); // Offset: 0x101e52c4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetVelocityInLocalSpaceDS
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetVelocityInLocalSpaceDS(struct FVector InVelocity); // Offset: 0x101e52bd0 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetUpdatedComponentDSCPP
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetUpdatedComponentDSCPP(struct USceneComponent* NewUpdatedComponent); // Offset: 0x101e52b4c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetSlideableFloorAngleDS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetSlideableFloorAngleDS(float InSlideableFloorAngle); // Offset: 0x101e52ac8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetSlideableFloorAngle
	// Flags: [Final|Native|Private]
	void SetSlideableFloorAngle(float InSlideableFloorAngle); // Offset: 0x101e52a4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetProjectileGravityScaleDS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetProjectileGravityScaleDS(float InGravityScale); // Offset: 0x101e529c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetMassDS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetMassDS(float InMass); // Offset: 0x101e52944 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetFrictionDS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetFrictionDS(float InFriction); // Offset: 0x101e528c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.SetBouncinessDS
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void SetBouncinessDS(float InBounciness); // Offset: 0x101e5283c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_UpdatedComponentDS
	// Flags: [Final|Native|Private]
	void OnRep_UpdatedComponentDS(struct USceneComponent* OldUpdatedComponent); // Offset: 0x101e527c0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_SlideableFloorAngleDS
	// Flags: [Final|Native|Private]
	void OnRep_SlideableFloorAngleDS(float OldValue); // Offset: 0x101e52744 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_ProjectileGravityScaleDS
	// Flags: [Final|Native|Private]
	void OnRep_ProjectileGravityScaleDS(float OldValue); // Offset: 0x101e526c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_MassDS
	// Flags: [Final|Native|Private]
	void OnRep_MassDS(float OldValue); // Offset: 0x101e5264c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_FrictionDS
	// Flags: [Final|Native|Private]
	void OnRep_FrictionDS(float OldValue); // Offset: 0x101e525d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.OnRep_BouncinessDS
	// Flags: [Final|Native|Private]
	void OnRep_BouncinessDS(float OldValue); // Offset: 0x101e52554 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeBounceMovementComponent.MulticastSyncVelocity
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	void MulticastSyncVelocity(struct FBounceMovementSnapshot Snapshot); // Offset: 0x101e524a8 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativeBounceMovementComponent.MulticastSyncStop
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	void MulticastSyncStop(struct FBounceMovementSnapshot Snapshot); // Offset: 0x101e523fc // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativeBounceMovementComponent.MulticastSyncMove
	// Flags: [Final|Net|Native|Event|NetMulticast|Private]
	void MulticastSyncMove(struct FBounceMovementSnapshot Snapshot); // Offset: 0x101e52350 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativeBounceMovementComponent.MulticastSyncLocation
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	void MulticastSyncLocation(struct FBounceMovementSnapshot Snapshot); // Offset: 0x101e522a4 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativeBounceMovementComponent.MulticastSyncBounce
	// Flags: [Final|Net|NetReliableNative|Event|NetMulticast|Private]
	void MulticastSyncBounce(struct FBounceMovementSnapshot Snapshot); // Offset: 0x101e521f8 // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativeBounceMovementComponent.IsInAir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInAir(); // Offset: 0x101e521d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeBounceMovementComponent.GetBaseFloorActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetBaseFloorActor(); // Offset: 0x101e521a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeBounceMovementComponent.GetBaseFloor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPrimitiveComponent* GetBaseFloor(); // Offset: 0x101e52184 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeModeLuaSpectatorPawn
// Size: 0x600 // Inherited bytes: 0x538
struct ACreativeModeLuaSpectatorPawn : ASpectatorPawn {
	// Fields
	char pad_0x538[0x58]; // Offset: 0x538 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x590 // Size: 0x50
	bool IsTopView; // Offset: 0x5e0 // Size: 0x01
	char pad_0x5E1[0x3]; // Offset: 0x5e1 // Size: 0x03
	IntProperty TopViewRotateAngle; // Offset: 0x5e4 // Size: 0x04
	StrProperty LuaFilePath; // Offset: 0x5e8 // Size: 0x10
	char pad_0x5F8[0x8]; // Offset: 0x5f8 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101e7f884 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.SetController
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetController(struct APlayerController* InController); // Offset: 0x101e7f808 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAbilitySystemComponentAvatar(); // Offset: 0x101e7f7f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101e7f778 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
	// Flags: [Native|Public|BlueprintCallable]
	void MoveRight(float Val); // Offset: 0x101e7f6f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
	// Flags: [Native|Public|BlueprintCallable]
	void MoveForward(float Val); // Offset: 0x101e7f670 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
	// Flags: [Native|Event|Public|BlueprintEvent]
	struct USpringArmComponent* GetActiveSpringArm(); // Offset: 0x101e7f634 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeCameraDeviceActor
// Size: 0x6c0 // Inherited bytes: 0x600
struct ACreativeCameraDeviceActor : ACreativeModeLuaSpectatorPawn {
	// Fields
	char pad_0x600[0x8]; // Offset: 0x600 // Size: 0x08
	bool bIsFollowing; // Offset: 0x608 // Size: 0x01
	char pad_0x609[0x3]; // Offset: 0x609 // Size: 0x03
	IntProperty FollowType; // Offset: 0x60c // Size: 0x04
	bool bIsLerping; // Offset: 0x610 // Size: 0x01
	char pad_0x611[0x3]; // Offset: 0x611 // Size: 0x03
	float LerpTime; // Offset: 0x614 // Size: 0x04
	float BlendExp; // Offset: 0x618 // Size: 0x04
	float BlendTimeToGo; // Offset: 0x61c // Size: 0x04
	float BlendTime; // Offset: 0x620 // Size: 0x04
	struct FVector SocketOffset; // Offset: 0x624 // Size: 0x0c
	struct FRotator RotatorOffset; // Offset: 0x630 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> FollowTarget; // Offset: 0x63c // Size: 0x08
	enum class EViewTargetBlendFunction BlendFunction; // Offset: 0x644 // Size: 0x01
	char pad_0x645[0x3]; // Offset: 0x645 // Size: 0x03
	struct FRotator ActorStartRot; // Offset: 0x648 // Size: 0x0c
	struct FRotator ActorTargetRot; // Offset: 0x654 // Size: 0x0c
	struct FVector targetPos; // Offset: 0x660 // Size: 0x0c
	struct FRotator TargetRot; // Offset: 0x66c // Size: 0x0c
	struct FVector StartPos; // Offset: 0x678 // Size: 0x0c
	struct FRotator StartRot; // Offset: 0x684 // Size: 0x0c
	float StartFOV; // Offset: 0x690 // Size: 0x04
	float StartArmLength; // Offset: 0x694 // Size: 0x04
	struct FRotator EndRot; // Offset: 0x698 // Size: 0x0c
	float EndFOV; // Offset: 0x6a4 // Size: 0x04
	float EndArmLength; // Offset: 0x6a8 // Size: 0x04
	char pad_0x6AC[0x4]; // Offset: 0x6ac // Size: 0x04
	struct FName SocketName; // Offset: 0x6b0 // Size: 0x08
	float MaxPilotDist; // Offset: 0x6b8 // Size: 0x04
	bool bPilotPosition; // Offset: 0x6bc // Size: 0x01
	char pad_0x6BD[0x3]; // Offset: 0x6bd // Size: 0x03

	// Functions

	// Object Name: Function Creative.CreativeCameraDeviceActor.UpdateFollowStatus
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void UpdateFollowStatus(); // Offset: 0x101e53d4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeCameraDeviceActor.UpdateFollowPos
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void UpdateFollowPos(); // Offset: 0x101e53d30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeCameraDeviceActor.RotCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RotCamera(float Yaw, float Pitch); // Offset: 0x101e53c7c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeCameraDeviceActor.OnEndViewTarget
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnEndViewTarget(struct APlayerController* PC); // Offset: 0x101e53bf8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCameraDeviceActor.OnBecomeViewTarget
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnBecomeViewTarget(struct APlayerController* PC); // Offset: 0x101e53b74 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCameraDeviceActor.MoveUp
	// Flags: [Native|Public|BlueprintCallable]
	void MoveUp(float Val); // Offset: 0x101e53af0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.MoveRight
	// Flags: [Native|Public|BlueprintCallable]
	void MoveRight(float Val); // Offset: 0x101e53a6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.MoveForward
	// Flags: [Native|Public|BlueprintCallable]
	void MoveForward(float Val); // Offset: 0x101e539e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.LerpToTarget
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void LerpToTarget(float DeltaSeconds); // Offset: 0x101e53964 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.LerpActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LerpActor(float BlendPct); // Offset: 0x101e538e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.IsVecInvalid
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsVecInvalid(struct FVector& Vect); // Offset: 0x101e53850 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Creative.CreativeCameraDeviceActor.IsRotInvalid
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsRotInvalid(struct FRotator& Rot); // Offset: 0x101e537b8 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Creative.CreativeCameraDeviceActor.InterpolateToSpringRotation
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void InterpolateToSpringRotation(float LerpValue); // Offset: 0x101e53734 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCameraDeviceActor.InitStartPoint
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool InitStartPoint(); // Offset: 0x101e536f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeCameraDeviceActor.GetSpringArmForCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct USpringArmComponent* GetSpringArmForCamera(struct UCameraComponent* Camera); // Offset: 0x101e5366c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeCameraDeviceActor.GetLerpTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetLerpTime(float BlendTimeToGo); // Offset: 0x101e535e0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeCameraDeviceActor.GetCameraPointPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector GetCameraPointPosition(); // Offset: 0x101e535a8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativeCameraDeviceActor.GetActiveCamera
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct UCameraComponent* GetActiveCamera(); // Offset: 0x101e5356c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeCameraGetter
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeCameraGetter : UInterface {
	// Functions

	// Object Name: Function Creative.CreativeCameraGetter.GetCameraLocation
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FVector GetCameraLocation(); // Offset: 0x101e5439c // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class Creative.CreativeCustomActorManager
// Size: 0x210 // Inherited bytes: 0x168
struct UCreativeCustomActorManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0xa8]; // Offset: 0x168 // Size: 0xa8

	// Functions

	// Object Name: Function Creative.CreativeCustomActorManager.UnhookUserConstructionScript
	// Flags: [Final|Native|Protected]
	bool UnhookUserConstructionScript(struct AActor* Actor); // Offset: 0x101e5496c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeCustomActorManager.SpawnCustomActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct AActor* SpawnCustomActor(struct UObject* ActorClass, struct FTransform& Transform); // Offset: 0x101e5487c // Return & Params: Num(3) Size(0x48)

	// Object Name: Function Creative.CreativeCustomActorManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCustomActorManager.ReceiveClearAllCustomActor
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveClearAllCustomActor(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeCustomActorManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e54800 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCustomActorManager.IsUserConstructionScriptHooked
	// Flags: [Final|Native|Public|Const]
	bool IsUserConstructionScriptHooked(struct AActor* Actor); // Offset: 0x101e54774 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeCustomActorManager.HookUserConstructionScript
	// Flags: [Final|Native|Protected]
	bool HookUserConstructionScript(struct AActor* Actor); // Offset: 0x101e546e8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeCustomActorManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeCustomActorManager* Get(struct UObject* WorldContext); // Offset: 0x101e5466c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeCustomActorManager.ClearAllCustomActor
	// Flags: [Final|Native|Public]
	void ClearAllCustomActor(); // Offset: 0x101e54658 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeCustomCameraComponent
// Size: 0x9c0 // Inherited bytes: 0x9a0
struct UCreativeCustomCameraComponent : UCameraComponent {
	// Fields
	float InterpTargetFOV; // Offset: 0x994 // Size: 0x04
	struct FRotator InterpTargetRotation; // Offset: 0x998 // Size: 0x0c
	float ConfigFOV; // Offset: 0x9a4 // Size: 0x04
	struct FRotator ConfigRotation; // Offset: 0x9a8 // Size: 0x0c

	// Functions

	// Object Name: Function Creative.CreativeCustomCameraComponent.InterpolateToTargetRotation
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void InterpolateToTargetRotation(float LerpValue); // Offset: 0x101e54e28 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCustomCameraComponent.InterpolateToTargetFOV
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void InterpolateToTargetFOV(float LerpValue); // Offset: 0x101e54da4 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Creative.CreativeCustomParameterManager
// Size: 0x248 // Inherited bytes: 0x168
struct UCreativeCustomParameterManager : UCreativeModeManagerBase {
	// Fields
	struct FCreativeCustomParameterDataContainer ReplicatedCustomParameterDataContainer; // Offset: 0x168 // Size: 0xc8
	char pad_0x230[0x18]; // Offset: 0x230 // Size: 0x18

	// Functions

	// Object Name: Function Creative.CreativeCustomParameterManager.RemoveCustomParameter
	// Flags: [Final|Native|Public]
	void RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey); // Offset: 0x101e55710 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Protected]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e55694 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCustomParameterDataNodes(uint32_t ParameterID, struct TArray<struct FCreativeCustomParameterDataNode>& OutCustomParameterDataNodes); // Offset: 0x101e555b0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeCustomParameterManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeCustomParameterManager* Get(struct UObject* WorldContext); // Offset: 0x101e55534 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeCustomParameterManager.ChangeCustomParameter
	// Flags: [Final|Native|Public|HasOutParms]
	void ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, uint8_t TeamID, struct TArray<char>& DataContent); // Offset: 0x101e553d8 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeCustomParameterManager.AddCustomParameter
	// Flags: [Final|Native|Public|HasOutParms]
	void AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, uint8_t TeamID, struct TArray<char>& DataContent, bool bPropagateToChildren); // Offset: 0x101e55228 // Return & Params: Num(5) Size(0x21)
};

// Object Name: Class Creative.CreativeCustomPrefabComponent
// Size: 0x238 // Inherited bytes: 0x238
struct UCreativeCustomPrefabComponent : ULuaActorComponent {
	// Functions

	// Object Name: Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	struct TArray<char> GetNodeSegmentContent(struct FCreativePrefabDataSegment& Segment); // Offset: 0x101e55e40 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	bool AddInstanceDataContent(struct FCreativeCustomPrefabDataSegment& Segment, struct TArray<char>& Content); // Offset: 0x101e55d18 // Return & Params: Num(3) Size(0x29)
};

// Object Name: Class Creative.CreativeCustomUIDataComponent
// Size: 0x3d0 // Inherited bytes: 0x238
struct UCreativeCustomUIDataComponent : ULuaActorComponent {
	// Fields
	struct FCreativeCustomUIContainer CustomUIContainer; // Offset: 0x238 // Size: 0xc8
	IntProperty SingleSerializeNum; // Offset: 0x300 // Size: 0x04
	char pad_0x304[0xb8]; // Offset: 0x304 // Size: 0xb8
	float DataNodePullInterval; // Offset: 0x3bc // Size: 0x04
	IntProperty SinglePullDataNodeNum; // Offset: 0x3c0 // Size: 0x04
	IntProperty TotalPullDataNodeNum; // Offset: 0x3c4 // Size: 0x04
	float DataNodePullTimeroutInterval; // Offset: 0x3c8 // Size: 0x04
	char pad_0x3CC[0x4]; // Offset: 0x3cc // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeCustomUIDataComponent.SetCustomUIDataFromTransferNodes
	// Flags: [Final|Native|Public|HasOutParms]
	void SetCustomUIDataFromTransferNodes(struct TArray<struct FCreativeCustomUIDataTransferNode>& TransferNodes); // Offset: 0x101e56ad8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.SetCustomUIDataById
	// Flags: [Final|Native|Public|HasOutParms]
	void SetCustomUIDataById(uint32_t ID, struct TArray<char>& Content); // Offset: 0x101e569f4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.RemoveCustomUI
	// Flags: [Final|Native|Public]
	void RemoveCustomUI(StrProperty ID); // Offset: 0x101e5695c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.GetCustomUIDataTransferNodes
	// Flags: [Final|Native|Public|HasOutParms]
	struct TArray<struct FCreativeCustomUIDataTransferNode> GetCustomUIDataTransferNodes(struct TArray<uint32_t>& IDList); // Offset: 0x101e5687c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.GetCustomUIContent
	// Flags: [Final|Native|Public|HasOutParms]
	bool GetCustomUIContent(StrProperty ID, struct TArray<char>& OutContent); // Offset: 0x101e56770 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.ChangeCustomUI
	// Flags: [Final|Native|Public|HasOutParms]
	void ChangeCustomUI(StrProperty ID, struct TArray<char>& Content); // Offset: 0x101e56674 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.CallOnReceivePreCustomUIDataRemove
	// Flags: [Final|Native|Public]
	void CallOnReceivePreCustomUIDataRemove(uint32_t ID); // Offset: 0x101e565f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.CallOnReceivePostCustomUIDataChange
	// Flags: [Final|Native|Public|HasOutParms]
	void CallOnReceivePostCustomUIDataChange(uint32_t ID, struct TArray<char>& Content); // Offset: 0x101e56514 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.CallOnReceivePostCustomUIDataAdd
	// Flags: [Final|Native|Public|HasOutParms]
	void CallOnReceivePostCustomUIDataAdd(uint32_t ID, struct TArray<char>& Content); // Offset: 0x101e56430 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeCustomUIDataComponent.AddCustomUI
	// Flags: [Final|Native|Public|HasOutParms]
	void AddCustomUI(StrProperty ID, struct TArray<char>& Content); // Offset: 0x101e56334 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.CreativeCustomUIVFXWidget
// Size: 0x3f0 // Inherited bytes: 0x3c0
struct UCreativeCustomUIVFXWidget : UCreativeBaseWidget {
	// Fields
	struct TArray<struct FCreativeVFXImageBlendConfig> BlendConfigs; // Offset: 0x3c0 // Size: 0x10
	char pad_0x3D0[0x10]; // Offset: 0x3d0 // Size: 0x10
	struct FLinearColor PreviewColor; // Offset: 0x3e0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeCustomUIVFXWidget.SetImageBrushMaterialBlend
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetImageBrushMaterialBlend(float V); // Offset: 0x101e57014 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Creative.CreativeDestructibleMeshActor
// Size: 0x4d0 // Inherited bytes: 0x4c0
struct ACreativeDestructibleMeshActor : APhotonDestructibleMeshActor {
	// Fields
	char pad_0x4C0[0x10]; // Offset: 0x4c0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeDestructibleMeshActor.SetDamageEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDamageEnable(bool bEnable); // Offset: 0x101e574d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeDestructibleMeshActor.OnHit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void OnHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x101e5738c // Return & Params: Num(4) Size(0xa8)

	// Object Name: Function Creative.CreativeDestructibleMeshActor.InitHP
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitHP(float fHP); // Offset: 0x101e57310 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeDestructibleMeshActor.GetFracturedComponent
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonDestructibleMeshComponent* GetFracturedComponent(); // Offset: 0x101e572d4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeDestructibleMeshActor.AddCanDamageWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddCanDamageWeapon(StrProperty Weapon); // Offset: 0x101e571f0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeDestructibleMeshBatchActor
// Size: 0x660 // Inherited bytes: 0x570
struct ACreativeDestructibleMeshBatchActor : ALuaActor {
	// Fields
	bool bUseHISM; // Offset: 0x569 // Size: 0x01
	IntProperty MinNumHISMRequired; // Offset: 0x56c // Size: 0x04
	IntProperty AtLeastLengthHISMRequired; // Offset: 0x570 // Size: 0x04
	float TickUpdateBatchInterval; // Offset: 0x574 // Size: 0x04
	IntProperty CellWidth; // Offset: 0x578 // Size: 0x04
	char pad_0x581[0xdf]; // Offset: 0x581 // Size: 0xdf

	// Functions

	// Object Name: Function Creative.CreativeDestructibleMeshBatchActor.RemoveAllCacheReplicationData
	// Flags: [Final|Native|Public]
	void RemoveAllCacheReplicationData(); // Offset: 0x101e57988 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeDropItemCurveAnimComponent
// Size: 0x420 // Inherited bytes: 0x2b0
struct UCreativeDropItemCurveAnimComponent : UDropItemCurveAnimComponent {
	// Fields
	char pad_0x2B0[0x58]; // Offset: 0x2b0 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x308 // Size: 0x10
	MapProperty DropAnimConfigs; // Offset: 0x318 // Size: 0x50
	MapProperty OverrideConfigs; // Offset: 0x368 // Size: 0x50
	MapProperty CreativeItemGroupList; // Offset: 0x3b8 // Size: 0x50
	IntProperty MaxCurveAnimItemNum; // Offset: 0x408 // Size: 0x04
	IntProperty ContainerRemoveTime; // Offset: 0x40c // Size: 0x04
	IntProperty PSCPoolLimit; // Offset: 0x410 // Size: 0x04
	IntProperty MaxDropAnimConfigCount; // Offset: 0x414 // Size: 0x04
	char pad_0x418[0x8]; // Offset: 0x418 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.StopItemClient
	// Flags: [Native|Public|BlueprintCallable]
	void StopItemClient(IntProperty Group, struct AActor* Target); // Offset: 0x101e583e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.OnParticleSystemComponentFinished
	// Flags: [Final|Native|Protected]
	void OnParticleSystemComponentFinished(struct UParticleSystemComponent* PSC); // Offset: 0x101e5836c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.IsInViewport
	// Flags: [Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	bool IsInViewport(struct APlayerController* PC, IntProperty ViewportX, IntProperty ViewportY, struct FVector& CenterPos); // Offset: 0x101e5821c // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.InitConfig
	// Flags: [Final|Native|Protected|HasOutParms]
	void InitConfig(struct FCreativeDropAnimConfig& Config, IntProperty BaseConfigID); // Offset: 0x101e58124 // Return & Params: Num(2) Size(0x10c)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.DynamicReduceItemGroup
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void DynamicReduceItemGroup(IntProperty CurrentGroup, IntProperty Num); // Offset: 0x101e58068 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.DecodeDropItemGroupID
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	void DecodeDropItemGroupID(IntProperty GroupID, IntProperty& ConfigID, IntProperty& Num); // Offset: 0x101e57f44 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeDropItemCurveAnimComponent.AddItemClient
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void AddItemClient(IntProperty Group, struct FVector InStartPos, struct FVector InEndPos, struct AActor* Target); // Offset: 0x101e57e0c // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class Creative.CreativeDSLParserLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeDSLParserLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeDSLParserLibrary.ParseDSLText
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDSLParserASTTree* ParseDSLText(struct UDSLParser* Parser, StrProperty Source); // Offset: 0x101e5d5dc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeDSLParserLibrary.ParseDSLFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDSLParserASTTree* ParseDSLFile(struct UDSLParser* Parser, StrProperty FilePath); // Offset: 0x101e5d508 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeDSLParserLibrary.LoadDSLGrammarFromString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool LoadDSLGrammarFromString(struct UDSLParser* Parser, StrProperty GrammarText); // Offset: 0x101e5d434 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Creative.CreativeDSLParserLibrary.LoadDSLGrammarFromFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool LoadDSLGrammarFromFile(struct UDSLParser* Parser, StrProperty FilePath); // Offset: 0x101e5d360 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Creative.CreativeDSLParserLibrary.CreateDSLParser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDSLParser* CreateDSLParser(struct UObject* WorldContextObject); // Offset: 0x101e5d2e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeDSLParserLibrary.AddDSLGrammarRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddDSLGrammarRule(struct UDSLParser* Parser, StrProperty RuleName, StrProperty RuleBody); // Offset: 0x101e5d1c4 // Return & Params: Num(3) Size(0x28)
};

// Object Name: Class Creative.CreativeModeLiteComponent
// Size: 0x158 // Inherited bytes: 0x40
struct UCreativeModeLiteComponent : ULiteComponent {
	// Fields
	char pad_0x40[0x68]; // Offset: 0x40 // Size: 0x68
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa8 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xf8 // Size: 0x10
	MapProperty PoolObjectRecordMap; // Offset: 0x108 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeModeLiteComponent.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101e7a1ac // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativeModeLiteComponent.GetObjectFromPool
	// Flags: [Final|Native|Public|HasOutParms]
	struct UObject* GetObjectFromPool(IntProperty PoolId, struct UObject* NewOuter, StrProperty& InName); // Offset: 0x101e7a07c // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class Creative.CreativeModeGameModeBaseComponent
// Size: 0x168 // Inherited bytes: 0x158
struct UCreativeModeGameModeBaseComponent : UCreativeModeLiteComponent {
	// Fields
	enum class ECreativeModeGameType GameType; // Offset: 0x158 // Size: 0x01
	char pad_0x159[0x7]; // Offset: 0x159 // Size: 0x07
	struct UCreativeModeGameStateBaseComponent* GameStateComponent; // Offset: 0x160 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGameStateComponent(struct UCreativeModeGameStateBaseComponent* NewGameStateComponent); // Offset: 0x101e61048 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePostInitializeComponents(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameModeBaseComponent.GetGameType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeGameType GetGameType(); // Offset: 0x101e6102c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ACreativeModeGameMode* GetGameMode(); // Offset: 0x101e60ff8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
	// Flags: [Event|Public|BlueprintEvent]
	struct AActor* FindPlayerStartOverride(struct AController* Player, StrProperty IncomingName, bool bIsRevive); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class Creative.CreativeModeEditorModeComponent
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeModeEditorModeComponent : UCreativeModeGameModeBaseComponent {
};

// Object Name: Class Creative.CreativeModeEditorObject
// Size: 0x760 // Inherited bytes: 0x570
struct ACreativeModeEditorObject : ALuaActor {
	// Fields
	char pad_0x570[0xa0]; // Offset: 0x570 // Size: 0xa0
	struct TArray<struct AActor*> ToIgnoreActors; // Offset: 0x610 // Size: 0x10
	enum class ECreativeModeActorState ActorState; // Offset: 0x620 // Size: 0x01
	char pad_0x621[0x7]; // Offset: 0x621 // Size: 0x07
	MapProperty PoolObjectRecordMap; // Offset: 0x628 // Size: 0x50
	uint8_t CanEditFlag; // Offset: 0x678 // Size: 0x01
	bool bIgnoreCollisionCheck; // Offset: 0x679 // Size: 0x01
	char pad_0x67A[0x6]; // Offset: 0x67a // Size: 0x06
	struct TArray<struct AActor*> IgnoreActors; // Offset: 0x680 // Size: 0x10
	struct FEditorObjectLiteComponentTickFunction LiteComponentActorTick; // Offset: 0x690 // Size: 0xb8
	struct TArray<struct ULiteComponent*> LiteComponents; // Offset: 0x748 // Size: 0x10
	char pad_0x758[0x8]; // Offset: 0x758 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterLiteComponent(struct ULiteComponent* Component, bool Destroy); // Offset: 0x101e5e788 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeEditorObject.ShowSelectedEffect
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void ShowSelectedEffect(bool ShowEff, struct FLinearColor OutlineColor, float OutlineThickness); // Offset: 0x101e5e684 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeModeEditorObject.ShowOutlineEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowOutlineEffect(bool ShowEff, struct UMaterialInstance* Material, StrProperty IgnoreTag); // Offset: 0x101e5e564 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeModeEditorObject.SetPhotographyMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPhotographyMode(bool bIsCapturing); // Offset: 0x101e5e4e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLiteComponentTickEnable(bool bEnabled); // Offset: 0x101e5e45c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.SetActorState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActorState(enum class ECreativeModeActorState NewState); // Offset: 0x101e5e3e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.ReturnObjectToPool
	// Flags: [Native|Public]
	void ReturnObjectToPool(struct UObject* Obj); // Offset: 0x101e5e35c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeEditorObject.ReturnObjectsToPool
	// Flags: [Native|Public]
	void ReturnObjectsToPool(struct TArray<struct UObject*> Objs); // Offset: 0x101e5e270 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeEditorObject.RegisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e5e1f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePostBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public|Const]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101e5e1c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitializeLiteComponent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveInitCanEditFlag(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ReceiveHasAuthority(); // Offset: 0x101e5e18c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
	// Flags: [Event|Protected|BlueprintEvent]
	void OnRepActorStateOverride(enum class ECreativeModeActorState NewState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.OnRep_ActorState
	// Flags: [Final|Native|Public]
	void OnRep_ActorState(enum class ECreativeModeActorState LastState); // Offset: 0x101e5e110 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.InCollisionState
	// Flags: [Final|Native|Public]
	bool InCollisionState(); // Offset: 0x101e5e0dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.GetObjectsFromPool
	// Flags: [Native|Public|HasOutParms]
	struct TArray<struct UObject*> GetObjectsFromPool(struct TArray<struct FCreativePoolGetObjectParamInfo>& ObjectParams); // Offset: 0x101e5dff4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeEditorObject.GetObjectFromPool
	// Flags: [Native|Public|HasOutParms]
	struct UObject* GetObjectFromPool(IntProperty PoolId, struct UObject* NewOuter, StrProperty& InName); // Offset: 0x101e5debc // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeModeEditorObject.GetLocationToIgnoreActors
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct AActor*> GetLocationToIgnoreActors(); // Offset: 0x101e5de58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeEditorObject.GetActorState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeActorState GetActorState(); // Offset: 0x101e5de24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULiteComponent* FindLiteComponentByClass(struct ULiteComponent* ComponentClass); // Offset: 0x101e5dd98 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeModeGameStateBaseComponent
// Size: 0x160 // Inherited bytes: 0x158
struct UCreativeModeGameStateBaseComponent : UCreativeModeLiteComponent {
	// Fields
	enum class ECreativeModeGameType GameType; // Offset: 0x158 // Size: 0x01
	char pad_0x159[0x7]; // Offset: 0x159 // Size: 0x07

	// Functions

	// Object Name: Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivePostInitializeComponents(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	enum class ECreativeModePlayState GetPlayState(); // Offset: 0x101e6a8a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameStateBaseComponent.GetGameType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeGameType GetGameType(); // Offset: 0x101e6a88c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameStateBaseComponent.GetGameState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ACreativeModeGameState* GetGameState(); // Offset: 0x101e6a858 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeModeEditorStateComponent
// Size: 0x160 // Inherited bytes: 0x160
struct UCreativeModeEditorStateComponent : UCreativeModeGameStateBaseComponent {
};

// Object Name: Class Creative.CreativeEventObject
// Size: 0xf0 // Inherited bytes: 0xf0
struct UCreativeEventObject : UCreativeLuaSignalObjectBase {
	// Functions

	// Object Name: Function Creative.CreativeEventObject.ReHookObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReHookObject(); // Offset: 0x101e5f0c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeEventObject.EventObjectConditionalBeginDestroy
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EventObjectConditionalBeginDestroy(); // Offset: 0x101e5f0ac // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeExportSandboxApiLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeExportSandboxApiLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.IsObjectValid
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsObjectValid(struct UObject* Object); // Offset: 0x101e5f780 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.IsObjectA
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsObjectA(struct UObject* Object, StrProperty ClassName); // Offset: 0x101e5f6ac // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectWorld
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UWorld* GetObjectWorld(struct UObject* Object); // Offset: 0x101e5f630 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectPathName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetObjectPathName(struct UObject* Object); // Offset: 0x101e5f58c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectOuter
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UObject* GetObjectOuter(struct UObject* Object); // Offset: 0x101e5f510 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetObjectName(struct UObject* Object); // Offset: 0x101e5f46c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectFullName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetObjectFullName(struct UObject* Object); // Offset: 0x101e5f3c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.GetObjectClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UObject* GetObjectClass(struct UObject* Object); // Offset: 0x101e5f34c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeExportSandboxApiLibrary.FindObjectFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UFunction* FindObjectFunction(struct UObject* Object, StrProperty FunctionName); // Offset: 0x101e5f278 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class Creative.CreativeGameAPIObject
// Size: 0x188 // Inherited bytes: 0x188
struct UCreativeGameAPIObject : UCreativeApiObject {
	// Functions

	// Object Name: Function Creative.CreativeGameAPIObject.GetPlayersInSphere
	// Flags: [Final|Native|Public|HasDefaults]
	struct TArray<int64_t> GetPlayersInSphere(struct FVector SphereCenter, float SphereRadius, IntProperty TeamID, bool FilterNonPlayable); // Offset: 0x101e5fd74 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Creative.CreativeGameAPIObject.GetPlayersInRectangle
	// Flags: [Final|Native|Public|HasDefaults]
	struct TArray<int64_t> GetPlayersInRectangle(struct FVector RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, IntProperty TeamID, bool FilterNonPlayable); // Offset: 0x101e5fb94 // Return & Params: Num(7) Size(0x30)
};

// Object Name: Class Creative.CreativeModeGameMode
// Size: 0x2578 // Inherited bytes: 0x23e8
struct ACreativeModeGameMode : ABattleRoyaleGameModeTeam {
	// Fields
	struct UCreativeModeGameModeBaseComponent* CurrentModeComponent; // Offset: 0x23e8 // Size: 0x08
	struct TArray<struct UCreativeModeGameModeBaseComponent*> GameModeComponentClassArray; // Offset: 0x23f0 // Size: 0x10
	struct UCreativeModeGameModeComponent* GameModeComponentClass; // Offset: 0x2400 // Size: 0x08
	MapProperty MapPlaneRouteConfigs; // Offset: 0x2408 // Size: 0x50
	MapProperty MapVehicleClassPathConfigs; // Offset: 0x2458 // Size: 0x50
	enum class ECreativeModeGameType EditorStartupGameType; // Offset: 0x24a8 // Size: 0x01
	char pad_0x24A9[0x1]; // Offset: 0x24a9 // Size: 0x01
	bool bIsCreativeWoW; // Offset: 0x24aa // Size: 0x01
	uint8_t FindPlayerStartOverrideFlag; // Offset: 0x24ab // Size: 0x01
	char pad_0x24AC[0x4]; // Offset: 0x24ac // Size: 0x04
	struct FGameModeLiteComponentTickFunction LiteComponentActorTick; // Offset: 0x24b0 // Size: 0xb8
	struct TArray<struct ULiteComponent*> LiteComponents; // Offset: 0x2568 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeGameMode.UnregisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e608e0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameMode.SetShowDropEffectEnable
	// Flags: [Final|Native|Public]
	void SetShowDropEffectEnable(bool Enable); // Offset: 0x101e6085c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLiteComponentTickEnable(bool bEnabled); // Offset: 0x101e607d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.SetItemGenerate
	// Flags: [Native|Event|Public|BlueprintEvent]
	void SetItemGenerate(bool bIsOpen); // Offset: 0x101e6074c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.SetCurrentGameType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentGameType(enum class ECreativeModeGameType NewGameType); // Offset: 0x101e606d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.ReInitItemGenerate
	// Flags: [Final|Native|Public|HasOutParms]
	void ReInitItemGenerate(StrProperty& NewItemClassPath); // Offset: 0x101e60628 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameMode.RegisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e605ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitializeLiteComponent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameMode.IsStandAloneGameMode
	// Flags: [Native|Public]
	bool IsStandAloneGameMode(); // Offset: 0x101e60570 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
	// Flags: [Native|Public]
	bool IsRestartPlayerUsePawnRotation(); // Offset: 0x101e60534 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameMode.GetCurrentModeComponent
	// Flags: [Final|Native|Public]
	struct UCreativeModeGameModeBaseComponent* GetCurrentModeComponent(); // Offset: 0x101e60518 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
	// Flags: [Final|Native|Public]
	IntProperty GetCreativeModeRealTeamNum(); // Offset: 0x101e604e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
	// Flags: [Final|Native|Public]
	struct TArray<IntProperty> GetCreativeModeRealTeamIDs(); // Offset: 0x101e60480 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameMode.FindLiteComponentByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULiteComponent* FindLiteComponentByClass(struct ULiteComponent* ComponentClass); // Offset: 0x101e603f4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameMode.DSPlayerKickOut
	// Flags: [Final|Native|Public]
	void DSPlayerKickOut(uint64 UID, struct FName PlayerType, StrProperty ExitReason); // Offset: 0x101e6028c // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	struct AActor* CreativeModeFindPlayerStart(struct AController* Player, StrProperty IncomingName, bool bIsRevive); // Offset: 0x101e60160 // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class Creative.CreativeModeGameModeComponent
// Size: 0x198 // Inherited bytes: 0x168
struct UCreativeModeGameModeComponent : UCreativeModeGameModeBaseComponent {
	// Fields
	struct UCreativeModeRaceCheckPointLiteComponent* RaceCheckPointComponentClass; // Offset: 0x168 // Size: 0x08
	struct UCreativeModeRaceCheckPointLiteComponent* RaceCheckPointComponent; // Offset: 0x170 // Size: 0x08
	struct UCreativeOccupationAreaLiteComponent* OccupationAreaComponentClass; // Offset: 0x178 // Size: 0x08
	struct UCreativeOccupationAreaLiteComponent* OccupationAreaComponent; // Offset: 0x180 // Size: 0x08
	struct UCreativeModeLiteComponent* TeleporterComponentClass; // Offset: 0x188 // Size: 0x08
	struct UCreativeModeLiteComponent* TeleporterComponent; // Offset: 0x190 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveCallPlayStateFunction(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeGameObject
// Size: 0x1a0 // Inherited bytes: 0x28
struct UCreativeModeGameObject : UObject {
	// Fields
	char pad_0x28[0x100]; // Offset: 0x28 // Size: 0x100
	StrProperty LuaFilePath; // Offset: 0x128 // Size: 0x10
	char pad_0x138[0x8]; // Offset: 0x138 // Size: 0x08
	MapProperty PoolObjectRecordMap; // Offset: 0x140 // Size: 0x50
	struct TArray<struct ULiteComponent*> LiteComponents; // Offset: 0x190 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeGameObject.UnregisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterLiteComponent(struct ULiteComponent* Component, bool Destroy); // Offset: 0x101e619d0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeGameObject.ReturnObjectToPool
	// Flags: [Native|Public]
	void ReturnObjectToPool(struct UObject* Obj); // Offset: 0x101e6194c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameObject.ReturnObjectsToPool
	// Flags: [Native|Public]
	void ReturnObjectsToPool(struct TArray<struct UObject*> Objs); // Offset: 0x101e61860 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameObject.RegisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e617e4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceivePostBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public|Const]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101e617b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameObject.ReceiveHasAuthority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ReceiveHasAuthority(); // Offset: 0x101e6177c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameObject.ReceiveEndPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveEndPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameObject.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameObject.GetObjectsFromPool
	// Flags: [Native|Public|HasOutParms]
	struct TArray<struct UObject*> GetObjectsFromPool(struct TArray<struct FCreativePoolGetObjectParamInfo>& ObjectParams); // Offset: 0x101e61694 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeGameObject.GetObjectFromPool
	// Flags: [Native|Public|HasOutParms]
	struct UObject* GetObjectFromPool(IntProperty PoolId, struct UObject* NewOuter, StrProperty& InName); // Offset: 0x101e6155c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeModeGameObject.GetDynamicSpawnObjUUIDs
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<StrProperty> GetDynamicSpawnObjUUIDs(); // Offset: 0x101e614f8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeGameParameterManager
// Size: 0x420 // Inherited bytes: 0x168
struct UCreativeGameParameterManager : UCreativeModeManagerBase {
	// Fields
	struct FCreativeGameParameterContainer GameParameterContainer; // Offset: 0x168 // Size: 0xc8
	char pad_0x230[0x4]; // Offset: 0x230 // Size: 0x04
	IntProperty SingleSerializeNum; // Offset: 0x234 // Size: 0x04
	IntProperty SingleSerializeBytes; // Offset: 0x238 // Size: 0x04
	bool bGameParameterResumeEnable; // Offset: 0x23c // Size: 0x01
	char pad_0x23D[0x3]; // Offset: 0x23d // Size: 0x03
	struct FCreativeGameParameterResumeContainer GameParameterResumeContainer; // Offset: 0x240 // Size: 0x118
	char pad_0x358[0xb4]; // Offset: 0x358 // Size: 0xb4
	float ResumeNodePullInterval; // Offset: 0x40c // Size: 0x04
	IntProperty SinglePullResumeNodeNum; // Offset: 0x410 // Size: 0x04
	IntProperty TotalPullResumeNodeNum; // Offset: 0x414 // Size: 0x04
	float ResumeNodePullTimeroutInterval; // Offset: 0x418 // Size: 0x04
	IntProperty HistoryDataMaxCount; // Offset: 0x41c // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeGameParameterManager.SetGameParameterResumeNodes
	// Flags: [Final|Native|Public]
	void SetGameParameterResumeNodes(struct TArray<struct FCreativeGameParameter> GameParameterNodes); // Offset: 0x101e62dbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGameParameterManager.RemoveGameParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveGameParameter(StrProperty ParameterKey, StrProperty TemplateID); // Offset: 0x101e62c84 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceivePreGameParameterRemove(StrProperty ParameterKey, StrProperty TemplateID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostGameParameterChange(StrProperty ParameterKey, StrProperty TemplateID, struct TArray<char>& Content); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostGameParameterAdd(StrProperty ParameterKey, StrProperty TemplateID, struct TArray<char>& Content); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Protected]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e62c08 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeGameParameterManager.GetHistoryData
	// Flags: [Final|Native|Public|HasOutParms]
	bool GetHistoryData(uint32_t HeadHash, char Seq, struct TArray<char>& OutContent); // Offset: 0x101e62ad8 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Creative.CreativeGameParameterManager.GetGameParameterResumeNodes
	// Flags: [Final|Native|Public]
	struct TArray<struct FCreativeGameParameter> GetGameParameterResumeNodes(struct TArray<uint32_t> ParameterHeadHashs); // Offset: 0x101e629c0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeGameParameterManager.GetGameParameterContent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetGameParameterContent(StrProperty ParameterKey, StrProperty TemplateID, struct TArray<char>& OutContent); // Offset: 0x101e62814 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Creative.CreativeGameParameterManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeGameParameterManager* Get(struct UObject* WorldContext); // Offset: 0x101e62798 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeGameParameterManager.ChangeGameParameter
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeGameParameter(StrProperty ParameterKey, StrProperty TemplateID, struct TArray<char>& Content); // Offset: 0x101e625f4 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeGameParameterManager.AddGameParameter
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AddGameParameter(StrProperty ParameterKey, StrProperty TemplateID, struct TArray<char>& Content); // Offset: 0x101e62450 // Return & Params: Num(3) Size(0x30)
};

// Object Name: Class Creative.CreativeModeGameState
// Size: 0x1760 // Inherited bytes: 0x1620
struct ACreativeModeGameState : ASTExtraGameStateBase {
	// Fields
	IntProperty EditorBindTemplateID; // Offset: 0x1620 // Size: 0x04
	char pad_0x1624[0x2]; // Offset: 0x1624 // Size: 0x02
	char bIsCreativeMode : 1; // Offset: 0x1626 // Size: 0x01
	char pad_0x1626_1 : 7; // Offset: 0x1626 // Size: 0x01
	enum class ECreativeModeGameType CurrentGameType; // Offset: 0x1627 // Size: 0x01
	enum class ECreativeModeGameType CurrentGameTypeReplicated; // Offset: 0x1628 // Size: 0x01
	enum class ECreativeModeGameType InitializeGameType; // Offset: 0x1629 // Size: 0x01
	char pad_0x162A[0x2]; // Offset: 0x162a // Size: 0x02
	IntProperty CreativeModID; // Offset: 0x162c // Size: 0x04
	IntProperty CreativeModTemplateId; // Offset: 0x1630 // Size: 0x04
	bool bEnvLuaRunning; // Offset: 0x1634 // Size: 0x01
	char pad_0x1635[0x3]; // Offset: 0x1635 // Size: 0x03
	struct UCreativeModeGameStateBaseComponent* CurrentStateComponent; // Offset: 0x1638 // Size: 0x08
	struct UCreativeModeGameStateBaseComponent* WaitCurrentStateComponent; // Offset: 0x1640 // Size: 0x08
	bool CurrentStateComponentTest; // Offset: 0x1648 // Size: 0x01
	char pad_0x1649[0x7]; // Offset: 0x1649 // Size: 0x07
	struct UCreativeModeGameStateBaseComponent* LastStateComponent; // Offset: 0x1650 // Size: 0x08
	struct TArray<struct UCreativeModeGameStateBaseComponent*> GameStateComponentClassArray; // Offset: 0x1658 // Size: 0x10
	struct UCreativeModeGameStateComponent* GameStateComponentClass; // Offset: 0x1668 // Size: 0x08
	bool bIsCreativeWoW; // Offset: 0x1670 // Size: 0x01
	bool bIsAIUseDynamicBehaviorTaskNode; // Offset: 0x1671 // Size: 0x01
	char pad_0x1672[0x16]; // Offset: 0x1672 // Size: 0x16
	struct TArray<struct FExtendedBlockySlotString> BlockySlotStrings; // Offset: 0x1688 // Size: 0x10
	struct FGameStateLiteComponentTickFunction LiteComponentActorTick; // Offset: 0x1698 // Size: 0xb8
	struct TArray<struct ULiteComponent*> LiteComponents; // Offset: 0x1750 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeGameState.UnregisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e648fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLiteComponentTickEnable(bool bEnabled); // Offset: 0x101e64878 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.SetEnvLuaRunning
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEnvLuaRunning(bool bRunning); // Offset: 0x101e647f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.SetCurrentGameType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentGameType(enum class ECreativeModeGameType NewGameType); // Offset: 0x101e64778 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent
	// Flags: [Net|NetReliableNative|Event|UbergraphFunction|Public]
	void RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, struct FCreativeInstanceDataContent InstanceDataContent); // Offset: 0x101e64668 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Creative.CreativeModeGameState.RPC_Replay_GeneraicUGC_LuaImpl
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void RPC_Replay_GeneraicUGC_LuaImpl(struct TArray<char>& Content); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.RPC_Replay_GeneraicUGC
	// Flags: [Net|Native|Event|UbergraphFunction|Public]
	void RPC_Replay_GeneraicUGC(struct TArray<char> Content); // Offset: 0x101e645c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.RegisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101e6454c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveInitializeLiteComponent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.ReceiveCreativeCollectGarbage
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveCreativeCollectGarbage(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.ReceiveAddEnvLuaRunningToCrashKit
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAddEnvLuaRunningToCrashKit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.ReceiveAddContextDataToCrashKit
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAddContextDataToCrashKit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.OnViewportSizeChanged
	// Flags: [Final|Native|Protected|HasDefaults]
	void OnViewportSizeChanged(struct FVector2D OldViewportSize, struct FVector2D NewViewportSize); // Offset: 0x101e6449c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_InitializeGameType
	// Flags: [Final|Native|Protected]
	void OnRep_InitializeGameType(enum class ECreativeModeGameType LastInitializeGameType); // Offset: 0x101e64420 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_EnvLuaRunning
	// Flags: [Final|Native|Protected]
	void OnRep_EnvLuaRunning(bool OldLuaRunning); // Offset: 0x101e6439c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
	// Flags: [Final|Native|Protected]
	void OnRep_CurrentStateComponent(struct UCreativeModeGameStateBaseComponent* LastComponent); // Offset: 0x101e64320 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_CurrentGameTypeReplicated
	// Flags: [Final|Native|Protected]
	void OnRep_CurrentGameTypeReplicated(enum class ECreativeModeGameType LastCurrentGameTypeReplicated); // Offset: 0x101e642a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_CreativeModTemplateId
	// Flags: [Final|Native|Protected]
	void OnRep_CreativeModTemplateId(IntProperty LastCreativeModTemplateId); // Offset: 0x101e64228 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_CreativeModID
	// Flags: [Final|Native|Protected]
	void OnRep_CreativeModID(IntProperty LastCreativeModID); // Offset: 0x101e641ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.OnRep_BlockySlotStrings
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	void OnRep_BlockySlotStrings(struct TArray<struct FExtendedBlockySlotString>& BlockySlotStrings); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.OnCurrentStateComponentChanged
	// Flags: [Final|Native|Protected]
	void OnCurrentStateComponentChanged(struct UCreativeModeGameStateBaseComponent* LastComponent); // Offset: 0x101e64130 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.OnClientRecordingStateChange
	// Flags: [Final|Native|Public]
	void OnClientRecordingStateChange(enum class EClientRecordingType Type); // Offset: 0x101e640b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsOfficialGame
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOfficialGame(); // Offset: 0x101e6408c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsEditorMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsEditorMode(); // Offset: 0x101e64064 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsDemoGame
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDemoGame(); // Offset: 0x101e64028 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsCreativeMode
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	bool IsCreativeMode(); // Offset: 0x101e63fec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsCreativeEditor
	// Flags: [Native|Public]
	bool IsCreativeEditor(); // Offset: 0x101e63fb0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.IsAIUseDynamicBehaviorTaskNode
	// Flags: [Native|Public]
	bool IsAIUseDynamicBehaviorTaskNode(); // Offset: 0x101e63f74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.InitCreativeModID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitCreativeModID(IntProperty ModID, IntProperty TemplateID); // Offset: 0x101e63ec0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.GetPlayState
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	enum class ECreativeModePlayState GetPlayState(); // Offset: 0x101e63e8c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.GetInitializeGameType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeGameType GetInitializeGameType(); // Offset: 0x101e63e6c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.GetEnvLuaRunning
	// Flags: [Native|Public]
	bool GetEnvLuaRunning(); // Offset: 0x101e63e30 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetDisableDistanceLevelsOutsideBox(float X, float Y, IntProperty W, IntProperty L, float RotationAngle, bool bUseFilter); // Offset: 0x101e63c4c // Return & Params: Num(7) Size(0x28)

	// Object Name: Function Creative.CreativeModeGameState.GetCurrentStateComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UCreativeModeGameStateBaseComponent* GetCurrentStateComponent(); // Offset: 0x101e63c30 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.GetCurrentGameTypeReplicated
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeGameType GetCurrentGameTypeReplicated(); // Offset: 0x101e63c10 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.GetCurrentGameType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ECreativeModeGameType GetCurrentGameType(); // Offset: 0x101e63bf0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameState.GetCurCreativeType
	// Flags: [Native|Public]
	IntProperty GetCurCreativeType(); // Offset: 0x101e63bb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.GetCurCreativeModResList
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetCurCreativeModResList(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.GetCurCreativeModMapID
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetCurCreativeModMapID(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.GetCurCreativeModID
	// Flags: [Native|Public]
	IntProperty GetCurCreativeModID(); // Offset: 0x101e63b78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.GetCreativeModTemplateId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCreativeModTemplateId(); // Offset: 0x101e63b5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.GetCreativeModID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCreativeModID(); // Offset: 0x101e63b40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeGameState.FindLiteComponentByClass
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULiteComponent* FindLiteComponentByClass(struct ULiteComponent* ComponentClass); // Offset: 0x101e63ab4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameState.FilterLevelByName
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool FilterLevelByName(struct FName LevelName); // Offset: 0x101e63a20 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeModeGameState.ClientSetCurrentStateComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClientSetCurrentStateComponent(struct UCreativeModeGameStateBaseComponent* CurStateComponent); // Offset: 0x101e639a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameState.ClearInstance
	// Flags: [Final|Native|Public]
	void ClearInstance(); // Offset: 0x101e63990 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.ClearAndReImportInstance
	// Flags: [Final|Native|Protected]
	void ClearAndReImportInstance(); // Offset: 0x101e6397c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameState.CanShowDropEffectByItemID
	// Flags: [Native|Public]
	bool CanShowDropEffectByItemID(IntProperty ItemId); // Offset: 0x101e638e8 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class Creative.CreativeModeGameStateComponent
// Size: 0x188 // Inherited bytes: 0x160
struct UCreativeModeGameStateComponent : UCreativeModeGameStateBaseComponent {
	// Fields
	struct UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponentClass; // Offset: 0x160 // Size: 0x08
	struct UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent; // Offset: 0x168 // Size: 0x08
	struct ACreativeRuntimePlayerBattleDataObject* RuntimePlayerBattleDataObjectClass; // Offset: 0x170 // Size: 0x08
	struct ACreativeRuntimePlayerBattleDataObject* RuntimePlayerBattleDataObject; // Offset: 0x178 // Size: 0x08
	enum class ECreativeModePlayState CurPlayState; // Offset: 0x180 // Size: 0x01
	char pad_0x181[0x7]; // Offset: 0x181 // Size: 0x07

	// Functions

	// Object Name: Function Creative.CreativeModeGameStateComponent.SetPlayState
	// Flags: [Final|Native|Protected]
	void SetPlayState(enum class ECreativeModePlayState newPlayState); // Offset: 0x101e6ab8c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
	// Flags: [Final|Native|Protected]
	void OnRep_RuntimePlayerBattleDataObject(); // Offset: 0x101e6ab78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
	// Flags: [Final|Native|Protected]
	void OnRep_IntegralMechanismComponent(); // Offset: 0x101e6ab64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
	// Flags: [Final|Native|Protected]
	void OnRep_CurPlayState(); // Offset: 0x101e6ab50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameStateComponent.GetPlayState
	// Flags: [Native|Protected|BlueprintCallable|BlueprintPure]
	enum class ECreativeModePlayState GetPlayState(); // Offset: 0x101e6ab14 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Creative.CreativeGlobalApiObject
// Size: 0x188 // Inherited bytes: 0x188
struct UCreativeGlobalApiObject : UCreativeApiObject {
	// Functions

	// Object Name: Function Creative.CreativeGlobalApiObject.Print
	// Flags: [Final|Native|Public]
	void Print(StrProperty LogText); // Offset: 0x101e6af80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGlobalApiObject.CPPExecutionConsumptionTest
	// Flags: [Final|Native|Public]
	float CPPExecutionConsumptionTest(IntProperty A, float B, double C); // Offset: 0x101e6ae7c // Return & Params: Num(4) Size(0x14)
};

// Object Name: Class Creative.CreativeGridLevelsManager
// Size: 0x600 // Inherited bytes: 0x168
struct UCreativeGridLevelsManager : UCreativeModeManagerBase {
	// Fields
	bool bDestructibleMeshForceHISM; // Offset: 0x168 // Size: 0x01
	bool bDestructibleMeshEnableBrokenEffect; // Offset: 0x169 // Size: 0x01
	char pad_0x16A[0x46]; // Offset: 0x16a // Size: 0x46
	struct TArray<StrProperty> GridLevelList; // Offset: 0x1b0 // Size: 0x10
	MapProperty GridLevelConfigs; // Offset: 0x1c0 // Size: 0x50
	MapProperty GridLevelsMap; // Offset: 0x210 // Size: 0x50
	MapProperty ObjectCellIndexMap; // Offset: 0x260 // Size: 0x50
	struct TArray<StrProperty> AlwaysLoadLevel; // Offset: 0x2b0 // Size: 0x10
	char pad_0x2C0[0x10]; // Offset: 0x2c0 // Size: 0x10
	struct TArray<StrProperty> RefreshBatchDataInstances; // Offset: 0x2d0 // Size: 0x10
	bool bStaticMeshObjectBatchSwitch; // Offset: 0x2e0 // Size: 0x01
	bool bAroundRelieveBatchSwitch; // Offset: 0x2e1 // Size: 0x01
	char pad_0x2E2[0x2]; // Offset: 0x2e2 // Size: 0x02
	float EditorModeUpdateTime; // Offset: 0x2e4 // Size: 0x04
	float DelayUpdateBatchTime; // Offset: 0x2e8 // Size: 0x04
	float TickUpdateBatchInterval; // Offset: 0x2ec // Size: 0x04
	float ReBatchDistance; // Offset: 0x2f0 // Size: 0x04
	float RelieveBatchDistance; // Offset: 0x2f4 // Size: 0x04
	bool bRelieveBatchDelayUpdateSwitch; // Offset: 0x2f8 // Size: 0x01
	char pad_0x2F9[0x3]; // Offset: 0x2f9 // Size: 0x03
	float RelieveBatchDelayTime; // Offset: 0x2fc // Size: 0x04
	bool bIncrementalRefreshEnable; // Offset: 0x300 // Size: 0x01
	bool bHISMBatchForceSwitch; // Offset: 0x301 // Size: 0x01
	bool bFineBatchSwitch; // Offset: 0x302 // Size: 0x01
	bool bDynamicChangeHISMSwitch; // Offset: 0x303 // Size: 0x01
	bool bPostUpdateISMBufferCompleteEventFlag; // Offset: 0x304 // Size: 0x01
	char pad_0x305[0x3]; // Offset: 0x305 // Size: 0x03
	IntProperty UpdateIsmNumPerFrame; // Offset: 0x308 // Size: 0x04
	char pad_0x30C[0x194]; // Offset: 0x30c // Size: 0x194
	MapProperty SingleBatchActorMap; // Offset: 0x4a0 // Size: 0x50
	char pad_0x4F0[0xf0]; // Offset: 0x4f0 // Size: 0xf0
	struct TArray<StrProperty> ChangeMaterialIdInstanceIDs; // Offset: 0x5e0 // Size: 0x10
	char pad_0x5F0[0x10]; // Offset: 0x5f0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances
	// Flags: [Final|Native|Public]
	void UpdateBatchActorInstances(StrProperty GridName, IntProperty AssetId, IntProperty MaterialID, bool ReplaceAll); // Offset: 0x101e6d7d4 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void UnLoadGridLevelsBatchActor(StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e6d6f0 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch
	// Flags: [Final|Native|Public|HasOutParms]
	void StaticMeshObjectRelieveBatch(StrProperty& InstanceID); // Offset: 0x101e6d648 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch
	// Flags: [Final|Native|Public|HasOutParms]
	void StaticMeshObjectReBatch(StrProperty& InstanceID); // Offset: 0x101e6d5a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.RemoveObject
	// Flags: [Final|Native|Public]
	bool RemoveObject(StrProperty InstanceID); // Offset: 0x101e6d4f8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveRegistInstanceValueListener(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
	// Flags: [Final|Native|Public]
	void ReceiveDelayUpdateBatchActorInstances(StrProperty GridName, IntProperty AssetId, IntProperty MaterialID, bool ReplaceAll, float MoveForwardTimeStamp); // Offset: 0x101e6d354 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Creative.CreativeGridLevelsManager.ReceiveClearAllData
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveClearAllData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch
	// Flags: [Event|Public|BlueprintEvent]
	bool ReceiveCheckObjectCanBatch(StrProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap
	// Flags: [Final|Native|Public|HasDefaults]
	void ObjectAddToGridCellMap(StrProperty GridName, struct FIntVector Index, StrProperty InstanceID); // Offset: 0x101e6d1cc // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void LoadGridLevelsBatchActor(StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e6d0e8 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode
	// Flags: [Final|Native|Private]
	bool IsCreativeEidtMode(); // Offset: 0x101e6d0b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject
	// Flags: [Final|Native|Public|HasDefaults]
	void GridCellMapRemoveObject(StrProperty GridName, struct FIntVector Index, StrProperty InstanceID); // Offset: 0x101e6cf2c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetStaticMeshBatchActorPath(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetSingleDestructibleMeshBatchActor
	// Flags: [Final|Native|Private]
	struct ACreativeDestructibleMeshBatchActor* GetSingleDestructibleMeshBatchActor(); // Offset: 0x101e6cef8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetSingleBatchActor
	// Flags: [Final|Native|Public]
	struct ACreativeModeStaticMeshBatchActor* GetSingleBatchActor(StrProperty GridName); // Offset: 0x101e6ce50 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance
	// Flags: [Final|Native|Public]
	float GetRelieveBatchDistance(); // Offset: 0x101e6ce1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetReBatchDistance
	// Flags: [Final|Native|Public]
	float GetReBatchDistance(); // Offset: 0x101e6cde8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetOnCellIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct FIntVector GetOnCellIndex(StrProperty GridName, struct FVector& Location); // Offset: 0x101e6cce8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectTransform
	// Flags: [Final|Native|Private|HasDefaults]
	struct FTransform GetObjectTransform(StrProperty ID); // Offset: 0x101e6cc2c // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectStreamingType
	// Flags: [Final|Native|Private]
	enum class ECreativeModeActorStreamingType GetObjectStreamingType(StrProperty ID); // Offset: 0x101e6cb84 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid
	// Flags: [Final|Native|Public]
	StrProperty GetObjectRuntimeGrid(StrProperty ID); // Offset: 0x101e6cab4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndexByLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct FIntVector GetObjectOnCellIndexByLocation(StrProperty InstanceID, StrProperty GridName, struct FVector& Location); // Offset: 0x101e6c960 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndex
	// Flags: [Final|Native|Public|HasDefaults]
	struct FIntVector GetObjectOnCellIndex(StrProperty InstanceID); // Offset: 0x101e6c8ac // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab
	// Flags: [Final|Native|Private]
	bool GetObjectIsPrefab(StrProperty ID); // Offset: 0x101e6c804 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetObjectAssetID
	// Flags: [Final|Native|Private]
	IntProperty GetObjectAssetID(StrProperty ID); // Offset: 0x101e6c75c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetGridLoadingRange
	// Flags: [Final|Native|Public]
	float GetGridLoadingRange(StrProperty GridName); // Offset: 0x101e6c6b4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetGridList
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetGridList(); // Offset: 0x101e6c650 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetDestructibleMeshBatchActorPath
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetDestructibleMeshBatchActorPath(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetDefaultGridName
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty GetDefaultGridName(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetCellWidthHeight
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector2D GetCellWidthHeight(StrProperty GridName); // Offset: 0x101e6c5a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetCellCenterLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct FVector GetCellCenterLocation(StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e6c4a8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeGridLevelsManager.GetAxisIndex
	// Flags: [Final|Native|Public|Const]
	IntProperty GetAxisIndex(float pos, float BlockLenght); // Offset: 0x101e6c3e4 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativeGridLevelsManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeGridLevelsManager* Get(struct UObject* WorldContext); // Offset: 0x101e6c368 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch
	// Flags: [Final|Native|Private]
	bool CheckObjectBeRelieveBatch(StrProperty ID); // Offset: 0x101e6c2c0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch
	// Flags: [Final|Native|Public]
	bool CheckObjectBeBatch(StrProperty ID); // Offset: 0x101e6c218 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData
	// Flags: [Final|Native|Public]
	bool CheckAndRemoveObjectForBatchData(StrProperty ID); // Offset: 0x101e6c170 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData
	// Flags: [Final|Native|Public]
	bool CheckAndAddObjectToBatchData(StrProperty ID); // Offset: 0x101e6c0c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ChangeObjectTransform
	// Flags: [Final|Native|Public]
	bool ChangeObjectTransform(StrProperty InstanceID); // Offset: 0x101e6c020 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType
	// Flags: [Final|Native|Public]
	bool ChangeObjectStreamingType(StrProperty InstanceID, enum class ECreativeModeActorStreamingType NewStremaingType); // Offset: 0x101e6bf38 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialIds
	// Flags: [Final|Native|Public]
	bool ChangeObjectMaterialIds(); // Offset: 0x101e6bf04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId
	// Flags: [Final|Native|Public]
	bool ChangeObjectMaterialId(StrProperty InstanceID); // Offset: 0x101e6be5c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab
	// Flags: [Final|Native|Public]
	bool ChangeObjectIsPrefab(StrProperty InstanceID, bool bIsPrefab); // Offset: 0x101e6bd6c // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels
	// Flags: [Final|Native|Public|HasOutParms]
	bool AddObjectToGridLevels(StrProperty& InstanceID); // Offset: 0x101e6bcb4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeGridLevelsManager.ActivateAllAlwaysLoadCellIndex
	// Flags: [Final|Native|Private]
	void ActivateAllAlwaysLoadCellIndex(); // Offset: 0x101e6bca0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeGroupManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeGroupManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeGroupManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeGroupManager* Get(struct UObject* WorldContext); // Offset: 0x101e6e78c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeGuideComponent
// Size: 0xb30 // Inherited bytes: 0xab0
struct UCreativeGuideComponent : USplineComponent {
	// Fields
	char pad_0xAB0[0x58]; // Offset: 0xab0 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0xb08 // Size: 0x10
	struct TArray<struct USplineMeshComponent*> SplineMeshes; // Offset: 0xb18 // Size: 0x10
	char pad_0xB28[0x8]; // Offset: 0xb28 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeGuideComponent.SweepSingleByChannel
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool SweepSingleByChannel(struct FHitResult& OutHit, struct FVector& Start, struct FVector& End, struct TArray<struct AActor*> IgnoreActors); // Offset: 0x101e6ea5c // Return & Params: Num(5) Size(0xb1)

	// Object Name: Function Creative.CreativeGuideComponent.GenereateSplineMeshes
	// Flags: [Native|Public|BlueprintCallable]
	void GenereateSplineMeshes(struct TArray<struct FVector> Points); // Offset: 0x101e6e970 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeGuideMeshComponent
// Size: 0xc70 // Inherited bytes: 0xc60
struct UCreativeGuideMeshComponent : USplineMeshComponent {
	// Fields
	char pad_0xC60[0x10]; // Offset: 0xc60 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeGuideMeshComponent.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101e6eee4 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativeGuideMeshComponent.OnPickFromPool
	// Flags: [Native|Public]
	void OnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x101e6ee08 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativeModeInGameManagerCenter
// Size: 0x4f8 // Inherited bytes: 0x4b0
struct ACreativeModeInGameManagerCenter : AActor {
	// Fields
	char pad_0x4B0[0x10]; // Offset: 0x4b0 // Size: 0x10
	struct TArray<struct USTExtraManagerBase*> ManagerArray; // Offset: 0x4c0 // Size: 0x10
	struct TArray<struct USTExtraManagerBase*> ManagerClassArray; // Offset: 0x4d0 // Size: 0x10
	char pad_0x4E0[0x18]; // Offset: 0x4e0 // Size: 0x18

	// Functions

	// Object Name: Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded
	// Flags: [Final|Native|Public]
	bool GetIsBeginPlayEnded(); // Offset: 0x101e6f2f0 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Creative.CreativeInstanceManager
// Size: 0x6e0 // Inherited bytes: 0x168
struct UCreativeInstanceManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x70]; // Offset: 0x168 // Size: 0x70
	MapProperty InstanceTreeData; // Offset: 0x1d8 // Size: 0x50
	MapProperty DataRequestMap; // Offset: 0x228 // Size: 0x50
	struct TArray<struct FCreativePullDataNode> DataWaitingRquestQueue; // Offset: 0x278 // Size: 0x10
	char pad_0x288[0x10]; // Offset: 0x288 // Size: 0x10
	struct FCreativeNodeContainer InstanceContainer; // Offset: 0x298 // Size: 0x120
	struct FCreativeNodeContainer RPCReplicatedInstanceContainer; // Offset: 0x3b8 // Size: 0x120
	bool bRPCReplicatInstanceContainerEnable; // Offset: 0x4d8 // Size: 0x01
	char pad_0x4D9[0x3]; // Offset: 0x4d9 // Size: 0x03
	IntProperty CacheCacheHistoryContainerMaxCount; // Offset: 0x4dc // Size: 0x04
	char pad_0x4E0[0x50]; // Offset: 0x4e0 // Size: 0x50
	IntProperty ModBinInstanceCount; // Offset: 0x530 // Size: 0x04
	char pad_0x534[0x4]; // Offset: 0x534 // Size: 0x04
	IntProperty SingleSerializeNum; // Offset: 0x538 // Size: 0x04
	IntProperty SinglePullDataNodeNum; // Offset: 0x53c // Size: 0x04
	IntProperty TotalPullDataNodeNum; // Offset: 0x540 // Size: 0x04
	float DataNodePullInterval; // Offset: 0x544 // Size: 0x04
	float DataPullTimeroutInterval; // Offset: 0x548 // Size: 0x04
	IntProperty FetchesPerFrame; // Offset: 0x54c // Size: 0x04
	float WaitInstanceReplicatTreeTimeout; // Offset: 0x550 // Size: 0x04
	float BuildingResTime; // Offset: 0x554 // Size: 0x04
	float ClientPreAddBuildingResTime; // Offset: 0x558 // Size: 0x04
	float BuildingTimeoutCheckInterval; // Offset: 0x55c // Size: 0x04
	StrProperty DefaultDestructibleMeshObjectPath; // Offset: 0x560 // Size: 0x10
	StrProperty ExpiredAssetEditorPath; // Offset: 0x570 // Size: 0x10
	StrProperty DebugObjectPath; // Offset: 0x580 // Size: 0x10
	float StartDownloadMapTimeStamp; // Offset: 0x590 // Size: 0x04
	float CompleteDownloadReplicatTreeTimeStamp; // Offset: 0x594 // Size: 0x04
	float CompleteDownloadDataNodeTreeTimeStamp; // Offset: 0x598 // Size: 0x04
	char pad_0x59C[0x4]; // Offset: 0x59c // Size: 0x04
	MapProperty CppInstanceTree; // Offset: 0x5a0 // Size: 0x50
	char pad_0x5F0[0x38]; // Offset: 0x5f0 // Size: 0x38
	SetProperty ExpiredAssetID; // Offset: 0x628 // Size: 0x50
	SetProperty DebugAssetID; // Offset: 0x678 // Size: 0x50
	uint32_t RPCReplicatedInstanceContainerSeq; // Offset: 0x6c8 // Size: 0x04
	float ReqInstanceContainerContentTimeoutTimeStamp; // Offset: 0x6cc // Size: 0x04
	float ReqInstanceContainerContentTimeroutInterval; // Offset: 0x6d0 // Size: 0x04
	bool bRPCReplicatInstanceContainerTickCheckEnable; // Offset: 0x6d4 // Size: 0x01
	char pad_0x6D5[0x3]; // Offset: 0x6d5 // Size: 0x03
	float RPCReplicatInstanceContainerTickCheckCD; // Offset: 0x6d8 // Size: 0x04
	char bRPCReplicatInstanceContainerReqing : 1; // Offset: 0x6dc // Size: 0x01
	char pad_0x6DC_1 : 7; // Offset: 0x6dc // Size: 0x01
	char pad_0x6DD[0x3]; // Offset: 0x6dd // Size: 0x03

	// Functions

	// Object Name: Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateModBinInstanceCount(); // Offset: 0x101e71b10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.SetModBinInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetModBinInstanceCount(IntProperty Count); // Offset: 0x101e71a98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeInstanceManager.SetInstanceValue
	// Flags: [Event|Public|BlueprintEvent]
	bool SetInstanceValue(StrProperty InstanceID, StrProperty Key, StrProperty Value); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function Creative.CreativeInstanceManager.SetInstanceDataContents
	// Flags: [Final|Native|Public|HasOutParms]
	void SetInstanceDataContents(uint16_t Seq, struct TArray<struct FCreativeInstanceDataContent>& InstanceDataContents); // Offset: 0x101e719b4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeInstanceManager.SetInstanceContainerContent
	// Flags: [Final|Native|Public|HasOutParms]
	void SetInstanceContainerContent(struct TArray<char>& ContainerContent, uint32_t NewSeq); // Offset: 0x101e718c0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay
	// Flags: [Final|Native|Private|HasOutParms]
	void SendModBinaryDataToReplay(struct TArray<char>& InBinaryData); // Offset: 0x101e71818 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeInstanceManager.ReqInstanceContainerContentTimeoutCheck
	// Flags: [Final|Native|Protected]
	void ReqInstanceContainerContentTimeoutCheck(); // Offset: 0x101e71804 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.ReqInstanceContainerContentEnd
	// Flags: [Final|Native|Protected]
	void ReqInstanceContainerContentEnd(bool IsTimeout); // Offset: 0x101e71780 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeInstanceManager.RemoveInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveInstance(StrProperty ID, bool bSkipCheck); // Offset: 0x101e716a0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.RemoveCppInstanceNode
	// Flags: [Final|Native|Public]
	bool RemoveCppInstanceNode(StrProperty ID); // Offset: 0x101e715f8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC
	// Flags: [Final|Native|Public]
	void RecordAllInstanceDataByRPC(); // Offset: 0x101e715e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeInstanceManager.OnRep_RPCReplicatedInstanceContainerSeq
	// Flags: [Final|Native|Protected]
	void OnRep_RPCReplicatedInstanceContainerSeq(); // Offset: 0x101e715d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount
	// Flags: [Final|Native|Public]
	void OnRep_ModBinInstanceCount(); // Offset: 0x101e715bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceivePreInstanceRemove(StrProperty ID, bool IsRollback); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostInstanceChange(StrProperty ID, struct TArray<char>& Content, bool IsRollback); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostInstanceAdd(StrProperty ID, struct TArray<char>& Content, bool IsRollback); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceiveClearNotReplicatedData(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.OnReadyToAddInstance
	// Flags: [Final|Native|Public]
	void OnReadyToAddInstance(); // Offset: 0x101e715a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.OnPlayerControllerBeginPlay
	// Flags: [Final|Native|Protected]
	void OnPlayerControllerBeginPlay(struct APlayerController* PlayerController); // Offset: 0x101e7152c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeInstanceManager.OnGameTypeChanged
	// Flags: [Final|Native|Public]
	void OnGameTypeChanged(char LastGameType, char CurrentGameType); // Offset: 0x101e71474 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Creative.CreativeInstanceManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e713f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInstanceReplicatTreeReplicateComplete(); // Offset: 0x101e713c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsInstanceDataTreeReplicateComplete(); // Offset: 0x101e71390 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAssetRuntimeObjectBox(StrProperty ID); // Offset: 0x101e712e8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.InitExpiredAndDebugAssetID
	// Flags: [Final|Native|Private|HasOutParms]
	void InitExpiredAndDebugAssetID(struct TArray<IntProperty>& ExpiredAssets, struct TArray<IntProperty>& DebugAssets); // Offset: 0x101e711d0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.HasReadyToAddInstance
	// Flags: [Final|Native|Public|Const]
	bool HasReadyToAddInstance(); // Offset: 0x101e711b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeInstanceManager.HasAuthorityOrReplay
	// Flags: [Final|Native|Private|Const]
	bool HasAuthorityOrReplay(); // Offset: 0x101e7117c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeInstanceManager.GetObjectAssetPath
	// Flags: [Native|Event|Public|BlueprintEvent]
	StrProperty GetObjectAssetPath(StrProperty ID); // Offset: 0x101e710a4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.GetModBinInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetModBinInstanceCount(); // Offset: 0x101e71088 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay
	// Flags: [Final|Native|Private|HasOutParms]
	bool GetModBinaryDataFromReplay(struct TArray<char>& InBinaryData); // Offset: 0x101e70fd0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceIsDestructible
	// Flags: [Final|Native|Public]
	bool GetInstanceIsDestructible(StrProperty ID); // Offset: 0x101e70f28 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceIsCustomUI
	// Flags: [Final|Native|Public]
	bool GetInstanceIsCustomUI(StrProperty ID); // Offset: 0x101e70e80 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetInstanceDataTreeCount(); // Offset: 0x101e70e5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceDataContents
	// Flags: [Final|Native|Public|HasOutParms]
	struct TArray<struct FCreativeInstanceRespondPullDataSegment> GetInstanceDataContents(struct TArray<uint32_t>& InstanceIDs); // Offset: 0x101e70d7c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceDataContent
	// Flags: [Final|Native|Public]
	struct TArray<char> GetInstanceDataContent(StrProperty InstanceID); // Offset: 0x101e70ccc // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceContainerCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetInstanceContainerCount(); // Offset: 0x101e70c98 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceContainerContent
	// Flags: [Final|Native|Public|HasOutParms]
	struct TArray<char> GetInstanceContainerContent(uint32_t BaseSeq, uint32_t& OutSeq); // Offset: 0x101e70b98 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceBoxSphereBoundsList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FBoxSphereBounds> GetInstanceBoxSphereBoundsList(struct TArray<StrProperty>& InstanceIDs); // Offset: 0x101e70ab8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.GetInstanceBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FBox GetInstanceBox(StrProperty ID); // Offset: 0x101e709fc // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function Creative.CreativeInstanceManager.GetCppInstanceNode
	// Flags: [Final|Native|Public]
	struct FCreativeInstanceNode GetCppInstanceNode(StrProperty ID); // Offset: 0x101e7094c // Return & Params: Num(2) Size(0x90)

	// Object Name: Function Creative.CreativeInstanceManager.GetAssetBox
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FBox GetAssetBox(StrProperty ID); // Offset: 0x101e70890 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function Creative.CreativeInstanceManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeInstanceManager* Get(struct UObject* WorldContext); // Offset: 0x101e70814 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeInstanceManager.GenerateDestructionUniqueID
	// Flags: [Final|Native|Public]
	uint32_t GenerateDestructionUniqueID(uint32_t ID); // Offset: 0x101e70788 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeInstanceManager.DestroyInstance
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty DestroyInstance(StrProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.ClientPreAddInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ClientPreAddInstance(StrProperty ID, struct TArray<char>& Content); // Offset: 0x101e7068c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.ClearInstanceTree
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearInstanceTree(); // Offset: 0x101e70678 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.CheckAndReqRPCReplicatedInstanceContainerContent
	// Flags: [Final|Native|Protected]
	void CheckAndReqRPCReplicatedInstanceContainerContent(); // Offset: 0x101e70664 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceManager.ChangeInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ChangeInstance(StrProperty ID, struct TArray<char>& Content, bool bCallReceiveChange); // Offset: 0x101e70514 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeInstanceManager.ChangeCppInstanceNode
	// Flags: [Final|Native|Public|HasOutParms]
	void ChangeCppInstanceNode(StrProperty ID, StrProperty Key, struct FCreativeInstanceNode& Node); // Offset: 0x101e70384 // Return & Params: Num(3) Size(0xa0)

	// Object Name: Function Creative.CreativeInstanceManager.AddInstance
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AddInstance(StrProperty ID, struct TArray<char>& Content); // Offset: 0x101e70288 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeInstanceManager.AddCppInstanceNode
	// Flags: [Final|Native|Public|HasOutParms]
	void AddCppInstanceNode(StrProperty ID, struct FCreativeInstanceNode& Node); // Offset: 0x101e7014c // Return & Params: Num(2) Size(0x90)

	// Object Name: Function Creative.CreativeInstanceManager.AddBuildingFlag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddBuildingFlag(StrProperty ID); // Offset: 0x101e700b4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeInstanceStaticMeshComponent
// Size: 0xd70 // Inherited bytes: 0xd20
struct UCreativeInstanceStaticMeshComponent : UInstancedStaticMeshComponent {
	// Fields
	char pad_0xD20[0x18]; // Offset: 0xd20 // Size: 0x18
	struct FSoftObjectPath SoftStaticMeshPath; // Offset: 0xd38 // Size: 0x18
	struct UMaterialInterface* WaitSetMaterial; // Offset: 0xd50 // Size: 0x08
	struct TArray<struct FTransform> WaitSetAddInstanceTransforms; // Offset: 0xd58 // Size: 0x10
	char pad_0xD68[0x8]; // Offset: 0xd68 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.UpdateAllInstanceByRelativeLocation
	// Flags: [Final|Native|Public|HasDefaults]
	void UpdateAllInstanceByRelativeLocation(struct TArray<struct FVector> RelativeLocations, struct FVector Scale); // Offset: 0x101e78c88 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild
	// Flags: [Final|Native|Public]
	void UnInitInstancedStaticMeshComponntByGroupBuild(); // Offset: 0x101e78c74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.SetISMMaterial
	// Flags: [Final|Native|Public]
	void SetISMMaterial(struct UMaterialInterface* NewMaterial); // Offset: 0x101e78bf8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded
	// Flags: [Final|Native|Protected|HasDefaults]
	void OnStaticMeshAsyncLoaded(struct FSoftObjectPath SoftObjectPath); // Offset: 0x101e78b2c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101e78a5c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool
	// Flags: [Native|Public]
	void OnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x101e78980 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuildStaticMesh
	// Flags: [Final|Native|Public|HasOutParms]
	void InitInstancedStaticMeshComponntByGroupBuildStaticMesh(struct USceneComponent* Parent, struct TArray<struct FTransform>& InstanceTransforms, struct UObject* StaticMeshObj, struct UMaterialInterface* Material); // Offset: 0x101e78814 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild
	// Flags: [Final|Native|Public|HasOutParms]
	void InitInstancedStaticMeshComponntByGroupBuild(struct USceneComponent* Parent, struct TArray<struct FTransform>& InstanceTransforms, StrProperty MeshPath, struct UMaterialInterface* Material); // Offset: 0x101e78690 // Return & Params: Num(4) Size(0x30)
};

// Object Name: Class Creative.CreativeModeIntegralMechanismComponent
// Size: 0x248 // Inherited bytes: 0x238
struct UCreativeModeIntegralMechanismComponent : ULuaActorComponent {
	// Fields
	struct TArray<struct FPlayerIntegralInfo> PlayerIntegrals; // Offset: 0x238 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
	// Flags: [Final|Native|Protected]
	bool SetPlayerIntegral(StrProperty UID, IntProperty TeamID, IntProperty curIntegral, IntProperty curStageIntegral, IntProperty integralAddSeq); // Offset: 0x101e79220 // Return & Params: Num(6) Size(0x21)

	// Object Name: Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
	// Flags: [Event|Protected|BlueprintEvent]
	void OnRepPlayerIntegralsOverride(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
	// Flags: [Final|Native|Protected]
	void OnRep_PlayerIntegrals(); // Offset: 0x101e7920c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
	// Flags: [Final|Native|Protected]
	void ClearPlayerIntegrals(); // Offset: 0x101e791f8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeIntegralMechanismLiteComponent
// Size: 0x170 // Inherited bytes: 0x158
struct UCreativeModeIntegralMechanismLiteComponent : UCreativeModeLiteComponent {
	// Fields
	struct TArray<struct FPlayerIntegralInfo> PlayerIntegrals; // Offset: 0x158 // Size: 0x10
	IntProperty TestIndex; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
	// Flags: [Final|Native|Protected]
	bool SetPlayerIntegral(StrProperty UID, IntProperty TeamID, IntProperty curIntegral, IntProperty curStageIntegral, IntProperty integralAddSeq, IntProperty curFunctionalIntegral); // Offset: 0x101e79818 // Return & Params: Num(7) Size(0x25)

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
	// Flags: [Final|Native|Protected]
	bool PlayerIntegralContains(StrProperty UID); // Offset: 0x101e79724 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
	// Flags: [Event|Protected|BlueprintEvent]
	void OnRepPlayerIntegralsOverride(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
	// Flags: [Final|Native|Protected]
	void OnRep_TestIndex(IntProperty LastIndex); // Offset: 0x101e796a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
	// Flags: [Final|Native|Protected]
	void OnRep_PlayerIntegrals(); // Offset: 0x101e79694 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
	// Flags: [Final|Native|Protected]
	void ClearPlayerIntegrals(); // Offset: 0x101e79680 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeItemGeneratorComponent
// Size: 0xa60 // Inherited bytes: 0xa08
struct UCreativeItemGeneratorComponent : UItemGeneratorComponent {
	// Fields
	char pad_0xA08[0x58]; // Offset: 0xa08 // Size: 0x58

	// Functions

	// Object Name: Function Creative.CreativeItemGeneratorComponent.SetWeightMul
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetWeightMul(MapProperty& Weight); // Offset: 0x101e79de8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAddSpotPercentMul(float percent); // Offset: 0x101e79d6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearWeightMul(); // Offset: 0x101e79d58 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeLoadManager
// Size: 0x1d0 // Inherited bytes: 0x168
struct UCreativeLoadManager : UCreativeModeManagerBase {
	// Fields
	uint32_t MaxLoadCountPerFrame; // Offset: 0x168 // Size: 0x04
	bool bNewCustomUI; // Offset: 0x16c // Size: 0x01
	char pad_0x16D[0x63]; // Offset: 0x16d // Size: 0x63

	// Functions

	// Object Name: Function Creative.CreativeLoadManager.UnloadSomeObjects
	// Flags: [Final|Native|Public]
	void UnloadSomeObjects(struct TArray<StrProperty> InstanceIDs, bool bRemovePhysicsObject); // Offset: 0x101e7a8fc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeLoadManager.UnloadObject
	// Flags: [Final|Native|Public]
	void UnloadObject(StrProperty InstanceID, bool bRemovePhysicsObject); // Offset: 0x101e7a81c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeLoadManager.LoadSomeObjects
	// Flags: [Final|Native|Public]
	void LoadSomeObjects(struct TArray<StrProperty> InstanceIDs, bool bLoadImmediately); // Offset: 0x101e7a6e8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeLoadManager.LoadObject
	// Flags: [Final|Native|Public]
	void LoadObject(StrProperty InstanceID); // Offset: 0x101e7a650 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeLoadManager.LoadCustomUIObject
	// Flags: [Final|Native|Public]
	struct UObject* LoadCustomUIObject(StrProperty InstanceID); // Offset: 0x101e7a5a8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeLoadManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLoadManager* Get(struct UObject* WorldContext); // Offset: 0x101e7a52c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLoadManager.AddObject
	// Flags: [Final|Native|Public|HasOutParms]
	void AddObject(StrProperty InstanceID, struct FCreativeInstanceNode& InstanceNode); // Offset: 0x101e7a3f0 // Return & Params: Num(2) Size(0x90)
};

// Object Name: Class Creative.CreativeLuaAPIObjectManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeLuaAPIObjectManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeLuaAPIObjectManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaAPIObjectManager* Get(struct UObject* WorldContext); // Offset: 0x101e7ada4 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeTriggerCheckData
// Size: 0x98 // Inherited bytes: 0x28
struct UCreativeTriggerCheckData : UObject {
	// Fields
	struct UPrimitiveComponent* OverlapComponent; // Offset: 0x28 // Size: 0x08
	struct FCreativeTriggerSource TriggerSource; // Offset: 0x30 // Size: 0x05
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	struct TArray<struct TWeakObjectPtr<struct AActor>> CacheInAreaActors; // Offset: 0x38 // Size: 0x10
	MapProperty LastOverlapActorType; // Offset: 0x48 // Size: 0x50
};

// Object Name: Class Creative.CreativeLuaBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeLuaBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeLuaBlueprintLibrary.CheckTriggerAreaOverlaps
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CheckTriggerAreaOverlaps(struct TArray<struct UCreativeTriggerCheckData*>& TriggerDataList, struct TArray<struct FCreativeTriggerActorType>& OutTriggerEnter, struct TArray<struct FCreativeTriggerActorType>& OutTriggerLeave); // Offset: 0x101e7b2d0 // Return & Params: Num(3) Size(0x30)
};

// Object Name: Class Creative.CreativeLuaCodeManager
// Size: 0x1c0 // Inherited bytes: 0x168
struct UCreativeLuaCodeManager : UCreativeModeManagerBase {
	// Fields
	MapProperty CodeMap; // Offset: 0x168 // Size: 0x50
	char pad_0x1B8[0x4]; // Offset: 0x1b8 // Size: 0x04
	uint32_t ReplicatedLuaCodeInfoMapSeq; // Offset: 0x1bc // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeLuaCodeManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaCodeManager.OnRep_ReplicatedLuaCodeInfoMapSeq
	// Flags: [Final|Native|Public]
	void OnRep_ReplicatedLuaCodeInfoMapSeq(); // Offset: 0x101e7b7a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaCodeManager.OnPreCreativeLuaVMUnLoad
	// Flags: [Final|Native|Protected]
	void OnPreCreativeLuaVMUnLoad(); // Offset: 0x101e7b790 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaCodeManager.OnPlayerControllerBeginPlay
	// Flags: [Final|Native|Protected]
	void OnPlayerControllerBeginPlay(struct APlayerController* PlayerController); // Offset: 0x101e7b714 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaCodeManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Protected]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e7b698 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaCodeManager.OnCreativeLuaInitialized
	// Flags: [Final|Native|Protected]
	void OnCreativeLuaInitialized(); // Offset: 0x101e7b684 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaCodeManager.MarkReplicatedLuaCodeInfoMapDirty
	// Flags: [Final|Native|Public]
	void MarkReplicatedLuaCodeInfoMapDirty(); // Offset: 0x101e7b670 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaCodeManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaCodeManager* Get(struct UObject* WorldContext); // Offset: 0x101e7b5f4 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeLuaEntityManager
// Size: 0x260 // Inherited bytes: 0x168
struct UCreativeLuaEntityManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x8]; // Offset: 0x168 // Size: 0x08
	MapProperty CacheMap; // Offset: 0x170 // Size: 0x50
	char pad_0x1C0[0x50]; // Offset: 0x1c0 // Size: 0x50
	SetProperty UsedUUIDSet; // Offset: 0x210 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeLuaEntityManager.UUID2UObject
	// Flags: [Native|Public|HasOutParms]
	struct UObject* UUID2UObject(int64_t& UUID); // Offset: 0x101e7c944 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.UUID2Type
	// Flags: [Native|Public|HasOutParms]
	bool UUID2Type(int64_t& UUID, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7c800 // Return & Params: Num(4) Size(0xb)

	// Object Name: Function Creative.CreativeLuaEntityManager.UUID2Key
	// Flags: [Native|Public|HasOutParms]
	uint32_t UUID2Key(int64_t& UUID); // Offset: 0x101e7c75c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativeLuaEntityManager.ResolveUObjectUUID
	// Flags: [Final|Native|Public]
	int64_t ResolveUObjectUUID(struct UObject* Object); // Offset: 0x101e7c6d0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.ResetAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetAll(); // Offset: 0x101e7c6bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaEntityManager.RemoveUUID
	// Flags: [Native|Public|HasOutParms]
	void RemoveUUID(int64_t& UUID); // Offset: 0x101e7c628 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaEntityManager.LuaUUID2UObject
	// Flags: [Final|Native|Public|HasOutParms]
	struct UObject* LuaUUID2UObject(StrProperty& UUID); // Offset: 0x101e7c570 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeLuaEntityManager.LuaUUID2Type
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool LuaUUID2Type(StrProperty& UUID, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7c408 // Return & Params: Num(4) Size(0x13)

	// Object Name: Function Creative.CreativeLuaEntityManager.LuaUUID2Key
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	StrProperty LuaUUID2Key(StrProperty& UUID, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7c278 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeLuaEntityManager.LuaRemoveUUID
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void LuaRemoveUUID(StrProperty& UUID); // Offset: 0x101e7c1d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.LuaCreateEntityIfNotExistsFromUObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	StrProperty LuaCreateEntityIfNotExistsFromUObject(struct UObject* Object, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7c080 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeLuaEntityManager.GetInstanceObjectUUID
	// Flags: [Native|Public|HasOutParms]
	int64_t GetInstanceObjectUUID(int64_t& UUID); // Offset: 0x101e7bfdc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaEntityManager* Get(struct UObject* WorldContext); // Offset: 0x101e7bf60 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.GenUUID
	// Flags: [Final|Native|Protected|HasOutParms]
	int64_t GenUUID(StrProperty& Key, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7bdf8 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromUObject
	// Flags: [Native|Public|HasOutParms]
	int64_t CreateEntityIfNotExistsFromUObject(struct UObject* Object, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7bccc // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromKey
	// Flags: [Native|Public|HasOutParms]
	int64_t CreateEntityIfNotExistsFromKey(uint32_t& Key, enum class EEntityType& Type, char& SubType); // Offset: 0x101e7bb88 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Creative.CreativeLuaEntityManager.ContainsUUID
	// Flags: [Final|Native|Public]
	bool ContainsUUID(int64_t UUID); // Offset: 0x101e7bafc // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class Creative.CreativeLuaSignalManager
// Size: 0x1b8 // Inherited bytes: 0x168
struct UCreativeLuaSignalManager : UCreativeModeManagerBase {
	// Fields
	MapProperty ObjectMap; // Offset: 0x168 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeLuaSignalManager.SpawnApiObjectsByConfig
	// Flags: [Final|Native|Public]
	void SpawnApiObjectsByConfig(); // Offset: 0x101e7d4f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalManager.RegisterObject
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterObject(struct UCreativeApiObject* NewObject); // Offset: 0x101e7d470 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaSignalManager.OnPreCreativeLuaVMUnLoad
	// Flags: [Final|Native|Protected]
	void OnPreCreativeLuaVMUnLoad(); // Offset: 0x101e7d45c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalManager.OnCreativeLuaVMLoaded
	// Flags: [Final|Native|Protected]
	void OnCreativeLuaVMLoaded(); // Offset: 0x101e7d448 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalManager.GetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeApiObject* GetObject(StrProperty ModuleName); // Offset: 0x101e7d354 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeLuaSignalManager.GetCreativeLuaVM
	// Flags: [Final|Native|Protected]
	struct UCreativeBridgeLuaVM* GetCreativeLuaVM(); // Offset: 0x101e7d320 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaSignalManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaSignalManager* Get(struct UObject* WorldContext); // Offset: 0x101e7d2a4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaSignalManager.ExecuteAPI
	// Flags: [Final|Native|Public|HasOutParms]
	IntProperty ExecuteAPI(struct UCreativeBridgeLuaVM* VM, StrProperty& ModuleName, StrProperty& FuncName); // Offset: 0x101e7d148 // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function Creative.CreativeLuaSignalManager.CGetAPIObject
	// Flags: [Final|Native|Public]
	struct UCreativeApiObject* CGetAPIObject(StrProperty ModuleName); // Offset: 0x101e7d0a0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeLuaSignalManager.CClearAPIObject
	// Flags: [Final|Native|Public]
	void CClearAPIObject(); // Offset: 0x101e7d08c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaSignalManager.CAddAPIObject
	// Flags: [Final|Native|Public]
	void CAddAPIObject(StrProperty ModuleName, struct UCreativeApiObject* Object); // Offset: 0x101e7cfb4 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativeLuaTraitManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeLuaTraitManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTraits
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	struct TArray<StrProperty> GetSupportEntitiesByTraits(struct TArray<StrProperty>& TraitNames); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTrait
	// Flags: [Event|Public|BlueprintEvent]
	struct TArray<StrProperty> GetSupportEntitiesByTrait(StrProperty TraitName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeLuaTraitManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaTraitManager* Get(struct UObject* WorldContext); // Offset: 0x101e7e060 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeLuaVMManager
// Size: 0x188 // Inherited bytes: 0x168
struct UCreativeLuaVMManager : UCreativeModeManagerBase {
	// Fields
	struct UCreativeBridgeLuaVM* LuaVM; // Offset: 0x168 // Size: 0x08
	char pad_0x170[0x8]; // Offset: 0x170 // Size: 0x08
	struct TArray<StrProperty> EnvLuaCheckPaths; // Offset: 0x178 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeLuaVMManager.UnRegisterGameTypePreChangedDelegate
	// Flags: [Final|Native|Public]
	void UnRegisterGameTypePreChangedDelegate(); // Offset: 0x101e7e760 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.RegisterGameTypePreChangedDelegate
	// Flags: [Final|Native|Public]
	void RegisterGameTypePreChangedDelegate(); // Offset: 0x101e7e74c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.ReceiveSluaCustomMemoryOutCallback
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveSluaCustomMemoryOutCallback(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaVMManager.ReceiveCheckAndLoadLuaVM
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveCheckAndLoadLuaVM(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.OpenEnvLuaProfile
	// Flags: [Final|Native|Public]
	void OpenEnvLuaProfile(); // Offset: 0x101e7e738 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.OpenCustomMemoryLimit
	// Flags: [Final|Native|Public]
	void OpenCustomMemoryLimit(int64_t memoryLimit); // Offset: 0x101e7e6bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaVMManager.OnLuaVMAtPanic
	// Flags: [Final|Native|Public]
	void OnLuaVMAtPanic(StrProperty errMsg); // Offset: 0x101e7e5d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeLuaVMManager.OnGameTypePreChanged
	// Flags: [Final|Native|Protected]
	void OnGameTypePreChanged(char LastGameType, char CurrentGameType); // Offset: 0x101e7e520 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Creative.CreativeLuaVMManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e7e4a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaVMManager.LoadLuaVM
	// Flags: [Final|Native|Public]
	void LoadLuaVM(); // Offset: 0x101e7e490 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.GetCreativeLuaVM
	// Flags: [Final|Native|Public]
	struct UCreativeBridgeLuaVM* GetCreativeLuaVM(); // Offset: 0x101e7e474 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeLuaVMManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeLuaVMManager* Get(struct UObject* WorldContext); // Offset: 0x101e7e3f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeLuaVMManager.CreativeLuaVMLoaded
	// Flags: [Final|Native|Public]
	bool CreativeLuaVMLoaded(); // Offset: 0x101e7e3d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeLuaVMManager.CreativeLuaInitialized
	// Flags: [Final|Native|Public]
	bool CreativeLuaInitialized(); // Offset: 0x101e7e3b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeLuaVMManager.ClosenEnvLuaProfile
	// Flags: [Final|Native|Public]
	void ClosenEnvLuaProfile(); // Offset: 0x101e7e3a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeLuaVMManager.CloseCustomMemoryLimit
	// Flags: [Final|Native|Public]
	void CloseCustomMemoryLimit(); // Offset: 0x101e7e390 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeManagerCenterInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeManagerCenterInterface : UInterface {
};

// Object Name: Class Creative.CreativeModeModDataCheckManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeModeModDataCheckManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPreAddInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostAddInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
	// Flags: [Final|Native|Public]
	void OnPreAddInstance(); // Offset: 0x101e7f000 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
	// Flags: [Final|Native|Public]
	void OnPostAddInstance(); // Offset: 0x101e7efec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeModDataCheckManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeModeModDataCheckManager* Get(struct UObject* WorldContext); // Offset: 0x101e7ef70 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeModeChatBubbleUI
// Size: 0x298 // Inherited bytes: 0x260
struct UCreativeModeChatBubbleUI : UUserWidget {
	// Fields
	struct FName SocketName; // Offset: 0x260 // Size: 0x08
	bool bMoveWithPawn; // Offset: 0x268 // Size: 0x01
	char pad_0x269[0x3]; // Offset: 0x269 // Size: 0x03
	struct FVector TargetOffset; // Offset: 0x26c // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> CurTargetActor; // Offset: 0x278 // Size: 0x08
	struct UCanvasPanelSlot* ChildSlot; // Offset: 0x280 // Size: 0x08
	char pad_0x288[0x4]; // Offset: 0x288 // Size: 0x04
	struct FVector CurrentTargetPosition; // Offset: 0x28c // Size: 0x0c

	// Functions

	// Object Name: Function Creative.CreativeModeChatBubbleUI.TickLua
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void TickLua(); // Offset: 0x101e7f2a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeChatBubbleUI.ForceUpdatePosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceUpdatePosition(); // Offset: 0x101e7f28c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeGlobalManagerCenter
// Size: 0x60 // Inherited bytes: 0x30
struct UCreativeModeGlobalManagerCenter : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x10]; // Offset: 0x30 // Size: 0x10
	struct TArray<struct USTExtraManagerBase*> ManagerArray; // Offset: 0x40 // Size: 0x10
	struct TArray<struct USTExtraManagerBase*> ManagerClassArray; // Offset: 0x50 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated
	// Flags: [Final|Native|Protected]
	void OnCreativeDelegateCreated(); // Offset: 0x101e7f46c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeStaticMeshBatchActor
// Size: 0x660 // Inherited bytes: 0x570
struct ACreativeModeStaticMeshBatchActor : ALuaActor {
	// Fields
	char pad_0x570[0x48]; // Offset: 0x570 // Size: 0x48
	struct FCreativeBatchInstancedStaticMesh InstancedStaticMeshInfo; // Offset: 0x5b8 // Size: 0x58
	struct FCreativeFineBatchInstancedStaticMesh BatchInstancedStaticMeshInfo; // Offset: 0x610 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
	// Flags: [Event|Public|BlueprintEvent]
	void SetISMStaticMeshAndMaterials(struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent, IntProperty AssetId, IntProperty StaticMeshIndex, IntProperty MaterialID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x14)
};

// Object Name: Class Creative.CreativeModeTouchWidget
// Size: 0x2c8 // Inherited bytes: 0x2c8
struct UCreativeModeTouchWidget : ULuaUserWidget {
	// Functions

	// Object Name: Function Creative.CreativeModeTouchWidget.OnHandleTouchStart
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FEventReply OnHandleTouchStart(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x101e86598 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function Creative.CreativeModeTouchWidget.OnHandleTouchMove
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FEventReply OnHandleTouchMove(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x101e863e4 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function Creative.CreativeModeTouchWidget.OnHandleTouchEnd
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FEventReply OnHandleTouchEnd(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // Offset: 0x101e86230 // Return & Params: Num(3) Size(0x168)

	// Object Name: Function Creative.CreativeModeTouchWidget.OnHandleTouch
	// Flags: [Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool OnHandleTouch(IntProperty Type, IntProperty FingerIndex, struct FVector2D pos); // Offset: 0x101e8612c // Return & Params: Num(4) Size(0x11)
};

// Object Name: Class Creative.TaskProgressItem
// Size: 0x90 // Inherited bytes: 0x28
struct UTaskProgressItem : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	IntProperty ConfigIndex; // Offset: 0x80 // Size: 0x04
	IntProperty ProgressType; // Offset: 0x84 // Size: 0x04
	IntProperty CurrentProgress; // Offset: 0x88 // Size: 0x04
	IntProperty MaxProgress; // Offset: 0x8c // Size: 0x04

	// Functions

	// Object Name: Function Creative.TaskProgressItem.Update
	// Flags: [Event|Public|BlueprintEvent]
	void Update(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.SetCurrentProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCurrentProgress(IntProperty Value); // Offset: 0x101e86c48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.GetTaskInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTaskInstance* GetTaskInstance(); // Offset: 0x101e86c14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.TaskProgressItem.GetStageRuntimeState
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UStageRuntimeState* GetStageRuntimeState(); // Offset: 0x101e86be0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.TaskProgressItem.GetProgressType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetProgressType(); // Offset: 0x101e86bc4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.GetMaxProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMaxProgress(); // Offset: 0x101e86ba8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.GetCurrentProgress
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCurrentProgress(); // Offset: 0x101e86b8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.Deactivate
	// Flags: [Event|Public|BlueprintEvent]
	void Deactivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.TaskProgressItem.AddProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddProgress(IntProperty Delta); // Offset: 0x101e86b0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskProgressItem.Activate
	// Flags: [Event|Public|BlueprintEvent]
	void Activate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.StageRuntimeState
// Size: 0x98 // Inherited bytes: 0x28
struct UStageRuntimeState : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	IntProperty StageIdx; // Offset: 0x80 // Size: 0x04
	char pad_0x84[0x4]; // Offset: 0x84 // Size: 0x04
	struct TArray<struct UTaskProgressItem*> ProgressItems; // Offset: 0x88 // Size: 0x10

	// Functions

	// Object Name: Function Creative.StageRuntimeState.Update
	// Flags: [Event|Public|BlueprintEvent]
	bool Update(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.StageRuntimeState.GetStageIdx
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetStageIdx(); // Offset: 0x101e872bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.StageRuntimeState.GetProgressItems
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct UTaskProgressItem*> GetProgressItems(); // Offset: 0x101e872a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.StageRuntimeState.GetOwnTaskInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTaskInstance* GetOwnTaskInstance(); // Offset: 0x101e8726c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.StageRuntimeState.FindProgressItemByConfigIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UTaskProgressItem* FindProgressItemByConfigIndex(IntProperty Index); // Offset: 0x101e871e0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.StageRuntimeState.Deactivate
	// Flags: [Event|Public|BlueprintEvent]
	void Deactivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.StageRuntimeState.AddProgressItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTaskProgressItem* AddProgressItem(IntProperty ProgressType); // Offset: 0x101e87154 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.StageRuntimeState.Activate
	// Flags: [Event|Public|BlueprintEvent]
	void Activate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.TaskInstance
// Size: 0xd8 // Inherited bytes: 0x28
struct UTaskInstance : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty TaskTypeID; // Offset: 0x80 // Size: 0x10
	struct TArray<uint32_t> PlayerKeys; // Offset: 0x90 // Size: 0x10
	struct UStageRuntimeState* CurrentStage; // Offset: 0xa0 // Size: 0x08
	enum class ETaskStatus TaskStatus; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x7]; // Offset: 0xa9 // Size: 0x07
	struct TArray<struct UStageRuntimeState*> StageStates; // Offset: 0xb0 // Size: 0x10
	StrProperty ReservedStr; // Offset: 0xc0 // Size: 0x10
	bool bShouldReplicated; // Offset: 0xd0 // Size: 0x01
	char pad_0xD1[0x7]; // Offset: 0xd1 // Size: 0x07

	// Functions

	// Object Name: Function Creative.TaskInstance.Update
	// Flags: [Event|Public|BlueprintEvent]
	bool Update(float DeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.TaskInstance.SetTaskStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTaskStatus(enum class ETaskStatus StatusVal); // Offset: 0x101e87b80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.TaskInstance.SetShouldReplicated
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetShouldReplicated(bool Val); // Offset: 0x101e87afc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.TaskInstance.SetReservedString
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetReservedString(StrProperty Val); // Offset: 0x101e87a18 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.TaskInstance.RemovePlayer
	// Flags: [Final|Native|Public]
	void RemovePlayer(uint32_t PlayerKey); // Offset: 0x101e8799c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskInstance.ReceiveSetTaskStatus
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveSetTaskStatus(enum class ETaskStatus PreviousStatusVal, enum class ETaskStatus NextStatusVal); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Creative.TaskInstance.ReceiveOnDeactivate
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnDeactivate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.TaskInstance.MarkTaskDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkTaskDirty(); // Offset: 0x101e87988 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.TaskInstance.IsRefbyPlayer
	// Flags: [Final|Native|Public]
	bool IsRefbyPlayer(uint32_t PlayerKey); // Offset: 0x101e878fc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.TaskInstance.InitializeStageInfo
	// Flags: [Event|Public|BlueprintEvent]
	void InitializeStageInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.TaskInstance.GetTaskTypeID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetTaskTypeID(); // Offset: 0x101e87898 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.TaskInstance.GetPlayerKeys
	// Flags: [Final|Native|Public|Const]
	struct TArray<uint32_t> GetPlayerKeys(); // Offset: 0x101e8787c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.TaskInstance.GetCurrentStage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UStageRuntimeState* GetCurrentStage(); // Offset: 0x101e87860 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.TaskInstance.AdvanceToNextStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AdvanceToNextStage(struct UStageRuntimeState* NewStageInfo); // Offset: 0x101e877e4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.TaskInstance.AddPlayer
	// Flags: [Final|Native|Public]
	void AddPlayer(uint32_t PlayerKey); // Offset: 0x101e87768 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.TaskInstance.AddNewStage
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UStageRuntimeState* AddNewStage(); // Offset: 0x101e87734 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeModeGameTaskManager
// Size: 0x180 // Inherited bytes: 0x168
struct UCreativeModeGameTaskManager : UCreativeModeManagerBase {
	// Fields
	struct TArray<struct UTaskInstance*> TaskInstArray; // Offset: 0x168 // Size: 0x10
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModeGameTaskManager.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(); // Offset: 0x101e88590 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeGameTaskManager.RemoveTaskInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveTaskInstance(struct UTaskInstance* TaskInstance); // Offset: 0x101e88514 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeModeGameTaskManager.ReceiveGetProgressItemLuaPathByType
	// Flags: [Event|Public|BlueprintEvent]
	StrProperty ReceiveGetProgressItemLuaPathByType(IntProperty ProgressType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeGameTaskManager.GetProgressItemLuaPathByType
	// Flags: [Final|Native|Public]
	StrProperty GetProgressItemLuaPathByType(); // Offset: 0x101e884b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameTaskManager.GetAllTaskInstances
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct UTaskInstance*> GetAllTaskInstances(); // Offset: 0x101e88494 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameTaskManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeModeGameTaskManager* Get(struct UObject* WorldContext); // Offset: 0x101e88418 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeGameTaskManager.FindTaskInstanceByType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UTaskInstance* FindTaskInstanceByType(StrProperty TaskTypeID); // Offset: 0x101e88324 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeModeGameTaskManager.CreateTaskInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UTaskInstance* CreateTaskInstance(StrProperty TaskTypeID); // Offset: 0x101e88230 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativeMonsterAnimInstance
// Size: 0x5d0 // Inherited bytes: 0x3f0
struct UCreativeMonsterAnimInstance : UActorEditorAnimInstanceBase {
	// Fields
	struct UAnimSequence* C_Birth_01_CustomOverride; // Offset: 0x3e8 // Size: 0x08
	struct UAnimSequence* C_Birth_02_CustomOverride; // Offset: 0x3f0 // Size: 0x08
	struct UAnimMontage* C_Birth_01_Montage_CustomOverride; // Offset: 0x3f8 // Size: 0x08
	struct UAnimMontage* C_Birth_02_Montage_CustomOverride; // Offset: 0x400 // Size: 0x08
	struct UAnimSequence* C_Idle_CustomOverride; // Offset: 0x408 // Size: 0x08
	struct UBlendSpace1D* C_Random_Idle_CustomOverride; // Offset: 0x410 // Size: 0x08
	struct UAnimSequence* C_Combat_Idle_CustomOverride; // Offset: 0x418 // Size: 0x08
	struct UBlendSpace1D* C_Random_Combat_Idle_CustomOverride; // Offset: 0x420 // Size: 0x08
	struct UBlendSpace1D* C_Run_CustomOverride; // Offset: 0x428 // Size: 0x08
	struct UAnimSequence* C_Run_Sequence_CustomOverride; // Offset: 0x430 // Size: 0x08
	struct UBlendSpace* C_Around_Run_CustomOverride; // Offset: 0x438 // Size: 0x08
	struct UBlendSpace1D* C_Combat_Run_CustomOverride; // Offset: 0x440 // Size: 0x08
	struct UAnimSequence* C_Attack_01_CustomOverride; // Offset: 0x448 // Size: 0x08
	struct UAnimSequence* C_Attack_02_CustomOverride; // Offset: 0x450 // Size: 0x08
	struct UAnimSequence* C_Attack_03_CustomOverride; // Offset: 0x458 // Size: 0x08
	struct UAnimSequence* C_Hit_Hard_CustomOverride; // Offset: 0x460 // Size: 0x08
	struct UBlendSpace* C_Hit_BlendSpace_CustomOverride; // Offset: 0x468 // Size: 0x08
	struct UAnimSequence* C_Jump_Start_CustomOverride; // Offset: 0x470 // Size: 0x08
	struct UBlendSpace1D* C_Fall_CustomOverride; // Offset: 0x478 // Size: 0x08
	struct UAnimSequence* C_Fall_Stand_CustomOverride; // Offset: 0x480 // Size: 0x08
	struct UBlendSpace1D* C_Fall_Stand_BS_CustomOverride; // Offset: 0x488 // Size: 0x08
	struct UAnimSequence* C_Fall_Hard_Stand_CustomOverride; // Offset: 0x490 // Size: 0x08
	struct UBlendSpace1D* C_Fall_Hard_Stand_BS_CustomOverride; // Offset: 0x498 // Size: 0x08
	struct UAnimMontage* C_Death_Front_CustomOverride; // Offset: 0x4a0 // Size: 0x08
	struct UAnimMontage* C_Death_HeadShot_CustomOverride; // Offset: 0x4a8 // Size: 0x08
	struct UAnimMontage* C_Death_VehicleHit_CustomOverride; // Offset: 0x4b0 // Size: 0x08
	struct UAnimMontage* C_Death_Explosion_CustomOverride; // Offset: 0x4b8 // Size: 0x08
	struct UAnimMontage* C_Death_Stand_CustomOverride; // Offset: 0x4c0 // Size: 0x08
	struct UAnimSequence* C_Climb_CustomOverride; // Offset: 0x4c8 // Size: 0x08
	struct UAnimSequence* C_Climb_Window_CustomOverride; // Offset: 0x4d0 // Size: 0x08
	struct UAnimSequence* C_Climbing_CustomOverride; // Offset: 0x4d8 // Size: 0x08
	struct UAnimSequence* C_Stun_CustomOverride; // Offset: 0x4e0 // Size: 0x08
	struct UAnimSequence* C_Striding_CustomOverride; // Offset: 0x4e8 // Size: 0x08
	struct UAnimMontage* C_ActiveMontage_CustomOverride; // Offset: 0x4f0 // Size: 0x08
	struct UAnimMontage* C_TurnMontage_CustomOverride; // Offset: 0x4f8 // Size: 0x08
	struct UBlendSpace1D* C_Turn_BS_CustomOverride; // Offset: 0x500 // Size: 0x08
	struct UAnimSequence* C_StopLeftLeg_CustomOverride; // Offset: 0x508 // Size: 0x08
	struct UAnimSequence* C_RunStopLeftLeg_CustomOverride; // Offset: 0x510 // Size: 0x08
	struct UAnimSequence* C_StopRightLeg_CustomOverride; // Offset: 0x518 // Size: 0x08
	struct UAnimSequence* C_RunStopRightLeg_CustomOverride; // Offset: 0x520 // Size: 0x08
	struct UAnimSequence* C_StopLeftLeg_Front_CustomOverride; // Offset: 0x528 // Size: 0x08
	struct UAnimSequence* C_RunStopLeftLeg_Front_CustomOverride; // Offset: 0x530 // Size: 0x08
	struct UAnimSequence* C_StopRightLeg_Front_CustomOverride; // Offset: 0x538 // Size: 0x08
	struct UAnimSequence* C_RunStopRightLeg_Front_CustomOverride; // Offset: 0x540 // Size: 0x08
	bool C_Birth_01_IsValid_CustomOverride; // Offset: 0x548 // Size: 0x01
	bool C_Birth_02_IsValid_CustomOverride; // Offset: 0x549 // Size: 0x01
	bool C_Idle_IsValid_CustomOverride; // Offset: 0x54a // Size: 0x01
	bool C_Combat_Idle_IsValid_CustomOverride; // Offset: 0x54b // Size: 0x01
	bool C_Run_IsValid_CustomOverride; // Offset: 0x54c // Size: 0x01
	bool C_Combat_Run_IsValid_CustomOverride; // Offset: 0x54d // Size: 0x01
	bool C_Attack_01_IsValid_CustomOverride; // Offset: 0x54e // Size: 0x01
	bool C_Attack_02_IsValid_CustomOverride; // Offset: 0x54f // Size: 0x01
	bool C_Stiff_IsValid_CustomOverride; // Offset: 0x550 // Size: 0x01
	bool C_Fall_IsValid_CustomOverride; // Offset: 0x551 // Size: 0x01
	bool C_Jump_IsValid_CustomOverride; // Offset: 0x552 // Size: 0x01
	bool C_Light_Fall_Stand_IsValid_CustomOverride; // Offset: 0x553 // Size: 0x01
	bool C_Hard_Fall_Stand_IsValid_CustomOverride; // Offset: 0x554 // Size: 0x01
	bool C_Death_Front_IsValid_CustomOverride; // Offset: 0x555 // Size: 0x01
	bool C_Death_HeadShot_IsValid_CustomOverride; // Offset: 0x556 // Size: 0x01
	bool C_Death_VehicleHit_IsValid_CustomOverride; // Offset: 0x557 // Size: 0x01
	bool C_Death_Explosion_IsValid_CustomOverride; // Offset: 0x558 // Size: 0x01
	bool C_Death_Stand_IsValid_CustomOverride; // Offset: 0x559 // Size: 0x01
	bool C_Hit_BlendSpace_IsValid_CustomOverride; // Offset: 0x55a // Size: 0x01
	bool C_Climb_IsValid_CustomOverride; // Offset: 0x55b // Size: 0x01
	bool C_Climb_Window_IsValid_CustomOverride; // Offset: 0x55c // Size: 0x01
	bool C_ClimbOnCeiling_IsValid_CustomOverride; // Offset: 0x55d // Size: 0x01
	bool C_Stun_IsValid_CustomOverride; // Offset: 0x55e // Size: 0x01
	bool bIsLaunchAirFly_CustomOverride; // Offset: 0x55f // Size: 0x01
	bool bIsLaunchAirGround_CustomOverride; // Offset: 0x560 // Size: 0x01
	bool bIsLaunchAirRiseUp_CustomOverride; // Offset: 0x561 // Size: 0x01
	bool C_Hurting_CustomOverride; // Offset: 0x562 // Size: 0x01
	struct FVector C_HurtDir_CustomOverride; // Offset: 0x564 // Size: 0x0c
	IntProperty C_RandomAnimID_CustomOverride; // Offset: 0x570 // Size: 0x04
	IntProperty C_IdleBlendSpaceValue_CustomOverride; // Offset: 0x574 // Size: 0x04
	bool C_IsLeftRightMove_CustomOverride; // Offset: 0x578 // Size: 0x01
	bool C_IsTurning_CustomOverride; // Offset: 0x579 // Size: 0x01
	bool C_IsTurningLeft_CustomOverride; // Offset: 0x57a // Size: 0x01
	float C_AdditiveYaw_CustomOverride; // Offset: 0x57c // Size: 0x04
	bool C_LeftLegDown_CustomOverride; // Offset: 0x580 // Size: 0x01
	bool C_FirstStopDone_CustomOverride; // Offset: 0x581 // Size: 0x01
	bool C_SecondStopDone_CustomOverride; // Offset: 0x582 // Size: 0x01
	IntProperty C_StopLegAnimType_CustomOverride; // Offset: 0x584 // Size: 0x04
	bool C_LegStopping_CustomOverride; // Offset: 0x588 // Size: 0x01
	float C_StopCurveOutput_CustomOverride; // Offset: 0x58c // Size: 0x04
	float C_RunStopCurveOutput_CustomOverride; // Offset: 0x590 // Size: 0x04
	bool C_Born_State_CustomOverride; // Offset: 0x594 // Size: 0x01
	char pad_0x597[0x1]; // Offset: 0x597 // Size: 0x01
	IntProperty C_ClimbState_CustomOverride; // Offset: 0x598 // Size: 0x04
	IntProperty C_StrideState_CustomOverride; // Offset: 0x59c // Size: 0x04
	struct FVector C_Velocity_CustomOverride; // Offset: 0x5a0 // Size: 0x0c
	float C_MoveSpeed_CustomOverride; // Offset: 0x5ac // Size: 0x04
	float C_MaxSpeed_CustomOverride; // Offset: 0x5b0 // Size: 0x04
	float C_StopSpeed_CustomOverride; // Offset: 0x5b4 // Size: 0x04
	float C_FallingSpeed_CustomOverride; // Offset: 0x5b8 // Size: 0x04
	float C_SpeedScale_CustomOverride; // Offset: 0x5bc // Size: 0x04
	float C_RunStopSpeedScale_CustomOverride; // Offset: 0x5c0 // Size: 0x04
	bool C_StopInRun_CustomOverride; // Offset: 0x5c4 // Size: 0x01
	char pad_0x5C5[0x3]; // Offset: 0x5c5 // Size: 0x03
	float C_LerpIdleBlendSpaceValue_CustomOverride; // Offset: 0x5c8 // Size: 0x04
	char pad_0x5CC[0x4]; // Offset: 0x5cc // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeMonsterAnimInstance.PlayCreativeDynamicMontage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PlayCreativeDynamicMontage(struct UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, IntProperty LoopCount, bool bIsLoop, float InTimeToStartMontageAt, struct FName SlotNodeName); // Offset: 0x101e8895c // Return & Params: Num(8) Size(0x28)

	// Object Name: Function Creative.CreativeMonsterAnimInstance.ClearAnimReferences
	// Flags: [Native|Public|BlueprintCallable]
	void ClearAnimReferences(); // Offset: 0x101e88940 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeMonsterAnimInstance.CacheAnimVarOverride
	// Flags: [Native|Public|BlueprintCallable]
	void CacheAnimVarOverride(); // Offset: 0x101e88924 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeMonsterAnimInstance.BP_CacheAnimVarOverride
	// Flags: [Event|Public|BlueprintEvent]
	void BP_CacheAnimVarOverride(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeNavigationManager
// Size: 0x1b8 // Inherited bytes: 0x168
struct UCreativeModeNavigationManager : UCreativeModeManagerBase {
	// Fields
	SetProperty CachedActors; // Offset: 0x168 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeModeNavigationManager.SetTimeSliceConfig
	// Flags: [Final|Native|Public]
	void SetTimeSliceConfig(IntProperty MaxTaskPerSlice, IntProperty SliceTimeLen); // Offset: 0x101e8a33c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeModeNavigationManager.SetNavmeshBuildPolicy
	// Flags: [Final|Native|Public]
	void SetNavmeshBuildPolicy(IntProperty PolicyVal); // Offset: 0x101e8a2c0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
	// Flags: [Final|Native|Public]
	void SetDynamicModeEnable(bool bEnable); // Offset: 0x101e8a23c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable
	// Flags: [Final|Native|Public]
	void SetDebugOutputEnable(bool bEnable); // Offset: 0x101e8a1b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum
	// Flags: [Final|Native|Public]
	void SetConcurrentTaskNum(IntProperty Num); // Offset: 0x101e8a13c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr
	// Flags: [Final|Native|Public]
	struct TArray<char> SerializeDynamicTileToByteArr(IntProperty MaxFileSize, IntProperty MaxTileToAdd); // Offset: 0x101e8a050 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks
	// Flags: [Final|Native|Public]
	void RevokePendingBuildingTasks(); // Offset: 0x101e8a03c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnUnInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.ReceiveOnInit
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnInit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.RebuildDynamicTilesByCoord
	// Flags: [Final|Native|Public|HasOutParms]
	void RebuildDynamicTilesByCoord(struct TArray<struct FIntPoint>& DynamicTiles); // Offset: 0x101e89f94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
	// Flags: [Final|Native|Public|HasOutParms]
	void RebuildDynamicTiles(struct TArray<struct AActor*>& Actors); // Offset: 0x101e89eec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.IsBuildingInProgress
	// Flags: [Final|Native|Public]
	bool IsBuildingInProgress(); // Offset: 0x101e89eb8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeModeNavigationManager.ImportDynamicTile
	// Flags: [Final|Native|Public|HasOutParms]
	void ImportDynamicTile(StrProperty& Path); // Offset: 0x101e89e10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.GetWalkableTrianglesInBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void GetWalkableTrianglesInBox(struct FBox& bBox, struct TArray<struct FVector>& OutVertices, struct TArray<IntProperty>& OutIndices); // Offset: 0x101e89cac // Return & Params: Num(3) Size(0x40)

	// Object Name: Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
	// Flags: [Final|Native|Public]
	IntProperty GetDynamicTilesCount(); // Offset: 0x101e89c78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
	// Flags: [Final|Native|Public|HasOutParms]
	bool GetDynamicTileMemCost(IntProperty& Total, IntProperty& OctTree, IntProperty& TileCache, IntProperty& DynamicTile, IntProperty& DynamicTileCount); // Offset: 0x101e89a9c // Return & Params: Num(6) Size(0x15)

	// Object Name: Function Creative.CreativeModeNavigationManager.GetDynamicTileCoordByPos
	// Flags: [Final|Native|Public|HasDefaults]
	struct FIntPoint GetDynamicTileCoordByPos(struct FVector pos); // Offset: 0x101e89a10 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct AActor*> GetAllAssociateActors(); // Offset: 0x101e899ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeModeNavigationManager* Get(struct UObject* WorldContext); // Offset: 0x101e89930 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.ExportDynamicTileStandard
	// Flags: [Final|Native|Public|HasOutParms]
	void ExportDynamicTileStandard(StrProperty& Path); // Offset: 0x101e89888 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.ExportDynamicTile
	// Flags: [Final|Native|Public|HasOutParms]
	void ExportDynamicTile(StrProperty& Path); // Offset: 0x101e897e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.EnsureDynamicBuildCompletion
	// Flags: [Final|Native|Public]
	void EnsureDynamicBuildCompletion(); // Offset: 0x101e897cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr
	// Flags: [Final|Native|Public|HasOutParms]
	void DeserializeDynamicTileFromByteArr(struct TArray<char>& ByteArr); // Offset: 0x101e89724 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.ComputeTotalWalkableSurfaceAreaInBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	float ComputeTotalWalkableSurfaceAreaInBox(struct FBox& bBox); // Offset: 0x101e8968c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeModeNavigationManager.ClearNavCollision
	// Flags: [Final|Native|Public]
	void ClearNavCollision(); // Offset: 0x101e89678 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
	// Flags: [Final|Native|Public]
	void ClearDynamicOctreeData(); // Offset: 0x101e89664 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
	// Flags: [Final|Native|Public]
	void ClearDynamicNavMesh(); // Offset: 0x101e89650 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.ClearAssociateActors
	// Flags: [Final|Native|Public]
	void ClearAssociateActors(); // Offset: 0x101e8963c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct TArray<struct FVector> CalSamplePointsInBoxLegacy(struct FVector& BoxMin, struct FVector& BoxMax, float StepSize, IntProperty MaxPoints); // Offset: 0x101e894ac // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct TArray<struct FVector> CalSamplePointsInBox(struct FVector& BoxMin, struct FVector& BoxMax, float StepSize, IntProperty MaxPoints); // Offset: 0x101e8931c // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Creative.CreativeModeNavigationManager.CalSamplePoints
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct TArray<struct FVector> CalSamplePoints(struct FVector& StartPos, float StepSize, IntProperty MaxPoints); // Offset: 0x101e891e0 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
	// Flags: [Final|Native|Public|HasOutParms]
	void AddNavAffectedObjects(struct TArray<struct AActor*>& Actors); // Offset: 0x101e89138 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
	// Flags: [Final|Native|Public]
	void AddNavAffectedObject(struct AActor* Actor); // Offset: 0x101e890bc // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeNetPacketInspectorBridge
// Size: 0x38 // Inherited bytes: 0x28
struct UCreativeNetPacketInspectorBridge : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.ToggleCapture
	// Flags: [Final|Native|Public]
	void ToggleCapture(); // Offset: 0x101e8b060 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.SetFilter
	// Flags: [Final|Native|Public]
	void SetFilter(StrProperty filter); // Offset: 0x101e8afc8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.SelectRecord
	// Flags: [Final|Native|Public]
	void SelectRecord(IntProperty RecordIndex); // Offset: 0x101e8af4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.CopyText
	// Flags: [Final|Native|Public]
	void CopyText(StrProperty Text); // Offset: 0x101e8aeb4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.Copy
	// Flags: [Final|Native|Public]
	void Copy(StrProperty CopyTarget); // Offset: 0x101e8ae1c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeNetPacketInspectorBridge.Clear
	// Flags: [Final|Native|Public]
	void Clear(); // Offset: 0x101e8ae08 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeObjectEditAxisActor
// Size: 0x620 // Inherited bytes: 0x570
struct ACreativeObjectEditAxisActor : ALuaActor {
	// Fields
	IntProperty SizeScaleBase; // Offset: 0x56c // Size: 0x04
	char pad_0x574[0x14]; // Offset: 0x574 // Size: 0x14
	struct FVector AxisState; // Offset: 0x588 // Size: 0x0c
	struct FVector ForceHideAxis; // Offset: 0x594 // Size: 0x0c
	struct FTransform WorldBaseTransform; // Offset: 0x5a0 // Size: 0x30
	char pad_0x5D0[0x48]; // Offset: 0x5d0 // Size: 0x48
	struct APlayerCameraManager* PlayerCameraManager; // Offset: 0x618 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeObjectEditAxisActor.StartEdit
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void StartEdit(IntProperty Axis, struct FVector2D& pos, struct FVector& HitPos); // Offset: 0x101e8ba64 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.SetForceHideAxis
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetForceHideAxis(struct FVector& State); // Offset: 0x101e8b9dc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.SetFixedAxisSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFixedAxisSize(float FixedSize); // Offset: 0x101e8b960 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.SetEditType
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEditType(IntProperty InEditType, IntProperty InEditSubType); // Offset: 0x101e8b8ac // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.SetComponentVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetComponentVisible(struct USceneComponent* Comp, bool bVisible); // Offset: 0x101e8b7ec // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.SetAxisState
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetAxisState(struct FVector& State); // Offset: 0x101e8b764 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.MarkEditing
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkEditing(bool bDoing); // Offset: 0x101e8b6e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.GetObjectScreenPos
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetObjectScreenPos(struct FVector2D& OutPos); // Offset: 0x101e8b648 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.GetEditAxisWorldDir
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetEditAxisWorldDir(struct FVector& OutDir); // Offset: 0x101e8b5b0 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.CalScale
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void CalScale(struct FVector2D& pos, struct FVector& OutScale); // Offset: 0x101e8b4d8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.CalRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	float CalRotation(struct FVector2D& pos, struct FRotator& OutRot); // Offset: 0x101e8b3f8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CreativeObjectEditAxisActor.CalLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void CalLocation(struct FVector2D& pos, struct FVector& OutLoc); // Offset: 0x101e8b320 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class Creative.CreativeModeObjectFuncComponent
// Size: 0x158 // Inherited bytes: 0x158
struct UCreativeModeObjectFuncComponent : UCreativeModeLiteComponent {
};

// Object Name: Class Creative.CreativeModeObjectInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeModeObjectInterface : UInterface {
	// Functions

	// Object Name: Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostSetInstanceId(StrProperty InstanceID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeObjectLocalAxisActor
// Size: 0x620 // Inherited bytes: 0x570
struct ACreativeObjectLocalAxisActor : ALuaActor {
	// Fields
	struct AActor* AttachActor; // Offset: 0x570 // Size: 0x08
	float AttachOffsetZ; // Offset: 0x578 // Size: 0x04
	char pad_0x57C[0x4]; // Offset: 0x57c // Size: 0x04
	struct USceneComponent* AxisComponent; // Offset: 0x580 // Size: 0x08
	struct USceneComponent* GridComponent; // Offset: 0x588 // Size: 0x08
	struct FTransform BaseTransform; // Offset: 0x590 // Size: 0x30
	struct FVector Offset; // Offset: 0x5c0 // Size: 0x0c
	char pad_0x5CC[0x4]; // Offset: 0x5cc // Size: 0x04
	struct FTransform AttachTransform; // Offset: 0x5d0 // Size: 0x30
	bool bAttach; // Offset: 0x600 // Size: 0x01
	bool bNoRotate; // Offset: 0x601 // Size: 0x01
	bool bNoZClamp; // Offset: 0x602 // Size: 0x01
	char pad_0x603[0x1]; // Offset: 0x603 // Size: 0x01
	float SnapUnit; // Offset: 0x604 // Size: 0x04
	struct FVector SnapAxisConfig; // Offset: 0x608 // Size: 0x0c
	float HideDelayInterval; // Offset: 0x614 // Size: 0x04
	char pad_0x618[0x8]; // Offset: 0x618 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeObjectLocalAxisActor.SetAxisComponents
	// Flags: [Final|Native|Public]
	void SetAxisComponents(struct USceneComponent* Axis, struct USceneComponent* Grid); // Offset: 0x101e8c2dc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeObjectLocalAxisActor.NeedUpdate
	// Flags: [Final|Native|Public]
	void NeedUpdate(); // Offset: 0x101e8c2c8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeObjectManager
// Size: 0x290 // Inherited bytes: 0x168
struct UCreativeObjectManager : UCreativeModeManagerBase {
	// Fields
	MapProperty ObjectMap; // Offset: 0x168 // Size: 0x50
	MapProperty ObjectActiveMap; // Offset: 0x1b8 // Size: 0x50
	bool bContainsSpawnCompleteCallback; // Offset: 0x208 // Size: 0x01
	bool bReordering; // Offset: 0x209 // Size: 0x01
	char pad_0x20A[0x2]; // Offset: 0x20a // Size: 0x02
	IntProperty Client_FrameSpawnNum; // Offset: 0x20c // Size: 0x04
	IntProperty Ds_FrameSpawnNum; // Offset: 0x210 // Size: 0x04
	bool bFrameDestroyObjectEnable; // Offset: 0x214 // Size: 0x01
	char pad_0x215[0x3]; // Offset: 0x215 // Size: 0x03
	IntProperty Client_FrameDestroyNum; // Offset: 0x218 // Size: 0x04
	IntProperty Ds_FrameDestroyNum; // Offset: 0x21c // Size: 0x04
	bool bPostSpawnCompleteEventFlag; // Offset: 0x220 // Size: 0x01
	char pad_0x221[0x6f]; // Offset: 0x221 // Size: 0x6f

	// Functions

	// Object Name: Function Creative.CreativeObjectManager.SpawnObjectForStreaming
	// Flags: [Final|Native|Public]
	void SpawnObjectForStreaming(StrProperty InstanceID); // Offset: 0x101e8f584 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeObjectManager.SpawnObject
	// Flags: [Final|Native|Public|HasDefaults]
	struct UObject* SpawnObject(StrProperty InstanceID, StrProperty Path, struct FTransform SpawnTransform); // Offset: 0x101e8f390 // Return & Params: Num(4) Size(0x58)

	// Object Name: Function Creative.CreativeObjectManager.SetObjectTempStreamingType
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetObjectTempStreamingType(StrProperty InstanceID, enum class ECreativeModeActorStreamingType TempStreamingType); // Offset: 0x101e8f2a8 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeObjectManager.ResetObjectStreamingType
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ResetObjectStreamingType(StrProperty InstanceID); // Offset: 0x101e8f200 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool RemoveSpawnObjectInfoFormQueue(StrProperty& InstanceID); // Offset: 0x101e8f148 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.RemovePhysicsObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemovePhysicsObject(StrProperty InstanceID); // Offset: 0x101e8f064 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeObjectManager.RemoveObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveObject(StrProperty InstanceID, bool bRemovePhysicsObject); // Offset: 0x101e8ef28 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool RemoveDestroyObjectInfoFormQueue(StrProperty& InstanceID); // Offset: 0x101e8ee70 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.ReceiveUnregisterObject
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveUnregisterObject(StrProperty InstanceID, struct UObject* NewObject); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeObjectManager.ReceiveRegisterObject
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveRegisterObject(StrProperty InstanceID, struct UObject* NewObject); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeObjectManager.ReceiveOnPostLoadMapWithWorld
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeObjectManager.ReceiveClearAllObjects
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveClearAllObjects(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeObjectManager.OnPostLoadMapWithWorld
	// Flags: [Final|Native|Public]
	void OnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x101e8edf4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeObjectManager.OnObjectSpawnComplete
	// Flags: [Event|Public|BlueprintEvent]
	void OnObjectSpawnComplete(StrProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeObjectManager.IsLogicObject
	// Flags: [Final|Native|Public]
	bool IsLogicObject(StrProperty ID); // Offset: 0x101e8ed4c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.IsGroupObject
	// Flags: [Final|Native|Public]
	bool IsGroupObject(StrProperty ID); // Offset: 0x101e8eca4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.IsCanBatchObject
	// Flags: [Final|Native|Public]
	bool IsCanBatchObject(StrProperty ID); // Offset: 0x101e8ebfc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.GetObjectTransform
	// Flags: [Final|Native|Public|HasDefaults]
	struct FTransform GetObjectTransform(StrProperty ID); // Offset: 0x101e8eb40 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeObjectManager.GetObjectNum
	// Flags: [Final|Native|Public|Const]
	uint32_t GetObjectNum(); // Offset: 0x101e8eb0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeObjectManager.GetObjectAssetPath
	// Flags: [Final|Native|Public]
	StrProperty GetObjectAssetPath(StrProperty ID); // Offset: 0x101e8ea3c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeObjectManager.GetObjectAssetID
	// Flags: [Final|Native|Public]
	IntProperty GetObjectAssetID(StrProperty ID); // Offset: 0x101e8e994 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeObjectManager.GetObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UObject* GetObject(StrProperty InstanceID); // Offset: 0x101e8e8a0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeObjectManager.GetActiveObjectNum
	// Flags: [Final|Native|Public|Const]
	uint32_t GetActiveObjectNum(); // Offset: 0x101e8e86c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeObjectManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeObjectManager* Get(struct UObject* WorldContext); // Offset: 0x101e8e7f0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeObjectManager.DestroyObjectForStreaming
	// Flags: [Final|Native|Public]
	void DestroyObjectForStreaming(StrProperty InstanceID); // Offset: 0x101e8e70c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeObjectManager.DestroyObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool DestroyObject(StrProperty InstanceID); // Offset: 0x101e8e618 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.CheckObjectBeBatch
	// Flags: [Final|Native|Public]
	bool CheckObjectBeBatch(StrProperty ID); // Offset: 0x101e8e570 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeObjectManager.ChangeObjectTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	bool ChangeObjectTransform(StrProperty InstanceID, struct FTransform Transform); // Offset: 0x101e8e414 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function Creative.CreativeObjectManager.AddSpawnObjectToQueue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AddSpawnObjectToQueue(StrProperty InstanceID, StrProperty Path, struct FTransform SpawnTransform); // Offset: 0x101e8e230 // Return & Params: Num(3) Size(0x50)

	// Object Name: Function Creative.CreativeObjectManager.AddObject
	// Flags: [Final|Native|Public]
	bool AddObject(StrProperty InstanceID, struct FCreativeModeStreamingParameters StreamingParameters); // Offset: 0x101e8e0f8 // Return & Params: Num(3) Size(0x13)

	// Object Name: Function Creative.CreativeObjectManager.AddDestroyObjectToQueue
	// Flags: [Final|Native|Public]
	void AddDestroyObjectToQueue(StrProperty InstanceID); // Offset: 0x101e8e014 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Creative.CreativeObjectStateManager
// Size: 0x170 // Inherited bytes: 0x168
struct UCreativeObjectStateManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x8]; // Offset: 0x168 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Protected]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e9015c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeObjectStateManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeObjectStateManager* Get(struct UObject* WorldContext); // Offset: 0x101e900e0 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeOccupationAreaLiteComponent
// Size: 0x158 // Inherited bytes: 0x158
struct UCreativeOccupationAreaLiteComponent : UCreativeModeLiteComponent {
};

// Object Name: Class Creative.CreativeOctreeSyncManager
// Size: 0x1d0 // Inherited bytes: 0x168
struct UCreativeOctreeSyncManager : UCreativeModeManagerBase {
	// Fields
	enum class ECollisionChannel CollisionChannel; // Offset: 0x168 // Size: 0x01
	char pad_0x169[0x3]; // Offset: 0x169 // Size: 0x03
	float BackwardOffset; // Offset: 0x16c // Size: 0x04
	bool bRootPositionInitialized; // Offset: 0x170 // Size: 0x01
	char pad_0x171[0x3]; // Offset: 0x171 // Size: 0x03
	float MaxSearchRadius; // Offset: 0x174 // Size: 0x04
	float ExpandSearchRadius; // Offset: 0x178 // Size: 0x04
	char pad_0x17C[0x4]; // Offset: 0x17c // Size: 0x04
	struct FOctreeNode RootNode; // Offset: 0x180 // Size: 0x30
	float CellSize; // Offset: 0x1b0 // Size: 0x04
	float MergeDistance; // Offset: 0x1b4 // Size: 0x04
	IntProperty MaxDepth; // Offset: 0x1b8 // Size: 0x04
	float MinCellSize; // Offset: 0x1bc // Size: 0x04
	IntProperty SplitThreshold; // Offset: 0x1c0 // Size: 0x04
	bool bCheckObstacles; // Offset: 0x1c4 // Size: 0x01
	char pad_0x1C5[0x3]; // Offset: 0x1c5 // Size: 0x03
	IntProperty DataCount; // Offset: 0x1c8 // Size: 0x04
	char pad_0x1CC[0x4]; // Offset: 0x1cc // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativeOctreeSyncManager.ShouldMergeData
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	bool ShouldMergeData(struct FOctreeData& ExistingData, struct FOctreeData& NewData, float Distance); // Offset: 0x101e917e4 // Return & Params: Num(4) Size(0xa5)

	// Object Name: Function Creative.CreativeOctreeSyncManager.ResetTree
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetTree(); // Offset: 0x101e917d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOctreeSyncManager.RemoveDataInBoundsByActorRecursive
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty RemoveDataInBoundsByActorRecursive(struct FOctreeNode& Node, struct FBox& BoundingBox, struct AActor* Actor); // Offset: 0x101e91678 // Return & Params: Num(4) Size(0x5c)

	// Object Name: Function Creative.CreativeOctreeSyncManager.RemoveDataInBoundsByActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void RemoveDataInBoundsByActor(struct FBox& BoundingBox, struct AActor* Actor); // Offset: 0x101e915ac // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Creative.CreativeOctreeSyncManager.RemoveDataByUIDs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void RemoveDataByUIDs(SetProperty& UIDs); // Offset: 0x101e914d4 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Creative.CreativeOctreeSyncManager.RemoveDataByUID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveDataByUID(IntProperty UID); // Offset: 0x101e91458 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeOctreeSyncManager.RemoveDataByPlayerKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveDataByPlayerKey(StrProperty PlayerKey); // Offset: 0x101e91374 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeOctreeSyncManager.InsertData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void InsertData(struct FOctreeData& InData); // Offset: 0x101e912b0 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Creative.CreativeOctreeSyncManager.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Initialize(float InCellSize, float InMergeDistance, IntProperty InMaxDepth, float InMinCellSize); // Offset: 0x101e91184 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Creative.CreativeOctreeSyncManager.HookDecalManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HookDecalManager(struct ACreativeDecalManager* DecalManager, bool bRegister); // Offset: 0x101e910c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeOctreeSyncManager.HasObstacleBetween
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool HasObstacleBetween(struct FVector& Start, struct FVector& End); // Offset: 0x101e90fdc // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetOffsetLocationForObstacleCheck
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetOffsetLocationForObstacleCheck(struct FVector& Location, struct FVector& Forward); // Offset: 0x101e90ef8 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetNodeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct TArray<struct FOctreeData> GetNodeData(struct FOctreeNode& Node); // Offset: 0x101e90e24 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetNodeChildren
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct TArray<struct FOctreeNode> GetNodeChildren(struct FOctreeNode& Node); // Offset: 0x101e90d50 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetNearbyDataRecursive
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	void GetNearbyDataRecursive(struct FOctreeNode& Node, struct FVector& Location, float SearchRadius, struct TArray<struct FOctreeData>& OutData, IntProperty MaxCount, bool bExpandSearch); // Offset: 0x101e90b14 // Return & Params: Num(6) Size(0x55)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetNearbyData
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct TArray<struct FOctreeData> GetNearbyData(struct FVector& Location, IntProperty MaxCount, bool bSortByDistance, bool bExpandSearch); // Offset: 0x101e90984 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Creative.CreativeOctreeSyncManager.GetAllData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FOctreeData> GetAllData(); // Offset: 0x101e90920 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeOctreeSyncManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeOctreeSyncManager* Get(struct UObject* WorldContext); // Offset: 0x101e908a4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeOctreeSyncManager.ExpandRootNode
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void ExpandRootNode(struct FVector& Point); // Offset: 0x101e9081c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativeOctreeSyncManager.EnsureRootContainsPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void EnsureRootContainsPoint(struct FVector& Point); // Offset: 0x101e90794 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class Creative.CreativeOfflineBuildManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeOfflineBuildManager : USTExtraManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostSetLuaEventBridgeInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance
	// Flags: [Final|Native|Public]
	void OnPostSetLuaEventBridgeInstance(); // Offset: 0x101e92114 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOfflineBuildManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeOfflineBuildManager* Get(struct UObject* WorldContext); // Offset: 0x101e92098 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeOpenUIRoundTripToolBridge
// Size: 0x38 // Inherited bytes: 0x28
struct UCreativeOpenUIRoundTripToolBridge : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeOpenUIRoundTripToolBridge.RunTest
	// Flags: [Final|Native|Public]
	void RunTest(StrProperty SCOPE, IntProperty Iterations, float Tolerance, StrProperty ExportFlavor); // Offset: 0x101e92340 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeOpenUIRoundTripToolBridge.OpenReportFolder
	// Flags: [Final|Native|Public]
	void OpenReportFolder(); // Offset: 0x101e9232c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOpenUIRoundTripToolBridge.CopyOutput
	// Flags: [Final|Native|Public]
	void CopyOutput(); // Offset: 0x101e92318 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeOverlapCheckComponent
// Size: 0x2a0 // Inherited bytes: 0x238
struct UCreativeOverlapCheckComponent : ULuaActorComponent {
	// Fields
	DelegateProperty OnBeginOverlapDelegate; // Offset: 0x238 // Size: 0x10
	DelegateProperty OnEndOverlapDelegate; // Offset: 0x248 // Size: 0x10
	struct TArray<struct UObject*> OverlapClassFilters; // Offset: 0x258 // Size: 0x10
	struct UPrimitiveComponent* OverlapCheckComponent; // Offset: 0x268 // Size: 0x08
	struct TArray<struct AActor*> InAreaActors; // Offset: 0x270 // Size: 0x10
	IntProperty OverlapCheckFrame; // Offset: 0x280 // Size: 0x04
	IntProperty OverlapLowCheckFrame; // Offset: 0x284 // Size: 0x04
	float OverlapCheckCD; // Offset: 0x288 // Size: 0x04
	IntProperty EmptyCheckNumber; // Offset: 0x28c // Size: 0x04
	bool HighPrecisionCheck; // Offset: 0x290 // Size: 0x01
	bool bFilterInVehicle; // Offset: 0x291 // Size: 0x01
	char pad_0x292[0x2]; // Offset: 0x292 // Size: 0x02
	float CheckTickFrame; // Offset: 0x294 // Size: 0x04
	struct UGameLuaAPI* GameLuaAPI; // Offset: 0x298 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeOverlapCheckComponent.StartOverlapCheck
	// Flags: [Final|Native|Public]
	void StartOverlapCheck(); // Offset: 0x101e92944 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.IsOverlapClass
	// Flags: [Final|Native|Public]
	bool IsOverlapClass(struct AActor* OverlapActor); // Offset: 0x101e928b8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.InitOverlapComponent
	// Flags: [Final|Native|Public]
	void InitOverlapComponent(struct UPrimitiveComponent* Component); // Offset: 0x101e9283c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.EndOverlapCheck
	// Flags: [Final|Native|Public]
	void EndOverlapCheck(); // Offset: 0x101e92828 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.EnableFilterInVehicle
	// Flags: [Final|Native|Public]
	void EnableFilterInVehicle(bool bEnable); // Offset: 0x101e927a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.CheckOverlapActors
	// Flags: [Final|Native|Public]
	void CheckOverlapActors(); // Offset: 0x101e92790 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeOverlapCheckComponent.AddOverlapClass
	// Flags: [Final|Native|Public]
	void AddOverlapClass(struct UObject* OverlapClass); // Offset: 0x101e92714 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeParentChildManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeParentChildManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeParentChildManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeParentChildManager* Get(struct UObject* WorldContext); // Offset: 0x101e92c80 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativePerfManager
// Size: 0x1e0 // Inherited bytes: 0x168
struct UCreativePerfManager : UCreativeModeManagerBase {
	// Fields
	MapProperty ActorPerfData; // Offset: 0x168 // Size: 0x50
	struct FCreativeNetData BeginSampleNetData; // Offset: 0x1b8 // Size: 0x08
	float FPSStatInterval; // Offset: 0x1c0 // Size: 0x04
	char pad_0x1C4[0x1c]; // Offset: 0x1c4 // Size: 0x1c

	// Functions

	// Object Name: Function Creative.CreativePerfManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativePerfManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101e935a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativePerfManager.GetUObjectMemoryUsage
	// Flags: [Final|Native|Public]
	MapProperty GetUObjectMemoryUsage(); // Offset: 0x101e93544 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Creative.CreativePerfManager.GetResult
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct FCreaitvePerfDataMap> GetResult(); // Offset: 0x101e934e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePerfManager.GetNetData
	// Flags: [Final|Native|Public]
	struct FCreativeNetData GetNetData(); // Offset: 0x101e934ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativePerfManager.GetMemoryData
	// Flags: [Final|Native|Public]
	struct FCreativeMemoryData GetMemoryData(); // Offset: 0x101e93474 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Creative.CreativePerfManager.GetCPUUsage
	// Flags: [Final|Native|Public|HasOutParms]
	void GetCPUUsage(float& OutCPUTimePct, float& OutCPUTimePctRelative, IntProperty Type); // Offset: 0x101e93358 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CreativePerfManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativePerfManager* Get(struct UObject* WorldContext); // Offset: 0x101e932dc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePerfManager.EndSample
	// Flags: [Final|Native|Public]
	void EndSample(); // Offset: 0x101e932c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePerfManager.BeginSample
	// Flags: [Final|Native|Public]
	void BeginSample(); // Offset: 0x101e932b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePerfManager.AddActorToRecord
	// Flags: [Final|Native|Public]
	void AddActorToRecord(struct AActor* Actor, IntProperty AssetId, struct FName ScopeName); // Offset: 0x101e931c0 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Creative.CreativePhotonDestructibleMeshComponent
// Size: 0xf90 // Inherited bytes: 0xf40
struct UCreativePhotonDestructibleMeshComponent : UPhotonDestructibleMeshComponent {
	// Fields
	char pad_0xF40[0x20]; // Offset: 0xf40 // Size: 0x20
	struct FPhotonDestructionParam DestructionParam; // Offset: 0xf60 // Size: 0x20
	IntProperty MaxFXFragmentNumber; // Offset: 0xf80 // Size: 0x04
	char pad_0xF84[0xc]; // Offset: 0xf84 // Size: 0x0c

	// Functions

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.SetInstanceActive
	// Flags: [Final|Native|Public]
	void SetInstanceActive(bool bActive); // Offset: 0x101e93f60 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.SetDestructionParam
	// Flags: [Final|Native|Public]
	void SetDestructionParam(struct FPhotonDestructionParam Param); // Offset: 0x101e93e9c // Return & Params: Num(1) Size(0x20)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeServerDamagedDelegate
	// Flags: [Final|Native|Public]
	void SetCreativeServerDamagedDelegate(DelegateProperty del); // Offset: 0x101e93e18 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeClientFragmentStateChangedDelegate
	// Flags: [Final|Native|Public]
	void SetCreativeClientFragmentStateChangedDelegate(DelegateProperty del); // Offset: 0x101e93d94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.RebornOneFragment
	// Flags: [Final|Native|Public]
	bool RebornOneFragment(IntProperty FragmentIndex); // Offset: 0x101e93d08 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.RebornInstance
	// Flags: [Final|Native|Public]
	bool RebornInstance(); // Offset: 0x101e93cd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.RandomRecoverOneFragment
	// Flags: [Final|Native|Public]
	bool RandomRecoverOneFragment(); // Offset: 0x101e93ca0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.RandomDestroyOneFragment
	// Flags: [Final|Native|Public]
	void RandomDestroyOneFragment(); // Offset: 0x101e93c8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.DestroyInstance
	// Flags: [Final|Native|Public]
	void DestroyInstance(); // Offset: 0x101e93c78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePhotonDestructibleMeshComponent.CheckFragmentOverlap
	// Flags: [Final|Native|Public]
	bool CheckFragmentOverlap(IntProperty FragmentIndex); // Offset: 0x101e93bec // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent
// Size: 0x1180 // Inherited bytes: 0x10b0
struct UCreativePhotonHierarchicalInstancedDestructibleMeshComponent : UPhotonHierarchicalInstancedDestructibleMeshComponent {
	// Fields
	char pad_0x10B0[0x8]; // Offset: 0x10b0 // Size: 0x08
	StrProperty MinClusterInstanceID; // Offset: 0x10b8 // Size: 0x10
	struct TArray<uint32_t> InstanceReplicationIndex; // Offset: 0x10c8 // Size: 0x10
	MapProperty InstanceToDestructionParams; // Offset: 0x10d8 // Size: 0x50
	MapProperty UGCInstanceIDToInstanceIndex; // Offset: 0x1128 // Size: 0x50
	IntProperty MaxFXFragmentNumber; // Offset: 0x1178 // Size: 0x04
	char pad_0x117C[0x4]; // Offset: 0x117c // Size: 0x04

	// Functions

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
	// Flags: [Final|Native|Public]
	void SetServerDamagedInstancedDelegate(DelegateProperty InDelegate); // Offset: 0x101e95020 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceMaxHp
	// Flags: [Final|Native|Public]
	void SetInstanceMaxHp(IntProperty InstanceIndex, float MaxHP); // Offset: 0x101e94f68 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceActive
	// Flags: [Final|Native|Public]
	void SetInstanceActive(StrProperty InstanceID, bool bActive); // Offset: 0x101e94e88 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetDestructionParam
	// Flags: [Final|Native|Public]
	void SetDestructionParam(struct TArray<IntProperty> InstanceIndex, struct TArray<struct FPhotonDestructionParam> DestructionParams); // Offset: 0x101e94d0c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornOneFragment
	// Flags: [Final|Native|Public]
	bool RebornOneFragment(StrProperty InstanceID, IntProperty FragmentIndex); // Offset: 0x101e94c24 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornInstance
	// Flags: [Final|Native|Public]
	bool RebornInstance(StrProperty InstanceID); // Offset: 0x101e94b7c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomRecoverOneFragment
	// Flags: [Final|Native|Public]
	bool RandomRecoverOneFragment(StrProperty InstanceID); // Offset: 0x101e94ad4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomDestroyOneFragment
	// Flags: [Final|Native|Public]
	void RandomDestroyOneFragment(StrProperty InstanceID); // Offset: 0x101e94a3c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientInitial
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void OnClientInitial(IntProperty InstanceIndex, struct TArray<IntProperty>& ImpactFragmentItemIndex); // Offset: 0x101e94950 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientDamaged
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void OnClientDamaged(IntProperty InstanceIndex, struct TArray<IntProperty>& ImpactFragmentItemIndex, struct FVector LocalImpactPoint, struct FVector LocalVelocity, IntProperty HitType); // Offset: 0x101e94798 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.GetUGCInstanceID
	// Flags: [Final|Native|Public]
	StrProperty GetUGCInstanceID(IntProperty InstanceIndex); // Offset: 0x101e946e4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.DestroyInstance
	// Flags: [Final|Native|Public]
	void DestroyInstance(StrProperty InstanceID); // Offset: 0x101e9464c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.CheckFragmentOverlap
	// Flags: [Final|Native|Public]
	bool CheckFragmentOverlap(IntProperty InstanceIndex, IntProperty FragmentIndex); // Offset: 0x101e94588 // Return & Params: Num(3) Size(0x9)
};

// Object Name: Class Creative.CreativePhotonInstancedDestructibleMeshComponent
// Size: 0x10b0 // Inherited bytes: 0xfd0
struct UCreativePhotonInstancedDestructibleMeshComponent : UPhotonInstancedDestructibleMeshComponent {
	// Fields
	char pad_0xFD0[0x10]; // Offset: 0xfd0 // Size: 0x10
	StrProperty MinClusterInstanceID; // Offset: 0xfe0 // Size: 0x10
	struct TArray<uint32_t> InstanceReplicationIndex; // Offset: 0xff0 // Size: 0x10
	MapProperty InstanceToDestructionParams; // Offset: 0x1000 // Size: 0x50
	MapProperty UGCInstanceIDToInstanceIndex; // Offset: 0x1050 // Size: 0x50
	IntProperty MaxFXFragmentNumber; // Offset: 0x10a0 // Size: 0x04
	char pad_0x10A4[0xc]; // Offset: 0x10a4 // Size: 0x0c

	// Functions

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
	// Flags: [Final|Native|Public]
	void SetServerDamagedInstancedDelegate(DelegateProperty InDelegate); // Offset: 0x101e99168 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceMaxHp
	// Flags: [Final|Native|Public]
	void SetInstanceMaxHp(IntProperty InstanceIndex, float MaxHP); // Offset: 0x101e990b0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceActive
	// Flags: [Final|Native|Public]
	void SetInstanceActive(StrProperty InstanceID, bool bActive); // Offset: 0x101e98fd0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetDestructionParam
	// Flags: [Final|Native|Public]
	void SetDestructionParam(struct TArray<IntProperty> InstanceIndex, struct TArray<struct FPhotonDestructionParam> DestructionParams); // Offset: 0x101e98e54 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornOneFragment
	// Flags: [Final|Native|Public]
	bool RebornOneFragment(StrProperty InstanceID, IntProperty FragmentIndex); // Offset: 0x101e98d6c // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornInstance
	// Flags: [Final|Native|Public]
	bool RebornInstance(StrProperty InstanceID); // Offset: 0x101e98cc4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomRecoverOneFragment
	// Flags: [Final|Native|Public]
	bool RandomRecoverOneFragment(StrProperty InstanceID); // Offset: 0x101e98c1c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomDestroyOneFragment
	// Flags: [Final|Native|Public]
	void RandomDestroyOneFragment(StrProperty InstanceID); // Offset: 0x101e98b84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientInitial
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void OnClientInitial(IntProperty InstanceIndex, struct TArray<IntProperty>& ImpactFragmentItemIndex); // Offset: 0x101e98a98 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientDamaged
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void OnClientDamaged(IntProperty InstanceIndex, struct TArray<IntProperty>& ImpactFragmentItemIndex, struct FVector LocalImpactPoint, struct FVector LocalVelocity, IntProperty HitType); // Offset: 0x101e988e0 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.GetUGCInstanceID
	// Flags: [Final|Native|Public]
	StrProperty GetUGCInstanceID(IntProperty InstanceIndex); // Offset: 0x101e9882c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.DestroyInstance
	// Flags: [Final|Native|Public]
	void DestroyInstance(StrProperty InstanceID); // Offset: 0x101e98794 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhotonInstancedDestructibleMeshComponent.CheckFragmentOverlap
	// Flags: [Final|Native|Public]
	bool CheckFragmentOverlap(IntProperty InstanceIndex, IntProperty FragmentIndex); // Offset: 0x101e986d0 // Return & Params: Num(3) Size(0x9)
};

// Object Name: Class Creative.CreativePhysicsBatchActor
// Size: 0x6e0 // Inherited bytes: 0x570
struct ACreativePhysicsBatchActor : ALuaActor {
	// Fields
	char pad_0x570[0x10]; // Offset: 0x570 // Size: 0x10
	MapProperty InstancePhysicsComponentMap; // Offset: 0x580 // Size: 0x50
	char pad_0x5D0[0x6c]; // Offset: 0x5d0 // Size: 0x6c
	IntProperty TickRegisterMaxNum; // Offset: 0x63c // Size: 0x04
	DelegateProperty MeshLoadSuccessDelegate; // Offset: 0x640 // Size: 0x10
	DelegateProperty MeshLoadSuccessByPathDelegate; // Offset: 0x650 // Size: 0x10
	DelegateProperty CustomMeshLoadSuccessDelegate; // Offset: 0x660 // Size: 0x10
	DelegateProperty CustomMeshLoadSuccessByPathDelegate; // Offset: 0x670 // Size: 0x10
	MapProperty ComponentTempData; // Offset: 0x680 // Size: 0x50
	IntProperty ReplicateLimit; // Offset: 0x6d0 // Size: 0x04
	char pad_0x6D4[0xc]; // Offset: 0x6d4 // Size: 0x0c

	// Functions

	// Object Name: Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
	// Flags: [Final|Native|Public|HasOutParms]
	void UpdatePhysicsComponentMaterial(StrProperty& ComponentID, StrProperty& MaterialPath); // Offset: 0x101e9a090 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void UpdatePhysicsComponent(StrProperty& ComponentID, struct FTransform Transform, enum class ECollisionEnabled CollisionEnabled); // Offset: 0x101e99f34 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent
	// Flags: [Final|Native|Public|HasOutParms]
	bool UnRegisterPhysicsComponent(StrProperty& ComponentID); // Offset: 0x101e99e7c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
	// Flags: [Final|Native|Public|HasOutParms]
	void SetPhysicsComponentEnabled(StrProperty& ComponentID, enum class ECollisionEnabled CollisionEnabled); // Offset: 0x101e99d88 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh
	// Flags: [Final|Native|Public|HasDefaults]
	void RegisterPhysicsComponentByMesh(StrProperty InstanceID, StrProperty ComponentID, struct FTransform Transform, StrProperty MeshPath, struct FName CollisionProfileName); // Offset: 0x101e99acc // Return & Params: Num(5) Size(0x68)

	// Object Name: Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccessByPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnLoadMeshSuccessByPath(struct UObject* Obj, StrProperty ComponentID); // Offset: 0x101e999a8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccess
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnLoadMeshSuccess(struct UObject* Obj, StrProperty ComponentID); // Offset: 0x101e99884 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhysicsBatchActor.IsLoadFinish
	// Flags: [Final|Native|Public|Const]
	bool IsLoadFinish(); // Offset: 0x101e99868 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhysicsBatchActor.GetRegisterNum
	// Flags: [Final|Native|Public|Const]
	IntProperty GetRegisterNum(); // Offset: 0x101e9984c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent
	// Flags: [Final|Native|Public|HasOutParms]
	struct UCreativePhysicsComponent* GetPhysicsComponent(StrProperty& ComponentID); // Offset: 0x101e99794 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
	// Flags: [Final|Native|Public]
	void ClearAllPhysicsComponent(); // Offset: 0x101e99780 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativePhysicsComponent
// Size: 0xa90 // Inherited bytes: 0xa20
struct UCreativePhysicsComponent : UMeshComponent {
	// Fields
	char pad_0xA20[0x8]; // Offset: 0xa20 // Size: 0x08
	struct UBodySetup* BodySetup; // Offset: 0xa28 // Size: 0x08
	struct UStaticMesh* InStaticMesh; // Offset: 0xa30 // Size: 0x08
	StrProperty InstanceID; // Offset: 0xa38 // Size: 0x10
	struct FName CollisionProfileName; // Offset: 0xa48 // Size: 0x08
	char pad_0xA50[0x30]; // Offset: 0xa50 // Size: 0x30
	DelegateProperty MatLoadSuccessDelegate; // Offset: 0xa80 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetIsReplicatedOnly(bool ShouldReplicate); // Offset: 0x101e9a6f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhysicsComponent.OnLoadMaterialSuccess
	// Flags: [Final|Native|Public]
	void OnLoadMaterialSuccess(struct UObject* Obj, StrProperty Path); // Offset: 0x101e9a5d0 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativePhysicsManager
// Size: 0x360 // Inherited bytes: 0x168
struct UCreativePhysicsManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x18]; // Offset: 0x168 // Size: 0x18
	MapProperty BodySetupMap; // Offset: 0x180 // Size: 0x50
	MapProperty MaterialInterfaceMap; // Offset: 0x1d0 // Size: 0x50
	MapProperty InstanceCellMap; // Offset: 0x220 // Size: 0x50
	MapProperty PhysicsBatchActorMap; // Offset: 0x270 // Size: 0x50
	bool StreamingEnable; // Offset: 0x2c0 // Size: 0x01
	char pad_0x2C1[0x7]; // Offset: 0x2c1 // Size: 0x07
	MapProperty VisiblePhysicsBatchActors; // Offset: 0x2c8 // Size: 0x50
	char pad_0x318[0x38]; // Offset: 0x318 // Size: 0x38
	struct TArray<struct ACreativePhysicsBatchActor*> OutAllBatchActorArray; // Offset: 0x350 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativePhysicsManager.UpdatePhysicsObjectCellInfo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void UpdatePhysicsObjectCellInfo(StrProperty InstanceID, StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e9b390 // Return & Params: Num(3) Size(0x2c)

	// Object Name: Function Creative.CreativePhysicsManager.SetStreamingEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStreamingEnable(bool Enable); // Offset: 0x101e9b30c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetPhysicsActorVisible(StrProperty GridName, struct FIntVector& CellIndex, bool Visible); // Offset: 0x101e9b1d4 // Return & Params: Num(3) Size(0x1d)

	// Object Name: Function Creative.CreativePhysicsManager.RemovePhysicsObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemovePhysicsObject(StrProperty InstanceID); // Offset: 0x101e9b13c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhysicsManager.PreAddPhysicsObjectCheck
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool PreAddPhysicsObjectCheck(StrProperty InstanceID); // Offset: 0x101e9b08c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish
	// Flags: [Event|Public|BlueprintEvent]
	void OnPhysicsBatchActorLoadFinish(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool IsPhysicsActorVisible(StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e9af98 // Return & Params: Num(3) Size(0x1d)

	// Object Name: Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ACreativePhysicsBatchActor* GetPhysicsBatchActorByInstanceID(StrProperty InstanceID); // Offset: 0x101e9aea4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct ACreativePhysicsBatchActor* GetPhysicsBatchActor(StrProperty GridName, struct FIntVector& Index); // Offset: 0x101e9adb0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativePhysicsManager.GetGlobalPhysicsBatchActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ACreativePhysicsBatchActor* GetGlobalPhysicsBatchActor(); // Offset: 0x101e9ad7c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativePhysicsManager.GetAllPhysicsActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct ACreativePhysicsBatchActor*> GetAllPhysicsActor(); // Offset: 0x101e9ad18 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativePhysicsManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativePhysicsManager* Get(struct UObject* WorldContext); // Offset: 0x101e9ac9c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllPhysicsBatchActor(); // Offset: 0x101e9ac88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativePhysicsManager.ChangePhysicsObjectIsPrefab
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ChangePhysicsObjectIsPrefab(StrProperty InstanceID, bool bIsPrefab); // Offset: 0x101e9aba8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativePhysicsManager.AddPhysicsObject
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void AddPhysicsObject(StrProperty InstanceID, StrProperty GridName, struct FIntVector& CellIndex); // Offset: 0x101e9aa70 // Return & Params: Num(3) Size(0x2c)
};

// Object Name: Class Creative.CreativePlayerAPIObject
// Size: 0x188 // Inherited bytes: 0x188
struct UCreativePlayerAPIObject : UCreativeApiObject {
	// Functions

	// Object Name: Function Creative.CreativePlayerAPIObject.SetPlayerDirection
	// Flags: [Final|Native|Public|HasDefaults]
	bool SetPlayerDirection(int64_t PlayerUUID, struct FVector Direction); // Offset: 0x101e9bf64 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerTeamIndex
	// Flags: [Final|Native|Public]
	IntProperty GetPlayerTeamIndex(int64_t PlayerUUID); // Offset: 0x101e9bed8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerTeamIDAndTeamIndexFromCPP
	// Flags: [Final|Native|Public|HasOutParms]
	void GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, IntProperty& OutTeamID, IntProperty& OutTeamIndex); // Offset: 0x101e9bdbc // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerTeamID
	// Flags: [Final|Native|Public]
	IntProperty GetPlayerTeamID(int64_t PlayerUUID); // Offset: 0x101e9bd30 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerMaxHealth
	// Flags: [Final|Native|Public]
	float GetPlayerMaxHealth(int64_t PlayerUUID); // Offset: 0x101e9bca4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerLocation
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector GetPlayerLocation(int64_t PlayerUUID); // Offset: 0x101e9bc14 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerHealth
	// Flags: [Final|Native|Public]
	float GetPlayerHealth(int64_t PlayerUUID); // Offset: 0x101e9bb88 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativePlayerAPIObject.GetPlayerDirection
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector GetPlayerDirection(int64_t PlayerUUID); // Offset: 0x101e9baf8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativePlayerAPIObject.AddPlayerHealth
	// Flags: [Final|Native|Public]
	float AddPlayerHealth(int64_t PlayerUUID, float AddHealth); // Offset: 0x101e9ba30 // Return & Params: Num(3) Size(0x10)
};

// Object Name: Class Creative.CreativeModePlayerState
// Size: 0x1ce8 // Inherited bytes: 0x1cd8
struct ACreativeModePlayerState : ASTExtraPlayerState {
	// Fields
	bool bEnableAutoPickUp; // Offset: 0x1cd8 // Size: 0x01
	char pad_0x1CD9[0x7]; // Offset: 0x1cd9 // Size: 0x07
	struct UCreativeTaskComponent* CreativeTaskComponent; // Offset: 0x1ce0 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeModePlayerState.ServerRemoveInstance
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerRemoveInstance(StrProperty InstanceID); // Offset: 0x101e9c8a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeModePlayerState.ServerReceiveModifyContent
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	struct TArray<char> ServerReceiveModifyContent(struct TArray<char>& Content, IntProperty& idx); // Offset: 0x101e9c768 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeModePlayerState.ServerAddInstanceAdvance
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerAddInstanceAdvance(StrProperty InstanceID, struct TArray<char> Content, IntProperty idx); // Offset: 0x101e9c634 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.CreativeModePlayerState.ServerAddInstance
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerAddInstance(StrProperty InstanceID, struct TArray<char> Content); // Offset: 0x101e9c540 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.CreativePoolInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativePoolInterface : UInterface {
	// Functions

	// Object Name: Function Creative.CreativePoolInterface.SetRecycleTime
	// Flags: [Native|Public]
	void SetRecycleTime(float RecycleTime); // Offset: 0x101e9cf58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativePoolInterface.SetIsRecycled
	// Flags: [Native|Public]
	void SetIsRecycled(bool IsRecycled); // Offset: 0x101e9cecc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnReturnToPool(struct UObject* NewOuter, IntProperty RecycledSeq); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveOnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePoolInterface.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101e9cdfc // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativePoolInterface.OnPickFromPool
	// Flags: [Native|Public]
	void OnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x101e9cd20 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativePoolInterface.GetUnusedComponentName
	// Flags: [Native|Public|HasOutParms]
	StrProperty GetUnusedComponentName(struct UObject* InOuter, StrProperty& NamePrefix); // Offset: 0x101e9cbfc // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativePoolInterface.GetRecycleTime
	// Flags: [Native|Public]
	float GetRecycleTime(); // Offset: 0x101e9cbc0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativePoolInterface.CheckIsRecycled
	// Flags: [Native|Public]
	bool CheckIsRecycled(); // Offset: 0x101e9cb84 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Creative.CreativePoolManager
// Size: 0x1c8 // Inherited bytes: 0x168
struct UCreativePoolManager : UCreativeModeManagerBase {
	// Fields
	bool bPoolManagerEnable; // Offset: 0x168 // Size: 0x01
	char pad_0x169[0xf]; // Offset: 0x169 // Size: 0x0f
	MapProperty CreativePools; // Offset: 0x178 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativePoolManager.SetPoolManagerEnable
	// Flags: [Final|Native|Public]
	void SetPoolManagerEnable(bool bPoolManagerEnable); // Offset: 0x101e9ddf0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativePoolManager.ReturnObject
	// Flags: [Final|Native|Public]
	void ReturnObject(IntProperty PoolId, struct UObject* Obj); // Offset: 0x101e9dd38 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePoolManager.OnReceivePickObjectHandle
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceivePickObjectHandle(IntProperty ID, struct UObject* InObj); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePoolManager.OnReceiveObjectReturnHandle
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceiveObjectReturnHandle(IntProperty ID, struct UObject* InObj); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePoolManager.OnReceiveDestroyHandle
	// Flags: [Event|Public|BlueprintEvent]
	bool OnReceiveDestroyHandle(IntProperty ID, struct UObject* InObj); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Creative.CreativePoolManager.OnReceiveCreateHandle
	// Flags: [Event|Public|BlueprintEvent]
	struct UObject* OnReceiveCreateHandle(IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePoolManager.InitPool
	// Flags: [Final|Native|Protected|HasOutParms]
	bool InitPool(IntProperty PoolId, struct FCreativeObjectPoolClassConfig& PoolConfig, bool bPoolEnable); // Offset: 0x101e9dbf0 // Return & Params: Num(4) Size(0x2a)

	// Object Name: Function Creative.CreativePoolManager.GetUnusedComponentName
	// Flags: [Final|Native|Public|HasOutParms]
	StrProperty GetUnusedComponentName(struct UObject* InOuter, StrProperty& NamePrefix); // Offset: 0x101e9dad4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativePoolManager.GetObject
	// Flags: [Final|Native|Public]
	struct UObject* GetObject(IntProperty PoolId, struct UObject* NewOuter, StrProperty InName); // Offset: 0x101e9d9b4 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativePoolManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativePoolManager* Get(struct UObject* WorldContext); // Offset: 0x101e9d938 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativePoolManager.ClearPoolObject
	// Flags: [Final|Native|Public]
	void ClearPoolObject(); // Offset: 0x101e9d924 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeRaceCheckPointComponent
// Size: 0x238 // Inherited bytes: 0x238
struct UCreativeModeRaceCheckPointComponent : ULuaActorComponent {
};

// Object Name: Class Creative.CreativeModeRaceCheckPointLiteComponent
// Size: 0x158 // Inherited bytes: 0x158
struct UCreativeModeRaceCheckPointLiteComponent : UCreativeModeLiteComponent {
};

// Object Name: Class Creative.CreativeRuntimePlayerBattleDataObject
// Size: 0x878 // Inherited bytes: 0x570
struct ACreativeRuntimePlayerBattleDataObject : ALuaActor {
	// Fields
	struct FRuntimePlayerBattleDataInfo DefaultPlayerBattleDataInfo; // Offset: 0x570 // Size: 0x70
	struct FRuntimeTeamGameOutcomeConditionInfo DefaultTeamGameOutcomeCondition; // Offset: 0x5e0 // Size: 0x1c
	char pad_0x5FC[0x4]; // Offset: 0x5fc // Size: 0x04
	struct FRuntimeCacheRoundBattleDataInfoContainer RuntimeOldCacheRoundBattleDataContainer; // Offset: 0x600 // Size: 0xc8
	struct FRuntimeBattleDataInfoContainer RuntimeCurRoundBattleDataInfoContainer; // Offset: 0x6c8 // Size: 0xc8
	struct FRuntimeTeamGameOutcomeConditionContainer RuntimeTeamGameOutcomeConditionContainer; // Offset: 0x790 // Size: 0xc8
	struct FRuntimeCacheRoundBattleDataInfo DefaultCacheRoundBattleDataInfo; // Offset: 0x858 // Size: 0x20

	// Functions

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
	// Flags: [Final|Native|Protected|HasOutParms]
	bool SetTeamGameOutcomeCondition(IntProperty TeamID, struct FRuntimeTeamGameOutcomeConditionInfo& TeamGameOutcomeCondition, bool bPropagateToChildren); // Offset: 0x101e9f1c0 // Return & Params: Num(4) Size(0x22)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
	// Flags: [Final|Native|Protected|HasOutParms]
	bool SetPlayerBattleData(uint64 UID, uint32_t PlayerKey, struct FRuntimePlayerBattleDataInfo& PlayerBattleData, bool bPropagateToChildren); // Offset: 0x101e9f03c // Return & Params: Num(5) Size(0x82)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList
	// Flags: [Final|Native|Protected]
	bool ResetCurRoundPlayerBattleDataList(); // Offset: 0x101e9f008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
	// Flags: [Final|Native|Public]
	void OnRepTeamGameOutcomeConditionInfo(IntProperty TeamID); // Offset: 0x101e9ef8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
	// Flags: [Final|Native|Public]
	void OnRepCurRoundPlayerBattleDataInfo(uint64 PlayerUID, uint64 PlayerKey, IntProperty ChangeTeamID); // Offset: 0x101e9ee9c // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
	// Flags: [Final|Native|Protected]
	struct FRuntimeTeamGameOutcomeConditionInfo GetTeamGameOutcomeCondition(IntProperty TeamID); // Offset: 0x101e9edec // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
	// Flags: [Final|Native|Protected]
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64 PlayerUID, uint32_t PlayerKey); // Offset: 0x101e9ecfc // Return & Params: Num(3) Size(0x80)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
	// Flags: [Final|Native|Protected]
	struct TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData(); // Offset: 0x101e9ec98 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
	// Flags: [Final|Native|Protected]
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(IntProperty RoundIndex, uint64 PlayerUID, uint32_t PlayerKey); // Offset: 0x101e9eb6c // Return & Params: Num(4) Size(0x88)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
	// Flags: [Final|Native|Protected]
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(IntProperty RoundIndex); // Offset: 0x101e9ead8 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
	// Flags: [Final|Native|Protected]
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64 PlayerUID, uint32_t PlayerKey); // Offset: 0x101e9e9e4 // Return & Params: Num(3) Size(0x80)

	// Object Name: Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
	// Flags: [Final|Native|Protected]
	void CacheCurRoundBattleData(IntProperty RoundIndex); // Offset: 0x101e9e968 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Creative.CreativeSceneDetectLib
// Size: 0x28 // Inherited bytes: 0x28
struct UCreativeSceneDetectLib : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeGetStackDistanceFromMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	float CreativeGetStackDistanceFromMeshes(struct TArray<struct UMeshComponent*>& MeshComponents, struct FVector Direction); // Offset: 0x101ea40b8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeGetStackDistance
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	float CreativeGetStackDistance(struct UStaticMesh* Mesh, struct FVector Direction, struct FVector Scale); // Offset: 0x101ea3fc4 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeGetFurthestPointFromMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FVector CreativeGetFurthestPointFromMeshes(struct TArray<struct UMeshComponent*>& MeshComponents, struct FVector Direction); // Offset: 0x101ea3ec8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeGetFurthestPoint
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector CreativeGetFurthestPoint(struct AActor* TargetActor, struct USceneComponent* TargetComp, struct FVector Direction); // Offset: 0x101ea3dd4 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeFindPlacementPoints
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct TArray<struct FVector> CreativeFindPlacementPoints(struct UObject* WorldContextObject, struct FVector Start, struct FVector HalfExtent, struct FVector Direction, IntProperty Count, float MaxDistance); // Offset: 0x101ea3bfc // Return & Params: Num(7) Size(0x48)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeDetectSpaceAdvanced
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FCreativeSpaceResult CreativeDetectSpaceAdvanced(struct UObject* WorldContextObject, struct FVector Source, struct FVector Direction, float MaxDistance, float MaxBoxExtent, struct FCreativeDetectSpaceOptions& Options); // Offset: 0x101ea39d0 // Return & Params: Num(7) Size(0x90)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeDetectSpace
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FCreativeSpaceResult CreativeDetectSpace(struct UObject* WorldContextObject, struct FVector Source, struct FVector Direction, float MaxDistance, float MaxBoxExtent); // Offset: 0x101ea3840 // Return & Params: Num(6) Size(0x70)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeCalculateSnapLocationFromMeshes
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FVector CreativeCalculateSnapLocationFromMeshes(struct FVector Curr, struct TArray<struct UMeshComponent*>& MeshComponents, struct FVector Direction, struct FVector HookPoint); // Offset: 0x101ea36c0 // Return & Params: Num(5) Size(0x44)

	// Object Name: Function Creative.CreativeSceneDetectLib.CreativeCalculateSnapLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector CreativeCalculateSnapLocation(struct AActor* TargetActor, struct USceneComponent* TargetComp, struct FVector Direction, struct FVector HookPoint); // Offset: 0x101ea358c // Return & Params: Num(5) Size(0x34)
};

// Object Name: Class Creative.CreativeSceneQueryManager
// Size: 0x280 // Inherited bytes: 0x168
struct UCreativeSceneQueryManager : UCreativeModeManagerBase {
	// Fields
	struct FCreativeReplicatedDataContainer ReplicatedDataContainer; // Offset: 0x168 // Size: 0xc8
	MapProperty MapReplicatedObjects; // Offset: 0x230 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveReplicateObject(StrProperty InstanceID, struct UObject* Object); // Offset: 0x101ea520c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeSceneQueryManager.RemoveReplicateData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveReplicateData(StrProperty InstanceID); // Offset: 0x101ea5128 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceivePreReplicateDataRemove(StrProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostReplicateDataChange(StrProperty ID, struct TArray<struct UObject*>& Objects); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void OnReceivePostReplicateDataAdd(StrProperty ID, struct TArray<struct UObject*>& Objects); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct UObject*> GetReplicatedObjects(StrProperty InstanceID); // Offset: 0x101ea5010 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeSceneQueryManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeSceneQueryManager* Get(struct UObject* WorldContext); // Offset: 0x101ea4f94 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AddReplicateObjectPostDeferred(StrProperty InstanceID, struct FTransform SpawnTransform, struct UObject* ReplicatedObject); // Offset: 0x101ea4e08 // Return & Params: Num(3) Size(0x48)

	// Object Name: Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct UObject* AddReplicateObjectDeferred(StrProperty InstanceID, struct UObject* ObjectClass, StrProperty Name, struct FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride); // Offset: 0x101ea4b90 // Return & Params: Num(6) Size(0x70)

	// Object Name: Function Creative.CreativeSceneQueryManager.AddReplicateObject
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct UObject* AddReplicateObject(StrProperty InstanceID, struct UObject* ObjectClass, StrProperty Name, struct FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride); // Offset: 0x101ea4918 // Return & Params: Num(6) Size(0x70)
};

// Object Name: Class Creative.CreativeScreenCaptureWidget
// Size: 0x2d8 // Inherited bytes: 0x2c8
struct UCreativeScreenCaptureWidget : ULuaUserWidget {
	// Fields
	char pad_0x2C8[0x10]; // Offset: 0x2c8 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeScreenCaptureWidget.OnPanelInitialized
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnPanelInitialized(); // Offset: 0x101ea56f8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeModeSoftComponentManager
// Size: 0x1b8 // Inherited bytes: 0x168
struct UCreativeModeSoftComponentManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x50]; // Offset: 0x168 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CreativeModeSoftComponentManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeModeSoftComponentManager* Get(struct UObject* WorldContext); // Offset: 0x101ea5888 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeModeSoftComponentManager.ClearAllLoading
	// Flags: [Final|Native|Public]
	void ClearAllLoading(); // Offset: 0x101ea5874 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.SoftStaticMeshComponent
// Size: 0xc30 // Inherited bytes: 0xbd0
struct USoftStaticMeshComponent : UStaticMeshComponent {
	// Fields
	struct FScriptMulticastDelegate OnPostAsyncLoadFinishEvent; // Offset: 0xbc8 // Size: 0x10
	char bOnlyRender : 1; // Offset: 0xbd8 // Size: 0x01
	struct UStaticMesh* SoftStaticMesh; // Offset: 0xbe0 // Size: 0x28
	struct FSoftObjectPath SoftStaticMeshPath; // Offset: 0xc08 // Size: 0x18
	char bAsyncLoad : 1; // Offset: 0xc20 // Size: 0x01
	char pad_0xC20_2 : 6; // Offset: 0xc20 // Size: 0x01
	char pad_0xC21[0xf]; // Offset: 0xc21 // Size: 0x0f

	// Functions

	// Object Name: Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool SetSoftStaticMeshAsync(StrProperty& NewMeshPath); // Offset: 0x101ec9758 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
	// Flags: [Native|Public|BlueprintCallable]
	bool SetSoftStaticMesh(struct UStaticMesh* NewMesh, bool bSetStaticMesh); // Offset: 0x101ec9680 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Creative.SoftStaticMeshComponent.SetComponentOnlyRender
	// Flags: [Final|Native|Public]
	void SetComponentOnlyRender(bool bOnlyRender); // Offset: 0x101ec95fc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
	// Flags: [Final|Native|Public|HasDefaults]
	void OnClientAsyncLoaded(struct FSoftObjectPath SoftObjectPath); // Offset: 0x101ec9530 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately
	// Flags: [Final|Native|Public]
	void LoadSoftStaticMeshImmediately(); // Offset: 0x101ec951c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.SoftStaticMeshComponent.ClearOverrideMaterials
	// Flags: [Final|Native|Public]
	void ClearOverrideMaterials(); // Offset: 0x101ec9508 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeSoftStaticMeshComponent
// Size: 0xc40 // Inherited bytes: 0xc30
struct UCreativeSoftStaticMeshComponent : USoftStaticMeshComponent {
	// Fields
	char pad_0xC30[0x10]; // Offset: 0xc30 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101ea5b8c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool
	// Flags: [Native|Public]
	void OnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x101ea5ab0 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativeSpawnManager
// Size: 0x168 // Inherited bytes: 0x168
struct UCreativeSpawnManager : UCreativeModeManagerBase {
	// Functions

	// Object Name: Function Creative.CreativeSpawnManager.SpawnTower
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct AActor* SpawnTower(IntProperty ConfigID, struct FTransform Transform, IntProperty TeamID, IntProperty Campid, IntProperty ParamsID); // Offset: 0x101ea66fc // Return & Params: Num(6) Size(0x58)

	// Object Name: Function Creative.CreativeSpawnManager.SpawnHumanBot
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct AActor* SpawnHumanBot(IntProperty ConfigID, struct FTransform Transform, IntProperty TeamID, IntProperty Campid, IntProperty ParamsID); // Offset: 0x101ea655c // Return & Params: Num(6) Size(0x58)

	// Object Name: Function Creative.CreativeSpawnManager.SpawnAIPlayer
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct AActor* SpawnAIPlayer(IntProperty ConfigID, struct FTransform Transform, IntProperty TeamID, IntProperty Campid, IntProperty ParamsID); // Offset: 0x101ea63bc // Return & Params: Num(6) Size(0x58)

	// Object Name: Function Creative.CreativeSpawnManager.OnUnitSpawned
	// Flags: [Final|Native|Public]
	void OnUnitSpawned(struct AActor* NewUnit, enum class ESpecType SpecType); // Offset: 0x101ea6304 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeSpawnManager.OnDeadWithCategory
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnDeadWithCategory(enum class ESpecType Category, struct AActor* DeadCharacter); // Offset: 0x101ea6244 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeSpawnManager.HandleTowerDestroyed
	// Flags: [Final|Native|Public]
	void HandleTowerDestroyed(struct AActor* DestroyedCharacter, enum class EEndPlayReason EndPlayReason); // Offset: 0x101ea618c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeSpawnManager.HandleMonsterDestroyed
	// Flags: [Final|Native|Public]
	void HandleMonsterDestroyed(struct AActor* DestroyedCharacter, enum class EEndPlayReason EndPlayReason); // Offset: 0x101ea60d4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeSpawnManager.HandleHumanBotDestroyed
	// Flags: [Final|Native|Public]
	void HandleHumanBotDestroyed(struct AActor* DestroyedCharacter, enum class EEndPlayReason EndPlayReason); // Offset: 0x101ea601c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeSpawnManager.HandleAIPlayerDestroyed
	// Flags: [Final|Native|Public]
	void HandleAIPlayerDestroyed(struct AActor* DestroyedCharacter, enum class EEndPlayReason EndPlayReason); // Offset: 0x101ea5f64 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeSpawnManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeSpawnManager* Get(struct UObject* WorldContext); // Offset: 0x101ea5ee8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CreativeStaticMeshComponent
// Size: 0xbe0 // Inherited bytes: 0xbd0
struct UCreativeStaticMeshComponent : UStaticMeshComponent {
	// Fields
	char pad_0xBD0[0x10]; // Offset: 0xbd0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeStaticMeshComponent.OnReturnToPool
	// Flags: [Native|Public]
	bool OnReturnToPool(struct UObject* NewOuter, uint32_t RecycledSeq); // Offset: 0x101ea6d44 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Creative.CreativeStaticMeshComponent.OnPickFromPool
	// Flags: [Native|Public]
	void OnPickFromPool(struct UObject* NewOuter, StrProperty InName); // Offset: 0x101ea6c68 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.CreativeStreamingManager
// Size: 0x398 // Inherited bytes: 0x168
struct UCreativeStreamingManager : UCreativeModeManagerBase {
	// Fields
	bool bStreamingManagerEnable; // Offset: 0x168 // Size: 0x01
	bool bStreamingStateCheckStartup; // Offset: 0x169 // Size: 0x01
	bool bUseChildThreads; // Offset: 0x16a // Size: 0x01
	char pad_0x16B[0x1]; // Offset: 0x16b // Size: 0x01
	float StreamingTickFrequency; // Offset: 0x16c // Size: 0x04
	float DestroyExtendDistance; // Offset: 0x170 // Size: 0x04
	float DelayDestroyTime; // Offset: 0x174 // Size: 0x04
	float NeedTickStreamingDistanceScale; // Offset: 0x178 // Size: 0x04
	bool ChildThreadsReduceTickFrequency; // Offset: 0x17c // Size: 0x01
	char pad_0x17D[0x43]; // Offset: 0x17d // Size: 0x43
	MapProperty ObjectStreamingStateMap; // Offset: 0x1c0 // Size: 0x50
	struct TArray<StrProperty> ObjectStreamingStateKeyList; // Offset: 0x210 // Size: 0x10
	MapProperty ObjectSpawnStateChangeMaps; // Offset: 0x220 // Size: 0x50
	char pad_0x270[0x50]; // Offset: 0x270 // Size: 0x50
	struct TArray<struct TWeakObjectPtr<struct AActor>> OuterStreamingSources; // Offset: 0x2c0 // Size: 0x10
	char pad_0x2D0[0xc8]; // Offset: 0x2d0 // Size: 0xc8

	// Functions

	// Object Name: Function Creative.CreativeStreamingManager.UnregisterStreamingSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterStreamingSource(struct AActor* Source); // Offset: 0x101ea7a3c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeStreamingManager.StreamingManagerEnable
	// Flags: [Final|Native|Public]
	bool StreamingManagerEnable(); // Offset: 0x101ea7a08 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeStreamingManager.RemoveStreamingObject
	// Flags: [Final|Native|Public]
	bool RemoveStreamingObject(StrProperty InstanceID); // Offset: 0x101ea7914 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeStreamingManager.RegisterStreamingSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterStreamingSource(struct AActor* Source); // Offset: 0x101ea7898 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeStreamingManager.GetOnGridCellIndex
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	struct FIntVector GetOnGridCellIndex(StrProperty GridName, struct FVector& Location); // Offset: 0x101ea7798 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Creative.CreativeStreamingManager.GetGridLoadingRange
	// Flags: [Final|Native|Public]
	float GetGridLoadingRange(StrProperty GridName); // Offset: 0x101ea76f0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CreativeStreamingManager.GetGridList
	// Flags: [Final|Native|Public]
	struct TArray<StrProperty> GetGridList(); // Offset: 0x101ea768c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeStreamingManager.GetGridCellWidthHeight
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector2D GetGridCellWidthHeight(StrProperty GridName); // Offset: 0x101ea75e0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CreativeStreamingManager.GetCreativeModeStreamingSourceList
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct TArray<struct FVector> GetCreativeModeStreamingSourceList(); // Offset: 0x101ea7574 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeStreamingManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeStreamingManager* Get(struct UObject* WorldContext); // Offset: 0x101ea74f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType
	// Flags: [Final|Native|Public]
	enum class ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(StrProperty InstanceID, enum class ECreativeModeActorStreamingType NewStremaingType); // Offset: 0x101ea73c4 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeStreamingManager.AddStreamingObject
	// Flags: [Final|Native|Public]
	bool AddStreamingObject(StrProperty InstanceID, struct FCreativeModeStreamingParameters StreamingParameters); // Offset: 0x101ea728c // Return & Params: Num(3) Size(0x13)
};

// Object Name: Class Creative.CreativeTaskComponent
// Size: 0x300 // Inherited bytes: 0x238
struct UCreativeTaskComponent : ULuaActorComponent {
	// Fields
	struct FCreativeTaskArray TaskArray; // Offset: 0x238 // Size: 0xc8

	// Functions

	// Object Name: Function Creative.CreativeTaskComponent.UpdateTaskProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool UpdateTaskProgress(StrProperty TaskID, IntProperty NewProgress, IntProperty idx); // Offset: 0x101ea92dc // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskVal
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SetTaskVal(StrProperty TaskID, struct FCreativeTaskViewItem& SetItemValue); // Offset: 0x101ea91b4 // Return & Params: Num(3) Size(0x69)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTaskStatus(StrProperty TaskID, enum class ETaskStatus TaskStatusVal); // Offset: 0x101ea90cc // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskStageReservedField
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTaskStageReservedField(StrProperty TaskID, StrProperty Val); // Offset: 0x101ea8f84 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskStageIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTaskStageIdx(StrProperty TaskID, IntProperty TaskStageIdx); // Offset: 0x101ea8e9c // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskProgressStep
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SetTaskProgressStep(StrProperty TaskID, struct FCreativeTaskProgressItem& NewStep, IntProperty idx); // Offset: 0x101ea8d3c // Return & Params: Num(4) Size(0x3d)

	// Object Name: Function Creative.CreativeTaskComponent.SetTaskConditionMet
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTaskConditionMet(StrProperty TaskID, bool bMet, IntProperty idx); // Offset: 0x101ea8c0c // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Creative.CreativeTaskComponent.SetMaxTaskProgressStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetMaxTaskProgressStep(StrProperty TaskID, IntProperty MaxStep); // Offset: 0x101ea8b24 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativeTaskComponent.RemoveTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveTask(StrProperty TaskID); // Offset: 0x101ea8a7c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeTaskComponent.RemoveAllTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAllTask(); // Offset: 0x101ea8a68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeTaskComponent.ReceiveOnTaskViewRemoved
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReceiveOnTaskViewRemoved(struct FCreativeTaskViewItem& TaskViewItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Creative.CreativeTaskComponent.ReceiveOnTaskViewChanged
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReceiveOnTaskViewChanged(struct FCreativeTaskViewItem& TaskViewItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Creative.CreativeTaskComponent.ReceiveOnTaskViewAdded
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReceiveOnTaskViewAdded(struct FCreativeTaskViewItem& TaskViewItem); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Creative.CreativeTaskComponent.ReceiveAddTask
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	void ReceiveAddTask(struct FCreativeTaskViewItem& NewTask); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x58)

	// Object Name: Function Creative.CreativeTaskComponent.MakeDummyProgressStep
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct FCreativeTaskProgressItem MakeDummyProgressStep(struct FCreativeTaskProgressParams& Params); // Offset: 0x101ea8978 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Creative.CreativeTaskComponent.IsTaskExists
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsTaskExists(StrProperty TaskID); // Offset: 0x101ea88d0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeTaskComponent.IsProgressConditionMet
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsProgressConditionMet(StrProperty TaskID, IntProperty idx); // Offset: 0x101ea87e8 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.CreativeTaskComponent.GetTaskProgress
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetTaskProgress(StrProperty TaskID, IntProperty& OutCurrent, IntProperty idx, IntProperty& OutMax); // Offset: 0x101ea865c // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function Creative.CreativeTaskComponent.GetAllTasks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FCreativeTaskViewItem> GetAllTasks(); // Offset: 0x101ea8624 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeTaskComponent.FindTaskByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FCreativeTaskViewItem FindTaskByID(StrProperty TaskID); // Offset: 0x101ea8574 // Return & Params: Num(2) Size(0x68)

	// Object Name: Function Creative.CreativeTaskComponent.AddTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AddTask(StrProperty TaskID); // Offset: 0x101ea84cc // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Creative.CreativeTimerApiObject
// Size: 0x1e0 // Inherited bytes: 0x188
struct UCreativeTimerApiObject : UCreativeApiObject {
	// Fields
	char pad_0x188[0x58]; // Offset: 0x188 // Size: 0x58

	// Functions

	// Object Name: Function Creative.CreativeTimerApiObject.SetMaxQueue
	// Flags: [Final|Native|Public]
	void SetMaxQueue(IntProperty Num); // Offset: 0x101ea9cb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeTimerApiObject.NotifyTimerDropped
	// Flags: [Event|Public|BlueprintEvent]
	void NotifyTimerDropped(StrProperty blockId); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeTimerApiObject.Clear
	// Flags: [Final|Native|Public]
	void Clear(); // Offset: 0x101ea9ca0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeTriggerAreaActor
// Size: 0x5e0 // Inherited bytes: 0x570
struct ACreativeTriggerAreaActor : ALuaActor {
	// Fields
	char pad_0x570[0x70]; // Offset: 0x570 // Size: 0x70

	// Functions

	// Object Name: Function Creative.CreativeTriggerAreaActor.OnTakeDamage
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnTakeDamage(struct AActor* DamageCauser); // Offset: 0x101ea9f64 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeUMGCanvasPanel
// Size: 0x188 // Inherited bytes: 0x130
struct UCreativeUMGCanvasPanel : UCanvasPanel {
	// Fields
	float AABBPadding; // Offset: 0x12c // Size: 0x04
	char pad_0x134[0x54]; // Offset: 0x134 // Size: 0x54

	// Functions

	// Object Name: Function Creative.CreativeUMGCanvasPanel.SwapChildrenByInstanceID
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SwapChildrenByInstanceID(StrProperty InstanceIDA, StrProperty InstanceIDB); // Offset: 0x101eb183c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeUMGCanvasPanel.RequestRecalcZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestRecalcZOrder(); // Offset: 0x101eb1828 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeUMGCanvasPanel.OnNextFrameRecalcTick
	// Flags: [Final|Native|Private]
	void OnNextFrameRecalcTick(); // Offset: 0x101eb1814 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeUMGCanvasPanel.FlushRecalcZOrderNow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FlushRecalcZOrderNow(); // Offset: 0x101eb1800 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeUMGCanvasWidget
// Size: 0x2d0 // Inherited bytes: 0x2c8
struct UCreativeUMGCanvasWidget : ULuaUserWidget {
	// Fields
	struct UCreativeUMGCanvasPanel* CanvasPanel_Root; // Offset: 0x2c8 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeUMGCanvasWidget.SwapChildrenByInstanceID
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SwapChildrenByInstanceID(StrProperty InstanceIDA, StrProperty InstanceIDB); // Offset: 0x101eb1ba0 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CreativeUMGCanvasWidget.RequestRecalcZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestRecalcZOrder(); // Offset: 0x101eb1b8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeUMGCanvasWidget.FlushRecalcZOrderNow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FlushRecalcZOrderNow(); // Offset: 0x101eb1b78 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeWebSocketManager
// Size: 0x198 // Inherited bytes: 0x168
struct UCreativeWebSocketManager : USTExtraManagerBase {
	// Fields
	struct TArray<StrProperty> SendList; // Offset: 0x168 // Size: 0x10
	struct TArray<StrProperty> ReceivedList; // Offset: 0x178 // Size: 0x10
	float LastTickSeconds; // Offset: 0x188 // Size: 0x04
	float MessageTickFrequency; // Offset: 0x18c // Size: 0x04
	struct FTimerHandle TickTimerHandle; // Offset: 0x190 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeWebSocketManager.SendMessage
	// Flags: [Final|Native|Public]
	void SendMessage(StrProperty Message); // Offset: 0x101eb2248 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnPostSetLuaEventBridgeInstance(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWebSocketManager.OnTickTimer
	// Flags: [Final|Native|Public]
	void OnTickTimer(); // Offset: 0x101eb2234 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWebSocketManager.OnReceiveConnected
	// Flags: [Event|Public|BlueprintEvent]
	void OnReceiveConnected(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance
	// Flags: [Final|Native|Public]
	void OnPostSetLuaEventBridgeInstance(); // Offset: 0x101eb2220 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWebSocketManager.OnMessageSent
	// Flags: [Final|Native|Public]
	bool OnMessageSent(StrProperty Message); // Offset: 0x101eb2178 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeWebSocketManager.OnMessageReceived
	// Flags: [Event|Public|BlueprintEvent]
	bool OnMessageReceived(StrProperty Message); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CreativeWebSocketManager.IsConnected
	// Flags: [Final|Native|Public]
	bool IsConnected(); // Offset: 0x101eb2144 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeWebSocketManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeWebSocketManager* Get(struct UObject* WorldContext); // Offset: 0x101eb20c8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CreativeWebSocketManager.ConnectServer
	// Flags: [Final|Native|Public]
	void ConnectServer(StrProperty ServerURL, StrProperty ServerProtocol); // Offset: 0x101eb1f4c // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.CreativeWidgetComponent
// Size: 0xb90 // Inherited bytes: 0xb90
struct UCreativeWidgetComponent : UWidgetComponent {
	// Fields
	bool bFaceToCamera; // Offset: 0xb89 // Size: 0x01
};

// Object Name: Class Creative.CreativeWidgetObject
// Size: 0x1a0 // Inherited bytes: 0x28
struct UCreativeWidgetObject : UObject {
	// Fields
	char pad_0x28[0x100]; // Offset: 0x28 // Size: 0x100
	StrProperty LuaFilePath; // Offset: 0x128 // Size: 0x10
	char pad_0x138[0x8]; // Offset: 0x138 // Size: 0x08
	MapProperty PoolObjectRecordMap; // Offset: 0x140 // Size: 0x50
	struct TArray<struct ULiteComponent*> LiteComponents; // Offset: 0x190 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CreativeWidgetObject.UnregisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterLiteComponent(struct ULiteComponent* Component, bool Destroy); // Offset: 0x101eb2d14 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CreativeWidgetObject.ReturnObjectToPool
	// Flags: [Native|Public]
	void ReturnObjectToPool(struct UObject* Obj); // Offset: 0x101eb2c90 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeWidgetObject.ReturnObjectsToPool
	// Flags: [Native|Public]
	void ReturnObjectsToPool(struct TArray<struct UObject*> Objs); // Offset: 0x101eb2ba4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CreativeWidgetObject.RegisterLiteComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterLiteComponent(struct ULiteComponent* Component); // Offset: 0x101eb2b28 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeWidgetObject.ReceivePostBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceivePostBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWidgetObject.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public|Const]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101eb2af4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeWidgetObject.ReceiveHasAuthority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ReceiveHasAuthority(); // Offset: 0x101eb2ac0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeWidgetObject.ReceiveEndPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveEndPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWidgetObject.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWidgetObject.GetObjectsFromPool
	// Flags: [Native|Public|HasOutParms]
	struct TArray<struct UObject*> GetObjectsFromPool(struct TArray<struct FCreativePoolGetObjectParamInfo>& ObjectParams); // Offset: 0x101eb29d8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CreativeWidgetObject.GetObjectFromPool
	// Flags: [Native|Public|HasOutParms]
	struct UObject* GetObjectFromPool(IntProperty PoolId, struct UObject* NewOuter, StrProperty& InName); // Offset: 0x101eb28a0 // Return & Params: Num(4) Size(0x28)
};

// Object Name: Class Creative.CreativeWorldSubSystem
// Size: 0x38 // Inherited bytes: 0x30
struct UCreativeWorldSubSystem : UWorldSubsystem {
	// Fields
	struct AActor* ManagerCenter; // Offset: 0x30 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeWorldSubSystem.GetManagerCenter
	// Flags: [Final|Native|Public]
	struct AActor* GetManagerCenter(); // Offset: 0x101eb31f8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CreativeWoWInactiveCheckComponent
// Size: 0x270 // Inherited bytes: 0x238
struct UCreativeWoWInactiveCheckComponent : ULuaActorComponent {
	// Fields
	float ComponentTickInterval; // Offset: 0x234 // Size: 0x04
	float InactivePlayerKickoutTime; // Offset: 0x238 // Size: 0x04
	float InactiveCheckGap; // Offset: 0x23c // Size: 0x04
	float InactiveTimeForTipPreTime; // Offset: 0x240 // Size: 0x04
	float PreActiveTime; // Offset: 0x244 // Size: 0x04
	float ClientSendActiveRPCGap; // Offset: 0x248 // Size: 0x04
	bool bIsClientActive; // Offset: 0x24c // Size: 0x01
	enum class ESCWOWActiveType CWOWActiveType; // Offset: 0x24d // Size: 0x01
	struct FVector PrePawnLoc; // Offset: 0x250 // Size: 0x0c
	struct FRotator PreControllerRotation; // Offset: 0x25c // Size: 0x0c
	char pad_0x26A[0x6]; // Offset: 0x26a // Size: 0x06

	// Functions

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.ServerMarkPlayerActive
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate]
	void ServerMarkPlayerActive(); // Offset: 0x101eb3610 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.MarkPlayerActive
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkPlayerActive(); // Offset: 0x101eb35fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.KickOutPlayer
	// Flags: [Event|Public|BlueprintEvent]
	void KickOutPlayer(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.ClientShowKickOutTip
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable]
	void ClientShowKickOutTip(float RemainTime); // Offset: 0x101eb3578 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.ClientCachedActiveState
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ClientCachedActiveState(); // Offset: 0x101eb3564 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.CheckForMovement
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CheckForMovement(); // Offset: 0x101eb3530 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CreativeWoWInactiveCheckComponent.CheckForInactive
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void CheckForInactive(); // Offset: 0x101eb3514 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.CreativeWoWManager
// Size: 0x170 // Inherited bytes: 0x168
struct UCreativeWoWManager : UCreativeModeManagerBase {
	// Fields
	char pad_0x168[0x8]; // Offset: 0x168 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CreativeWoWManager.ReceiveOnGameStateBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveOnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeWoWManager.OnGameStateBeginPlay
	// Flags: [Final|Native|Public]
	void OnGameStateBeginPlay(struct AGameStateBase* GameState); // Offset: 0x101eb3a04 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CreativeWoWManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UCreativeWoWManager* Get(struct UObject* WorldContext); // Offset: 0x101eb3988 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CustomAssetUtilityObject
// Size: 0xb0 // Inherited bytes: 0x28
struct UCustomAssetUtilityObject : UObject {
	// Fields
	char pad_0x28[0x60]; // Offset: 0x28 // Size: 0x60
	StrProperty LuaFilePath; // Offset: 0x88 // Size: 0x10
	struct UCustomAssetManager* CustomAssetMgr; // Offset: 0x98 // Size: 0x08
	StrProperty LastError; // Offset: 0xa0 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CustomAssetUtilityObject.SaveArrayToFile
	// Flags: [Final|Native|Protected|HasOutParms]
	bool SaveArrayToFile(struct TArray<char>& Content, StrProperty Filename); // Offset: 0x101eb8bc8 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Creative.CustomAssetUtilityObject.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public|Const]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101eb8b94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CustomAssetUtilityObject.ReceiveGetCustomAssetMgr
	// Flags: [Final|Native|Protected]
	struct UCustomAssetManager* ReceiveGetCustomAssetMgr(); // Offset: 0x101eb8b78 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CustomAssetUtilityObject.LuaConditionalBeginDestroy
	// Flags: [Final|Native|Public]
	void LuaConditionalBeginDestroy(); // Offset: 0x101eb8b64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetUtilityObject.LoadFileToArray
	// Flags: [Final|Native|Protected]
	struct TArray<char> LoadFileToArray(StrProperty Filename); // Offset: 0x101eb8a94 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CustomAssetUtilityObject.IsFileExistsInSaved
	// Flags: [Final|Native|Protected]
	bool IsFileExistsInSaved(StrProperty Filename); // Offset: 0x101eb89ec // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CustomAssetUtilityObject.InitUtilityObject
	// Flags: [Final|Native|Public]
	void InitUtilityObject(struct UCustomAssetManager* CustomAssetManager); // Offset: 0x101eb8970 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CustomAssetUtilityObject.GetLastError
	// Flags: [Final|Native|Public|Const]
	StrProperty GetLastError(); // Offset: 0x101eb890c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CustomAssetUtilityObject.GetAllFilesInDirectoryRelative
	// Flags: [Final|Native|Protected]
	struct TArray<StrProperty> GetAllFilesInDirectoryRelative(StrProperty TargetDirectory); // Offset: 0x101eb883c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CustomAssetUtilityObject.DeleteFileInSaved
	// Flags: [Final|Native|Protected]
	bool DeleteFileInSaved(StrProperty Filename); // Offset: 0x101eb8794 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CustomAssetUtilityObject.AreFilesExistInSaved
	// Flags: [Final|Native|Protected|HasOutParms]
	struct TArray<bool> AreFilesExistInSaved(struct TArray<StrProperty>& FileNameList); // Offset: 0x101eb86b4 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.CustomAssetDeserializer
// Size: 0x120 // Inherited bytes: 0xb0
struct UCustomAssetDeserializer : UCustomAssetUtilityObject {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
	struct FScriptMulticastDelegate DeserializeCompletedDelegate; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0x50]; // Offset: 0xc8 // Size: 0x50
	float DeserializeTimeout; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x4]; // Offset: 0x11c // Size: 0x04

	// Functions

	// Object Name: DelegateFunction Creative.CustomAssetDeserializer.DeserializeCompletedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void DeserializeCompletedDelegate__DelegateSignature(struct UCustomAssetDeserializer* uDeserializer, struct UObject* OutAssetBytes, uint64 DeserializeSeq); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Creative.CustomAssetDeserializer.DeserializeCompleted
	// Flags: [Final|Native|Protected]
	void DeserializeCompleted(uint64 DeserializeSeq, struct UObject* OutAsset); // Offset: 0x101eb4d60 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.CustomAssetDeserializer.Deserialize
	// Flags: [Final|Native|Public|HasOutParms]
	bool Deserialize(struct TArray<char>& InBytes, StrProperty SuffixType, uint64 DeserializeSeq, struct UObject* Outer); // Offset: 0x101eb4b88 // Return & Params: Num(5) Size(0x31)
};

// Object Name: Class Creative.CustomAssetAnimDeserializer
// Size: 0x120 // Inherited bytes: 0x120
struct UCustomAssetAnimDeserializer : UCustomAssetDeserializer {
	// Functions

	// Object Name: Function Creative.CustomAssetAnimDeserializer.IsValidData
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	bool IsValidData(struct TArray<char>& InBytes); // Offset: 0x101eb3c70 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Creative.CustomAssetRuntimeBodyAnimData
// Size: 0x128 // Inherited bytes: 0x28
struct UCustomAssetRuntimeBodyAnimData : UObject {
	// Fields
	struct USkeleton* OwnedSkeleton; // Offset: 0x28 // Size: 0x08
	MapProperty BoneIndexMap; // Offset: 0x30 // Size: 0x50
	MapProperty BoneTranslations; // Offset: 0x80 // Size: 0x50
	MapProperty BoneRotations; // Offset: 0xd0 // Size: 0x50
	float AnimSequenceLength; // Offset: 0x120 // Size: 0x04
	char pad_0x124[0x4]; // Offset: 0x124 // Size: 0x04
};

// Object Name: Class Creative.CustomAssetAnimManager
// Size: 0xb0 // Inherited bytes: 0xb0
struct UCustomAssetAnimManager : UCustomAssetUtilityObject {
	// Functions

	// Object Name: Function Creative.CustomAssetAnimManager.GetRuntimeBodyAnimData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCustomAssetRuntimeBodyAnimData* GetRuntimeBodyAnimData(struct UAnimSequence* InAnim, struct USkeleton* InSkeleton, struct UObject* Outer); // Offset: 0x101eb4258 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CustomAssetAnimManager.ConvertAnimSequenceToBodyAnimData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct FAIGCRuntimeBodyAnimFrameData> ConvertAnimSequenceToBodyAnimData(struct UAnimSequence* AnimSequence, IntProperty& OutFrameRate); // Offset: 0x101eb4168 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class Creative.CustomAssetAudioManager
// Size: 0xb0 // Inherited bytes: 0xb0
struct UCustomAssetAudioManager : UCustomAssetUtilityObject {
	// Functions

	// Object Name: Function Creative.CustomAssetAudioManager.WemCutByAssetKey
	// Flags: [Final|Native|Public]
	uint64 WemCutByAssetKey(uint64 AssetKey, IntProperty StartTime, IntProperty EndTime); // Offset: 0x101eb4750 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Creative.CustomAssetAudioManager.SeekOnEvent
	// Flags: [Final|Native|Public|HasOutParms]
	uint32_t SeekOnEvent(struct UAkAudioEvent* Event, struct AActor* Actor, IntProperty in_iPosition, bool bStopWhenOwnerDestroyed, uint64 AssetKey, uint32_t& PlayingID); // Offset: 0x101eb4584 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function Creative.CustomAssetAudioManager.AllocateTempAssetKey
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	IntProperty AllocateTempAssetKey(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Creative.CustomAssetCacheManager
// Size: 0xb0 // Inherited bytes: 0xb0
struct UCustomAssetCacheManager : UCustomAssetUtilityObject {
};

// Object Name: Class Creative.CustomAssetDownloader
// Size: 0xb0 // Inherited bytes: 0xb0
struct UCustomAssetDownloader : UCustomAssetUtilityObject {
};

// Object Name: Class Creative.CustomAssetImageDeserializer
// Size: 0x120 // Inherited bytes: 0x120
struct UCustomAssetImageDeserializer : UCustomAssetDeserializer {
	// Functions

	// Object Name: Function Creative.CustomAssetImageDeserializer.IsValidData
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	bool IsValidData(struct TArray<char>& InBytes); // Offset: 0x101eb5080 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Creative.CustomImageDataWrapper
// Size: 0x80 // Inherited bytes: 0x28
struct UCustomImageDataWrapper : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58

	// Functions

	// Object Name: Function Creative.CustomImageDataWrapper.MakeUniqueName
	// Flags: [Final|Native|Static|Public]
	StrProperty MakeUniqueName(struct UObject* WorldContextObject); // Offset: 0x101eb53a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CustomImageDataWrapper.GetImageWrapperOuter
	// Flags: [Final|Native|Static|Public]
	struct UObject* GetImageWrapperOuter(); // Offset: 0x101eb5370 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.CustomAssetImageManager
// Size: 0x100 // Inherited bytes: 0xb0
struct UCustomAssetImageManager : UCustomAssetUtilityObject {
	// Fields
	MapProperty TextureRef; // Offset: 0xb0 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CustomAssetImageManager.RemoveTextureRef
	// Flags: [Final|Native|Public]
	void RemoveTextureRef(uint64 HashID); // Offset: 0x101eb6258 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CustomAssetImageManager.ReadPixelFormat
	// Flags: [Final|Native|Static|Public]
	enum class EPixelFormat ReadPixelFormat(struct UTexture2D* Target); // Offset: 0x101eb61dc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.CustomAssetImageManager.ReadImageSummary
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct FImageSummary ReadImageSummary(struct TArray<char>& ImageData); // Offset: 0x101eb612c // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Creative.CustomAssetImageManager.ReadImageRGBA
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct TArray<char> ReadImageRGBA(struct TArray<char>& ImageData); // Offset: 0x101eb605c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.CustomAssetImageManager.LuaUpdateTextureResource2Png
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void LuaUpdateTextureResource2Png(struct UTexture2D* Target, IntProperty TexGroup, IntProperty Width, IntProperty Height, IntProperty MipIndex, struct TArray<char>& TexData); // Offset: 0x101eb5e94 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function Creative.CustomAssetImageManager.LuaUpdateTextureResource2
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void LuaUpdateTextureResource2(struct UTexture2D* Target, IntProperty TexGroup, IntProperty Width, IntProperty Height, IntProperty MipIndex, IntProperty PixelFormat, struct TArray<char>& TexData); // Offset: 0x101eb5c94 // Return & Params: Num(7) Size(0x30)

	// Object Name: Function Creative.CustomAssetImageManager.LuaReserveTexture2
	// Flags: [Final|Native|Static|Public]
	struct UTexture2D* LuaReserveTexture2(IntProperty PixelFormat, IntProperty TexGroup, struct UTexture2D* OtherTex); // Offset: 0x101eb5ba4 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Creative.CustomAssetImageManager.LuaReserveTexture
	// Flags: [Final|Native|Static|Public]
	struct UTexture2D* LuaReserveTexture(IntProperty PixelFormat, IntProperty TexGroup, IntProperty Width, IntProperty Height); // Offset: 0x101eb5a7c // Return & Params: Num(5) Size(0x18)

	// Object Name: Function Creative.CustomAssetImageManager.IsValidImageSummary
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool IsValidImageSummary(struct FImageSummary& Summary); // Offset: 0x101eb59e8 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function Creative.CustomAssetImageManager.IsPngImageData
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool IsPngImageData(struct TArray<char>& ImageData); // Offset: 0x101eb5940 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CustomAssetImageManager.GetPixelFormat
	// Flags: [Final|Native|Static|Public]
	enum class EPixelFormat GetPixelFormat(IntProperty PixelFormat); // Offset: 0x101eb58c4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Creative.CustomAssetImageManager.GetPixelBlockSize
	// Flags: [Final|Native|Static|Public|HasOutParms]
	void GetPixelBlockSize(IntProperty PixelFormat, IntProperty& SizeX, IntProperty& SizeY); // Offset: 0x101eb57b8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Creative.CustomAssetImageManager.GetObjectPath
	// Flags: [Final|Native|Static|Public]
	StrProperty GetObjectPath(struct UObject* Object); // Offset: 0x101eb5714 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CustomAssetImageManager.GetHeaderSize
	// Flags: [Final|Native|Static|Public]
	IntProperty GetHeaderSize(enum class EPixelFormat Format); // Offset: 0x101eb5698 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.CustomAssetImageManager.AddTextureRef
	// Flags: [Final|Native|Public]
	void AddTextureRef(uint64 HashID, struct UTexture2D* Tex); // Offset: 0x101eb55e4 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Creative.CustomAssetManager
// Size: 0xe8 // Inherited bytes: 0x28
struct UCustomAssetManager : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	MapProperty TrackedCustomAssetMap; // Offset: 0x80 // Size: 0x50
	char pad_0xD0[0x8]; // Offset: 0xd0 // Size: 0x08
	StrProperty LuaFilePath; // Offset: 0xd8 // Size: 0x10

	// Functions

	// Object Name: Function Creative.CustomAssetManager.TryBeginPlay
	// Flags: [Final|Native|Public]
	void TryBeginPlay(); // Offset: 0x101eb7114 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetManager.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public|Const]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101eb70e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CustomAssetManager.PrintAliveCustomAssets
	// Flags: [Final|Native|Protected]
	void PrintAliveCustomAssets(); // Offset: 0x101eb70cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetManager.ParseCustomAssetKeyHashID
	// Flags: [Final|Native|Protected|HasOutParms]
	bool ParseCustomAssetKeyHashID(uint64 HashID, char ExpectedHashIDTag, char& OutCustomAssetType, uint32_t& OutUniqueId); // Offset: 0x101eb6f6c // Return & Params: Num(5) Size(0x11)

	// Object Name: Function Creative.CustomAssetManager.GetHashByString
	// Flags: [Final|Native|Protected]
	uint32_t GetHashByString(StrProperty CustomAssetKey); // Offset: 0x101eb6e78 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.CustomAssetManager.GetCustomAssetPathName
	// Flags: [Final|Native|Protected]
	StrProperty GetCustomAssetPathName(struct UObject* CustomAsset); // Offset: 0x101eb6dc4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CustomAssetManager.GetCustomAssetOuter
	// Flags: [Final|Native|Protected]
	struct UObject* GetCustomAssetOuter(); // Offset: 0x101eb6d90 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Creative.CustomAssetManager.GetCustomAssetObjectFromTrackedMap
	// Flags: [Final|Native|Protected]
	struct UObject* GetCustomAssetObjectFromTrackedMap(StrProperty BytesMD5); // Offset: 0x101eb6c9c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.CustomAssetManager.GetCurPlatformSuffixType
	// Flags: [Final|Native|Protected]
	StrProperty GetCurPlatformSuffixType(); // Offset: 0x101eb6c38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.CustomAssetManager.GenerateHashIDByCustomAssetKey
	// Flags: [Final|Native|Protected]
	uint64 GenerateHashIDByCustomAssetKey(StrProperty CustomAssetKey, char CustomAssetType, char HashIDTag); // Offset: 0x101eb6ac4 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.CustomAssetManager.CustomAssetMgrConditionalBeginDestroy
	// Flags: [Final|Native|Public]
	void CustomAssetMgrConditionalBeginDestroy(); // Offset: 0x101eb6ab0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetManager.CleanupStaleCustomAssets
	// Flags: [Final|Native|Protected]
	void CleanupStaleCustomAssets(); // Offset: 0x101eb6a9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetManager.CleanupAliveCustomAssetObjects
	// Flags: [Final|Native|Protected]
	void CleanupAliveCustomAssetObjects(); // Offset: 0x101eb6a88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.CustomAssetManager.AddCustomAssetObjectToTrackedMap
	// Flags: [Final|Native|Protected]
	void AddCustomAssetObjectToTrackedMap(StrProperty BytesMD5, struct UObject* AssetObject, StrProperty LoadStack); // Offset: 0x101eb68c8 // Return & Params: Num(3) Size(0x28)
};

// Object Name: Class Creative.CustomAssetMountStateComponent
// Size: 0x358 // Inherited bytes: 0x238
struct UCustomAssetMountStateComponent : ULuaActorComponent {
	// Fields
	struct FCustomAssetMountStatusInfoContainer ReplicatedCustomAssetMountStatusInfoContainer; // Offset: 0x238 // Size: 0xc8
	IntProperty SingleSerializeNum; // Offset: 0x300 // Size: 0x04
	char pad_0x304[0x4]; // Offset: 0x304 // Size: 0x04
	struct FCustomAssetMountStatusInfo EntryMountStatusInfo; // Offset: 0x308 // Size: 0x50

	// Functions

	// Object Name: Function Creative.CustomAssetMountStateComponent.RemoveMountStatusInfo
	// Flags: [Final|Native|Public|HasOutParms]
	bool RemoveMountStatusInfo(StrProperty& AssetKey); // Offset: 0x101eb7c78 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.CustomAssetMountStateComponent.ReceiveIsDedicatedServer
	// Flags: [Final|Native|Public]
	bool ReceiveIsDedicatedServer(); // Offset: 0x101eb7c44 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CustomAssetMountStateComponent.ReceiveHasAuthority
	// Flags: [Final|Native|Public]
	bool ReceiveHasAuthority(); // Offset: 0x101eb7c10 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.CustomAssetMountStateComponent.ChangeMountStatusInfo
	// Flags: [Final|Native|Public|HasOutParms]
	bool ChangeMountStatusInfo(StrProperty& AssetKey, enum class EMountStatus MountStatus, struct TArray<uint32_t> MountingPlayerKeys); // Offset: 0x101eb7a70 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Creative.CustomAssetMountStateComponent.AddMountStatusInfo
	// Flags: [Final|Native|Public|HasOutParms]
	bool AddMountStatusInfo(StrProperty& AssetKey, enum class EMountStatus MountStatus, struct TArray<uint32_t> MountingPlayerKeys, uint32_t MountedByPlayerKey, struct TArray<char>& MappingInfoContent); // Offset: 0x101eb7824 // Return & Params: Num(6) Size(0x41)
};

// Object Name: Class Creative.CustomAssetPlatformBuilder
// Size: 0xc8 // Inherited bytes: 0xb0
struct UCustomAssetPlatformBuilder : UCustomAssetUtilityObject {
	// Fields
	struct FScriptMulticastDelegate PlatformBuilderCompletedDelegate; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x8]; // Offset: 0xc0 // Size: 0x08

	// Functions

	// Object Name: Function Creative.CustomAssetPlatformBuilder.StartBuild
	// Flags: [Final|Native|Public|HasOutParms]
	bool StartBuild(struct TArray<char>& SourceBytes, uint64 CurBuildSeq, struct UObject* SourceObject); // Offset: 0x101eb80ac // Return & Params: Num(4) Size(0x21)

	// Object Name: DelegateFunction Creative.CustomAssetPlatformBuilder.PlatformBuilderCompletedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void PlatformBuilderCompletedDelegate__DelegateSignature(struct UCustomAssetPlatformBuilder* uPlatformBuilder, struct TArray<struct FPlatformCustomAssetInfo> PlatformCustomAssetInfoList, uint64 BuilderSeq); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class Creative.CustomAssetStaticMeshDeserializer
// Size: 0x120 // Inherited bytes: 0x120
struct UCustomAssetStaticMeshDeserializer : UCustomAssetDeserializer {
	// Functions

	// Object Name: Function Creative.CustomAssetStaticMeshDeserializer.IsValidData
	// Flags: [Native|Protected|HasOutParms|BlueprintCallable]
	bool IsValidData(struct TArray<char>& InBytes); // Offset: 0x101eb830c // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Creative.CustomAssetUploader
// Size: 0xb0 // Inherited bytes: 0xb0
struct UCustomAssetUploader : UCustomAssetUtilityObject {
};

// Object Name: Class Creative.DancerDeviceActor
// Size: 0x588 // Inherited bytes: 0x570
struct ADancerDeviceActor : ALuaActor {
	// Fields
	struct APawn* SyncPlayerCharacter; // Offset: 0x570 // Size: 0x08
	struct TArray<IntProperty> TempAvatarItemIDList; // Offset: 0x578 // Size: 0x10

	// Functions

	// Object Name: Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter
	// Flags: [Final|Native|Protected]
	void OnRep_SyncPlayerCharacter(); // Offset: 0x101eb9334 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.DTPacketPool
// Size: 0xa0 // Inherited bytes: 0x28
struct UDTPacketPool : UObject {
	// Fields
	int16_t BlockSize; // Offset: 0x28 // Size: 0x02
	char pad_0x2A[0x76]; // Offset: 0x2a // Size: 0x76
};

// Object Name: Class Creative.DataTransferComponent
// Size: 0x3a0 // Inherited bytes: 0x238
struct UDataTransferComponent : ULuaActorComponent {
	// Fields
	struct FScriptMulticastDelegate OnTransferCompleted; // Offset: 0x238 // Size: 0x10
	struct FScriptMulticastDelegate OnTransferFailed; // Offset: 0x248 // Size: 0x10
	struct FScriptMulticastDelegate OnTransferReceived; // Offset: 0x258 // Size: 0x10
	bool bUsePacketPool; // Offset: 0x268 // Size: 0x01
	char pad_0x269[0x1]; // Offset: 0x269 // Size: 0x01
	int16_t PacketSize; // Offset: 0x26a // Size: 0x02
	IntProperty SendBytesPerSecond; // Offset: 0x26c // Size: 0x04
	IntProperty AverageSendBytesPerSecond; // Offset: 0x270 // Size: 0x04
	IntProperty MaxBurstBytes; // Offset: 0x274 // Size: 0x04
	IntProperty InitialSendBudgetBytes; // Offset: 0x278 // Size: 0x04
	int16_t MaxPacketsPerRound; // Offset: 0x27c // Size: 0x02
	char pad_0x27E[0x2]; // Offset: 0x27e // Size: 0x02
	float RetransmitTimeout; // Offset: 0x280 // Size: 0x04
	float SendInterval; // Offset: 0x284 // Size: 0x04
	float CheckTaskInterval; // Offset: 0x288 // Size: 0x04
	float Timeout; // Offset: 0x28c // Size: 0x04
	float ReReceiveTimeOut; // Offset: 0x290 // Size: 0x04
	float ReuseInterval; // Offset: 0x294 // Size: 0x04
	IntProperty MaxPoolSize; // Offset: 0x298 // Size: 0x04
	bool bAutoCleanupCompletedTasks; // Offset: 0x29c // Size: 0x01
	char pad_0x29D[0x6b]; // Offset: 0x29d // Size: 0x6b
	struct UDTPacketPool* SendPacketPool; // Offset: 0x308 // Size: 0x08
	char pad_0x310[0x78]; // Offset: 0x310 // Size: 0x78
	struct UDTPacketPool* ReceivePacketPool; // Offset: 0x388 // Size: 0x08
	char pad_0x390[0x10]; // Offset: 0x390 // Size: 0x10

	// Functions

	// Object Name: Function Creative.DataTransferComponent.StartTransfer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartTransfer(StrProperty FilePath); // Offset: 0x101ebea70 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DataTransferComponent.Server_RequestFile
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void Server_RequestFile(StrProperty FilePath); // Offset: 0x101ebe9d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DataTransferComponent.Server_ReceivePacketAck
	// Flags: [Net|Native|Event|Protected|NetServer|NetValidate]
	void Server_ReceivePacketAck(int16_t TaskID, int16_t Seq); // Offset: 0x101ebe910 // Return & Params: Num(2) Size(0x4)

	// Object Name: Function Creative.DataTransferComponent.Server_ReceivePacket
	// Flags: [Net|Native|Event|Protected|NetServer|NetValidate]
	void Server_ReceivePacket(struct FDTPacket Packet); // Offset: 0x101ebe844 // Return & Params: Num(1) Size(0x204)

	// Object Name: Function Creative.DataTransferComponent.SendData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	IntProperty SendData(struct TArray<char>& FileData); // Offset: 0x101ebe78c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.DataTransferComponent.ReceivePacketAck
	// Flags: [Final|Native|Protected]
	void ReceivePacketAck(int16_t TaskID, int16_t Seq); // Offset: 0x101ebe6d4 // Return & Params: Num(2) Size(0x4)

	// Object Name: Function Creative.DataTransferComponent.ReceivePacket
	// Flags: [Final|Native|Protected|HasOutParms]
	void ReceivePacket(struct FDTPacket& Packet); // Offset: 0x101ebe600 // Return & Params: Num(1) Size(0x204)

	// Object Name: Function Creative.DataTransferComponent.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Init(); // Offset: 0x101ebe5cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.DataTransferComponent.Client_RequestFile
	// Flags: [Net|NetReliableNative|Event|Protected|NetClient]
	void Client_RequestFile(StrProperty FilePath); // Offset: 0x101ebe52c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DataTransferComponent.Client_ReceivePacketAck
	// Flags: [Net|Native|Event|Protected|NetClient]
	void Client_ReceivePacketAck(int16_t TaskID, int16_t Seq); // Offset: 0x101ebe46c // Return & Params: Num(2) Size(0x4)

	// Object Name: Function Creative.DataTransferComponent.Client_ReceivePacket
	// Flags: [Net|Native|Event|Protected|NetClient]
	void Client_ReceivePacket(struct FDTPacket Packet); // Offset: 0x101ebe3a0 // Return & Params: Num(1) Size(0x204)
};

// Object Name: Class Creative.DSLParser
// Size: 0x98 // Inherited bytes: 0x28
struct UDSLParser : UObject {
	// Fields
	char pad_0x28[0x70]; // Offset: 0x28 // Size: 0x70

	// Functions

	// Object Name: Function Creative.DSLParser.ParseText
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UDSLParserASTTree* ParseText(StrProperty Source); // Offset: 0x101ebf358 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParser.ParseFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UDSLParserASTTree* ParseFile(StrProperty FilePath); // Offset: 0x101ebf2b0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParser.LoadGrammarFromString
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool LoadGrammarFromString(StrProperty InGrammarText); // Offset: 0x101ebf208 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.DSLParser.LoadGrammarFromFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool LoadGrammarFromFile(StrProperty FilePath); // Offset: 0x101ebf160 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Creative.DSLParser.GetLastError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetLastError(); // Offset: 0x101ebf0fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DSLParser.GetGrammarText
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetGrammarText(); // Offset: 0x101ebf098 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DSLParser.GetGrammarRuleNames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<StrProperty> GetGrammarRuleNames(); // Offset: 0x101ebf034 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DSLParser.ClearGrammar
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearGrammar(); // Offset: 0x101ebf020 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.DSLParser.AddGrammarRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddGrammarRule(StrProperty RuleName, StrProperty RuleBody); // Offset: 0x101ebef34 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.DSLParserASTTree
// Size: 0xb8 // Inherited bytes: 0x28
struct UDSLParserASTTree : UObject {
	// Fields
	bool bValid; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	StrProperty Error; // Offset: 0x30 // Size: 0x10
	StrProperty Json; // Offset: 0x40 // Size: 0x10
	IntProperty RootNodeId; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FDSLParserNode> Nodes; // Offset: 0x58 // Size: 0x10
	MapProperty Statements; // Offset: 0x68 // Size: 0x50

	// Functions

	// Object Name: Function Creative.DSLParserASTTree.ToJson
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty ToJson(); // Offset: 0x101ebfdc4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DSLParserASTTree.IsValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsValid(); // Offset: 0x101ebfd90 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.DSLParserASTTree.GetRootNodeId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetRootNodeId(); // Offset: 0x101ebfd5c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.DSLParserASTTree.GetPropertyNodeId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPropertyNodeId(IntProperty NodeId, StrProperty Key); // Offset: 0x101ebfc78 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Creative.DSLParserASTTree.GetPropertyKeys
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<StrProperty> GetPropertyKeys(IntProperty NodeId); // Offset: 0x101ebfbc4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParserASTTree.GetNodeValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetNodeValue(IntProperty NodeId); // Offset: 0x101ebfb10 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParserASTTree.GetNodeName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetNodeName(IntProperty NodeId); // Offset: 0x101ebfa5c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParserASTTree.GetNodeKind
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetNodeKind(IntProperty NodeId); // Offset: 0x101ebf9a8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.DSLParserASTTree.GetNodeCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNodeCount(); // Offset: 0x101ebf974 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.DSLParserASTTree.GetError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetError(); // Offset: 0x101ebf910 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.DSLParserASTTree.GetChildren
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetChildren(IntProperty NodeId); // Offset: 0x101ebf85c // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class Creative.GameModeStateActive_CreativeMode
// Size: 0xc8 // Inherited bytes: 0xc8
struct UGameModeStateActive_CreativeMode : UGameModeStateActive {
};

// Object Name: Class Creative.GameModeStateFighting_CreativeMode
// Size: 0xd8 // Inherited bytes: 0xd8
struct UGameModeStateFighting_CreativeMode : UGameModeStateFightingTeam {
	// Functions

	// Object Name: Function Creative.GameModeStateFighting_CreativeMode.SetToInfinityTime
	// Flags: [Final|Native|Public]
	void SetToInfinityTime(); // Offset: 0x101ec0360 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord
	// Flags: [Native|Public]
	void PlayersInfoRecord(); // Offset: 0x101ec0344 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.GameModeStateFinished_CreativeMode
// Size: 0xc0 // Inherited bytes: 0xc0
struct UGameModeStateFinished_CreativeMode : UGameModeStateFinishedTeam {
};

// Object Name: Class Creative.GameModeStateReady_CreativeMode
// Size: 0x118 // Inherited bytes: 0x118
struct UGameModeStateReady_CreativeMode : UGameModeStateReady {
};

// Object Name: Class Creative.GameProcessEventObject
// Size: 0xf0 // Inherited bytes: 0xf0
struct UGameProcessEventObject : UCreativeEventObject {
	// Functions

	// Object Name: Function Creative.GameProcessEventObject.ReceivePostEvent
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceivePostEvent(IntProperty ProcessType, IntProperty Round); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.GameProcessEventObject.OnEnterPlayProcess
	// Flags: [Final|Native|Public]
	void OnEnterPlayProcess(); // Offset: 0x101ec0770 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Creative.PaintScoreManager
// Size: 0x7b8 // Inherited bytes: 0x570
struct APaintScoreManager : ALuaActor {
	// Fields
	float PaintRadius; // Offset: 0x56c // Size: 0x04
	float VoxelSize; // Offset: 0x570 // Size: 0x04
	float AreaThreshold; // Offset: 0x574 // Size: 0x04
	bool bEnableDebugLogging; // Offset: 0x578 // Size: 0x01
	float OwnershipCoverageThreshold; // Offset: 0x57c // Size: 0x04
	char UnoccupiedOwnerID; // Offset: 0x580 // Size: 0x01
	char ReservedOwnerIDStart; // Offset: 0x581 // Size: 0x01
	char ReservedOwnerIDEnd; // Offset: 0x582 // Size: 0x01
	char MaxUserCount; // Offset: 0x583 // Size: 0x01
	char StartingUserID; // Offset: 0x584 // Size: 0x01
	char pad_0x586[0x2]; // Offset: 0x586 // Size: 0x02
	float DebugColorScale; // Offset: 0x588 // Size: 0x04
	float DebugDrawDuration; // Offset: 0x58c // Size: 0x04
	float DebugLineThickness; // Offset: 0x590 // Size: 0x04
	float DebugVoxelBoxSize; // Offset: 0x594 // Size: 0x04
	bool bUseOctreeForSmallTriangles; // Offset: 0x598 // Size: 0x01
	char pad_0x599[0x3]; // Offset: 0x599 // Size: 0x03
	IntProperty OctreeMaxDepth; // Offset: 0x59c // Size: 0x04
	IntProperty OctreeMaxTrianglesPerLeaf; // Offset: 0x5a0 // Size: 0x04
	float OctreeMinNodeSize; // Offset: 0x5a4 // Size: 0x04
	bool bEnablePartialSplit; // Offset: 0x5a8 // Size: 0x01
	char pad_0x5A9[0x3]; // Offset: 0x5a9 // Size: 0x03
	float PartialSplitMinArea; // Offset: 0x5ac // Size: 0x04
	IntProperty PartialSplitMaxDepth; // Offset: 0x5b0 // Size: 0x04
	char pad_0x5B4[0x4]; // Offset: 0x5b4 // Size: 0x04
	struct TArray<struct FPaintTriangleInfo> SmallTriangles; // Offset: 0x5b8 // Size: 0x10
	char pad_0x5C8[0x40]; // Offset: 0x5c8 // Size: 0x40
	MapProperty SparseVoxelHash; // Offset: 0x608 // Size: 0x50
	struct TArray<struct FPaintVoxelCoord> PrecomputedDiskOffsets; // Offset: 0x658 // Size: 0x10
	MapProperty PerUserAreaCache; // Offset: 0x668 // Size: 0x50
	struct TArray<struct FDeferredPaintOp> DeferredOps; // Offset: 0x6b8 // Size: 0x10
	MapProperty UserNameToID; // Offset: 0x6c8 // Size: 0x50
	MapProperty IDToUserName; // Offset: 0x718 // Size: 0x50
	char NextUserID; // Offset: 0x768 // Size: 0x01
	char pad_0x769[0x3]; // Offset: 0x769 // Size: 0x03
	float TotalScore; // Offset: 0x76c // Size: 0x04
	bool bInitialized; // Offset: 0x770 // Size: 0x01
	char pad_0x771[0x47]; // Offset: 0x771 // Size: 0x47

	// Functions

	// Object Name: Function Creative.PaintScoreManager.WorldToVoxelBP
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FPaintVoxelCoord WorldToVoxelBP(struct FVector& WorldPos); // Offset: 0x101ec3630 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.PaintScoreManager.VoxelToWorldBP
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector VoxelToWorldBP(struct FPaintVoxelCoord& VoxelCoord); // Offset: 0x101ec358c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.PaintScoreManager.UpdateUserAreaCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateUserAreaCache(IntProperty UserId, float AreaDelta); // Offset: 0x101ec34d4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.PaintScoreManager.TriangleIntersectsSphere
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	bool TriangleIntersectsSphere(IntProperty TriangleIndex, struct FVector& SphereCenter, float SphereRadius); // Offset: 0x101ec33c4 // Return & Params: Num(4) Size(0x15)

	// Object Name: Function Creative.PaintScoreManager.SubdivideOctreeNode
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	void SubdivideOctreeNode(struct FPaintOctreeNode& Node); // Offset: 0x101ec32e8 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function Creative.PaintScoreManager.SetVoxelCellOwner
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool SetVoxelCellOwner(struct FPaintVoxelCoord& VoxelCoord, IntProperty UserId); // Offset: 0x101ec320c // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Creative.PaintScoreManager.SetSmallTriangleOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetSmallTriangleOwner(IntProperty Index, IntProperty UserId); // Offset: 0x101ec3148 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Creative.PaintScoreManager.SetOctreeRoot
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetOctreeRoot(struct FPaintOctreeNode& NewRoot); // Offset: 0x101ec306c // Return & Params: Num(1) Size(0x40)

	// Object Name: Function Creative.PaintScoreManager.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(); // Offset: 0x101ec3050 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.PaintScoreManager.RemoveUserPaint
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveUserPaint(StrProperty UserName); // Offset: 0x101ec2fb8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.QueryOctree
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void QueryOctree(struct FPaintOctreeNode& Node, struct FVector& SphereCenter, float SphereRadius, struct TArray<IntProperty>& OutTriangleIndices); // Offset: 0x101ec2ddc // Return & Params: Num(4) Size(0x60)

	// Object Name: Function Creative.PaintScoreManager.ProjectTriangleTo2D
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool ProjectTriangleTo2D(struct FVector& A, struct FVector& B, struct FVector& C, struct FVector& SphereCenter, float SphereRadius, struct FVector2D& OutA2D, struct FVector2D& OutB2D, struct FVector2D& OutC2D, struct FVector2D& OutCenter2D, float& OutRadius2D, struct FVector& OutE1, struct FVector& OutE2, struct FVector& OutPlaneOrigin); // Offset: 0x101ec29bc // Return & Params: Num(14) Size(0x7d)

	// Object Name: Function Creative.PaintScoreManager.ProcessVoxelOwnershipTransfer
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	float ProcessVoxelOwnershipTransfer(struct FPaintVoxelCoord& VoxelCoord, IntProperty UserId); // Offset: 0x101ec28d8 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Creative.PaintScoreManager.ProcessVoxelCellsForPaint
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	float ProcessVoxelCellsForPaint(struct FVector& Center, IntProperty UserId); // Offset: 0x101ec27fc // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Creative.PaintScoreManager.ProcessTriangleWithCoverageMethod
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void ProcessTriangleWithCoverageMethod(IntProperty TriangleIndex, struct FVector& Center, char InternalUserID, struct UWorld* DebugWorld); // Offset: 0x101ec26b8 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.PaintScoreManager.ProcessTrianglesWithLinearSearch
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void ProcessTrianglesWithLinearSearch(struct FVector& Center, float Radius, char InternalUserID, struct UWorld* DebugWorld); // Offset: 0x101ec2574 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Creative.PaintScoreManager.ProcessTriangleOwnershipTransfer
	// Flags: [Native|Event|Public|BlueprintEvent]
	float ProcessTriangleOwnershipTransfer(IntProperty TriangleIndex, IntProperty UserId, float ClippedArea); // Offset: 0x101ec246c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.ProcessSmallTrianglesForPaint
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	float ProcessSmallTrianglesForPaint(struct FVector& Center, float Radius, IntProperty UserId); // Offset: 0x101ec2354 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Creative.PaintScoreManager.ProcessSingleTriangleForPaint
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void ProcessSingleTriangleForPaint(IntProperty TriangleIndex, struct FVector& Center, float Radius, char InternalUserID, struct UWorld* DebugWorld); // Offset: 0x101ec21d4 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Creative.PaintScoreManager.PerformTwoPointSplit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	bool PerformTwoPointSplit(IntProperty TriangleIndex, struct FVector& SphereCenter, float SphereRadius, char NewOwnerID, float& OutTransferredArea); // Offset: 0x101ec203c // Return & Params: Num(6) Size(0x1d)

	// Object Name: Function Creative.PaintScoreManager.IntersectSegmentCircle2D
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool IntersectSegmentCircle2D(struct FVector2D& P0, struct FVector2D& P1, struct FVector2D& CircleCenter, float Radius, struct TArray<float>& OutT); // Offset: 0x101ec1e5c // Return & Params: Num(6) Size(0x31)

	// Object Name: Function Creative.PaintScoreManager.InsertTriangleIntoOctree
	// Flags: [Final|Native|Private|HasOutParms|BlueprintCallable]
	void InsertTriangleIntoOctree(struct FPaintOctreeNode& Node, IntProperty TriangleIndex); // Offset: 0x101ec1d34 // Return & Params: Num(2) Size(0x44)

	// Object Name: Function Creative.PaintScoreManager.Initialize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void Initialize(struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Indices); // Offset: 0x101ec1c1c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.PaintScoreManager.InitByNavManager
	// Flags: [Final|Native|Public|HasDefaults]
	void InitByNavManager(struct FBox Area); // Offset: 0x101ec1b94 // Return & Params: Num(1) Size(0x1c)

	// Object Name: Function Creative.PaintScoreManager.GetVoxelCellInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetVoxelCellInfo(struct FPaintVoxelCoord& VoxelCoord, struct FPaintVoxelCell& OutCell); // Offset: 0x101ec1aa0 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Creative.PaintScoreManager.GetUserScore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetUserScore(StrProperty UserName); // Offset: 0x101ec19f8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Creative.PaintScoreManager.GetTriangleCentroid
	// Flags: [Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetTriangleCentroid(IntProperty TriangleIndex); // Offset: 0x101ec1968 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.GetSmallTrianglesCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSmallTrianglesCount(); // Offset: 0x101ec1934 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.PaintScoreManager.GetSmallTriangleInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetSmallTriangleInfo(IntProperty Index, struct FPaintTriangleInfo& OutTriangle); // Offset: 0x101ec1830 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function Creative.PaintScoreManager.GetRegisteredUserCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetRegisteredUserCount(); // Offset: 0x101ec17fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Creative.PaintScoreManager.GetPrecomputedDiskOffsets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FPaintVoxelCoord> GetPrecomputedDiskOffsets(); // Offset: 0x101ec1798 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.GetOctreeRoot
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FPaintOctreeNode GetOctreeRoot(); // Offset: 0x101ec1734 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function Creative.PaintScoreManager.GetMemoryUsage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetMemoryUsage(); // Offset: 0x101ec16d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.GetAllUserScores
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetAllUserScores(struct TArray<StrProperty>& OutUsers, struct TArray<float>& OutScores); // Offset: 0x101ec15b8 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Creative.PaintScoreManager.DrawVoxelCells
	// Flags: [Final|Native|Private|BlueprintCallable]
	void DrawVoxelCells(char TargetUserID); // Offset: 0x101ec153c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.PaintScoreManager.DrawSmallTriangles
	// Flags: [Final|Native|Private|BlueprintCallable]
	void DrawSmallTriangles(char TargetUserID); // Offset: 0x101ec14c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.PaintScoreManager.DebugDrawOccupiedAreasForUserID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DebugDrawOccupiedAreasForUserID(char TargetUserID); // Offset: 0x101ec1444 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.PaintScoreManager.DebugDrawOccupiedAreas
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DebugDrawOccupiedAreas(StrProperty UserName); // Offset: 0x101ec13ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Creative.PaintScoreManager.ClipTriangleWithSphere
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	float ClipTriangleWithSphere(IntProperty TriangleIndex, struct FVector& SphereCenter); // Offset: 0x101ec12d0 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Creative.PaintScoreManager.CalculateTriangleVoxelIntersection
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	float CalculateTriangleVoxelIntersection(struct FVector& V0, struct FVector& v1, struct FVector& v2, struct FPaintVoxelCoord& VoxelCoord); // Offset: 0x101ec1148 // Return & Params: Num(5) Size(0x34)

	// Object Name: Function Creative.PaintScoreManager.CalculateSmallTrianglesBounds
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void CalculateSmallTrianglesBounds(struct FVector& OutMin, struct FVector& OutMax); // Offset: 0x101ec1070 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Creative.PaintScoreManager.BuildOctree
	// Flags: [Final|Native|Private|BlueprintCallable]
	void BuildOctree(); // Offset: 0x101ec105c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.PaintScoreManager.AddTriangleToPipeline
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable]
	void AddTriangleToPipeline(struct FVector& A, struct FVector& B, struct FVector& C); // Offset: 0x101ec0f3c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Creative.PaintScoreManager.AddPaint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void AddPaint(struct FVector& Center, StrProperty UserName); // Offset: 0x101ec0e50 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Creative.PlayerListenerEventObject
// Size: 0xf8 // Inherited bytes: 0xf0
struct UPlayerListenerEventObject : UCreativeEventObject {
	// Fields
	bool bCppListenerEnable; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x7]; // Offset: 0xf1 // Size: 0x07

	// Functions

	// Object Name: Function Creative.PlayerListenerEventObject.OnCppRemovePlayerListener
	// Flags: [Native|Protected]
	void OnCppRemovePlayerListener(struct UObject* Content, uint32_t PlayerKey); // Offset: 0x101ec4b28 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.PlayerListenerEventObject.OnCppAddPlayerListener
	// Flags: [Native|Protected]
	void OnCppAddPlayerListener(struct UObject* Content, uint32_t PlayerKey); // Offset: 0x101ec4a68 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Creative.PlayerAttachedToVehicleEventObject
// Size: 0x148 // Inherited bytes: 0xf8
struct UPlayerAttachedToVehicleEventObject : UPlayerListenerEventObject {
	// Fields
	MapProperty LambdaDelegateMap; // Offset: 0xf8 // Size: 0x50

	// Functions

	// Object Name: Function Creative.PlayerAttachedToVehicleEventObject.OnOwnerAttachedToVehicle
	// Flags: [Final|Native|Public]
	void OnOwnerAttachedToVehicle(struct ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey); // Offset: 0x101ec45a8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.PlayerAttachedToVehicleEventObject.OnCppRemovePlayerListener
	// Flags: [Native|Protected]
	void OnCppRemovePlayerListener(struct UObject* Content, uint32_t PlayerKey); // Offset: 0x101ec44e8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Creative.PlayerAttachedToVehicleEventObject.OnCppAddPlayerListener
	// Flags: [Native|Protected]
	void OnCppAddPlayerListener(struct UObject* Content, uint32_t PlayerKey); // Offset: 0x101ec4428 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Creative.PlayerAttachedProxy
// Size: 0x40 // Inherited bytes: 0x28
struct UPlayerAttachedProxy : UObject {
	// Fields
	uint32_t PlayerKey; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct UPlayerAttachedToVehicleEventObject* Owner; // Offset: 0x30 // Size: 0x08
	struct ASTExtraBaseCharacter* PlayerCharacter; // Offset: 0x38 // Size: 0x08

	// Functions

	// Object Name: Function Creative.PlayerAttachedProxy.OnProxyAttachedToVehicle
	// Flags: [Final|Native|Public]
	void OnProxyAttachedToVehicle(struct ASTExtraVehicleBase* InVehicle); // Offset: 0x101ec4898 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Creative.ShowAllPlayerManagerActor
// Size: 0x620 // Inherited bytes: 0x570
struct AShowAllPlayerManagerActor : ALuaActor {
	// Fields
	float RefreshInterval; // Offset: 0x56c // Size: 0x04
	IntProperty MapMarkID; // Offset: 0x570 // Size: 0x04
	bool bEnableRefresh; // Offset: 0x574 // Size: 0x01
	IntProperty BatchNum; // Offset: 0x578 // Size: 0x04
	IntProperty CurBatchID; // Offset: 0x57c // Size: 0x04
	IntProperty CurBatchNum; // Offset: 0x580 // Size: 0x04
	char pad_0x585[0x23]; // Offset: 0x585 // Size: 0x23
	struct TArray<struct FVector_NetQuantize> TeamPosData; // Offset: 0x5a8 // Size: 0x10
	SetProperty TriggerPlayerKeySet; // Offset: 0x5b8 // Size: 0x50
	struct TArray<IntProperty> MapMarkInstanceIDList; // Offset: 0x608 // Size: 0x10
	char pad_0x618[0x8]; // Offset: 0x618 // Size: 0x08

	// Functions

	// Object Name: Function Creative.ShowAllPlayerManagerActor.TriggerRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TriggerRefresh(struct ASTExtraBaseCharacter* Character, bool bEnable); // Offset: 0x101ec5280 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData
	// Flags: [Native|Event|Public|BlueprintEvent]
	void RefreshTeamPoseData(); // Offset: 0x101ec5264 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData
	// Flags: [Native|Event|Public|BlueprintEvent]
	void RefreshMapMarkData(); // Offset: 0x101ec5248 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnTeamPosDataChange(); // Offset: 0x101ec522c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData
	// Flags: [Final|Native|Public]
	void OnRep_TeamPosData(); // Offset: 0x101ec5218 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsCharacterValidForShow(struct ASTExtraBaseCharacter* Character); // Offset: 0x101ec5184 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.FlushBatchData
	// Flags: [Native|Event|Public|BlueprintEvent]
	void FlushBatchData(IntProperty BatchSize, IntProperty CurExtraSize); // Offset: 0x101ec50c8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.EnableRefresh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableRefresh(bool bEnable); // Offset: 0x101ec5044 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Creative.ShowAllPlayerManagerActor.ClearAllMark
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllMark(); // Offset: 0x101ec5030 // Return & Params: Num(0) Size(0x0)
};

