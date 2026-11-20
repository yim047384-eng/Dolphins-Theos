#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Landscape.ControlPointMeshComponent
// Size: 0xbd0 // Inherited bytes: 0xbd0
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Object Name: Class Landscape.LandscapeProxy
// Size: 0xad0 // Inherited bytes: 0x4b0
struct ALandscapeProxy : AActor {
	// Fields
	char pad_0x4B0[0x20]; // Offset: 0x4b0 // Size: 0x20
	struct ULandscapeSplinesComponent* SplineComponent; // Offset: 0x4d0 // Size: 0x08
	struct FGuid LandscapeGuid; // Offset: 0x4d8 // Size: 0x10
	struct FGuid BoundingGuid; // Offset: 0x4e8 // Size: 0x10
	struct FIntPoint LandscapeSectionOffset; // Offset: 0x4f8 // Size: 0x08
	IntProperty MaxLODLevel; // Offset: 0x500 // Size: 0x04
	float LODDistanceFactor; // Offset: 0x504 // Size: 0x04
	enum class ELandscapeLODFalloff LODFalloff; // Offset: 0x508 // Size: 0x01
	bool bUseScreenSizeLOD; // Offset: 0x509 // Size: 0x01
	char pad_0x50A[0x2]; // Offset: 0x50a // Size: 0x02
	float LOD0DistributionSetting; // Offset: 0x50c // Size: 0x04
	float LODDistributionSetting; // Offset: 0x510 // Size: 0x04
	char NearMaxLOD_Baked; // Offset: 0x514 // Size: 0x01
	char pad_0x515[0x3]; // Offset: 0x515 // Size: 0x03
	float NearFactor_Baked; // Offset: 0x518 // Size: 0x04
	float NearExtent_Baked; // Offset: 0x51c // Size: 0x04
	float FarFactor_Baked; // Offset: 0x520 // Size: 0x04
	float LandscapeRoughness; // Offset: 0x524 // Size: 0x04
	bool EnableImproveLOD; // Offset: 0x528 // Size: 0x01
	char pad_0x529[0x7]; // Offset: 0x529 // Size: 0x07
	struct TArray<float> ImproveLODValues; // Offset: 0x530 // Size: 0x10
	char NearMaxLOD; // Offset: 0x540 // Size: 0x01
	char pad_0x541[0x3]; // Offset: 0x541 // Size: 0x03
	float NearFactor; // Offset: 0x544 // Size: 0x04
	float NearExtent; // Offset: 0x548 // Size: 0x04
	float FarFactor; // Offset: 0x54c // Size: 0x04
	IntProperty StaticLightingLOD; // Offset: 0x550 // Size: 0x04
	char pad_0x554[0x4]; // Offset: 0x554 // Size: 0x04
	struct UPhysicalMaterial* DefaultPhysMaterial; // Offset: 0x558 // Size: 0x08
	float StreamingDistanceMultiplier; // Offset: 0x560 // Size: 0x04
	char bCacheHeightData : 1; // Offset: 0x564 // Size: 0x01
	char pad_0x564_1 : 7; // Offset: 0x564 // Size: 0x01
	char pad_0x565[0x3]; // Offset: 0x565 // Size: 0x03
	struct UMaterialInterface* LandscapeMaterial; // Offset: 0x568 // Size: 0x08
	struct UMaterialInterface* LandscapeHoleMaterial; // Offset: 0x570 // Size: 0x08
	MapProperty OtherMaterials; // Offset: 0x578 // Size: 0x50
	char bOverrideGrassTypes : 1; // Offset: 0x5c8 // Size: 0x01
	char pad_0x5C8_1 : 7; // Offset: 0x5c8 // Size: 0x01
	char pad_0x5C9[0x7]; // Offset: 0x5c9 // Size: 0x07
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // Offset: 0x5d0 // Size: 0x10
	float MinGrassWeightThreshold; // Offset: 0x5e0 // Size: 0x04
	float NegativeZBoundsExtension; // Offset: 0x5e4 // Size: 0x04
	float PositiveZBoundsExtension; // Offset: 0x5e8 // Size: 0x04
	char pad_0x5EC[0x4]; // Offset: 0x5ec // Size: 0x04
	struct UTexture2D* GrassColor_WorldMaskNoiseTexture; // Offset: 0x5f0 // Size: 0x08
	struct FVector2D GrassColor_UVScale_WorldMaskNoise; // Offset: 0x5f8 // Size: 0x08
	struct FVector2D GrassColor_Center_WorldMaskNoise; // Offset: 0x600 // Size: 0x08
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // Offset: 0x608 // Size: 0x10
	struct ULandscapeAOTextureDataAsset* LandscapeAOTextureDataAsset; // Offset: 0x618 // Size: 0x08
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // Offset: 0x620 // Size: 0x10
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // Offset: 0x630 // Size: 0x10
	char pad_0x640[0xb0]; // Offset: 0x640 // Size: 0xb0
	bool bHasLandscapeGrass; // Offset: 0x6f0 // Size: 0x01
	char pad_0x6F1[0x3]; // Offset: 0x6f1 // Size: 0x03
	float StaticLightingResolution; // Offset: 0x6f4 // Size: 0x04
	char bCastStaticShadow : 1; // Offset: 0x6f8 // Size: 0x01
	char bCastShadowAsTwoSided : 1; // Offset: 0x6f8 // Size: 0x01
	char bCastFarShadow : 1; // Offset: 0x6f8 // Size: 0x01
	char pad_0x6F8_3 : 5; // Offset: 0x6f8 // Size: 0x01
	struct FLightingChannels LightingChannels; // Offset: 0x6f9 // Size: 0x01
	char bUseMaterialPositionOffsetInStaticLighting : 1; // Offset: 0x6fa // Size: 0x01
	char bRenderCustomDepth : 1; // Offset: 0x6fa // Size: 0x01
	char pad_0x6FA_2 : 6; // Offset: 0x6fa // Size: 0x01
	char pad_0x6FB[0x1]; // Offset: 0x6fb // Size: 0x01
	IntProperty CustomDepthStencilValue; // Offset: 0x6fc // Size: 0x04
	struct FLightmassPrimitiveSettings LightmassSettings; // Offset: 0x700 // Size: 0x18
	IntProperty CollisionMipLevel; // Offset: 0x718 // Size: 0x04
	IntProperty SimpleCollisionMipLevel; // Offset: 0x71c // Size: 0x04
	float CollisionThickness; // Offset: 0x720 // Size: 0x04
	char pad_0x724[0xc]; // Offset: 0x724 // Size: 0x0c
	struct FBodyInstance BodyInstance; // Offset: 0x730 // Size: 0x210
	char bGenerateOverlapEvents : 1; // Offset: 0x940 // Size: 0x01
	char bBakeMaterialPositionOffsetIntoCollision : 1; // Offset: 0x940 // Size: 0x01
	char bUseHoleConsistent : 1; // Offset: 0x940 // Size: 0x01
	char pad_0x940_3 : 5; // Offset: 0x940 // Size: 0x01
	char pad_0x941[0x3]; // Offset: 0x941 // Size: 0x03
	IntProperty ComponentSizeQuads; // Offset: 0x944 // Size: 0x04
	IntProperty SubsectionSizeQuads; // Offset: 0x948 // Size: 0x04
	IntProperty NumSubsections; // Offset: 0x94c // Size: 0x04
	char bUsedForNavigation : 1; // Offset: 0x950 // Size: 0x01
	char bMobileMultiLayers : 1; // Offset: 0x950 // Size: 0x01
	char pad_0x950_2 : 6; // Offset: 0x950 // Size: 0x01
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // Offset: 0x951 // Size: 0x01
	bool bUseLandscapeForCullingInvisibleHLODVertices; // Offset: 0x952 // Size: 0x01
	bool bUseLandscapeVT; // Offset: 0x953 // Size: 0x01
	char pad_0x954[0x4]; // Offset: 0x954 // Size: 0x04
	struct UTexture2D* MaskTextureUsedByGrassClear; // Offset: 0x958 // Size: 0x08
	char pad_0x960[0x170]; // Offset: 0x960 // Size: 0x170

