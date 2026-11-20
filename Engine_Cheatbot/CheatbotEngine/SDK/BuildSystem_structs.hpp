#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct BuildSystem.BuildingActorDSBuildCheck
// Size: 0x18 // Inherited bytes: 0x00
struct FBuildingActorDSBuildCheck {
	// Fields
	struct TArray<struct FBuildingActorDSBuildCheckData> DSCheckCfg; // Offset: 0x00 // Size: 0x10
	enum class ECollisionChannel CheckChannel; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

// Object Name: ScriptStruct BuildSystem.BuildingActorDSBuildCheckData
// Size: 0x18 // Inherited bytes: 0x00
struct FBuildingActorDSBuildCheckData {
	// Fields
	struct FVector BuilderOffset; // Offset: 0x00 // Size: 0x0c
	struct FVector BuildingActorOffset; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct BuildSystem.BuildingActorWorldSnapSetup
// Size: 0x24 // Inherited bytes: 0x00
struct FBuildingActorWorldSnapSetup {
	// Fields
	struct FVector GridSizeScale; // Offset: 0x00 // Size: 0x0c
	struct FVector Pivot; // Offset: 0x0c // Size: 0x0c
	struct FRotator SnapRotation; // Offset: 0x18 // Size: 0x0c
};

// Object Name: ScriptStruct BuildSystem.BuildingActorDensityCheck
// Size: 0x20 // Inherited bytes: 0x00
struct FBuildingActorDensityCheck {
	// Fields
	bool bDoCheck; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector Location; // Offset: 0x04 // Size: 0x0c
	StrProperty LuaModPath; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct BuildSystem.SnapGridData
// Size: 0x50 // Inherited bytes: 0x00
struct FSnapGridData {
	// Fields
	struct FTransform GridTransform; // Offset: 0x00 // Size: 0x30
	struct FVector Extent; // Offset: 0x30 // Size: 0x0c
	char pad_0x3C[0x14]; // Offset: 0x3c // Size: 0x14
};

// Object Name: ScriptStruct BuildSystem.BuildingActorInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FBuildingActorInfo {
	// Fields
	struct TWeakObjectPtr<struct ABuildingActorBase> BuildingActor; // Offset: 0x00 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> OwnerActor; // Offset: 0x08 // Size: 0x08
	IntProperty BuildID; // Offset: 0x10 // Size: 0x04
	float SpawnedTime; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct BuildSystem.BuildingData
// Size: 0x48 // Inherited bytes: 0x00
struct FBuildingData {
	// Fields
	IntProperty BuildingID; // Offset: 0x00 // Size: 0x04
	enum class EBuildingType BuildingType; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	struct FSoftObjectPath BuildingActorClassPath; // Offset: 0x08 // Size: 0x18
	struct TArray<enum class ECollisionChannel> BlockingChannels; // Offset: 0x20 // Size: 0x10
	float MaxBuildDist; // Offset: 0x30 // Size: 0x04
	float CDInterval; // Offset: 0x34 // Size: 0x04
	IntProperty MaxBuildCount; // Offset: 0x38 // Size: 0x04
	bool bAutoRefreshCD; // Offset: 0x3c // Size: 0x01
	char pad_0x3D[0x3]; // Offset: 0x3d // Size: 0x03
	IntProperty GroupBuildingIdForMaxBuild; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct BuildSystem.BSRotatedBox
// Size: 0xa0 // Inherited bytes: 0x00
struct FBSRotatedBox {
	// Fields
	char pad_0x0[0xa0]; // Offset: 0x00 // Size: 0xa0
};

// Object Name: ScriptStruct BuildSystem.BuildingTouchInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FBuildingTouchInfo {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct BuildSystem.QuadTracingData
// Size: 0x18 // Inherited bytes: 0x00
struct FQuadTracingData {
	// Fields
	char pad_0x0[0x18]; // Offset: 0x00 // Size: 0x18
};

// Object Name: ScriptStruct BuildSystem.WorldGridData
// Size: 0x0c // Inherited bytes: 0x00
struct FWorldGridData {
	// Fields
	struct FVector GridSize; // Offset: 0x00 // Size: 0x0c
};

