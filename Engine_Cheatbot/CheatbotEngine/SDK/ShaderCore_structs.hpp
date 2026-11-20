#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct ShaderCore.MapRenderConfig
// Size: 0x98 // Inherited bytes: 0x00
struct FMapRenderConfig {
	// Fields
	struct FName ConfigName; // Offset: 0x00 // Size: 0x08
	struct FName MapName; // Offset: 0x08 // Size: 0x08
	struct TArray<struct FName> LevelNames; // Offset: 0x10 // Size: 0x10
	struct FOverrideRenderConfig OverrideRenderConfig; // Offset: 0x20 // Size: 0x04
	char pad_0x24[0x4]; // Offset: 0x24 // Size: 0x04
	struct FRenderConfig RenderConfig; // Offset: 0x28 // Size: 0x70
};

// Object Name: ScriptStruct ShaderCore.RenderConfig
// Size: 0x70 // Inherited bytes: 0x00
struct FRenderConfig {
	// Fields
	struct FName FormatName; // Offset: 0x00 // Size: 0x08
	struct FName FeatureLevel; // Offset: 0x08 // Size: 0x08
	IntProperty QualityType; // Offset: 0x10 // Size: 0x04
	IntProperty UserQualitySetting; // Offset: 0x14 // Size: 0x04
	struct FName MaterialQualityLevel; // Offset: 0x18 // Size: 0x08
	IntProperty PUBGLDR; // Offset: 0x20 // Size: 0x04
	IntProperty MobileHDR; // Offset: 0x24 // Size: 0x04
	IntProperty MobileSimplerShader; // Offset: 0x28 // Size: 0x04
	IntProperty ShadowQuality; // Offset: 0x2c // Size: 0x04
	IntProperty MaxCSMShadowResolution; // Offset: 0x30 // Size: 0x04
	IntProperty MobileEnableHardwarePCF; // Offset: 0x34 // Size: 0x04
	IntProperty MobileEnableIBL; // Offset: 0x38 // Size: 0x04
	IntProperty MobileEarlyZPass; // Offset: 0x3c // Size: 0x04
	IntProperty MobileEnableEarlyZDepthBias; // Offset: 0x40 // Size: 0x04
	IntProperty MobileUseAlphaToCoverage; // Offset: 0x44 // Size: 0x04
	IntProperty MobileBypassTranslucentMaterialPointLight; // Offset: 0x48 // Size: 0x04
	IntProperty MobileMSAA; // Offset: 0x4c // Size: 0x04
	IntProperty AllowStaticLighting; // Offset: 0x50 // Size: 0x04
	IntProperty SupportAllShaderPermutations; // Offset: 0x54 // Size: 0x04
	IntProperty SupportLowQualityLightmaps; // Offset: 0x58 // Size: 0x04
	IntProperty MobileEnableVertexPointLight; // Offset: 0x5c // Size: 0x04
	IntProperty MobileFallbackMSAAToFXAA; // Offset: 0x60 // Size: 0x04
	IntProperty IndirectLightingCache; // Offset: 0x64 // Size: 0x04
	IntProperty MobileNumDynamicPointLights; // Offset: 0x68 // Size: 0x04
	bool RHISupportsTexLod; // Offset: 0x6c // Size: 0x01
	bool RHISupportsHardwarePCF; // Offset: 0x6d // Size: 0x01
	char pad_0x6E[0x2]; // Offset: 0x6e // Size: 0x02
};

