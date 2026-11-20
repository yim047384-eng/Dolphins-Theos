#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ZLevel.RoadPointInfo
// Size: 0x14 // Inherited bytes: 0x00
struct FRoadPointInfo {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	IntProperty Radius; // Offset: 0x04 // Size: 0x04
	struct FVector pos; // Offset: 0x08 // Size: 0x0c
};

// Object Name: ScriptStruct ZLevel.GameLevelDesc
// Size: 0x18 // Inherited bytes: 0x00
struct FGameLevelDesc {
	// Fields
	IntProperty ChapterID; // Offset: 0x00 // Size: 0x04
	IntProperty LevelID; // Offset: 0x04 // Size: 0x04
	StrProperty Desc; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct ZLevel.LevelData
// Size: 0xb8 // Inherited bytes: 0x00
struct FLevelData {
	// Fields
	struct FGameLevelDesc LevelDesc; // Offset: 0x00 // Size: 0x18
	struct TArray<StrProperty> TargetClassPaths; // Offset: 0x18 // Size: 0x10
	StrProperty LeveDirectorFilePath; // Offset: 0x28 // Size: 0x10
	enum class ELevelEndCondType EndCondType; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	StrProperty EndCondPar; // Offset: 0x40 // Size: 0x10
	bool IsLastLevel; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x3]; // Offset: 0x51 // Size: 0x03
	IntProperty DiffcultPerc; // Offset: 0x54 // Size: 0x04
	struct TArray<struct FVector> TaskPointLocations; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FRelifePoint> PVERelifePointsInfo; // Offset: 0x68 // Size: 0x10
	struct TArray<struct FPVECircle> PVECircleInfo; // Offset: 0x78 // Size: 0x10
	struct TArray<struct FMonsterWave> MonsterWaveCfg; // Offset: 0x88 // Size: 0x10
	struct FVector pos; // Offset: 0x98 // Size: 0x0c
	char pad_0xA4[0x4]; // Offset: 0xa4 // Size: 0x04
	struct TArray<struct FLevelObjets> LevelAddObjs; // Offset: 0xa8 // Size: 0x10
};

// Object Name: ScriptStruct ZLevel.LevelObjets
// Size: 0x40 // Inherited bytes: 0x00
struct FLevelObjets {
	// Fields
	struct UObject* Objects; // Offset: 0x00 // Size: 0x08
	char pad_0x8[0x8]; // Offset: 0x08 // Size: 0x08
	struct FTransform Trans; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct ZLevel.MonsterWave
// Size: 0x38 // Inherited bytes: 0x00
struct FMonsterWave {
	// Fields
	float WaveDelayTime; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	struct TArray<struct FMonsterGroup> MonsterGroupList; // Offset: 0x08 // Size: 0x10
	StrProperty Desc; // Offset: 0x18 // Size: 0x10
	enum class EMonsterWaveEndCondType EndCondType; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	IntProperty EndCondPar; // Offset: 0x2c // Size: 0x04
	IntProperty ID; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ZLevel.MonsterGroup
// Size: 0x50 // Inherited bytes: 0x00
struct FMonsterGroup {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	enum class EGenerateType ChooseGroupSpotType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty NearPlayTeamIdx; // Offset: 0x14 // Size: 0x04
	struct TArray<struct UZMonsterSpotGroup*> SpotGroupChooseList; // Offset: 0x18 // Size: 0x10
	struct TArray<struct FMonsterSpotGroup> MonsterSpotGroupChooseList; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FMonsterGeneratePlan> PlanList; // Offset: 0x38 // Size: 0x10
	IntProperty ID; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x4]; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct ZLevel.MonsterGeneratePlan
// Size: 0x30 // Inherited bytes: 0x00
struct FMonsterGeneratePlan {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	IntProperty PlanWeight; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
	struct TArray<struct FMonsterGenerateCfg> PlanDetail; // Offset: 0x18 // Size: 0x10
	IntProperty ID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct ZLevel.MonsterGenerateCfg
// Size: 0x38 // Inherited bytes: 0x00
struct FMonsterGenerateCfg {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0x4]; // Offset: 0x04 // Size: 0x04
	StrProperty Desc; // Offset: 0x08 // Size: 0x10
	char SpotType; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
	IntProperty MonsterNum; // Offset: 0x1c // Size: 0x04
	float RandomGenerateDelayTime; // Offset: 0x20 // Size: 0x04
	IntProperty ReBornTimes; // Offset: 0x24 // Size: 0x04
	IntProperty RebornDelay; // Offset: 0x28 // Size: 0x04
	float GenerateDelayTime; // Offset: 0x2c // Size: 0x04
	IntProperty ID; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct ZLevel.MonsterSpotGroup
// Size: 0x30 // Inherited bytes: 0x00
struct FMonsterSpotGroup {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	struct FVector pos; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct TArray<struct FMonsterSpot> SpotList; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct ZLevel.MonsterSpot
// Size: 0x38 // Inherited bytes: 0x00
struct FMonsterSpot {
	// Fields
	StrProperty Desc; // Offset: 0x00 // Size: 0x10
	char MonsterSpotType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	struct FVector pos; // Offset: 0x14 // Size: 0x0c
	struct TArray<struct FRoadPointInfo> RoadPointList; // Offset: 0x20 // Size: 0x10
	char SpotRadius; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: ScriptStruct ZLevel.PVECircle
// Size: 0x18 // Inherited bytes: 0x00
struct FPVECircle {
	// Fields
	IntProperty CircleID; // Offset: 0x00 // Size: 0x04
	struct FVector2D targetPos; // Offset: 0x04 // Size: 0x08
	float Radius; // Offset: 0x0c // Size: 0x04
	float MoveTime; // Offset: 0x10 // Size: 0x04
	float Pain; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct ZLevel.RelifePoint
// Size: 0x40 // Inherited bytes: 0x00
struct FRelifePoint {
	// Fields
	IntProperty ID; // Offset: 0x00 // Size: 0x04
	bool IsActivePoint; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0xb]; // Offset: 0x05 // Size: 0x0b
	struct FTransform Trans; // Offset: 0x10 // Size: 0x30
};

// Object Name: ScriptStruct ZLevel.MonsterGenerateInfo
// Size: 0x38 // Inherited bytes: 0x00
struct FMonsterGenerateInfo {
	// Fields
	IntProperty MonsterID; // Offset: 0x00 // Size: 0x04
	IntProperty MonsterNum; // Offset: 0x04 // Size: 0x04
	IntProperty MonsterWaveID; // Offset: 0x08 // Size: 0x04
	struct FVector pos; // Offset: 0x0c // Size: 0x0c
	IntProperty PosRadius; // Offset: 0x18 // Size: 0x04
	IntProperty ReBornTimes; // Offset: 0x1c // Size: 0x04
	IntProperty RebornDelay; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct TArray<struct FRoadPointInfo> RoadPointList; // Offset: 0x28 // Size: 0x10
};

