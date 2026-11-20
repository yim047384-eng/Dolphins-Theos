#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ClusterReplication.ClusterReplicationSubsystem
// Size: 0x5b8 // Inherited bytes: 0x28
struct UClusterReplicationSubsystem : UObject {
	// Fields
	char pad_0x28[0x590]; // Offset: 0x28 // Size: 0x590

	// Functions

	// Object Name: Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoClearCache(bool Val); // Offset: 0x101f3fad4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoCache(bool Val); // Offset: 0x101f3fa54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAllCachedObjectData(); // Offset: 0x101f3fa3c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class ClusterReplication.ClusterEntityInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UClusterEntityInterface : UInterface {
};

