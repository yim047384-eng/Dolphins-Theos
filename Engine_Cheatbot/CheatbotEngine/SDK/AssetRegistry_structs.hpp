#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct AssetRegistry.ARFilter
// Size: 0xe8 // Inherited bytes: 0x00
struct FARFilter {
	// Fields
	struct TArray<struct FName> PackageNames; // Offset: 0x00 // Size: 0x10
	struct TArray<struct FName> PackagePaths; // Offset: 0x10 // Size: 0x10
	struct TArray<struct FName> ObjectPaths; // Offset: 0x20 // Size: 0x10
	struct TArray<struct FName> ClassNames; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x50]; // Offset: 0x40 // Size: 0x50
	SetProperty RecursiveClassesExclusionSet; // Offset: 0x90 // Size: 0x50
	bool bRecursivePaths; // Offset: 0xe0 // Size: 0x01
	bool bRecursiveClasses; // Offset: 0xe1 // Size: 0x01
	bool bIncludeOnlyOnDiskAssets; // Offset: 0xe2 // Size: 0x01
	char pad_0xE3[0x5]; // Offset: 0xe3 // Size: 0x05
};

// Object Name: ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x10 // Inherited bytes: 0x00
struct FAssetBundleData {
	// Fields
	struct TArray<struct FAssetBundleEntry> Bundles; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x28 // Inherited bytes: 0x00
struct FAssetBundleEntry {
	// Fields
	struct FPrimaryAssetId BundleScope; // Offset: 0x00 // Size: 0x10
	struct FName BundleName; // Offset: 0x10 // Size: 0x08
	struct TArray<struct FSoftObjectPath> BundleAssets; // Offset: 0x18 // Size: 0x10
};

// Object Name: ScriptStruct AssetRegistry.AssetData
// Size: 0x50 // Inherited bytes: 0x00
struct FAssetData {
	// Fields
	struct FName ObjectPath; // Offset: 0x00 // Size: 0x08
	struct FName PackageName; // Offset: 0x08 // Size: 0x08
	struct FName PackagePath; // Offset: 0x10 // Size: 0x08
	struct FName AssetName; // Offset: 0x18 // Size: 0x08
	struct FName AssetClass; // Offset: 0x20 // Size: 0x08
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28
};

// Object Name: ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 // Inherited bytes: 0x00
struct FTagAndValue {
	// Fields
	struct FName Tag; // Offset: 0x00 // Size: 0x08
	StrProperty Value; // Offset: 0x08 // Size: 0x10
};

