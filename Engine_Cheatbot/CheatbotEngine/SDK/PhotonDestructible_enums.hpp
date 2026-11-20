#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum PhotonDestructible.EFracturedMeshConnectionType
enum class EFracturedMeshConnectionType : uint8 {
	FracturedMeshConnType_None = 0,
	FracturedMeshConnType_Indestructible = 1,
	FracturedMeshConnType_Border = 2,
	FracturedMeshConnType_IndestructibleAndBorder = 3,
	FracturedMeshConnType_MAX = 4
};

// Object Name: Enum PhotonDestructible.EFracturedImpactEffType
enum class EFracturedImpactEffType : uint8 {
	FracturedImpactEffType_Normal = 0,
	FracturedImpactEffType_SpreadOut = 1,
	FracturedImpactEffType_MAX = 2
};

// Object Name: Enum PhotonDestructible.EFracturedMeshDestructibleAction
enum class EFracturedMeshDestructibleAction : uint8 {
	FracturedDAction_Hide = 0,
	FracturedDAction_Detach = 1,
	FracturedDAction_MAX = 2
};

// Object Name: Enum PhotonDestructible.EPhotonDestructibleSurfaceHitType
enum class EPhotonDestructibleSurfaceHitType : uint8 {
	PDSurfaceHit_Circle = 0,
	PDSurfaceHit_Texture = 1,
	PDSurfaceHit_MAX = 2
};

// Object Name: Enum PhotonDestructible.EFracturedAxis
enum class EFracturedAxis : uint8 {
	FracturedAxis_X = 0,
	FracturedAxis_Y = 1,
	FracturedAxis_Z = 2,
	FracturedAxis_NX = 3,
	FracturedAxis_NY = 4,
	FracturedAxis_NZ = 5,
	FracturedAxis_MAX = 6
};

