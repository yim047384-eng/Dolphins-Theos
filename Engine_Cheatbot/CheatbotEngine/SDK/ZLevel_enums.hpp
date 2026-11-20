#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ZLevel.EMonsterSpawnSourceType
enum class EMonsterSpawnSourceType : uint8 {
	Default = 0,
	LevelData = 1,
	EventTrigger = 2,
	BossCall = 3,
	GMTest = 4,
	AirDrop = 5,
	MonsterSpawnAction = 6,
	ItemCall = 7,
	UserTrigger = 8,
	EMonsterSpawnSourceType_MAX = 9
};

// Object Name: Enum ZLevel.ELevelEndCondType
enum class ELevelEndCondType : uint8 {
	MonsterWaveEnd = 0,
	ELevelEndCondType_MAX = 1
};

// Object Name: Enum ZLevel.EGenerateType
enum class EGenerateType : uint8 {
	Random = 0,
	Nearest = 1,
	EGenerateType_MAX = 2
};

// Object Name: Enum ZLevel.EMonsterWaveEndCondType
enum class EMonsterWaveEndCondType : uint8 {
	AllMonsterDead = 0,
	SpecialMonsterDead = 1,
	MonsterNumLimit = 2,
	DurTimeLimit = 3,
	EMonsterWaveEndCondType_MAX = 4
};

