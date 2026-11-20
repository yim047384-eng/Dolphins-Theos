#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ClothingSystemRuntime.ClothBoneDataAsset
// Size: 0x80 // Inherited bytes: 0x28
struct UClothBoneDataAsset : UObject {
	// Fields
	struct TArray<struct FClothVertBoneData> BoneData; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FName> UsedBoneNames; // Offset: 0x38 // Size: 0x10
	IntProperty MaxBoneWeights; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct FName ReferenceBoneName; // Offset: 0x50 // Size: 0x08
	IntProperty NumVertices; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x4]; // Offset: 0x5c // Size: 0x04
	struct FSoftObjectPath SourceMeshPath; // Offset: 0x60 // Size: 0x18
	IntProperty SourceLod; // Offset: 0x78 // Size: 0x04
	IntProperty SourceSection; // Offset: 0x7c // Size: 0x04
};

// Object Name: Class ClothingSystemRuntime.ClothConfigAsset
// Size: 0x190 // Inherited bytes: 0x30
struct UClothConfigAsset : UDataAsset {
	// Fields
	struct FClothConfig ConfigData; // Offset: 0x30 // Size: 0x160
};

// Object Name: Class ClothingSystemRuntime.ClothingAssetCustomData
// Size: 0x28 // Inherited bytes: 0x28
struct UClothingAssetCustomData : UObject {
};

// Object Name: Class ClothingSystemRuntime.ClothingAsset
// Size: 0x270 // Inherited bytes: 0x48
struct UClothingAsset : UClothingAssetBase {
	// Fields
	struct UPhysicsAsset* PhysicsAsset; // Offset: 0x48 // Size: 0x08
	enum class EClothSkinningMode DefaultSkinningMode; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct UClothBoneDataAsset* AlternateBoneDataAsset; // Offset: 0x58 // Size: 0x28
	struct FClothConfig ClothConfig; // Offset: 0x80 // Size: 0x160
	struct TArray<struct FClothLODData> LODData; // Offset: 0x1e0 // Size: 0x10
	struct TArray<IntProperty> LodMap; // Offset: 0x1f0 // Size: 0x10
	struct TArray<struct FName> UsedBoneNames; // Offset: 0x200 // Size: 0x10
	struct TArray<IntProperty> UsedBoneIndices; // Offset: 0x210 // Size: 0x10
	IntProperty ReferenceBoneIndex; // Offset: 0x220 // Size: 0x04
	char pad_0x224[0x4]; // Offset: 0x224 // Size: 0x04
	struct TArray<struct FClothVertBoneData> AlternateBoneData; // Offset: 0x228 // Size: 0x10
	IntProperty AlternateMaxBoneWeights; // Offset: 0x238 // Size: 0x04
	char pad_0x23C[0x4]; // Offset: 0x23c // Size: 0x04
	struct TArray<struct FName> AlternateUsedBoneNames; // Offset: 0x240 // Size: 0x10
	struct TArray<IntProperty> AlternateUsedBoneIndices; // Offset: 0x250 // Size: 0x10
	IntProperty AlternateReferenceBoneIndex; // Offset: 0x260 // Size: 0x04
	char pad_0x264[0x4]; // Offset: 0x264 // Size: 0x04
	struct UClothingAssetCustomData* customData; // Offset: 0x268 // Size: 0x08
};

// Object Name: Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// Size: 0x28 // Inherited bytes: 0x28
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Object Name: Class ClothingSystemRuntime.ClothMaskAsset
// Size: 0x70 // Inherited bytes: 0x30
struct UClothMaskAsset : UDataAsset {
	// Fields
	struct FClothParameterMask_PhysMesh MaskData; // Offset: 0x30 // Size: 0x30
	struct FName SourceAssetName; // Offset: 0x60 // Size: 0x08
	IntProperty SourceLodIndex; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

