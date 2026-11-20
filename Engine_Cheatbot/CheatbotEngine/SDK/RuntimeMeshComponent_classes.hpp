#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class RuntimeMeshComponent.RuntimeMeshComponent
// Size: 0xba0 // Inherited bytes: 0xa20
struct URuntimeMeshComponent : UMeshComponent {
	// Fields
	char pad_0xA20[0x8]; // Offset: 0xa20 // Size: 0x08
	struct FScriptMulticastDelegate CollisionUpdated; // Offset: 0xa28 // Size: 0x10
	bool bUseComplexAsSimpleCollision; // Offset: 0xa38 // Size: 0x01
	bool bUseAsyncCooking; // Offset: 0xa39 // Size: 0x01
	bool bCanbeOccluded; // Offset: 0xa3a // Size: 0x01
	bool bShouldSerializeMeshData; // Offset: 0xa3b // Size: 0x01
	enum class ERuntimeMeshCollisionCookingMode CollisionMode; // Offset: 0xa3c // Size: 0x01
	char pad_0xA3D[0x3]; // Offset: 0xa3d // Size: 0x03
	struct UBodySetup* BodySetup; // Offset: 0xa40 // Size: 0x08
	char pad_0xA48[0x30]; // Offset: 0xa48 // Size: 0x30
	struct TArray<struct FRuntimeMeshCollisionSection> MeshCollisionSections; // Offset: 0xa78 // Size: 0x10
	struct TArray<struct FRuntimeConvexCollisionSection> ConvexCollisionSections; // Offset: 0xa88 // Size: 0x10
	struct FBoxSphereBounds LocalBounds; // Offset: 0xa98 // Size: 0x1c
	char pad_0xAB4[0x4]; // Offset: 0xab4 // Size: 0x04
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick; // Offset: 0xab8 // Size: 0xb8
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // Offset: 0xb70 // Size: 0x10
	char pad_0xB80[0x20]; // Offset: 0xb80 // Size: 0x20

	// Functions

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.UpdateMeshSection_Blueprint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void UpdateMeshSection_Blueprint(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FRuntimeMeshTangent>& Tangents, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FLinearColor>& Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles); // Offset: 0x1022e52ac // Return & Params: Num(10) Size(0x7a)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.SetSectionTessellationTriangles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSectionTessellationTriangles(IntProperty SectionIndex, struct TArray<IntProperty>& TessellationTriangles, bool bShouldMoveArray); // Offset: 0x1022e5174 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMeshSectionVisible(IntProperty SectionIndex, bool bNewVisibility); // Offset: 0x1022e50b8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCollisionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMeshSectionCollisionEnabled(IntProperty SectionIndex, bool bNewCollisionEnabled); // Offset: 0x1022e4ffc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCastsShadow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMeshSectionCastsShadow(IntProperty SectionIndex, bool bNewCastsShadow); // Offset: 0x1022e4f40 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshCollisionSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetMeshCollisionSection(IntProperty CollisionSectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles); // Offset: 0x1022e4dec // Return & Params: Num(3) Size(0x28)

