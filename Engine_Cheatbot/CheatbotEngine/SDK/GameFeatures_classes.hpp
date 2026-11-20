#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GameFeatures.GameFeatureAction
// Size: 0x28 // Inherited bytes: 0x28
struct UGameFeatureAction : UObject {
};

// Object Name: Class GameFeatures.GameFeatureAction_AddComponents
// Size: 0x50 // Inherited bytes: 0x28
struct UGameFeatureAction_AddComponents : UGameFeatureAction {
	// Fields
	struct TArray<struct FGameFeatureComponentEntry> ComponentList; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x18]; // Offset: 0x38 // Size: 0x18
};

// Object Name: Class GameFeatures.GameFeatureData
// Size: 0x50 // Inherited bytes: 0x30
struct UGameFeatureData : UPrimaryDataAsset {
	// Fields
	struct TArray<struct UGameFeatureAction*> Actions; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // Offset: 0x40 // Size: 0x10
};

// Object Name: Class GameFeatures.GameFeaturePluginStateMachine
// Size: 0x158 // Inherited bytes: 0x28
struct UGameFeaturePluginStateMachine : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
	struct FGameFeaturePluginStateMachineProperties StateProperties; // Offset: 0x48 // Size: 0x70
	char pad_0xB8[0xa0]; // Offset: 0xb8 // Size: 0xa0
};

// Object Name: Class GameFeatures.GameFeaturesProjectPolicies
// Size: 0x28 // Inherited bytes: 0x28
struct UGameFeaturesProjectPolicies : UObject {
};

// Object Name: Class GameFeatures.DefaultGameFeaturesProjectPolicies
// Size: 0x28 // Inherited bytes: 0x28
struct UDefaultGameFeaturesProjectPolicies : UGameFeaturesProjectPolicies {
};

// Object Name: Class GameFeatures.GameFeaturesSubsystem
// Size: 0xf0 // Inherited bytes: 0x30
struct UGameFeaturesSubsystem : UEngineSubsystem {
	// Fields
	MapProperty GameFeaturePluginStateMachines; // Offset: 0x30 // Size: 0x50
	char pad_0x80[0x50]; // Offset: 0x80 // Size: 0x50
	struct TArray<struct UGameFeatureStateChangeObserver*> Observers; // Offset: 0xd0 // Size: 0x10
	struct UGameFeaturesProjectPolicies* GameSpecificPolicies; // Offset: 0xe0 // Size: 0x08
	char pad_0xE8[0x8]; // Offset: 0xe8 // Size: 0x08
};

// Object Name: Class GameFeatures.GameFeaturesSubsystemSettings
// Size: 0x80 // Inherited bytes: 0x38
struct UGameFeaturesSubsystemSettings : UDeveloperSettings {
	// Fields
	struct FSoftClassPath GameFeaturesManagerClassName; // Offset: 0x38 // Size: 0x18
	struct TArray<StrProperty> DisabledPlugins; // Offset: 0x50 // Size: 0x10
	struct TArray<StrProperty> AdditionalPluginMetadataKeys; // Offset: 0x60 // Size: 0x10
	StrProperty BuiltInGameFeaturePluginsFolder; // Offset: 0x70 // Size: 0x10
};

// Object Name: Class GameFeatures.GameFeatureStateChangeObserver
// Size: 0x28 // Inherited bytes: 0x28
struct UGameFeatureStateChangeObserver : UObject {
};

