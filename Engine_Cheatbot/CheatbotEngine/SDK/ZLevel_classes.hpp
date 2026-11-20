#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ZLevel.ZLevelData
// Size: 0x5a0 // Inherited bytes: 0x4b0
struct AZLevelData : AActor {
	// Fields
	struct FGameLevelDesc LevelDesc; // Offset: 0x4b0 // Size: 0x18
	struct TArray<StrProperty> TargetClassPaths; // Offset: 0x4c8 // Size: 0x10
	StrProperty LeveDirectorFilePath; // Offset: 0x4d8 // Size: 0x10
	enum class ELevelEndCondType EndCondType; // Offset: 0x4e8 // Size: 0x01
	char pad_0x4E9[0x7]; // Offset: 0x4e9 // Size: 0x07
	StrProperty EndCondPar; // Offset: 0x4f0 // Size: 0x10
	bool IsLastLevel; // Offset: 0x500 // Size: 0x01
	char pad_0x501[0x3]; // Offset: 0x501 // Size: 0x03
	IntProperty DiffcultPerc; // Offset: 0x504 // Size: 0x04
	struct TArray<struct UZPVECircle*> PVECircleConfigs; // Offset: 0x508 // Size: 0x10
	struct TArray<struct UZPVERelifePoint*> PVERelifePoints; // Offset: 0x518 // Size: 0x10
	struct TArray<struct UZMonsterSpotGroup*> MonsterSpotGroups; // Offset: 0x528 // Size: 0x10
	struct TArray<struct FVector> TaskPointLocations; // Offset: 0x538 // Size: 0x10
	struct TArray<struct FRelifePoint> PVERelifePointsInfo; // Offset: 0x548 // Size: 0x10
	struct TArray<struct FPVECircle> PVECircleInfo; // Offset: 0x558 // Size: 0x10
	struct TArray<struct FMonsterWave> MonsterWaveCfg; // Offset: 0x568 // Size: 0x10
	struct TArray<struct FLevelData> CfgList; // Offset: 0x578 // Size: 0x10
	struct TArray<struct FLevelObjets> LevelAddObjs; // Offset: 0x588 // Size: 0x10
	IntProperty CurComponentNameIndex; // Offset: 0x598 // Size: 0x04
	char pad_0x59C[0x4]; // Offset: 0x59c // Size: 0x04

	// Functions

	// Object Name: Function ZLevel.ZLevelData.ReBindLevelDataComponent
	// Flags: [Final|Native|Public]
	void ReBindLevelDataComponent(); // Offset: 0x106161b08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ZLevel.ZLevelData.CheckMonsterSpotIsOnLand
	// Flags: [Final|Native|Public]
	void CheckMonsterSpotIsOnLand(struct UZMonsterSpot* MonsterSpot, struct UZMonsterSpotGroup* SpotGroup); // Offset: 0x106161a54 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class ZLevel.ZSpotSceneComponent
// Size: 0x3a0 // Inherited bytes: 0x3a0
struct UZSpotSceneComponent : USceneComponent {
};

// Object Name: Class ZLevel.ZMonsterRoadPoint
// Size: 0x3b0 // Inherited bytes: 0x3a0
struct UZMonsterRoadPoint : UZSpotSceneComponent {
	// Fields
	IntProperty ID; // Offset: 0x39c // Size: 0x04
	IntProperty Radius; // Offset: 0x3a0 // Size: 0x04
	char pad_0x3A8[0x8]; // Offset: 0x3a8 // Size: 0x08
};

// Object Name: Class ZLevel.ZMonsterSpot
// Size: 0x3d0 // Inherited bytes: 0x3a0
struct UZMonsterSpot : UZSpotSceneComponent {
	// Fields
	StrProperty Desc; // Offset: 0x3a0 // Size: 0x10
	char MonsterSpotType; // Offset: 0x3b0 // Size: 0x01
	char pad_0x3B1[0x7]; // Offset: 0x3b1 // Size: 0x07
	struct TArray<struct UZMonsterRoadPoint*> RoadPointList; // Offset: 0x3b8 // Size: 0x10
	char SpotRadius; // Offset: 0x3c8 // Size: 0x01
	char pad_0x3C9[0x7]; // Offset: 0x3c9 // Size: 0x07
};

// Object Name: Class ZLevel.ZMonsterSpotGroup
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UZMonsterSpotGroup : USceneComponent {
	// Fields
	StrProperty Desc; // Offset: 0x3a0 // Size: 0x10
	struct TArray<struct UZMonsterSpot*> SpotList; // Offset: 0x3b0 // Size: 0x10
};

// Object Name: Class ZLevel.ZPVECircle
// Size: 0x3c0 // Inherited bytes: 0x3a0
struct UZPVECircle : UZSpotSceneComponent {
	// Fields
	IntProperty CircleID; // Offset: 0x39c // Size: 0x04
	struct FVector2D targetPos; // Offset: 0x3a0 // Size: 0x08
	float Radius; // Offset: 0x3a8 // Size: 0x04
	float MoveTime; // Offset: 0x3ac // Size: 0x04
	float Pain; // Offset: 0x3b0 // Size: 0x04
	char pad_0x3B8[0x8]; // Offset: 0x3b8 // Size: 0x08
};

// Object Name: Class ZLevel.ZPVERelifePoint
// Size: 0x3b0 // Inherited bytes: 0x3a0
struct UZPVERelifePoint : UZSpotSceneComponent {
	// Fields
	IntProperty ID; // Offset: 0x39c // Size: 0x04
	bool IsActivePoint; // Offset: 0x3a0 // Size: 0x01
	char pad_0x3A5[0xb]; // Offset: 0x3a5 // Size: 0x0b
};