	// Functions

	// Object Name: Function Landscape.LandscapeProxy.SetLandScapeRenderMask
	// Flags: [Final|RequiredAPI|Native|Public|BlueprintCallable]
	void SetLandScapeRenderMask(IntProperty Index, bool bUseRenderMask, char RenderMask); // Offset: 0x10537c404 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Landscape.LandscapeProxy.EditorApplySpline
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, IntProperty NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Offset: 0x10537c120 // Return & Params: Num(11) Size(0x30)

	// Object Name: Function Landscape.LandscapeProxy.ChangeLODDistributionSettingConsoleVariable
	// Flags: [Native|Public|BlueprintCallable]
	void ChangeLODDistributionSettingConsoleVariable(); // Offset: 0x10537c104 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// Flags: [Native|Public|BlueprintCallable]
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Offset: 0x10537c080 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Landscape.LandscapeProxy.ChangeLOD0DistributionSettingConsoleVariable
	// Flags: [Native|Public|BlueprintCallable]
	void ChangeLOD0DistributionSettingConsoleVariable(); // Offset: 0x10537c064 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Landscape.LandscapeProxy.ChangebUseScreenSizeLOD
	// Flags: [Native|Public|BlueprintCallable]
	void ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD); // Offset: 0x10537bfd8 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Landscape.Landscape