	// Object Name: DelegateFunction RuntimeMeshComponent.RuntimeMeshComponent.RuntimeMeshCollisionUpdatedDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void RuntimeMeshCollisionUpdatedDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsMeshSectionVisible(IntProperty SectionIndex); // Offset: 0x1022e4d60 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCollisionEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsMeshSectionCollisionEnabled(IntProperty SectionIndex); // Offset: 0x1022e4cd4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCastingShadows
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsMeshSectionCastingShadows(IntProperty SectionIndex); // Offset: 0x1022e4c48 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.GetNumSections
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumSections(); // Offset: 0x1022e4c14 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.GetLastSectionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetLastSectionIndex(); // Offset: 0x1022e4be0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.FirstAvailableMeshSectionIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty FirstAvailableMeshSectionIndex(); // Offset: 0x1022e4bac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.EndBatchUpdates
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EndBatchUpdates(); // Offset: 0x1022e4b98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.DoesSectionExist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool DoesSectionExist(IntProperty SectionIndex); // Offset: 0x1022e4b0c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.CreateMeshSection_Blueprint
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void CreateMeshSection_Blueprint(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FRuntimeMeshTangent>& Tangents, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FLinearColor>& Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, enum class EUpdateFrequency UpdateFrequency); // Offset: 0x1022e465c // Return & Params: Num(12) Size(0x7c)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.CookCollisionNow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CookCollisionNow(); // Offset: 0x1022e4648 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMeshSection(IntProperty SectionIndex); // Offset: 0x1022e45cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshCollisionSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMeshCollisionSection(IntProperty CollisionSectionIndex); // Offset: 0x1022e4550 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ClearCollisionConvexMeshes
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearCollisionConvexMeshes(); // Offset: 0x1022e453c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshSections
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllMeshSections(); // Offset: 0x1022e4528 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshCollisionSections
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllMeshCollisionSections(); // Offset: 0x1022e4514 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.ChangeRuntimeMeshSectionUVs
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool ChangeRuntimeMeshSectionUVs(IntProperty SectionIndex, IntProperty Index, MapProperty UVs); // Offset: 0x1022e43c8 // Return & Params: Num(4) Size(0x59)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.BeginBatchUpdates
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BeginBatchUpdates(); // Offset: 0x1022e43ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshComponent.AddCollisionConvexMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Offset: 0x1022e42c8 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class RuntimeMeshComponent.RuntimeMeshLodComponent
// Size: 0xbc0 // Inherited bytes: 0xa20
struct URuntimeMeshLodComponent : UMeshComponent {
	// Fields
	char pad_0xA20[0x38]; // Offset: 0xa20 // Size: 0x38
	struct TArray<struct FRuntimeMeshCollisionSection> MeshCollisionSections; // Offset: 0xa58 // Size: 0x10
	struct TArray<struct FRuntimeConvexCollisionSection> ConvexCollisionSections; // Offset: 0xa68 // Size: 0x10
	struct FBoxSphereBounds LocalBounds; // Offset: 0xa78 // Size: 0x1c
	char pad_0xA94[0x4]; // Offset: 0xa94 // Size: 0x04
	struct FRuntimeMeshComponentPrePhysicsTickFunction PrePhysicsTick; // Offset: 0xa98 // Size: 0xb8
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // Offset: 0xb50 // Size: 0x10
	MapProperty LodSectionIndexs; // Offset: 0xb60 // Size: 0x50
	char pad_0xBB0[0x10]; // Offset: 0xbb0 // Size: 0x10
};

// Object Name: Class RuntimeMeshComponent.RuntimeMeshLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct URuntimeMeshLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.GetSectionFromStaticMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, IntProperty LODIndex, IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FRuntimeMeshTangent>& Tangents); // Offset: 0x1022e70e8 // Return & Params: Num(8) Size(0x60)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.GenerateTessellationIndexBuffer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GenerateTessellationIndexBuffer(struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FRuntimeMeshTangent>& Tangents, struct TArray<IntProperty>& OutTessTriangles); // Offset: 0x1022e6e30 // Return & Params: Num(6) Size(0x60)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateGridMeshTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CreateGridMeshTriangles(IntProperty NumX, IntProperty NumY, bool bWinding, struct TArray<IntProperty>& Triangles); // Offset: 0x1022e6cd4 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateBoxMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void CreateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FRuntimeMeshTangent>& Tangents); // Offset: 0x1022e6a48 // Return & Params: Num(6) Size(0x60)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CopyRuntimeMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComp, IntProperty LODIndex, struct URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision); // Offset: 0x1022e6918 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMesh
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CopyRuntimeMeshFromStaticMesh(struct UStaticMesh* StaticMesh, IntProperty LODIndex, struct URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision); // Offset: 0x1022e67e8 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.ConvertQuadToTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void ConvertQuadToTriangles(struct TArray<IntProperty>& Triangles, IntProperty Vert0, IntProperty Vert1, IntProperty Vert2, IntProperty Vert3); // Offset: 0x1022e664c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function RuntimeMeshComponent.RuntimeMeshLibrary.CalculateTangentsForMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FRuntimeMeshTangent>& Tangents); // Offset: 0x1022e63fc // Return & Params: Num(5) Size(0x50)
};

