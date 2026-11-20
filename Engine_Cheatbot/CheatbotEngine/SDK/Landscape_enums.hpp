#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Object Name: Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Object Name: Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Object Name: Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Object Name: Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Object Name: Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Object Name: Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Object Name: Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Object Name: Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Object Name: Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Object Name: Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

