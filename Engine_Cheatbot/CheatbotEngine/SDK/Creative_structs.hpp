#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Creative.PlatformCustomAssetInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FPlatformCustomAssetInfo {
	// Fields
	StrProperty AssetSuffixType; // Offset: 0x00 // Size: 0x10
	struct TArray<char> PlatformContent; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeActorNodeContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeActorNodeContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeActorReplicatNode> Nodes; // Offset: 0xb0 // Size: 0x10
	struct UCreativeActorDataManager* ActorDataManager; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeActorReplicatNode
// Size: 0x48 // Inherited bytes: 0x0c
struct FCreativeActorReplicatNode : FFastArraySerializerItem {
	// Fields
	uint32_t DataHashKey; // Offset: 0x0c // Size: 0x04
	uint32_t ID; // Offset: 0x10 // Size: 0x04
	char Type; // Offset: 0x14 // Size: 0x01
	char Seq; // Offset: 0x15 // Size: 0x01
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	struct FCreativeActorDataNode DataNode; // Offset: 0x18 // Size: 0x30
};

// Object Name: ScriptStruct Creative.CreativeActorDataNode
// Size: 0x30 // Inherited bytes: 0x00
struct FCreativeActorDataNode {
	// Fields
	uint32_t DataHashKey; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FCreativeInstanceDataContent DataContent; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Creative.CreativeInstanceDataContent
// Size: 0x28 // Inherited bytes: 0x00
struct FCreativeInstanceDataContent {
	// Fields
	char Seq; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FCreativeInstanceDataContentSegment> NodeContentSegments; // Offset: 0x08 // Size: 0x10
	struct TArray<char> OutContent; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeInstanceDataContentSegment
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeInstanceDataContentSegment {
	// Fields
	char Index; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<char> NodeSegmentContent; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeAssetInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FCreativeAssetInfo {
	// Fields
	StrProperty EditorPath; // Offset: 0x00 // Size: 0x10
	StrProperty GamePath; // Offset: 0x10 // Size: 0x10
	struct FCreativePlaceInfo PlaceInfo; // Offset: 0x20 // Size: 0x14
	bool bRuntimeObjectBox; // Offset: 0x34 // Size: 0x01
	bool bIsGroup; // Offset: 0x35 // Size: 0x01
	uint8_t AssetCategory; // Offset: 0x36 // Size: 0x01
	char pad_0x37[0x1]; // Offset: 0x37 // Size: 0x01
	struct FCreativeBoxInfo BoxInfo; // Offset: 0x38 // Size: 0x18
	struct TArray<struct FCreativeStaticMeshConfigInfo> StaticMeshes; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FCreativeCollisionConfigInfo> Collisions; // Offset: 0x60 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeCollisionConfigInfo
// Size: 0x60 // Inherited bytes: 0x00
struct FCreativeCollisionConfigInfo {
	// Fields
	struct FTransform Transform; // Offset: 0x00 // Size: 0x30
	StrProperty ClassName; // Offset: 0x30 // Size: 0x10
	struct FName CollisionProfileName; // Offset: 0x40 // Size: 0x08
	struct FVector Extent; // Offset: 0x48 // Size: 0x0c
	float Radius; // Offset: 0x54 // Size: 0x04
	float HalfHeight; // Offset: 0x58 // Size: 0x04
	bool OnlyEdit; // Offset: 0x5c // Size: 0x01
	char pad_0x5D[0x3]; // Offset: 0x5d // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshConfigInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FCreativeStaticMeshConfigInfo {
	// Fields
	StrProperty DestructionMeshPath; // Offset: 0x00 // Size: 0x10
	StrProperty MeshPath; // Offset: 0x10 // Size: 0x10
	struct FTransform Transform; // Offset: 0x20 // Size: 0x30
	struct TArray<StrProperty> MaterialPaths; // Offset: 0x50 // Size: 0x10
	struct FName CollisionProfileName; // Offset: 0x60 // Size: 0x08
	bool OnlyEdit; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: ScriptStruct Creative.CreativeBoxInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeBoxInfo {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	struct FVector Extent; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct Creative.CreativePlaceInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FCreativePlaceInfo {
	// Fields
	IntProperty LandGroundType; // Offset: 0x00 // Size: 0x04
	bool Scalable; // Offset: 0x04 // Size: 0x01
	bool HasCollision; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	struct FRotator RotableAxis; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct Creative.CreativeAutoGenDataSegment
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeAutoGenDataSegment {
	// Fields
	struct TArray<struct FCreativeAutoGenItemDataSegment> DataSegments; // Offset: 0x00 // Size: 0x10
	IntProperty CurDataSize; // Offset: 0x10 // Size: 0x04
	IntProperty MaxDataSize; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeAutoGenItemDataSegment
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeAutoGenItemDataSegment {
	// Fields
	struct TArray<char> NodeSegmentContent; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeUIAnimationGoal
// Size: 0x14 // Inherited bytes: 0x00
struct FCreativeUIAnimationGoal {
	// Fields
	float PositionX; // Offset: 0x00 // Size: 0x04
	float PositionY; // Offset: 0x04 // Size: 0x04
	float Opacity; // Offset: 0x08 // Size: 0x04
	float Rotation; // Offset: 0x0c // Size: 0x04
	float Scale; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeUITweenInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeUITweenInfo {
	// Fields
	float Time; // Offset: 0x00 // Size: 0x04
	enum class ECreativeUIEasingStyle EasingStyle; // Offset: 0x04 // Size: 0x01
	enum class ECreativeUIEasingDirection EasingDirection; // Offset: 0x05 // Size: 0x01
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	IntProperty RepeatCount; // Offset: 0x08 // Size: 0x04
	bool Reverses; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float delayTime; // Offset: 0x10 // Size: 0x04
	struct FCreativeUITweenParams Params; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeUITweenParams
// Size: 0x04 // Inherited bytes: 0x00
struct FCreativeUITweenParams {
	// Fields
	enum class ECreativeUIEasingStyle PositionEasingStyle; // Offset: 0x00 // Size: 0x01
	enum class ECreativeUIEasingStyle OpacityEasingStyle; // Offset: 0x01 // Size: 0x01
	enum class ECreativeUIEasingStyle RotationEasingStyle; // Offset: 0x02 // Size: 0x01
	enum class ECreativeUIEasingStyle ScaleEasingStyle; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct Creative.MessageDataWrapper
// Size: 0x20 // Inherited bytes: 0x00
struct FMessageDataWrapper {
	// Fields
	StrProperty BlockIdString; // Offset: 0x00 // Size: 0x10
	StrProperty FormatString; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.BounceMovementSnapshot
// Size: 0x20 // Inherited bytes: 0x00
struct FBounceMovementSnapshot {
	// Fields
	struct FVector Location; // Offset: 0x00 // Size: 0x0c
	struct FVector Velocity; // Offset: 0x0c // Size: 0x0c
	uint32_t FrameNumber; // Offset: 0x18 // Size: 0x04
	float ServerTimeStamp; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeCustomParameterDataContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeCustomParameterDataContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeCustomParameterDataNode> CustomParameterDataNodes; // Offset: 0xb0 // Size: 0x10
	struct UCreativeCustomParameterManager* CustomParameterManager; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeCustomParameterDataNode
// Size: 0x28 // Inherited bytes: 0x0c
struct FCreativeCustomParameterDataNode : FFastArraySerializerItem {
	// Fields
	uint32_t ParameterID; // Offset: 0x0c // Size: 0x04
	struct TArray<char> DataContent; // Offset: 0x10 // Size: 0x10
	uint32_t PlayerKey; // Offset: 0x20 // Size: 0x04
	uint8_t TeamID; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeCustomPrefabDataSegment
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeCustomPrefabDataSegment {
	// Fields
	struct TArray<struct FCreativePrefabDataSegment> DataSegments; // Offset: 0x00 // Size: 0x10
	IntProperty CurDataSize; // Offset: 0x10 // Size: 0x04
	IntProperty MaxDataSize; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativePrefabDataSegment
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativePrefabDataSegment {
	// Fields
	struct TArray<struct FCreativePrefabDataSegmentSlice> NodeSegmentContent; // Offset: 0x00 // Size: 0x10
	IntProperty MaxDataSize; // Offset: 0x10 // Size: 0x04
	IntProperty CurDataSize; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativePrefabDataSegmentSlice
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativePrefabDataSegmentSlice {
	// Fields
	struct TArray<char> NodeSegmentContent; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeCustomUIContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeCustomUIContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeCustomUIReplicateNode> Nodes; // Offset: 0xb0 // Size: 0x10
	struct UCreativeCustomUIDataComponent* Component; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeCustomUIReplicateNode
// Size: 0x40 // Inherited bytes: 0x0c
struct FCreativeCustomUIReplicateNode : FFastArraySerializerItem {
	// Fields
	uint32_t ID; // Offset: 0x0c // Size: 0x04
	char Seq; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	struct FCreativeInstanceDataContent DataContent; // Offset: 0x18 // Size: 0x28
};

// Object Name: ScriptStruct Creative.CreativeCustomUIDataTransferNode
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeCustomUIDataTransferNode {
	// Fields
	uint32_t ID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<char> Content; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeVFXImageBlendConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeVFXImageBlendConfig {
	// Fields
	struct FName ImageName; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* TranslucentMaterial; // Offset: 0x08 // Size: 0x08
	struct UMaterialInterface* AdditiveMaterial; // Offset: 0x10 // Size: 0x08
	float DeltaV; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeDestructibleMeshInstanceInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FCreativeDestructibleMeshInstanceInfo {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	IntProperty MaterialID; // Offset: 0x04 // Size: 0x04
	StrProperty InstanceID; // Offset: 0x08 // Size: 0x10
	struct FIntVector CellIndex; // Offset: 0x18 // Size: 0x0c
	bool bManualLoad; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeDestructibleMeshBatchInfo
// Size: 0xa8 // Inherited bytes: 0x00
struct FCreativeDestructibleMeshBatchInfo {
	// Fields
	MapProperty ISMMap; // Offset: 0x00 // Size: 0x50
	MapProperty CurInstances; // Offset: 0x50 // Size: 0x50
	bool bIsUseHISM; // Offset: 0xa0 // Size: 0x01
	bool bIsDirty; // Offset: 0xa1 // Size: 0x01
	char pad_0xA2[0x6]; // Offset: 0xa2 // Size: 0x06
};

// Object Name: ScriptStruct Creative.CreativeDropGroupContainer
// Size: 0x30 // Inherited bytes: 0x00
struct FCreativeDropGroupContainer {
	// Fields
	float GroupTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FItemCurveAnim> List; // Offset: 0x08 // Size: 0x10
	IntProperty ConfigID; // Offset: 0x18 // Size: 0x04
	struct FVector CenterPos; // Offset: 0x1c // Size: 0x0c
	IntProperty DesireItemNum; // Offset: 0x28 // Size: 0x04
	IntProperty PendingKill; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeDropAnimConfig
// Size: 0x108 // Inherited bytes: 0x00
struct FCreativeDropAnimConfig {
	// Fields
	char bNotShowInPickupListWhenInDropAnim : 1; // Offset: 0x00 // Size: 0x01
	char pad_0x0_1 : 7; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector2D RangeHigh; // Offset: 0x04 // Size: 0x08
	struct FVector CustomStartOffset; // Offset: 0x0c // Size: 0x0c
	char ClientDropOneByOne : 1; // Offset: 0x18 // Size: 0x01
	char pad_0x18_1 : 7; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float ClientDropOneByOneInterval; // Offset: 0x1c // Size: 0x04
	float CustomGravity; // Offset: 0x20 // Size: 0x04
	float TrailParticleDelayTime; // Offset: 0x24 // Size: 0x04
	float LandDirectlyAfterTheReplicatedTime; // Offset: 0x28 // Size: 0x04
	char UseTrailParticle : 1; // Offset: 0x2c // Size: 0x01
	char pad_0x2C_1 : 7; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
	struct FSoftObjectPath DropTailsParticle; // Offset: 0x30 // Size: 0x18
	struct FSoftObjectPath RareDropTailsParticle; // Offset: 0x48 // Size: 0x18
	SetProperty RareDropItemSet; // Offset: 0x60 // Size: 0x50
	float ParticleScale; // Offset: 0xb0 // Size: 0x04
	char bUseDropGroundParticle : 1; // Offset: 0xb4 // Size: 0x01
	char pad_0xB4_1 : 7; // Offset: 0xb4 // Size: 0x01
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
	float DropGroundParticleLifeTime; // Offset: 0xb8 // Size: 0x04
	char pad_0xBC[0x4]; // Offset: 0xbc // Size: 0x04
	struct FSoftObjectPath DropGroundParticle; // Offset: 0xc0 // Size: 0x18
	struct UParticleSystem* DropGroundParticleSystem; // Offset: 0xd8 // Size: 0x08
	char bUseAnimCurve : 1; // Offset: 0xe0 // Size: 0x01
	char pad_0xE0_1 : 7; // Offset: 0xe0 // Size: 0x01
	char pad_0xE1[0x7]; // Offset: 0xe1 // Size: 0x07
	struct FSoftObjectPath AnimCurvePath; // Offset: 0xe8 // Size: 0x18
	struct UCurveFloat* AnimCurve; // Offset: 0x100 // Size: 0x08
};

// Object Name: ScriptStruct Creative.EditorObjectLiteComponentTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FEditorObjectLiteComponentTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeEditorObjectEffectMesheInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeEditorObjectEffectMesheInfo {
	// Fields
	struct UStaticMeshComponent* EffectMeshComponent; // Offset: 0x00 // Size: 0x08
	struct UStaticMeshComponent* OriginalMeshComponent; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Creative.GameModeLiteComponentTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FGameModeLiteComponentTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeGameParameterResumeContainer
// Size: 0x118 // Inherited bytes: 0xb0
struct FCreativeGameParameterResumeContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeGameParameterResume> Nodes; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x50]; // Offset: 0xc0 // Size: 0x50
	struct UCreativeGameParameterManager* GameParameterManager; // Offset: 0x110 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeGameParameterResume
// Size: 0x60 // Inherited bytes: 0x0c
struct FCreativeGameParameterResume : FFastArraySerializerItem {
	// Fields
	uint32_t ParameterHeadHash; // Offset: 0x0c // Size: 0x04
	char Seq; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
	StrProperty ParameterKey; // Offset: 0x18 // Size: 0x10
	StrProperty TemplateID; // Offset: 0x28 // Size: 0x10
	struct FCreativeInstanceDataContent DataContent; // Offset: 0x38 // Size: 0x28
};

// Object Name: ScriptStruct Creative.CreativeGameParameterContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeGameParameterContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeGameParameter> Nodes; // Offset: 0xb0 // Size: 0x10
	struct UCreativeGameParameterManager* GameParameterManager; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeGameParameter
// Size: 0x68 // Inherited bytes: 0x0c
struct FCreativeGameParameter : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty ParameterKey; // Offset: 0x10 // Size: 0x10
	StrProperty TemplateID; // Offset: 0x20 // Size: 0x10
	struct FCreativeInstanceDataContent DataContent; // Offset: 0x30 // Size: 0x28
	uint32_t ParameterHeadHash; // Offset: 0x58 // Size: 0x04
	uint32_t ParameterHeadSize; // Offset: 0x5c // Size: 0x04
	uint32_t DataContentSize; // Offset: 0x60 // Size: 0x04
	bool IsDiffContent; // Offset: 0x64 // Size: 0x01
	char pad_0x65[0x3]; // Offset: 0x65 // Size: 0x03
};

// Object Name: ScriptStruct Creative.ExtendedBlockySlotString
// Size: 0x40 // Inherited bytes: 0x00
struct FExtendedBlockySlotString {
	// Fields
	struct FBlockySlotString BlockySlot; // Offset: 0x00 // Size: 0x38
	IntProperty SceneID; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Creative.GameStateLiteComponentTickFunction
// Size: 0xb8 // Inherited bytes: 0xb0
struct FGameStateLiteComponentTickFunction : FTickFunction {
	// Fields
	char pad_0xB0[0x8]; // Offset: 0xb0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativePlayerOperableInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FCreativePlayerOperableInfo {
	// Fields
	char Seq; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float EndOperationLimitTimestamp; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeUpdateBatchActorParameter
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeUpdateBatchActorParameter {
	// Fields
	StrProperty GridName; // Offset: 0x00 // Size: 0x10
	IntProperty AssetId; // Offset: 0x10 // Size: 0x04
	IntProperty MaterialID; // Offset: 0x14 // Size: 0x04
	bool ReplaceAll; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	float ReqTimeStamp; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeGridLevelsActivationInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeGridLevelsActivationInfo {
	// Fields
	MapProperty LevelsActivationMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeStaticMeshObjectBatchInfo {
	// Fields
	MapProperty GridDataMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Grid
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeStaticMeshObjectBatchInfo_Grid {
	// Fields
	MapProperty CellDataMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Cell
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeStaticMeshObjectBatchInfo_Cell {
	// Fields
	MapProperty AssetDataMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Asset
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeStaticMeshObjectBatchInfo_Asset {
	// Fields
	MapProperty MaterialDataMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeStaticMeshObjectBatchInfo_Material
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeStaticMeshObjectBatchInfo_Material {
	// Fields
	struct TArray<StrProperty> InstanceIDs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeObjectBatchSignInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeObjectBatchSignInfo {
	// Fields
	struct FIntVector CellIndex; // Offset: 0x00 // Size: 0x0c
	IntProperty CurMaterialId; // Offset: 0x0c // Size: 0x04
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	bool bIsPrefab; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0xf]; // Offset: 0x41 // Size: 0x0f
};

// Object Name: ScriptStruct Creative.CreativeModeGridLevelInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeModeGridLevelInfo {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeModeGridLevelConfig
// Size: 0x0c // Inherited bytes: 0x00
struct FCreativeModeGridLevelConfig {
	// Fields
	struct FVector2D CellWidthHeight; // Offset: 0x00 // Size: 0x08
	float LoadingRange; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeInstanceIDArray
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeInstanceIDArray {
	// Fields
	struct TArray<uint32_t> InstanceIDs; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeStringArray
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeStringArray {
	// Fields
	struct TArray<StrProperty> Strings; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeInstanceRespondPullDataSegment
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeInstanceRespondPullDataSegment {
	// Fields
	char TotalSegNum; // Offset: 0x00 // Size: 0x01
	char CurSegNum; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x6]; // Offset: 0x02 // Size: 0x06
	struct TArray<struct FCreativeInstanceDataContent> InstanceDataContents; // Offset: 0x08 // Size: 0x10
	IntProperty CurDataSize; // Offset: 0x18 // Size: 0x04
	IntProperty MaxDataSize; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeBatchPullDataNode
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeBatchPullDataNode {
	// Fields
	float ReqTimeStamp; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FCreativePullDataNode> PullDataNodes; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativePullDataNode
// Size: 0x08 // Inherited bytes: 0x00
struct FCreativePullDataNode {
	// Fields
	uint32_t InstanceID; // Offset: 0x00 // Size: 0x04
	char Seq; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeInstanceNode
// Size: 0x80 // Inherited bytes: 0x00
struct FCreativeInstanceNode {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	bool bIsPrefab; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0xb]; // Offset: 0x05 // Size: 0x0b
	struct FTransform Transform; // Offset: 0x10 // Size: 0x30
	IntProperty MaterialID; // Offset: 0x40 // Size: 0x04
	IntProperty ObjectStateMatID; // Offset: 0x44 // Size: 0x04
	enum class ECreativeModeActorStreamingType StreamingType; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	StrProperty RuntimeGrid; // Offset: 0x50 // Size: 0x10
	IntProperty ObbyBaseAssetId; // Offset: 0x60 // Size: 0x04
	enum class ECreativeDestructibleState DestructibleMeshState; // Offset: 0x64 // Size: 0x01
	enum class ECreativeModeLoadType LoadType; // Offset: 0x65 // Size: 0x01
	bool bIsCustomUI; // Offset: 0x66 // Size: 0x01
	char CustomMatColorR; // Offset: 0x67 // Size: 0x01
	char CustomMatColorG; // Offset: 0x68 // Size: 0x01
	char CustomMatColorB; // Offset: 0x69 // Size: 0x01
	bool MatColorMarkDirty; // Offset: 0x6a // Size: 0x01
	char pad_0x6B[0x1]; // Offset: 0x6b // Size: 0x01
	struct FColor MatColor; // Offset: 0x6c // Size: 0x04
	IntProperty SplicingCustomMatID; // Offset: 0x70 // Size: 0x04
	bool bDisableCollision; // Offset: 0x74 // Size: 0x01
	char pad_0x75[0xb]; // Offset: 0x75 // Size: 0x0b
};

// Object Name: ScriptStruct Creative.CreativeInstanceDataNode
// Size: 0x30 // Inherited bytes: 0x00
struct FCreativeInstanceDataNode {
	// Fields
	uint32_t InstanceID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct FCreativeInstanceDataContent DataContent; // Offset: 0x08 // Size: 0x28
};

// Object Name: ScriptStruct Creative.CreativeNodeContainer
// Size: 0x120 // Inherited bytes: 0xb0
struct FCreativeNodeContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeReplicatNode> Nodes; // Offset: 0xb0 // Size: 0x10
	struct UCreativeInstanceManager* InstanceManager; // Offset: 0xc0 // Size: 0x08
	bool bIsRPCReplicatedContainer; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	uint32_t CurRPCReplicatedInstanceContainerSeq; // Offset: 0xcc // Size: 0x04
	MapProperty HistoryContainerMap; // Offset: 0xd0 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeNodeContainerCacheInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeNodeContainerCacheInfo {
	// Fields
	struct TArray<struct FCreativeReplicatNode> Nodes; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeReplicatNode
// Size: 0x14 // Inherited bytes: 0x0c
struct FCreativeReplicatNode : FFastArraySerializerItem {
	// Fields
	uint32_t ID; // Offset: 0x0c // Size: 0x04
	char Seq; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct Creative.PlayerIntegralInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FPlayerIntegralInfo {
	// Fields
	IntProperty nCurIntegral; // Offset: 0x00 // Size: 0x04
	IntProperty nCurFunctionalIntegral; // Offset: 0x04 // Size: 0x04
	IntProperty nCurStageIntegral; // Offset: 0x08 // Size: 0x04
	IntProperty nIntegralAddSeq; // Offset: 0x0c // Size: 0x04
	StrProperty UID; // Offset: 0x10 // Size: 0x10
	IntProperty TeamID; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeTriggerActorType
// Size: 0x0c // Inherited bytes: 0x00
struct FCreativeTriggerActorType {
	// Fields
	struct TWeakObjectPtr<struct AActor> OverlapActor; // Offset: 0x00 // Size: 0x08
	enum class ECreativeTriggerSourceType Type; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeTriggerSource
// Size: 0x05 // Inherited bytes: 0x00
struct FCreativeTriggerSource {
	// Fields
	bool bPlayer; // Offset: 0x00 // Size: 0x01
	bool bRobot; // Offset: 0x01 // Size: 0x01
	bool bMonster; // Offset: 0x02 // Size: 0x01
	bool bVehicle; // Offset: 0x03 // Size: 0x01
	bool bBankProduct; // Offset: 0x04 // Size: 0x01
};

// Object Name: ScriptStruct Creative.CreativeSignalEventInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FCreativeSignalEventInfo {
	// Fields
	StrProperty EventType; // Offset: 0x00 // Size: 0x10
	StrProperty EventID; // Offset: 0x10 // Size: 0x10
	StrProperty FunctionName; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeFineBatchInstancedStaticMesh {
	// Fields
	MapProperty BatchISMInfoMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh_MaterialId
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeFineBatchInstancedStaticMesh_MaterialId {
	// Fields
	MapProperty BatchISMInfoMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeFineBatchInstancedStaticMesh_StaticMesh
// Size: 0x80 // Inherited bytes: 0x00
struct FCreativeFineBatchInstancedStaticMesh_StaticMesh {
	// Fields
	struct UInstancedStaticMeshComponent* ISMComponent; // Offset: 0x00 // Size: 0x08
	MapProperty BatchDataInfoMap; // Offset: 0x08 // Size: 0x50
	struct TArray<IntProperty> RecoveryBufferIndex; // Offset: 0x58 // Size: 0x10
	bool bIsUseHISM; // Offset: 0x68 // Size: 0x01
	bool bIsUseColorISM; // Offset: 0x69 // Size: 0x01
	char pad_0x6A[0x6]; // Offset: 0x6a // Size: 0x06
	struct TArray<StrProperty> AllLoadedInstanceID; // Offset: 0x70 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeFineBatchDataInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeFineBatchDataInfo {
	// Fields
	MapProperty CurLoadedInstanceInfoMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeFineBatchLoadedInstanceInfo
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeFineBatchLoadedInstanceInfo {
	// Fields
	MapProperty UseBufferIndexMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeBatchInstancedStaticMesh
// Size: 0x58 // Inherited bytes: 0x00
struct FCreativeBatchInstancedStaticMesh {
	// Fields
	MapProperty MaterialISMMap; // Offset: 0x00 // Size: 0x50
	char pad_0x50[0x8]; // Offset: 0x50 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeBatchInstancedStaticMesh_AssetID
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeBatchInstancedStaticMesh_AssetID {
	// Fields
	MapProperty AllISMMap; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativeBatchInstancedStaticMesh_MaterialId
// Size: 0xb8 // Inherited bytes: 0x00
struct FCreativeBatchInstancedStaticMesh_MaterialId {
	// Fields
	MapProperty ISMMap; // Offset: 0x00 // Size: 0x50
	MapProperty CurLoadedInstances; // Offset: 0x50 // Size: 0x50
	struct TArray<IntProperty> RecoveryBufferIndex; // Offset: 0xa0 // Size: 0x10
	bool bIsUseHISM; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x7]; // Offset: 0xb1 // Size: 0x07
};

// Object Name: ScriptStruct Creative.CreativeBatchStaticMeshInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FCreativeBatchStaticMeshInfo {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	IntProperty MaterialID; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeGameTaskGuidePoint
// Size: 0x40 // Inherited bytes: 0x00
struct FCreativeGameTaskGuidePoint {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty InstanceID; // Offset: 0x08 // Size: 0x10
	struct FVector Coordinate; // Offset: 0x18 // Size: 0x0c
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	StrProperty PresetID; // Offset: 0x28 // Size: 0x10
	IntProperty StageIndex; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeMovingAudio
// Size: 0x38 // Inherited bytes: 0x00
struct FCreativeMovingAudio {
	// Fields
	struct AActor* AttachRoot; // Offset: 0x00 // Size: 0x08
	struct FVector AttachPos; // Offset: 0x08 // Size: 0x0c
	IntProperty Sequence; // Offset: 0x14 // Size: 0x04
	uint64 ConfigID; // Offset: 0x18 // Size: 0x08
	bool bShowMark; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	int64_t EndTime; // Offset: 0x28 // Size: 0x08
	float Volume; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeSpawnObjectInfo
// Size: 0x70 // Inherited bytes: 0x00
struct FCreativeSpawnObjectInfo {
	// Fields
	StrProperty InstanceID; // Offset: 0x00 // Size: 0x10
	IntProperty AssetId; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	StrProperty AssetPath; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FTransform SpawnTransform; // Offset: 0x30 // Size: 0x30
	bool bIsLogicObj; // Offset: 0x60 // Size: 0x01
	bool bIsGroupObj; // Offset: 0x61 // Size: 0x01
	bool bCanBatch; // Offset: 0x62 // Size: 0x01
	char pad_0x63[0xd]; // Offset: 0x63 // Size: 0x0d
};

// Object Name: ScriptStruct Creative.OctreeNode
// Size: 0x30 // Inherited bytes: 0x00
struct FOctreeNode {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	float Size; // Offset: 0x0c // Size: 0x04
	char pad_0x10[0x20]; // Offset: 0x10 // Size: 0x20
};

// Object Name: ScriptStruct Creative.OctreeData
// Size: 0x50 // Inherited bytes: 0x00
struct FOctreeData {
	// Fields
	IntProperty UID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty PlayerKey; // Offset: 0x08 // Size: 0x10
	struct FVector Forward; // Offset: 0x18 // Size: 0x0c
	struct FLinearColor Color; // Offset: 0x24 // Size: 0x10
	struct FVector Location; // Offset: 0x34 // Size: 0x0c
	struct TWeakObjectPtr<struct AActor> HitActor; // Offset: 0x40 // Size: 0x08
	bool bIsValid; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: ScriptStruct Creative.CreativeNetData
// Size: 0x08 // Inherited bytes: 0x00
struct FCreativeNetData {
	// Fields
	uint32_t OutBytes; // Offset: 0x00 // Size: 0x04
	uint32_t InBytes; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeMemoryData
// Size: 0x0c // Inherited bytes: 0x00
struct FCreativeMemoryData {
	// Fields
	float AvailablePhysical; // Offset: 0x00 // Size: 0x04
	float UsedPhysical; // Offset: 0x04 // Size: 0x04
	float TotalPhysical; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreaitvePerfDataMap
// Size: 0x50 // Inherited bytes: 0x00
struct FCreaitvePerfDataMap {
	// Fields
	MapProperty PerfData; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Creative.CreativePerfData
// Size: 0x38 // Inherited bytes: 0x00
struct FCreativePerfData {
	// Fields
	IntProperty AssetId; // Offset: 0x00 // Size: 0x04
	uint32_t CallCount; // Offset: 0x04 // Size: 0x04
	uint32_t MaxTime; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 TotalTime; // Offset: 0x10 // Size: 0x08
	uint64 FrameDuration; // Offset: 0x18 // Size: 0x08
	uint64 LastFrameCounter; // Offset: 0x20 // Size: 0x08
	StrProperty ObjName; // Offset: 0x28 // Size: 0x10
};

// Object Name: ScriptStruct Creative.PhotonDestructionParam
// Size: 0x20 // Inherited bytes: 0x00
struct FPhotonDestructionParam {
	// Fields
	StrProperty UGCInstanceID; // Offset: 0x00 // Size: 0x10
	bool IsActive; // Offset: 0x10 // Size: 0x01
	bool EnableDestructible; // Offset: 0x11 // Size: 0x01
	bool CanBeDamagedByMelee; // Offset: 0x12 // Size: 0x01
	bool CanBeDamagedByRocketLauncher; // Offset: 0x13 // Size: 0x01
	bool CanBeDamagedByThrowable; // Offset: 0x14 // Size: 0x01
	bool CanBeDamagedByVehicle; // Offset: 0x15 // Size: 0x01
	bool OnlyHalfBroken; // Offset: 0x16 // Size: 0x01
	char pad_0x17[0x1]; // Offset: 0x17 // Size: 0x01
	float Health; // Offset: 0x18 // Size: 0x04
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.PhysicsComponentData
// Size: 0x60 // Inherited bytes: 0x00
struct FPhysicsComponentData {
	// Fields
	char pad_0x0[0x60]; // Offset: 0x00 // Size: 0x60
};

// Object Name: ScriptStruct Creative.CreativeInstanceGridCellInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeInstanceGridCellInfo {
	// Fields
	StrProperty GridName; // Offset: 0x00 // Size: 0x10
	struct FIntVector CellIndex; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeEventBindingChangeInfo
// Size: 0x28 // Inherited bytes: 0x00
struct FCreativeEventBindingChangeInfo {
	// Fields
	uint32_t InstanceID; // Offset: 0x00 // Size: 0x04
	char ChangeType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	StrProperty EventName; // Offset: 0x08 // Size: 0x10
	uint32_t BranchKey; // Offset: 0x18 // Size: 0x04
	uint32_t BindingInstanceID; // Offset: 0x1c // Size: 0x04
	uint16_t FuncIndex; // Offset: 0x20 // Size: 0x02
	char pad_0x22[0x6]; // Offset: 0x22 // Size: 0x06
};

// Object Name: ScriptStruct Creative.CreativePoolGetObjectParamInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativePoolGetObjectParamInfo {
	// Fields
	IntProperty PoolId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* NewOuter; // Offset: 0x08 // Size: 0x08
	StrProperty InName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeObjectPool
// Size: 0x50 // Inherited bytes: 0x00
struct FCreativeObjectPool {
	// Fields
	bool bPoolEnable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty PoolId; // Offset: 0x04 // Size: 0x04
	struct UCreativePoolManager* PoolManager; // Offset: 0x08 // Size: 0x08
	struct TArray<struct UObject*> Pool; // Offset: 0x10 // Size: 0x10
	struct FCreativeObjectPoolClassConfig PoolConfig; // Offset: 0x20 // Size: 0x20
	struct UObject* ObjectClass; // Offset: 0x40 // Size: 0x08
	uint32_t RecycledSeq; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeObjectPoolClassConfig
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeObjectPoolClassConfig {
	// Fields
	StrProperty ObjectClassPath; // Offset: 0x00 // Size: 0x10
	uint16_t PoolMaxSize; // Offset: 0x10 // Size: 0x02
	uint16_t PoolMinSize; // Offset: 0x12 // Size: 0x02
	uint16_t PoolInitNum; // Offset: 0x14 // Size: 0x02
	char pad_0x16[0x2]; // Offset: 0x16 // Size: 0x02
	uint32_t LifePeriodTime; // Offset: 0x18 // Size: 0x04
	bool bCreativeHandleIsExist; // Offset: 0x1c // Size: 0x01
	bool bDestroyHandleIsExist; // Offset: 0x1d // Size: 0x01
	bool bPickObjectHandleIsExist; // Offset: 0x1e // Size: 0x01
	bool bObjectReturnHandleIsExist; // Offset: 0x1f // Size: 0x01
};

// Object Name: ScriptStruct Creative.CreativePoolObjectRecordInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativePoolObjectRecordInfo {
	// Fields
	IntProperty PoolId; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct UObject* PoolObject; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Creative.RuntimeTeamGameOutcomeConditionContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FRuntimeTeamGameOutcomeConditionContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FRuntimeTeamGameOutcomeConditionInfo> TeamGameOutcomeConditions; // Offset: 0xb0 // Size: 0x10
	struct ACreativeRuntimePlayerBattleDataObject* BattleDataObject; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.RuntimeTeamGameOutcomeConditionInfo
// Size: 0x1c // Inherited bytes: 0x0c
struct FRuntimeTeamGameOutcomeConditionInfo : FFastArraySerializerItem {
	// Fields
	IntProperty TeamID; // Offset: 0x0c // Size: 0x04
	IntProperty IntegralVictoryTarget; // Offset: 0x10 // Size: 0x04
	IntProperty KillPlayerNumVictoryTarget; // Offset: 0x14 // Size: 0x04
	bool UseCampOutcome; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
};

// Object Name: ScriptStruct Creative.RuntimeCacheRoundBattleDataInfoContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FRuntimeCacheRoundBattleDataInfoContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FRuntimeCacheRoundBattleDataInfo> OldRoundCacheTeamRuntimeDataList; // Offset: 0xb0 // Size: 0x10
	struct ACreativeRuntimePlayerBattleDataObject* BattleDataObject; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.RuntimeCacheRoundBattleDataInfo
// Size: 0x20 // Inherited bytes: 0x0c
struct FRuntimeCacheRoundBattleDataInfo : FFastArraySerializerItem {
	// Fields
	IntProperty RoundIndex; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FRuntimePlayerBattleDataInfo> PlayerBattleDataList; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.RuntimePlayerBattleDataInfo
// Size: 0x70 // Inherited bytes: 0x0c
struct FRuntimePlayerBattleDataInfo : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	uint64 UID; // Offset: 0x10 // Size: 0x08
	IntProperty TeamID; // Offset: 0x18 // Size: 0x04
	char Campid; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	uint32_t PlayerKey; // Offset: 0x20 // Size: 0x04
	IntProperty WinningRoundNum; // Offset: 0x24 // Size: 0x04
	IntProperty AIKillCount; // Offset: 0x28 // Size: 0x04
	IntProperty KillCount; // Offset: 0x2c // Size: 0x04
	IntProperty MonsterKillCount; // Offset: 0x30 // Size: 0x04
	IntProperty AssistCount; // Offset: 0x34 // Size: 0x04
	IntProperty RescueCount; // Offset: 0x38 // Size: 0x04
	IntProperty KnockDownCount; // Offset: 0x3c // Size: 0x04
	float PlayerHealth; // Offset: 0x40 // Size: 0x04
	float CauseAITotalDamage; // Offset: 0x44 // Size: 0x04
	float TakeAITotalDamage; // Offset: 0x48 // Size: 0x04
	enum class ExtraPlayerLiveState PlayerLiveState; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
	float SurvivalTime; // Offset: 0x50 // Size: 0x04
	IntProperty DeadCount; // Offset: 0x54 // Size: 0x04
	float CauseTotalDamage; // Offset: 0x58 // Size: 0x04
	float CauseMonsterTotalDamage; // Offset: 0x5c // Size: 0x04
	float CauseRoleTotalDamage; // Offset: 0x60 // Size: 0x04
	float TakeTotalDamage; // Offset: 0x64 // Size: 0x04
	float TakeRoleTotalDamage; // Offset: 0x68 // Size: 0x04
	float TakeMonsterTotalDamage; // Offset: 0x6c // Size: 0x04
};

// Object Name: ScriptStruct Creative.RuntimeBattleDataInfoContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FRuntimeBattleDataInfoContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FRuntimePlayerBattleDataInfo> CurRuntimePlayerBattleDataList; // Offset: 0xb0 // Size: 0x10
	struct ACreativeRuntimePlayerBattleDataObject* BattleDataObject; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeDetectSpaceOptions
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeDetectSpaceOptions {
	// Fields
	float WallNormalZThreshold; // Offset: 0x00 // Size: 0x04
	IntProperty BinarySearchIterations; // Offset: 0x04 // Size: 0x04
	bool bDrawDebug; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	float DebugDuration; // Offset: 0x0c // Size: 0x04
	struct FColor BoxColor; // Offset: 0x10 // Size: 0x04
	struct FColor GroundColor; // Offset: 0x14 // Size: 0x04
	struct FColor WallColor; // Offset: 0x18 // Size: 0x04
	struct FColor TraceColor; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeSpaceResult
// Size: 0x48 // Inherited bytes: 0x00
struct FCreativeSpaceResult {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	struct FVector BoxExtent; // Offset: 0x0c // Size: 0x0c
	float GroundZ; // Offset: 0x18 // Size: 0x04
	bool bHasGround; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	float CeilingZ; // Offset: 0x20 // Size: 0x04
	bool bHasCeiling; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct TArray<struct FVector> WallPoints; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FVector> WallNormals; // Offset: 0x38 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeReplicatedObjectsInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeReplicatedObjectsInfo {
	// Fields
	struct TArray<struct UObject*> ReplicatedObjects; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeReplicatedDataContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeReplicatedDataContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeReplicatedData> DataList; // Offset: 0xb0 // Size: 0x10
	struct UCreativeSceneQueryManager* SceneQueryManager; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeReplicatedData
// Size: 0x20 // Inherited bytes: 0x0c
struct FCreativeReplicatedData : FFastArraySerializerItem {
	// Fields
	uint32_t InstanceID; // Offset: 0x0c // Size: 0x04
	struct TArray<struct UObject*> ReplicatedObjects; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeModeGridCellChangeInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeModeGridCellChangeInfo {
	// Fields
	struct FIntVector CellIndex; // Offset: 0x00 // Size: 0x0c
	bool LoadState; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativeModeStreamingParameters
// Size: 0x02 // Inherited bytes: 0x00
struct FCreativeModeStreamingParameters {
	// Fields
	enum class ECreativeModeActorStreamingType StreamingType; // Offset: 0x00 // Size: 0x01
	bool bSpawnState; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct Creative.CreativeTaskArray
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCreativeTaskArray : FFastArraySerializer {
	// Fields
	struct TArray<struct FCreativeTaskViewItem> Items; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0x8]; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeTaskViewItem
// Size: 0x58 // Inherited bytes: 0x0c
struct FCreativeTaskViewItem : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty TaskID; // Offset: 0x10 // Size: 0x10
	IntProperty StageIdx; // Offset: 0x20 // Size: 0x04
	enum class ETaskStatus status; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct TArray<IntProperty> FinishedStageIdices; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FCreativeTaskProgressItem> ProgressStep; // Offset: 0x38 // Size: 0x10
	StrProperty Reserved; // Offset: 0x48 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeTaskProgressItem
// Size: 0x28 // Inherited bytes: 0x00
struct FCreativeTaskProgressItem {
	// Fields
	bool bConditionMet; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty CurrentProgress; // Offset: 0x04 // Size: 0x04
	IntProperty MaxProgress; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty Reserved; // Offset: 0x10 // Size: 0x10
	char pad_0x20[0x8]; // Offset: 0x20 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CreativeTaskProgressParams
// Size: 0x18 // Inherited bytes: 0x00
struct FCreativeTaskProgressParams {
	// Fields
	IntProperty MaxProgress; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Reserved; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct Creative.UGCTimerContext
// Size: 0x20 // Inherited bytes: 0x00
struct FUGCTimerContext {
	// Fields
	struct FTimerHandle TimerHandle; // Offset: 0x00 // Size: 0x08
	IntProperty UGCGameTimerIdx; // Offset: 0x08 // Size: 0x04
	bool bIsLoop; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	StrProperty BlockyId; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeGroupInstData
// Size: 0x0c // Inherited bytes: 0x00
struct FCreativeGroupInstData {
	// Fields
	uint32_t PropID; // Offset: 0x00 // Size: 0x04
	IntProperty BoughtCount; // Offset: 0x04 // Size: 0x04
	char State; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
};

// Object Name: ScriptStruct Creative.CreativePropInstData
// Size: 0x14 // Inherited bytes: 0x00
struct FCreativePropInstData {
	// Fields
	uint32_t PropID; // Offset: 0x00 // Size: 0x04
	IntProperty Count; // Offset: 0x04 // Size: 0x04
	IntProperty BoughtCount; // Offset: 0x08 // Size: 0x04
	uint32_t ExpiredTimeStamp; // Offset: 0x0c // Size: 0x04
	char State; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct Creative.BattleVoiceUserItem
// Size: 0x10 // Inherited bytes: 0x00
struct FBattleVoiceUserItem {
	// Fields
	uint64 UID; // Offset: 0x00 // Size: 0x08
	IntProperty VoiceMemberID; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Creative.StorageItemInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FStorageItemInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	IntProperty ItemNum; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeTranslationEntry
// Size: 0x20 // Inherited bytes: 0x00
struct FCreativeTranslationEntry {
	// Fields
	StrProperty Key; // Offset: 0x00 // Size: 0x10
	StrProperty Value; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CreativeAudioActorInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeAudioActorInfo {
	// Fields
	IntProperty audioID; // Offset: 0x00 // Size: 0x04
	IntProperty RangeType; // Offset: 0x04 // Size: 0x04
	IntProperty AudienceType; // Offset: 0x08 // Size: 0x04
	IntProperty CanShow; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CreativeTimerActorInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FCreativeTimerActorInfo {
	// Fields
	float StartTime; // Offset: 0x00 // Size: 0x04
	float PassedTime; // Offset: 0x04 // Size: 0x04
	float Duration; // Offset: 0x08 // Size: 0x04
	IntProperty TimerState; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Creative.CustomAssetRuntimeAnimBoneRotations
// Size: 0x10 // Inherited bytes: 0x00
struct FCustomAssetRuntimeAnimBoneRotations {
	// Fields
	struct TArray<struct FRotator> Rotations; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.CustomAssetRuntimeAnimBoneTranslations
// Size: 0x10 // Inherited bytes: 0x00
struct FCustomAssetRuntimeAnimBoneTranslations {
	// Fields
	struct TArray<struct FVector> Translations; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.ImageSummary
// Size: 0x0c // Inherited bytes: 0x00
struct FImageSummary {
	// Fields
	IntProperty Width; // Offset: 0x00 // Size: 0x04
	IntProperty Height; // Offset: 0x04 // Size: 0x04
	IntProperty ImageFormat; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Creative.TrackedCustomAsset
// Size: 0x18 // Inherited bytes: 0x00
struct FTrackedCustomAsset {
	// Fields
	StrProperty LoadStack; // Offset: 0x00 // Size: 0x10
	char pad_0x10[0x8]; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CustomAssetMountStatusInfoContainer
// Size: 0xc8 // Inherited bytes: 0xb0
struct FCustomAssetMountStatusInfoContainer : FFastArraySerializer {
	// Fields
	struct TArray<struct FCustomAssetMountStatusInfo> MountStatusInfos; // Offset: 0xb0 // Size: 0x10
	struct UCustomAssetMountStateComponent* MountStateComponent; // Offset: 0xc0 // Size: 0x08
};

// Object Name: ScriptStruct Creative.CustomAssetMountStatusInfo
// Size: 0x50 // Inherited bytes: 0x0c
struct FCustomAssetMountStatusInfo : FFastArraySerializerItem {
	// Fields
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	StrProperty AssetKey; // Offset: 0x10 // Size: 0x10
	enum class EMountStatus MountStatus; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x7]; // Offset: 0x21 // Size: 0x07
	struct TArray<uint32_t> MountingPlayerKeys; // Offset: 0x28 // Size: 0x10
	uint32_t MountedByPlayerKey; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct TArray<char> DefaultMappingInfoContent; // Offset: 0x40 // Size: 0x10
};

// Object Name: ScriptStruct Creative.DancerDeviceSyncPlayerInfo
// Size: 0x48 // Inherited bytes: 0x00
struct FDancerDeviceSyncPlayerInfo {
	// Fields
	uint32_t PlayerKey; // Offset: 0x00 // Size: 0x04
	uint32_t PlayerUID; // Offset: 0x04 // Size: 0x04
	char PlayerSex; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x3]; // Offset: 0x09 // Size: 0x03
	struct FDancerDeviceSyncPlayerAvatarDataInfo HeadAvatarData; // Offset: 0x0c // Size: 0x1c
	struct TArray<struct FDancerDeviceSyncPlayerAvatarDataInfo> AvatarDataList; // Offset: 0x28 // Size: 0x10
	IntProperty PlayingActionID; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	double StartPlayActionServerTime; // Offset: 0x40 // Size: 0x08
};

// Object Name: ScriptStruct Creative.DancerDeviceSyncPlayerAvatarDataInfo
// Size: 0x1c // Inherited bytes: 0x00
struct FDancerDeviceSyncPlayerAvatarDataInfo {
	// Fields
	IntProperty ItemId; // Offset: 0x00 // Size: 0x04
	struct FAvatarCustom customData; // Offset: 0x04 // Size: 0x18
};

// Object Name: ScriptStruct Creative.DancerDeviceActorConfigInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FDancerDeviceActorConfigInfo {
	// Fields
	uint8_t DancerType; // Offset: 0x00 // Size: 0x01
	char MaterialType; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float ScaleValue; // Offset: 0x04 // Size: 0x04
	char ActionPlayMode; // Offset: 0x08 // Size: 0x01
	char PlayInterval; // Offset: 0x09 // Size: 0x01
	bool ShowBaseMesh; // Offset: 0x0a // Size: 0x01
	bool ShowBaseLight; // Offset: 0x0b // Size: 0x01
	bool SyncPlayerBaseAction; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	struct FLinearColor LightColor; // Offset: 0x10 // Size: 0x10
	struct TArray<uint64> ActionIDList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct Creative.PoolIndex
// Size: 0x08 // Inherited bytes: 0x00
struct FPoolIndex {
	// Fields
	IntProperty PoolId; // Offset: 0x00 // Size: 0x04
	int16_t LocalIndex; // Offset: 0x04 // Size: 0x02
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
};

// Object Name: ScriptStruct Creative.TransferTask
// Size: 0x48 // Inherited bytes: 0x00
struct FTransferTask {
	// Fields
	int16_t TaskID; // Offset: 0x00 // Size: 0x02
	int16_t TotalPacketCount; // Offset: 0x02 // Size: 0x02
	int16_t CompletedCount; // Offset: 0x04 // Size: 0x02
	enum class ETransferStatus status; // Offset: 0x06 // Size: 0x01
	char pad_0x7[0x1]; // Offset: 0x07 // Size: 0x01
	uint32_t TaskHash; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	double TransferTime; // Offset: 0x10 // Size: 0x08
	struct TArray<bool> Confirmed; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
};

// Object Name: ScriptStruct Creative.DTPacket
// Size: 0x204 // Inherited bytes: 0x00
struct FDTPacket {
	// Fields
	uint16_t TaskID; // Offset: 0x00 // Size: 0x02
	uint16_t TotalPacketCount; // Offset: 0x02 // Size: 0x02
	uint16_t Seq; // Offset: 0x04 // Size: 0x02
	char pad_0x6[0x2]; // Offset: 0x06 // Size: 0x02
	uint32_t TaskHash; // Offset: 0x08 // Size: 0x04
	char Payload[0x1e0]; // Offset: 0x0c // Size: 0x1e0
	uint16_t PayloadLength; // Offset: 0x1ec // Size: 0x02
	char Alignment[0x14]; // Offset: 0x1ee // Size: 0x14
	char pad_0x202[0x2]; // Offset: 0x202 // Size: 0x02
};

// Object Name: ScriptStruct Creative.DSLParserNode
// Size: 0x90 // Inherited bytes: 0x00
struct FDSLParserNode {
	// Fields
	StrProperty Kind; // Offset: 0x00 // Size: 0x10
	StrProperty Name; // Offset: 0x10 // Size: 0x10
	StrProperty Value; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> Children; // Offset: 0x30 // Size: 0x10
	MapProperty Properties; // Offset: 0x40 // Size: 0x50
};

// Object Name: ScriptStruct Creative.PaintOctreeNode
// Size: 0x40 // Inherited bytes: 0x00
struct FPaintOctreeNode {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	struct FVector HalfSize; // Offset: 0x0c // Size: 0x0c
	struct TArray<IntProperty> TriangleIndices; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
	IntProperty Depth; // Offset: 0x38 // Size: 0x04
	bool bIsLeaf; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
};

// Object Name: ScriptStruct Creative.PaintVoxelCoord
// Size: 0x0c // Inherited bytes: 0x00
struct FPaintVoxelCoord {
	// Fields
	IntProperty X; // Offset: 0x00 // Size: 0x04
	IntProperty Y; // Offset: 0x04 // Size: 0x04
	IntProperty Z; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct Creative.PaintVoxelCell
// Size: 0x08 // Inherited bytes: 0x00
struct FPaintVoxelCell {
	// Fields
	char Owner; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ExactArea; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct Creative.PaintTriangleInfo
// Size: 0x2c // Inherited bytes: 0x00
struct FPaintTriangleInfo {
	// Fields
	struct FVector V0; // Offset: 0x00 // Size: 0x0c
	struct FVector v1; // Offset: 0x0c // Size: 0x0c
	struct FVector v2; // Offset: 0x18 // Size: 0x0c
	float Area; // Offset: 0x24 // Size: 0x04
	char CurrentOwner; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
};

// Object Name: ScriptStruct Creative.DeferredPaintOp
// Size: 0x20 // Inherited bytes: 0x00
struct FDeferredPaintOp {
	// Fields
	char pad_0x0[0x20]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Creative.ReplicateAddDataArray
// Size: 0x10 // Inherited bytes: 0x00
struct FReplicateAddDataArray {
	// Fields
	struct TArray<struct FReplicateAddData> AddDatas; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Creative.ReplicateAddData
// Size: 0x08 // Inherited bytes: 0x00
struct FReplicateAddData {
	// Fields
	IntProperty AddNum; // Offset: 0x00 // Size: 0x04
	float ServerTime; // Offset: 0x04 // Size: 0x04
};

