#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum BuildSystem.EBuildingActionType
enum class EBuildingActionType : uint8 {
	EBA_PreBuild = 0,
	EBA_BuildAtScreenPos = 1,
	EBA_DoubleClickBuild = 2,
	EBA_CustomEventBuild = 3,
	EBA_INTERNAL_SERVER_CHECK_TYPE = 99,
	EBA_Max = 100
};

// Object Name: Enum BuildSystem.EBuildingActorConstructingMode
enum class EBuildingActorConstructingMode : uint8 {
	EBCM_SNAP_TO_GROUND = 0,
	EBCM_SNAP_EVERYWHERE = 1,
	EBCM_SNAP_MAX = 2
};

// Object Name: Enum BuildSystem.EBuildingViewType
enum class EBuildingViewType : uint8 {
	EBVT_Invalid = 0,
	EBVT_UseController = 1,
	EBVT_UseCamera = 2,
	EBVT_UseCharacter = 3,
	EBVT_Max = 4
};

// Object Name: Enum BuildSystem.EBuildingType
enum class EBuildingType : uint8 {
	EBuilding_Wall = 0,
	EBuilding_Stairs = 1,
	EBuilding_Prop = 2,
	EBuilding_Max = 3
};

