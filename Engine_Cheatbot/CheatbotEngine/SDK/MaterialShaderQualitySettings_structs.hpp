#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x08 // Inherited bytes: 0x00
struct FMaterialQualityOverrides {
	// Fields
	bool bEnableOverride; // Offset: 0x00 // Size: 0x01
	bool bForceFullyRough; // Offset: 0x01 // Size: 0x01
	bool bForceNonMetal; // Offset: 0x02 // Size: 0x01
	bool bForceDisableLMDirectionality; // Offset: 0x03 // Size: 0x01
	bool bForceLQReflections; // Offset: 0x04 // Size: 0x01
	enum class EMobileCSMQuality MobileCSMQuality; // Offset: 0x05 // Size: 0x01
	enum class EMobileCSMQuality MobilePointLightShadowQuality; // Offset: 0x06 // Size: 0x01
	enum class EMobileCSMQuality MobilePhotonShadowQuality; // Offset: 0x07 // Size: 0x01
};