// Size: 0xb70 // Inherited bytes: 0xad0
struct ALandscape : ALandscapeProxy {
	// Fields
	char pad_0xAD0[0xa0]; // Offset: 0xad0 // Size: 0xa0
};

// Object Name: Class Landscape.SimpleMeshComponent
// Size: 0xa50 // Inherited bytes: 0xa20
struct USimpleMeshComponent : UMeshComponent {
	// Fields
	struct TArray<struct FSimpleMeshSection> MeshSections; // Offset: 0xa20 // Size: 0x10
	struct FBoxSphereBounds LocalBounds; // Offset: 0xa30 // Size: 0x1c
	char pad_0xA4C[0x4]; // Offset: 0xa4c // Size: 0x04
};

// Object Name: Class Landscape.LandscapeComponent
// Size: 0xde0 // Inherited bytes: 0x9d0
struct ULandscapeComponent : UPrimitiveComponent {
	// Fields
	IntProperty SectionBaseX; // Offset: 0x9c8 // Size: 0x04
	IntProperty SectionBaseY; // Offset: 0x9cc // Size: 0x04
	IntProperty ComponentSizeQuads; // Offset: 0x9d0 // Size: 0x04
	IntProperty SubsectionSizeQuads; // Offset: 0x9d4 // Size: 0x04
	IntProperty NumSubsections; // Offset: 0x9d8 // Size: 0x04
	char bSubSectionRenderMaskComp : 1; // Offset: 0x9dc // Size: 0x01
	char SubSectionRenderMaskComp; // Offset: 0x9dd // Size: 0x01
	struct UMaterialInterface* OverrideMaterial; // Offset: 0x9e0 // Size: 0x08
	struct UMaterialInterface* OverrideHoleMaterial; // Offset: 0x9e8 // Size: 0x08
	MapProperty OverrideOtherMaterials; // Offset: 0x9f0 // Size: 0x50
	struct FOverridePhyxMaterial OverridePhyxMaterial; // Offset: 0xa40 // Size: 0x20
	char bOverrideGrassTypes : 1; // Offset: 0xa60 // Size: 0x01
	char pad_0xA65_2 : 6; // Offset: 0xa65 // Size: 0x01
	char pad_0xA66[0x2]; // Offset: 0xa66 // Size: 0x02
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // Offset: 0xa68 // Size: 0x10
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // Offset: 0xa78 // Size: 0x10
	MapProperty OtherMaterialInstances; // Offset: 0xa88 // Size: 0x50
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // Offset: 0xad8 // Size: 0x10
	struct TArray<struct UTexture2D*> WeightmapTextures; // Offset: 0xae8 // Size: 0x10
	IntProperty VisibilityLayerChannel; // Offset: 0xaf8 // Size: 0x04
	char pad_0xAFC[0x4]; // Offset: 0xafc // Size: 0x04
	struct UTexture2D* XYOffsetmapTexture; // Offset: 0xb00 // Size: 0x08
	char pad_0xB08[0x8]; // Offset: 0xb08 // Size: 0x08
	struct FVector4 WeightmapScaleBias; // Offset: 0xb10 // Size: 0x10
	float WeightmapSubsectionOffset; // Offset: 0xb20 // Size: 0x04
	char pad_0xB24[0xc]; // Offset: 0xb24 // Size: 0x0c
	struct FVector4 HeightmapScaleBias; // Offset: 0xb30 // Size: 0x10
	struct UTexture2D* HeightmapTexture; // Offset: 0xb40 // Size: 0x08
	MapProperty MultiVisibilityTextureData; // Offset: 0xb48 // Size: 0x50
	StrProperty VisibleVisibilityLayer; // Offset: 0xb98 // Size: 0x10
	struct FBox CachedLocalBox; // Offset: 0xba8 // Size: 0x1c
	char bUseCachedSectionLocalBoxs : 1; // Offset: 0xbc4 // Size: 0x01
	char pad_0xBC4_1 : 7; // Offset: 0xbc4 // Size: 0x01
	char pad_0xBC5[0x3]; // Offset: 0xbc5 // Size: 0x03
	struct TArray<float> CachedSectionLocalBoxsHeight; // Offset: 0xbc8 // Size: 0x10
	struct TLazyObjectPtr<struct ULandscapeHeightfieldCollisionComponent> CollisionComponent; // Offset: 0xbd8 // Size: 0x1c
	struct FGuid MapBuildDataId; // Offset: 0xbf4 // Size: 0x10
	char pad_0xC04[0x4]; // Offset: 0xc04 // Size: 0x04
	struct TArray<struct FGuid> IrrelevantLights; // Offset: 0xc08 // Size: 0x10
	IntProperty CollisionMipLevel; // Offset: 0xc18 // Size: 0x04
	IntProperty SimpleCollisionMipLevel; // Offset: 0xc1c // Size: 0x04
	float NegativeZBoundsExtension; // Offset: 0xc20 // Size: 0x04
	float PositiveZBoundsExtension; // Offset: 0xc24 // Size: 0x04
	float StaticLightingResolution; // Offset: 0xc28 // Size: 0x04
	IntProperty ForcedLOD; // Offset: 0xc2c // Size: 0x04
	IntProperty LODBias; // Offset: 0xc30 // Size: 0x04
	IntProperty MobileVertexHoleMaxLOD; // Offset: 0xc34 // Size: 0x04
	char pad_0xC38[0x10]; // Offset: 0xc38 // Size: 0x10
	struct TArray<float> LODDeltaVertex; // Offset: 0xc48 // Size: 0x10
	float MaxDeltaVertex; // Offset: 0xc58 // Size: 0x04
	struct FGuid stateID; // Offset: 0xc5c // Size: 0x10
	struct FGuid BakedTextureMaterialGuid; // Offset: 0xc6c // Size: 0x10
	char pad_0xC7C[0x4]; // Offset: 0xc7c // Size: 0x04
	struct UTexture2D* GIBakedBaseColorTexture; // Offset: 0xc80 // Size: 0x08
	StrProperty OccluderMeshDataPath; // Offset: 0xc88 // Size: 0x10
	char MobileBlendableLayerMask; // Offset: 0xc98 // Size: 0x01
	char pad_0xC99[0x7]; // Offset: 0xc99 // Size: 0x07
	struct UMaterialInterface* MobileMaterialInterface; // Offset: 0xca0 // Size: 0x08
	MapProperty OtherMobileMaterialInterfaces; // Offset: 0xca8 // Size: 0x50
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // Offset: 0xcf8 // Size: 0x10
	struct UTexture2D* MobileWeightNormalmapTexture; // Offset: 0xd08 // Size: 0x08
	char bMobileMultiLayers : 1; // Offset: 0xd10 // Size: 0x01
	char pad_0xD10_1 : 7; // Offset: 0xd10 // Size: 0x01
	char pad_0xD11[0x7]; // Offset: 0xd11 // Size: 0x07
	struct TArray<uint16_t> CachedHeightData; // Offset: 0xd18 // Size: 0x10
	bool bUseLandscapeVT; // Offset: 0xd28 // Size: 0x01
	bool bLandscapeVTNeedHeightmap; // Offset: 0xd29 // Size: 0x01
	char pad_0xD2A[0x76]; // Offset: 0xd2a // Size: 0x76
	bool bHasROCData; // Offset: 0xda0 // Size: 0x01
	char pad_0xDA1[0x1f]; // Offset: 0xda1 // Size: 0x1f
	struct FName UsedOtherMaterialName; // Offset: 0xdc0 // Size: 0x08
	char pad_0xDC8[0x18]; // Offset: 0xdc8 // Size: 0x18
};