// Object Name: ScriptStruct ShaderCore.OverrideRenderConfig
// Size: 0x04 // Inherited bytes: 0x00
struct FOverrideRenderConfig {
	// Fields
	char bFormatName : 1; // Offset: 0x00 // Size: 0x01
	char bFeatureLevel : 1; // Offset: 0x00 // Size: 0x01
	char bQualityType : 1; // Offset: 0x00 // Size: 0x01
	char bUserQualitySetting : 1; // Offset: 0x00 // Size: 0x01
	char bMaterialQualityLevel : 1; // Offset: 0x00 // Size: 0x01
	char bPUBGLDR : 1; // Offset: 0x00 // Size: 0x01
	char bMobileHDR : 1; // Offset: 0x00 // Size: 0x01
	char bMobileSimplerShader : 1; // Offset: 0x00 // Size: 0x01
	char bShadowQuality : 1; // Offset: 0x01 // Size: 0x01
	char bMaxCSMShadowResolution : 1; // Offset: 0x01 // Size: 0x01
	char bMobileEnableHardwarePCF : 1; // Offset: 0x01 // Size: 0x01
	char bMobileEnableIBL : 1; // Offset: 0x01 // Size: 0x01
	char bMobileEarlyZPass : 1; // Offset: 0x01 // Size: 0x01
	char bMobileEnableEarlyZDepthBias : 1; // Offset: 0x01 // Size: 0x01
	char bMobileUseAlphaToCoverage : 1; // Offset: 0x01 // Size: 0x01
	char bMobileBypassTranslucentMaterialPointLight : 1; // Offset: 0x01 // Size: 0x01
	char bMobileMSAA : 1; // Offset: 0x02 // Size: 0x01
	char bAllowStaticLighting : 1; // Offset: 0x02 // Size: 0x01
	char bSupportAllShaderPermutations : 1; // Offset: 0x02 // Size: 0x01
	char bSupportLowQualityLightmaps : 1; // Offset: 0x02 // Size: 0x01
	char bMobileEnableVertexPointLight : 1; // Offset: 0x02 // Size: 0x01
	char bMobileFallbackMSAAToFXAA : 1; // Offset: 0x02 // Size: 0x01
	char bIndirectLightingCache : 1; // Offset: 0x02 // Size: 0x01
	char bMobileNumDynamicPointLights : 1; // Offset: 0x02 // Size: 0x01
	char bRHISupportsTexLod : 1; // Offset: 0x03 // Size: 0x01
	char bRHISupportsHardwarePCF : 1; // Offset: 0x03 // Size: 0x01
	char pad_0x3_2 : 6; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct ShaderCore.DeviceRenderConfig
// Size: 0x78 // Inherited bytes: 0x00
struct FDeviceRenderConfig {
	// Fields
	struct FName ConfigName; // Offset: 0x00 // Size: 0x08
	struct FRenderConfig RenderConfig; // Offset: 0x08 // Size: 0x70
};

// Object Name: ScriptStruct ShaderCore.CollectSwitchs
// Size: 0x18 // Inherited bytes: 0x00
struct FCollectSwitchs {
	// Fields
	struct FName PlatformName; // Offset: 0x00 // Size: 0x08
	bool LevelStaticMeshMobile; // Offset: 0x08 // Size: 0x01
	bool LevelStaticMeshShadowDepth; // Offset: 0x09 // Size: 0x01
	bool LevelStaticMeshDepth; // Offset: 0x0a // Size: 0x01
	bool SkeletalMeshMobile; // Offset: 0x0b // Size: 0x01
	bool SkeletalMeshShadowDepth; // Offset: 0x0c // Size: 0x01
	bool SkeletalMeshDepth; // Offset: 0x0d // Size: 0x01
	bool ParticleSpriteMobile; // Offset: 0x0e // Size: 0x01
	bool MeshParticleMobile; // Offset: 0x0f // Size: 0x01
	bool LandscapeMobile; // Offset: 0x10 // Size: 0x01
	bool LandscapeShadowDepth; // Offset: 0x11 // Size: 0x01
	bool LandscapeDepth; // Offset: 0x12 // Size: 0x01
	bool SlateDefaultBase; // Offset: 0x13 // Size: 0x01
	bool SlateFontBase; // Offset: 0x14 // Size: 0x01
	char pad_0x15[0x3]; // Offset: 0x15 // Size: 0x03
};

// Object Name: ScriptStruct ShaderCore.ShaderGroupDesc
// Size: 0x40 // Inherited bytes: 0x00
struct FShaderGroupDesc {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
	StrProperty Name; // Offset: 0x08 // Size: 0x10
	StrProperty Parent; // Offset: 0x18 // Size: 0x10
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
};

// Object Name: ScriptStruct ShaderCore.ShaderPak
// Size: 0x60 // Inherited bytes: 0x40
struct FShaderPak : FShaderGroupDesc {
	// Fields
	struct TArray<StrProperty> Include; // Offset: 0x40 // Size: 0x10
	struct TArray<StrProperty> Exclude; // Offset: 0x50 // Size: 0x10
};

// Object Name: ScriptStruct ShaderCore.ShaderLevel
// Size: 0x60 // Inherited bytes: 0x40
struct FShaderLevel : FShaderGroupDesc {
	// Fields
	struct TArray<StrProperty> Include; // Offset: 0x40 // Size: 0x10
	struct TArray<StrProperty> Quality; // Offset: 0x50 // Size: 0x10
};

