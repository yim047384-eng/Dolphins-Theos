#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Renderer.LightPropagationVolumeSettings
// Size: 0x40 // Inherited bytes: 0x00
struct FLightPropagationVolumeSettings {
	// Fields
	char bOverride_LPVIntensity : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVDirectionalOcclusionRadius : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVDiffuseOcclusionExponent : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVSpecularOcclusionExponent : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVSpecularOcclusionIntensity : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVSize : 1; // Offset: 0x00 // Size: 0x01
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_LPVSecondaryBounceIntensity : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_LPVGeometryVolumeBias : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_LPVVplInjectionBias : 1; // Offset: 0x01 // Size: 0x01
	char bOverride_LPVEmissiveInjectionIntensity : 1; // Offset: 0x01 // Size: 0x01
	char pad_0x1_5 : 3; // Offset: 0x01 // Size: 0x01
	char pad_0x2[0x2]; // Offset: 0x02 // Size: 0x02
	float LPVIntensity; // Offset: 0x04 // Size: 0x04
	float LPVVplInjectionBias; // Offset: 0x08 // Size: 0x04
	float LPVSize; // Offset: 0x0c // Size: 0x04
	float LPVSecondaryOcclusionIntensity; // Offset: 0x10 // Size: 0x04
	float LPVSecondaryBounceIntensity; // Offset: 0x14 // Size: 0x04
	float LPVGeometryVolumeBias; // Offset: 0x18 // Size: 0x04
	float LPVEmissiveInjectionIntensity; // Offset: 0x1c // Size: 0x04
	float LPVDirectionalOcclusionIntensity; // Offset: 0x20 // Size: 0x04
	float LPVDirectionalOcclusionRadius; // Offset: 0x24 // Size: 0x04
	float LPVDiffuseOcclusionExponent; // Offset: 0x28 // Size: 0x04
	float LPVSpecularOcclusionExponent; // Offset: 0x2c // Size: 0x04
	float LPVDiffuseOcclusionIntensity; // Offset: 0x30 // Size: 0x04
	float LPVSpecularOcclusionIntensity; // Offset: 0x34 // Size: 0x04
	float LPVFadeRange; // Offset: 0x38 // Size: 0x04
	float LPVDirectionalOcclusionFadeRange; // Offset: 0x3c // Size: 0x04
};

