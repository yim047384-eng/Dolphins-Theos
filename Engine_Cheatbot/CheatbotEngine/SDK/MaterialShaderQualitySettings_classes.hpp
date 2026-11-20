#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x78 // Inherited bytes: 0x28
struct UMaterialShaderQualitySettings : UObject {
	// Fields
	MapProperty ForwardSettingMap; // Offset: 0x28 // Size: 0x50
};

// Object Name: Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x40 // Inherited bytes: 0x28
struct UShaderPlatformQualitySettings : UObject {
	// Fields
	struct FMaterialQualityOverrides QualityOverrides[0x3]; // Offset: 0x28 // Size: 0x18
};

