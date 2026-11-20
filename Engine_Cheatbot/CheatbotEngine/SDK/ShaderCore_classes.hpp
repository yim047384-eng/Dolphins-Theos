#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ShaderCore.PrecompileShaderGameConfig
// Size: 0x70 // Inherited bytes: 0x28
struct UPrecompileShaderGameConfig : UObject {
	// Fields
	struct TArray<struct FCollectSwitchs> CollectSwitchs; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FDeviceRenderConfig> DeviceRenderConfigs; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FMapRenderConfig> MapRenderConfigs; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x18]; // Offset: 0x58 // Size: 0x18
};

// Object Name: Class ShaderCore.ShaderGroupSettings
// Size: 0xa0 // Inherited bytes: 0x28
struct UShaderGroupSettings : UObject {
	// Fields
	struct TArray<struct FShaderLevel> Levels_IOS; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FShaderLevel> Levels_AOS; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FShaderPak> Paks_IOS; // Offset: 0x48 // Size: 0x10
	struct TArray<struct FShaderPak> Paks_AOS; // Offset: 0x58 // Size: 0x10
	struct TArray<struct FShaderPak> Paks_PC; // Offset: 0x68 // Size: 0x10
	char pad_0x78[0x28]; // Offset: 0x78 // Size: 0x28
};

