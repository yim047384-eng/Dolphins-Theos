#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 // Inherited bytes: 0x28
struct UClothingAssetBase : UObject {
	// Fields
	StrProperty ImportedFilePath; // Offset: 0x28 // Size: 0x10
	struct FGuid AssetGuid; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UClothingSimulationFactory : UObject {
};