// Object Name: Class Landscape.LandscapeGeometryAsset
// Size: 0x198 // Inherited bytes: 0x30
struct ULandscapeGeometryAsset : UDataAsset {
	// Fields
	struct TArray<struct FVector> Vertex; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FVector> Normals; // Offset: 0x40 // Size: 0x10
	struct TArray<struct FVector2D> UV; // Offset: 0x50 // Size: 0x10
	struct TArray<IntProperty> Indices; // Offset: 0x60 // Size: 0x10
	MapProperty ComponentIndexOffset; // Offset: 0x70 // Size: 0x50
	IntProperty ComponentIndexCount; // Offset: 0xc0 // Size: 0x04
	IntProperty ComponentVertexCount; // Offset: 0xc4 // Size: 0x04
	MapProperty SubLevelComponentMap; // Offset: 0xc8 // Size: 0x50
	struct UStaticMesh* HighQualityMesh; // Offset: 0x118 // Size: 0x28
	float HighQualityMeshDestroyHight; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	MapProperty ComponentVertexIndexOffset; // Offset: 0x148 // Size: 0x50
};

// Object Name: Class Landscape.LandscapeGizmoActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ALandscapeGizmoActor : AActor {
};

// Object Name: Class Landscape.LandscapeGizmoActiveActor
// Size: 0x500 // Inherited bytes: 0x4b0
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	// Fields
	char pad_0x4B0[0x50]; // Offset: 0x4b0 // Size: 0x50
};

