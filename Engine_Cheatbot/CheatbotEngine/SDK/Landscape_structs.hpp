#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Landscape.LandscapeColorMask
// Size: 0x01 // Inherited bytes: 0x00
struct FLandscapeColorMask {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.LandscapeColorMaskLayer
// Size: 0x01 // Inherited bytes: 0x00
struct FLandscapeColorMaskLayer {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.OverridePhyxMaterial
// Size: 0x20 // Inherited bytes: 0x00
struct FOverridePhyxMaterial {
	// Fields
	struct TArray<struct UPhysicalMaterial*> OriginalPhysxMaterial; // Offset: 0x00 // Size: 0x10
	struct TArray<struct UPhysicalMaterial*> OverridePhysxMaterial; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FWeightmapLayerAllocationInfo {
	// Fields
	struct ULandscapeLayerInfoObject* LayerInfo; // Offset: 0x00 // Size: 0x08
	char WeightmapTextureIndex; // Offset: 0x08 // Size: 0x01
	char WeightmapTextureChannel; // Offset: 0x09 // Size: 0x01
	char pad_0xA[0x6]; // Offset: 0x0a // Size: 0x06
};

// Object Name: ScriptStruct Landscape.VisibilityData
// Size: 0x10 // Inherited bytes: 0x00
struct FVisibilityData {
	// Fields
	struct TArray<char> VisibilityData; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x30 // Inherited bytes: 0x00
struct FLandscapeEditToolRenderData {
	// Fields
	struct UMaterialInterface* ToolMaterial; // Offset: 0x00 // Size: 0x08
	struct UMaterialInterface* GizmoMaterial; // Offset: 0x08 // Size: 0x08
	IntProperty SelectedType; // Offset: 0x10 // Size: 0x04
	IntProperty DebugChannelR; // Offset: 0x14 // Size: 0x04
	IntProperty DebugChannelG; // Offset: 0x18 // Size: 0x04
	IntProperty DebugChannelB; // Offset: 0x1c // Size: 0x04
	IntProperty DebugChannelA; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct UTexture2D* DataTexture; // Offset: 0x28 // Size: 0x08
};

// Object Name: ScriptStruct Landscape.SimpleMeshSection
// Size: 0x40 // Inherited bytes: 0x00
struct FSimpleMeshSection {
	// Fields
	struct TArray<struct FSimpleMeshVertex> VertexBuffer; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> IndexBuffer; // Offset: 0x10 // Size: 0x10
	struct FBox BoundingBox; // Offset: 0x20 // Size: 0x1c
	bool Visible; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
};

// Object Name: ScriptStruct Landscape.SimpleMeshVertex
// Size: 0x34 // Inherited bytes: 0x00
struct FSimpleMeshVertex {
	// Fields
	struct FVector Position; // Offset: 0x00 // Size: 0x0c
	struct FVector Normal; // Offset: 0x0c // Size: 0x0c
	struct FSimpleMeshTangent Tangent; // Offset: 0x18 // Size: 0x10
	struct FColor Color; // Offset: 0x28 // Size: 0x04
	struct FVector2D UV0; // Offset: 0x2c // Size: 0x08
};

// Object Name: ScriptStruct Landscape.SimpleMeshTangent
// Size: 0x10 // Inherited bytes: 0x00
struct FSimpleMeshTangent {
	// Fields
	struct FVector TangentX; // Offset: 0x00 // Size: 0x0c
	bool bFlipTangentY; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
};

// Object Name: ScriptStruct Landscape.LevelComponentMapValue
// Size: 0x150 // Inherited bytes: 0x00
struct FLevelComponentMapValue {
	// Fields
	StrProperty Name; // Offset: 0x00 // Size: 0x10
	struct TArray<IntProperty> IndexOffsetArray; // Offset: 0x10 // Size: 0x10
	struct TArray<IntProperty> IndexCountArray; // Offset: 0x20 // Size: 0x10
	struct TArray<IntProperty> VertexOffsetIndex; // Offset: 0x30 // Size: 0x10
	struct TArray<IntProperty> BorderIndex1; // Offset: 0x40 // Size: 0x10
	struct TArray<IntProperty> BorderIndex2; // Offset: 0x50 // Size: 0x10
	struct TArray<IntProperty> BorderIndex3; // Offset: 0x60 // Size: 0x10
	struct TArray<IntProperty> BorderIndex4; // Offset: 0x70 // Size: 0x10
	struct TArray<IntProperty> UnderBorderIndex1; // Offset: 0x80 // Size: 0x10
	struct TArray<IntProperty> UnderBorderIndex2; // Offset: 0x90 // Size: 0x10
	struct TArray<IntProperty> UnderBorderIndex3; // Offset: 0xa0 // Size: 0x10
	struct TArray<IntProperty> UnderBorderIndex4; // Offset: 0xb0 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer1; // Offset: 0xc0 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer2; // Offset: 0xd0 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer3; // Offset: 0xe0 // Size: 0x10
	struct TArray<IntProperty> BorderIndicesBuffer4; // Offset: 0xf0 // Size: 0x10
	StrProperty Sibling1Name; // Offset: 0x100 // Size: 0x10
	StrProperty Sibling2Name; // Offset: 0x110 // Size: 0x10
	StrProperty Sibling3Name; // Offset: 0x120 // Size: 0x10
	StrProperty Sibling4Name; // Offset: 0x130 // Size: 0x10
	IntProperty Sibling1Idx; // Offset: 0x140 // Size: 0x04
	IntProperty Sibling2Idx; // Offset: 0x144 // Size: 0x04
	IntProperty Sibling3Idx; // Offset: 0x148 // Size: 0x04
	IntProperty Sibling4Idx; // Offset: 0x14c // Size: 0x04
};

// Object Name: ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 // Inherited bytes: 0x00
struct FGizmoSelectData {
	// Fields
	char pad_0x0[0x50]; // Offset: 0x00 // Size: 0x50
};

// Object Name: ScriptStruct Landscape.GrassVariety
// Size: 0x48 // Inherited bytes: 0x00
struct FGrassVariety {
	// Fields
	struct UStaticMesh* GrassMesh; // Offset: 0x00 // Size: 0x08
	float GrassDensity; // Offset: 0x08 // Size: 0x04
	bool bUseGrid; // Offset: 0x0c // Size: 0x01
	char pad_0xD[0x3]; // Offset: 0x0d // Size: 0x03
	float PlacementJitter; // Offset: 0x10 // Size: 0x04
	IntProperty StartCullDistance; // Offset: 0x14 // Size: 0x04
	IntProperty EndCullDistance; // Offset: 0x18 // Size: 0x04
	IntProperty MinLOD; // Offset: 0x1c // Size: 0x04
	enum class EGrassScaling Scaling; // Offset: 0x20 // Size: 0x01
	char pad_0x21[0x3]; // Offset: 0x21 // Size: 0x03
	struct FFloatInterval ScaleX; // Offset: 0x24 // Size: 0x08
	struct FFloatInterval ScaleY; // Offset: 0x2c // Size: 0x08
	struct FFloatInterval ScaleZ; // Offset: 0x34 // Size: 0x08
	bool RandomRotation; // Offset: 0x3c // Size: 0x01
	bool AlignToSurface; // Offset: 0x3d // Size: 0x01
	bool bUseLandscapeLightmap; // Offset: 0x3e // Size: 0x01
	struct FLightingChannels LightingChannels; // Offset: 0x3f // Size: 0x01
	bool bReceivesDecals; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x7]; // Offset: 0x41 // Size: 0x07
};

// Object Name: ScriptStruct Landscape.IdeaGrassFieldData
// Size: 0x90 // Inherited bytes: 0x00
struct FIdeaGrassFieldData {
	// Fields
	struct UTextureRenderTarget2D* ForceTextureRT; // Offset: 0x00 // Size: 0x08
	struct TArray<struct FVector> TramplerPositionList; // Offset: 0x08 // Size: 0x10
	struct TArray<struct FRotator> TramplerDirectionList; // Offset: 0x18 // Size: 0x10
	struct TArray<float> TramplerCutoff; // Offset: 0x28 // Size: 0x10
	struct UTexture* TrampleTexture; // Offset: 0x38 // Size: 0x08
	float TrampleScale; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	struct UTexture* SkillTexture; // Offset: 0x48 // Size: 0x08
	struct TArray<float> CleanTextureScale; // Offset: 0x50 // Size: 0x10
	float GrassSpringness; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0xc]; // Offset: 0x64 // Size: 0x0c
	struct FVector4 GrassFieldRect; // Offset: 0x70 // Size: 0x10
	char FeatureLevel; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0xf]; // Offset: 0x81 // Size: 0x0f
};

// Object Name: ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 // Inherited bytes: 0x00
struct FLandscapeInfoLayerSettings {
	// Fields
	struct ULandscapeLayerInfoObject* LayerInfoObj; // Offset: 0x00 // Size: 0x08
	struct FName LayerName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 // Inherited bytes: 0x00
struct FLandscapeImportLayerInfo {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 // Inherited bytes: 0x00
struct FLandscapeLayerStruct {
	// Fields
	struct ULandscapeLayerInfoObject* LayerInfoObj; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 // Inherited bytes: 0x00
struct FLandscapeEditorLayerSettings {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.LandscapeWeightmapUsage
// Size: 0x20 // Inherited bytes: 0x00
struct FLandscapeWeightmapUsage {
	// Fields
	struct ULandscapeComponent* ChannelUsage[0x4]; // Offset: 0x00 // Size: 0x20
};

// Object Name: ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 // Inherited bytes: 0x00
struct FLandscapeSplineConnection {
	// Fields
	struct ULandscapeSplineSegment* Segment; // Offset: 0x00 // Size: 0x08
	char End : 1; // Offset: 0x08 // Size: 0x01
	char pad_0x8_1 : 7; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
};

// Object Name: ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 // Inherited bytes: 0x00
struct FForeignWorldSplineData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 // Inherited bytes: 0x00
struct FForeignSplineSegmentData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 // Inherited bytes: 0x00
struct FForeignControlPointData {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 // Inherited bytes: 0x00
struct FLandscapeSplineMeshEntry {
	// Fields
	struct UStaticMesh* Mesh; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // Offset: 0x08 // Size: 0x10
	char bCenterH : 1; // Offset: 0x18 // Size: 0x01
	char pad_0x18_1 : 7; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	struct FVector2D CenterAdjust; // Offset: 0x1c // Size: 0x08
	char bScaleToWidth : 1; // Offset: 0x24 // Size: 0x01
	char pad_0x24_1 : 7; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
	struct FVector Scale; // Offset: 0x28 // Size: 0x0c
	enum class LandscapeSplineMeshOrientation Orientation; // Offset: 0x34 // Size: 0x01
	enum class ESplineMeshAxis ForwardAxis; // Offset: 0x35 // Size: 0x01
	enum class ESplineMeshAxis UpAxis; // Offset: 0x36 // Size: 0x01
	char pad_0x37[0x1]; // Offset: 0x37 // Size: 0x01
};

// Object Name: ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 // Inherited bytes: 0x00
struct FLandscapeSplineSegmentConnection {
	// Fields
	struct ULandscapeSplineControlPoint* ControlPoint; // Offset: 0x00 // Size: 0x08
	float TangentLen; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct FName SocketName; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x40 // Inherited bytes: 0x00
struct FLandscapeSplineInterpPoint {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	struct FVector Left; // Offset: 0x0c // Size: 0x0c
	struct FVector Right; // Offset: 0x18 // Size: 0x0c
	struct FVector FalloffLeft; // Offset: 0x24 // Size: 0x0c
	struct FVector FalloffRight; // Offset: 0x30 // Size: 0x0c
	float StartEndFalloff; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Landscape.GrassInput
// Size: 0x48 // Inherited bytes: 0x00
struct FGrassInput {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
	struct ULandscapeGrassType* GrassType; // Offset: 0x08 // Size: 0x08
	struct FExpressionInput Input; // Offset: 0x10 // Size: 0x38
};

// Object Name: ScriptStruct Landscape.LayerBlendInput
// Size: 0x98 // Inherited bytes: 0x00
struct FLayerBlendInput {
	// Fields
	struct FName LayerName; // Offset: 0x00 // Size: 0x08
	enum class ELandscapeLayerBlendType BlendType; // Offset: 0x08 // Size: 0x01
	char pad_0x9[0x7]; // Offset: 0x09 // Size: 0x07
	struct FExpressionInput LayerInput; // Offset: 0x10 // Size: 0x38
	struct FExpressionInput HeightInput; // Offset: 0x48 // Size: 0x38
	float PreviewWeight; // Offset: 0x80 // Size: 0x04
	struct FVector ConstLayerInput; // Offset: 0x84 // Size: 0x0c
	float ConstHeightInput; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
};

