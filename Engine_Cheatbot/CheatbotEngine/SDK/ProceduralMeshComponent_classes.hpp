#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0xa90 // Inherited bytes: 0xa20
struct UProceduralMeshComponent : UMeshComponent {
	// Fields
	char pad_0xA20[0x8]; // Offset: 0xa20 // Size: 0x08
	bool bUseComplexAsSimpleCollision; // Offset: 0xa28 // Size: 0x01
	bool bUseAsyncCooking; // Offset: 0xa29 // Size: 0x01
	char pad_0xA2A[0x6]; // Offset: 0xa2a // Size: 0x06
	struct UBodySetup* ProcMeshBodySetup; // Offset: 0xa30 // Size: 0x08
	struct TArray<struct FProcMeshSection> ProcMeshSections; // Offset: 0xa38 // Size: 0x10
	struct TArray<struct FKConvexElem> CollisionConvexElems; // Offset: 0xa48 // Size: 0x10
	struct FBoxSphereBounds LocalBounds; // Offset: 0xa58 // Size: 0x1c
	char pad_0xA74[0x4]; // Offset: 0xa74 // Size: 0x04
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // Offset: 0xa78 // Size: 0x10
	char pad_0xA88[0x8]; // Offset: 0xa88 // Size: 0x08

	// Functions

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSectionUV0
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void UpdateMeshSectionUV0(IntProperty SectionIndex, struct TArray<struct FVector2D>& UV0); // Offset: 0x10235a378 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void UpdateMeshSection_LinearColor(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Offset: 0x10235a0e4 // Return & Params: Num(6) Size(0x58)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void UpdateMeshSection(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Offset: 0x102359e50 // Return & Params: Num(6) Size(0x58)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMeshSectionVisible(IntProperty SectionIndex, bool bNewVisibility); // Offset: 0x102359d94 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsMeshSectionVisible(IntProperty SectionIndex); // Offset: 0x102359d08 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumSections(); // Offset: 0x102359cd4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void CreateMeshSection_LinearColor(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // Offset: 0x102359980 // Return & Params: Num(8) Size(0x69)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void CreateMeshSection(IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // Offset: 0x10235962c // Return & Params: Num(8) Size(0x69)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearMeshSection(IntProperty SectionIndex); // Offset: 0x1023595b0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearCollisionConvexMeshes(); // Offset: 0x10235959c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllMeshSections(); // Offset: 0x102359588 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Offset: 0x1023594a4 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // Offset: 0x102358d1c // Return & Params: Num(7) Size(0x40)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetSectionFromStaticMesh(struct UStaticMesh* InMesh, IntProperty LODIndex, IntProperty SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // Offset: 0x102358a1c // Return & Params: Num(8) Size(0x60)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // Offset: 0x102358790 // Return & Params: Num(6) Size(0x60)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CreateGridMeshTriangles(IntProperty NumX, IntProperty NumY, bool bWinding, struct TArray<IntProperty>& Triangles); // Offset: 0x102358634 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, IntProperty LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // Offset: 0x102358504 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void ConvertQuadToTriangles(struct TArray<IntProperty>& Triangles, IntProperty Vert0, IntProperty Vert1, IntProperty Vert2, IntProperty Vert3); // Offset: 0x102358368 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<IntProperty>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents); // Offset: 0x102358118 // Return & Params: Num(5) Size(0x50)
};