// Object Name: Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9d0 // Inherited bytes: 0x9d0
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Object Name: Class Landscape.LandscapeGrassType
// Size: 0x58 // Inherited bytes: 0x28
struct ULandscapeGrassType : UObject {
	// Fields
	struct TArray<struct FGrassVariety> GrassVarieties; // Offset: 0x28 // Size: 0x10
	struct UStaticMesh* GrassMesh; // Offset: 0x38 // Size: 0x08
	float GrassDensity; // Offset: 0x40 // Size: 0x04
	float PlacementJitter; // Offset: 0x44 // Size: 0x04
	IntProperty StartCullDistance; // Offset: 0x48 // Size: 0x04
	IntProperty EndCullDistance; // Offset: 0x4c // Size: 0x04
	bool RandomRotation; // Offset: 0x50 // Size: 0x01
	bool AlignToSurface; // Offset: 0x51 // Size: 0x01
	char pad_0x52[0x6]; // Offset: 0x52 // Size: 0x06
};

// Object Name: Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xab0 // Inherited bytes: 0x9d0
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	// Fields
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // Offset: 0x9c8 // Size: 0x10
	IntProperty SectionBaseX; // Offset: 0x9d8 // Size: 0x04
	IntProperty SectionBaseY; // Offset: 0x9dc // Size: 0x04
	IntProperty CollisionSizeQuads; // Offset: 0x9e0 // Size: 0x04
	float CollisionScale; // Offset: 0x9e4 // Size: 0x04
	IntProperty SimpleCollisionSizeQuads; // Offset: 0x9e8 // Size: 0x04
	struct TArray<char> CollisionQuadFlags; // Offset: 0x9f0 // Size: 0x10
	struct FGuid HeightfieldGuid; // Offset: 0xa00 // Size: 0x10
	struct FBox CachedLocalBox; // Offset: 0xa10 // Size: 0x1c
	struct TLazyObjectPtr<struct ULandscapeComponent> RenderComponent; // Offset: 0xa2c // Size: 0x1c
	char pad_0xA4C[0xc]; // Offset: 0xa4c // Size: 0x0c
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // Offset: 0xa58 // Size: 0x10
	char pad_0xA68[0x48]; // Offset: 0xa68 // Size: 0x48
};

