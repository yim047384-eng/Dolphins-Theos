#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AssetRegistry.AssetRegistryImpl
// Size: 0x6f8 // Inherited bytes: 0x28
struct UAssetRegistryImpl : UObject {
	// Fields
	char pad_0x28[0x6d0]; // Offset: 0x28 // Size: 0x6d0
};

// Object Name: Class AssetRegistry.AssetRegistryHelpers
// Size: 0x28 // Inherited bytes: 0x28
struct UAssetRegistryHelpers : UObject {
	// Functions

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // Offset: 0x1055a5eac // Return & Params: Num(2) Size(0x68)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // Offset: 0x1055a5d68 // Return & Params: Num(3) Size(0x1e0)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.IsValid
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsValid(struct FAssetData& InAssetData); // Offset: 0x1055a5cb4 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsUAsset(struct FAssetData& InAssetData); // Offset: 0x1055a5c00 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsRedirector(struct FAssetData& InAssetData); // Offset: 0x1055a5b4c // Return & Params: Num(2) Size(0x51)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsAssetLoaded(struct FAssetData& InAssetData); // Offset: 0x1055a5a98 // Return & Params: Num(2) Size(0x51)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, StrProperty& OutTagValue); // Offset: 0x1055a5920 // Return & Params: Num(4) Size(0x69)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetFullName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetFullName(struct FAssetData& InAssetData); // Offset: 0x1055a5844 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetExportTextName(struct FAssetData& InAssetData); // Offset: 0x1055a5768 // Return & Params: Num(2) Size(0x60)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetClass(struct FAssetData& InAssetData); // Offset: 0x1055a56b4 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct TScriptInterface<Class> GetAssetRegistry(); // Offset: 0x1055a5670 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.GetAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetAsset(struct FAssetData& InAssetData); // Offset: 0x1055a55bc // Return & Params: Num(2) Size(0x58)

	// Object Name: Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Offset: 0x1055a54d4 // Return & Params: Num(3) Size(0x60)
};

// Object Name: Class AssetRegistry.AssetRegistry
// Size: 0x28 // Inherited bytes: 0x28
struct UAssetRegistry : UInterface {
	// Functions

	// Object Name: Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& filter); // Offset: 0x1055a6ee4 // Return & Params: Num(2) Size(0xf8)

	// Object Name: Function AssetRegistry.AssetRegistry.IsLoadingAssets
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsLoadingAssets(); // Offset: 0x1055a6ea8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AssetRegistry.AssetRegistry.HasAssets
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Offset: 0x1055a6dd0 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function AssetRegistry.AssetRegistry.GetSubPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetSubPaths(StrProperty InBasePath, struct TArray<StrProperty>& OutPathList, bool bInRecurse); // Offset: 0x1055a6c78 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAssetsByPath
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Offset: 0x1055a6ae0 // Return & Params: Num(5) Size(0x1b)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Offset: 0x1055a6998 // Return & Params: Num(4) Size(0x1a)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAssetsByClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses); // Offset: 0x1055a6850 // Return & Params: Num(4) Size(0x1a)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetAssets(struct FARFilter& filter, struct TArray<struct FAssetData>& OutAssetData); // Offset: 0x1055a671c // Return & Params: Num(3) Size(0xf9)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Offset: 0x1055a661c // Return & Params: Num(3) Size(0x60)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetAllCachedPaths(struct TArray<StrProperty>& OutPathList); // Offset: 0x1055a656c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AssetRegistry.AssetRegistry.GetAllAssets
	// Flags: [Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Offset: 0x1055a6460 // Return & Params: Num(3) Size(0x12)
};

