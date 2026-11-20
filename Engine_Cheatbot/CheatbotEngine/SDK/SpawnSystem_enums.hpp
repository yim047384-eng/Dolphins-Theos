#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum SpawnSystem.ESpeciesOrganization
enum class ESpeciesOrganization : uint8 {
	Org_Group = 0,
	Org_Squad = 1,
	Org_Unit = 2,
	Org_MAX = 3
};

// Object Name: Enum SpawnSystem.ESTSpawnerVolume
enum class ESTSpawnerVolume : uint8 {
	ESTSpawnerVolume_None = 0,
	ESTSpawnerVolume_Box = 1,
	ESTSpawnerVolume_Sphere = 2,
	ESTSpawnerVolume_MAX = 3
};

// Object Name: Enum SpawnSystem.ESpawnSpotType
enum class ESpawnSpotType : uint8 {
	Ground = 0,
	Wall = 1,
	Air = 2,
	ESpawnSpotType_MAX = 3
};

// Object Name: Enum SpawnSystem.EReadSpeciesData
enum class EReadSpeciesData : uint8 {
	WeightedRandom = 0,
	Ordered = 1,
	ManuallyIndex = 2,
	EReadSpeciesData_MAX = 3
};

// Object Name: Enum SpawnSystem.EWaveState
enum class EWaveState : uint8 {
	None = 0,
	WaveSpawning = 1,
	WaveSpawned = 2,
	WaveCD = 3,
	WaveReadyForNext = 4,
	EWaveState_MAX = 5
};