// Object Name: Class Landscape.IdeaGrassFieldFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UIdeaGrassFieldFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureTrample
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void IdeaGrassRenderForceTextureTrample(struct FIdeaGrassFieldData GrassFieldData); // Offset: 0x10537afb4 // Return & Params: Num(1) Size(0x90)

	// Object Name: Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureSkill
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void IdeaGrassRenderForceTextureSkill(struct FIdeaGrassFieldData GrassFieldData); // Offset: 0x10537aeb4 // Return & Params: Num(1) Size(0x90)

	// Object Name: Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureFade
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void IdeaGrassRenderForceTextureFade(struct FIdeaGrassFieldData GrassFieldData); // Offset: 0x10537adb4 // Return & Params: Num(1) Size(0x90)

	// Object Name: Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void IdeaGrassRenderForceTexture(struct FIdeaGrassFieldData GrassFieldData); // Offset: 0x10537acb4 // Return & Params: Num(1) Size(0x90)
};

// Object Name: Class Landscape.LandscapeInfo
// Size: 0x3f0 // Inherited bytes: 0x28
struct ULandscapeInfo : UObject {
	// Fields
	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // Offset: 0x28 // Size: 0x1c
	struct FGuid LandscapeGuid; // Offset: 0x44 // Size: 0x10
	IntProperty ComponentSizeQuads; // Offset: 0x54 // Size: 0x04
	IntProperty SubsectionSizeQuads; // Offset: 0x58 // Size: 0x04
	IntProperty ComponentNumSubsections; // Offset: 0x5c // Size: 0x04
	struct FVector DrawScale; // Offset: 0x60 // Size: 0x0c
	char pad_0x6C[0x244]; // Offset: 0x6c // Size: 0x244
	SetProperty Proxies; // Offset: 0x2b0 // Size: 0x50
	char pad_0x300[0xf0]; // Offset: 0x300 // Size: 0xf0
};

// Object Name: Class Landscape.LandscapeInfoMap
// Size: 0x80 // Inherited bytes: 0x28
struct ULandscapeInfoMap : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
};

