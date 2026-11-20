#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CustomMeshLoader.CustomMeshLoaderBPLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCustomMeshLoaderBPLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UStaticMesh* LoadSModelFromMemory(struct TArray<char>& Data, StrProperty MeshName, struct TArray<struct UMaterialInstance*>& Materials); // Offset: 0x1023d9944 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void LoadSModelFileAsync(StrProperty FilePath, StrProperty MeshName, DelegateProperty& OnComplete); // Offset: 0x1023d97f0 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UStaticMesh* LoadSModelFile(StrProperty FilePath, StrProperty MeshName); // Offset: 0x1023d9704 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFromMemory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct USkeletalMesh* LoadSKModelFromMemory(struct TArray<char>& Data, StrProperty MeshName, struct TArray<struct UMaterialInterface*>& Materials); // Offset: 0x1023d9598 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFileToAsset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct USkeletalMesh* LoadSKModelFileToAsset(StrProperty FilePath, StrProperty AssetPath, struct TArray<struct UMaterialInterface*>& Materials); // Offset: 0x1023d9448 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct USkeletalMesh* LoadSKModelFile(StrProperty FilePath, StrProperty MeshName, struct TArray<struct UMaterialInterface*>& Materials); // Offset: 0x1023d92f8 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsValidSModelFile(StrProperty FilePath); // Offset: 0x1023d9260 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKModelFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsValidSKModelFile(StrProperty FilePath); // Offset: 0x1023d91c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetSModelFileInfo(StrProperty FilePath, IntProperty& OutSectionCount, IntProperty& OutMaterialCount, IntProperty& OutVertexCount); // Offset: 0x1023d9030 // Return & Params: Num(5) Size(0x1d)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexDataByPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpStaticMeshVertexDataByPath(StrProperty MeshAssetPath, StrProperty OutputFilePath, IntProperty LODIndex, IntProperty MaxVertices); // Offset: 0x1023d8ea0 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpStaticMeshVertexData(struct UStaticMesh* Mesh, StrProperty OutputFilePath, IntProperty LODIndex, IntProperty MaxVertices); // Offset: 0x1023d8d28 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSKModelVertexData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpSKModelVertexData(StrProperty SKModelPath, StrProperty OutputFilePath, IntProperty LODIndex, IntProperty MaxVertices); // Offset: 0x1023d8b98 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonDataFromMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpSkeletonDataFromMesh(struct USkeletalMesh* Mesh, StrProperty OutputFilePath); // Offset: 0x1023d8a9c // Return & Params: Num(3) Size(0x28)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpSkeletonData(struct USkeleton* Skeleton, StrProperty OutputFilePath); // Offset: 0x1023d89a0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexDataByPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpSkeletalMeshVertexDataByPath(StrProperty MeshAssetPath, StrProperty OutputFilePath, IntProperty LODIndex, IntProperty MaxVertices); // Offset: 0x1023d8810 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpSkeletalMeshVertexData(struct USkeletalMesh* Mesh, StrProperty OutputFilePath, IntProperty LODIndex, IntProperty MaxVertices); // Offset: 0x1023d8698 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceDataByPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpAnimSequenceDataByPath(StrProperty AnimAssetPath, StrProperty OutputFilePath); // Offset: 0x1023d8584 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty DumpAnimSequenceData(struct UAnimSequence* AnimSequence, StrProperty OutputFilePath); // Offset: 0x1023d8488 // Return & Params: Num(3) Size(0x28)
};

