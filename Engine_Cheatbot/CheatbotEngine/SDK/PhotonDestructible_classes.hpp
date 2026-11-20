#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class PhotonDestructible.FEdgeData
// Size: 0x28 // Inherited bytes: 0x28
struct UFEdgeData : UObject {
};

// Object Name: Class PhotonDestructible.FracturedFragmentInfo
// Size: 0x80 // Inherited bytes: 0x28
struct UFracturedFragmentInfo : UObject {
	// Fields
	struct TArray<struct FKConvexElem> ConvexElemForCollision; // Offset: 0x28 // Size: 0x10
	struct FVector CenterPoint; // Offset: 0x38 // Size: 0x0c
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct TArray<IntProperty> neighbors; // Offset: 0x48 // Size: 0x10
	struct TArray<struct FPlane> FacePlaneData; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FVector> PolygonVertex; // Offset: 0x68 // Size: 0x10
	char CanDestroy : 1; // Offset: 0x78 // Size: 0x01
	char HasTriangle : 1; // Offset: 0x78 // Size: 0x01
	char IsBorder : 1; // Offset: 0x78 // Size: 0x01
	char pad_0x78_3 : 5; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
};

// Object Name: Class PhotonDestructible.MaterialExpressionObjectLocalPosition
// Size: 0x60 // Inherited bytes: 0x60
struct UMaterialExpressionObjectLocalPosition : UMaterialExpression {
};

// Object Name: Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask
// Size: 0x60 // Inherited bytes: 0x60
struct UMaterialExpressionGetPDInstancedSurfaceMask : UMaterialExpression {
};

// Object Name: Class PhotonDestructible.PhotonDestructibleAtlasPool
// Size: 0x188 // Inherited bytes: 0x178
struct UPhotonDestructibleAtlasPool : UActorComponent {
	// Fields
	char pad_0x178[0x10]; // Offset: 0x178 // Size: 0x10
};

// Object Name: Class PhotonDestructible.PhotonDestructibleMgr
// Size: 0x4d8 // Inherited bytes: 0x4b0
struct APhotonDestructibleMgr : AActor {
	// Fields
	struct UPhotonDestructibleTexturePool* TexturePool; // Offset: 0x4b0 // Size: 0x08
	struct UPhotonDestructibleAtlasPool* AtlasPool; // Offset: 0x4b8 // Size: 0x08
	struct UPhotonDestructibleTexture2DArrayManager* Texture2DArrayManager; // Offset: 0x4c0 // Size: 0x08
	struct UPhotonDestructibleSurfaceConfig* SurfaceConfig; // Offset: 0x4c8 // Size: 0x08
	struct UPhotonDestructiblePuppetMgr* PuppetMgr; // Offset: 0x4d0 // Size: 0x08
};

// Object Name: Class PhotonDestructible.PhotonDestructiblePuppet
// Size: 0x3b0 // Inherited bytes: 0x3a0
struct UPhotonDestructiblePuppet : USceneComponent {
	// Fields
	struct FGuid TargetPuppetGUID; // Offset: 0x39c // Size: 0x10

	// Functions