// Object Name: Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 // Inherited bytes: 0x28
struct ULandscapeLayerInfoObject : UObject {
	// Fields
	struct FName LayerName; // Offset: 0x28 // Size: 0x08
	struct UPhysicalMaterial* PhysMaterial; // Offset: 0x30 // Size: 0x08
	float Hardness; // Offset: 0x38 // Size: 0x04
	struct FLinearColor LayerUsageDebugColor; // Offset: 0x3c // Size: 0x10
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x280 // Inherited bytes: 0x280
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	// Fields
	char bIsLayerThumbnail : 1; // Offset: 0x279 // Size: 0x01
	char bDisableTessellation : 1; // Offset: 0x279 // Size: 0x01
};

// Object Name: Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xac0 // Inherited bytes: 0xab0
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	// Fields
	struct FGuid MeshGuid; // Offset: 0xaa8 // Size: 0x10
};

// Object Name: Class Landscape.LandscapeMeshProxyActor
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ALandscapeMeshProxyActor : AActor {
	// Fields
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // Offset: 0x4b0 // Size: 0x08
};

// Object Name: Class Landscape.LandscapeMeshProxyComponent
// Size: 0xbf0 // Inherited bytes: 0xbd0
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	// Fields
	struct FGuid LandscapeGuid; // Offset: 0xbc8 // Size: 0x10
	struct TArray<struct FIntPoint> ProxyComponentBases; // Offset: 0xbd8 // Size: 0x10
	uint8_t ProxyLOD; // Offset: 0xbe8 // Size: 0x01
};

// Object Name: Class Landscape.LandscapeSplinesComponent
// Size: 0xa00 // Inherited bytes: 0x9d0
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	// Fields
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // Offset: 0x9c8 // Size: 0x10
	struct TArray<struct ULandscapeSplineSegment*> Segments; // Offset: 0x9d8 // Size: 0x10
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // Offset: 0x9e8 // Size: 0x10
};

// Object Name: Class Landscape.LandscapeSplineControlPoint
// Size: 0x98 // Inherited bytes: 0x28
struct ULandscapeSplineControlPoint : UObject {
	// Fields
	struct FVector Location; // Offset: 0x28 // Size: 0x0c
	struct FRotator Rotation; // Offset: 0x34 // Size: 0x0c
	float Width; // Offset: 0x40 // Size: 0x04
	float SideFalloff; // Offset: 0x44 // Size: 0x04
	float EndFalloff; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // Offset: 0x50 // Size: 0x10
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // Offset: 0x60 // Size: 0x10
	struct FBox Bounds; // Offset: 0x70 // Size: 0x1c
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct UControlPointMeshComponent* LocalMeshComponent; // Offset: 0x90 // Size: 0x08
};

// Object Name: Class Landscape.LandscapeSplineSegment
// Size: 0xb0 // Inherited bytes: 0x28
struct ULandscapeSplineSegment : UObject {
	// Fields
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // Offset: 0x28 // Size: 0x30
	struct FInterpCurveVector SplineInfo; // Offset: 0x58 // Size: 0x18
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // Offset: 0x70 // Size: 0x10
	struct FBox Bounds; // Offset: 0x80 // Size: 0x1c
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class Landscape.LandscapeStreamingProxy
// Size: 0xaf0 // Inherited bytes: 0xad0
struct ALandscapeStreamingProxy : ALandscapeProxy {
	// Fields
	struct TLazyObjectPtr<struct ALandscape> LandscapeActor; // Offset: 0xac8 // Size: 0x1c
	bool bLandscapeProxyUseSceenSizeLOD; // Offset: 0xae4 // Size: 0x01
	char pad_0xAED[0x3]; // Offset: 0xaed // Size: 0x03
};

// Object Name: Class Landscape.MaterialExpressionLandscapeFlattenCoords
// Size: 0x98 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeFlattenCoords : UMaterialExpression {
	// Fields
	struct FExpressionInput UVScaleBias; // Offset: 0x60 // Size: 0x38
};