	// Object Name: Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent
	// Flags: [Native|Public|BlueprintCallable]
	void TriggerPuppetEvent(IntProperty EventID); // Offset: 0x101aad014 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PhotonDestructible.PhotonDestructiblePuppetContainer
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UPhotonDestructiblePuppetContainer : USceneComponent {
	// Fields
	struct TArray<struct FGuid> TargetsPuppetGUID; // Offset: 0x3a0 // Size: 0x10
	struct TArray<StrProperty> TargetsName; // Offset: 0x3b0 // Size: 0x10

	// Functions

	// Object Name: Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent
	// Flags: [Native|Public|BlueprintCallable]
	void TriggerPuppetEvent(StrProperty ObjectName, IntProperty EventID); // Offset: 0x101aad1f8 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class PhotonDestructible.PhotonDestructiblePuppetMgr
// Size: 0x1c8 // Inherited bytes: 0x178
struct UPhotonDestructiblePuppetMgr : UActorComponent {
	// Fields
	char pad_0x178[0x50]; // Offset: 0x178 // Size: 0x50

	// Functions

	// Object Name: Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults]
	void Client_TriggerPuppetEvent(struct FGuid PuppetGUID, IntProperty EventID); // Offset: 0x101aad48c // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class PhotonDestructible.PhotonDestructiblePuppetTarget
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonDestructiblePuppetTarget : UInterface {
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceActor
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct APhotonDestructibleSurfaceActor : AActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	struct UPhotonDestructibleSurfaceComponent* SurfaceComponent; // Offset: 0x4b8 // Size: 0x08
};

// Object Name: Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct APhotonDestructibleInstancedSurfaceActor : AActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	struct UPhotonDestructibleInstancedSurfaceComponent* InstancedSurfaceComponent; // Offset: 0x4b8 // Size: 0x08
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceActorBase
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonDestructibleSurfaceActorBase : UInterface {
};

// Object Name: Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonDestructibleInstancedSurfaceActorBase : UInterface {
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceComponent
// Size: 0xc40 // Inherited bytes: 0xbd0
struct UPhotonDestructibleSurfaceComponent : UStaticMeshComponent {
	// Fields
	char pad_0xBD0[0x10]; // Offset: 0xbd0 // Size: 0x10
	enum class EFracturedAxis MaskUAxis; // Offset: 0xbe0 // Size: 0x01
	enum class EFracturedAxis MaskVAxis; // Offset: 0xbe1 // Size: 0x01
	char pad_0xBE2[0x6]; // Offset: 0xbe2 // Size: 0x06
	struct UTexture2D* MaskTexture2D; // Offset: 0xbe8 // Size: 0x08
	struct FPDSurfaceNetData SurfaceNetData; // Offset: 0xbf0 // Size: 0x18
	struct FGuid TargetPuppetGUID; // Offset: 0xc08 // Size: 0x10
	char pad_0xC18[0x28]; // Offset: 0xc18 // Size: 0x28

	// Functions

	// Object Name: Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit
	// Flags: [Final|Native|Public|HasOutParms]
	void Server_ProcessHit(struct FPhotonDestructibleSurfaceHitData& HitData); // Offset: 0x101aadde4 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData
	// Flags: [Final|Native|Public]
	void OnRep_SurfaceNetData(); // Offset: 0x101aaddd0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void Client_OnProcessHit(struct FPhotonDestructibleSurfaceHitData HitData); // Offset: 0x101aadd3c // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent
// Size: 0xe80 // Inherited bytes: 0xe10
struct UPhotonDestructibleInstancedSurfaceComponent : UHierarchicalInstancedStaticMeshComponent {
	// Fields
	char pad_0xE10[0x10]; // Offset: 0xe10 // Size: 0x10
	enum class EFracturedAxis MaskUAxis; // Offset: 0xe20 // Size: 0x01
	enum class EFracturedAxis MaskVAxis; // Offset: 0xe21 // Size: 0x01
	char pad_0xE22[0x6]; // Offset: 0xe22 // Size: 0x06
	struct UMaterialInterface* Texture2DArrayMaterial; // Offset: 0xe28 // Size: 0x08
	struct UMaterialInterface* AtlasMaterial; // Offset: 0xe30 // Size: 0x08
	struct FPDSurfaceNetData SurfaceNetData; // Offset: 0xe38 // Size: 0x18
	struct TArray<struct FGuid> TargetPuppetGUID; // Offset: 0xe50 // Size: 0x10
	char pad_0xE60[0x20]; // Offset: 0xe60 // Size: 0x20

	// Functions

	// Object Name: Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit
	// Flags: [Final|Native|Public|HasOutParms]
	void Server_ProcessHit(struct FPhotonDestructibleSurfaceHitData& HitData); // Offset: 0x101aae1c0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData
	// Flags: [Final|Native|Public]
	void OnRep_SurfaceNetData(); // Offset: 0x101aae1ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void Client_OnProcessHit(struct FPhotonDestructibleSurfaceHitData HitData); // Offset: 0x101aae118 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceBase
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonDestructibleSurfaceBase : UInterface {
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceConfig
// Size: 0x188 // Inherited bytes: 0x178
struct UPhotonDestructibleSurfaceConfig : UActorComponent {
	// Fields
	struct TArray<struct UPhotonDestructibleSurfaceMask*> TextureMaskData; // Offset: 0x178 // Size: 0x10
};

// Object Name: Class PhotonDestructible.PhotonDestructibleSurfaceMask
// Size: 0x48 // Inherited bytes: 0x28
struct UPhotonDestructibleSurfaceMask : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FIntPoint MaskSize; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager
// Size: 0x1a0 // Inherited bytes: 0x178
struct UPhotonDestructibleTexture2DArrayManager : UActorComponent {
	// Fields
	char pad_0x178[0x28]; // Offset: 0x178 // Size: 0x28
};

// Object Name: Class PhotonDestructible.PhotonDestructibleTexturePool
// Size: 0x198 // Inherited bytes: 0x178
struct UPhotonDestructibleTexturePool : UActorComponent {
	// Fields
	char pad_0x178[0x20]; // Offset: 0x178 // Size: 0x20
};