// Object Name: Class Landscape.MaterialExpressionLandscapeFlattenTexture
// Size: 0x98 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeFlattenTexture : UMaterialExpression {
	// Fields
	struct FExpressionInput Coordinates; // Offset: 0x60 // Size: 0x38
};

// Object Name: Class Landscape.MaterialExpressionLandscapeFlattenBaseColor
// Size: 0x98 // Inherited bytes: 0x98
struct UMaterialExpressionLandscapeFlattenBaseColor : UMaterialExpressionLandscapeFlattenTexture {
};

// Object Name: Class Landscape.MaterialExpressionLandscapeFlattenNormal
// Size: 0x98 // Inherited bytes: 0x98
struct UMaterialExpressionLandscapeFlattenNormal : UMaterialExpressionLandscapeFlattenTexture {
};

// Object Name: Class Landscape.MaterialExpressionLandscapeFlattenRSM
// Size: 0x98 // Inherited bytes: 0x98
struct UMaterialExpressionLandscapeFlattenRSM : UMaterialExpressionLandscapeFlattenTexture {
};

// Object Name: Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x70 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	// Fields
	struct TArray<struct FGrassInput> GrassTypes; // Offset: 0x60 // Size: 0x10
};

// Object Name: Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x80 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	// Fields
	struct TArray<struct FLayerBlendInput> Layers; // Offset: 0x60 // Size: 0x10
	struct FGuid ExpressionGUID; // Offset: 0x70 // Size: 0x10
};

// Object Name: Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0xb0 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	// Fields
	enum class ETerrainCoordMappingType MappingType; // Offset: 0x60 // Size: 0x01
	enum class ELandscapeCustomizedCoordType CustomUVType; // Offset: 0x61 // Size: 0x01
	char pad_0x62[0x6]; // Offset: 0x62 // Size: 0x06
	struct FExpressionInput MappingScaleOverride; // Offset: 0x68 // Size: 0x38
	float MappingScale; // Offset: 0xa0 // Size: 0x04
	float MappingRotation; // Offset: 0xa4 // Size: 0x04
	float MappingPanU; // Offset: 0xa8 // Size: 0x04
	float MappingPanV; // Offset: 0xac // Size: 0x04
};

// Object Name: Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x80 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	// Fields
	struct FName ParameterName; // Offset: 0x60 // Size: 0x08
	float PreviewWeight; // Offset: 0x68 // Size: 0x04
	struct FGuid ExpressionGUID; // Offset: 0x6c // Size: 0x10
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04
};

// Object Name: Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf0 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	// Fields
	struct FExpressionInput LayerUsed; // Offset: 0x60 // Size: 0x38
	struct FExpressionInput LayerNotUsed; // Offset: 0x98 // Size: 0x38
	struct FName ParameterName; // Offset: 0xd0 // Size: 0x08
	char PreviewUsed : 1; // Offset: 0xd8 // Size: 0x01
	char pad_0xD8_1 : 7; // Offset: 0xd8 // Size: 0x01
	char pad_0xD9[0x3]; // Offset: 0xd9 // Size: 0x03
	struct FGuid ExpressionGUID; // Offset: 0xdc // Size: 0x10
	char pad_0xEC[0x4]; // Offset: 0xec // Size: 0x04
};

// Object Name: Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xf8 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	// Fields
	struct FExpressionInput Base; // Offset: 0x60 // Size: 0x38
	struct FExpressionInput Layer; // Offset: 0x98 // Size: 0x38
	struct FName ParameterName; // Offset: 0xd0 // Size: 0x08
	float PreviewWeight; // Offset: 0xd8 // Size: 0x04
	struct FVector ConstBase; // Offset: 0xdc // Size: 0x0c
	struct FGuid ExpressionGUID; // Offset: 0xe8 // Size: 0x10
};

// Object Name: Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x70 // Inherited bytes: 0x60
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	// Fields
	struct FGuid ExpressionGUID; // Offset: 0x60 // Size: 0x10
};

