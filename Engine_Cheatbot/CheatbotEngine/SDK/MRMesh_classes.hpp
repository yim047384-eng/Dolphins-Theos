#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MRMesh.MeshReconstructorBase
// Size: 0x28 // Inherited bytes: 0x28
struct UMeshReconstructorBase : UObject {
	// Functions

	// Object Name: Function MRMesh.MeshReconstructorBase.StopReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	void StopReconstruction(); // Offset: 0x1057310ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MRMesh.MeshReconstructorBase.StartReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	void StartReconstruction(); // Offset: 0x105731090 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MRMesh.MeshReconstructorBase.PauseReconstruction
	// Flags: [Native|Public|BlueprintCallable]
	void PauseReconstruction(); // Offset: 0x105731074 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsReconstructionStarted(); // Offset: 0x105731038 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsReconstructionPaused(); // Offset: 0x105730ffc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// Flags: [Native|Public]
	void DisconnectMRMesh(); // Offset: 0x105730fe0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	// Flags: [Native|Public]
	struct FMRMeshConfiguration ConnectMRMesh(struct UMRMeshComponent* Mesh); // Offset: 0x105730f4c // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class MRMesh.MRMeshComponent
// Size: 0xa20 // Inherited bytes: 0x9d0
struct UMRMeshComponent : UPrimitiveComponent {
	// Fields
	struct UMaterialInterface* Material; // Offset: 0x9d0 // Size: 0x08
	struct UMeshReconstructorBase* MeshReconstructor; // Offset: 0x9d8 // Size: 0x08
	bool bEnableCollision; // Offset: 0x9e0 // Size: 0x01
	char pad_0x9E1[0x7]; // Offset: 0x9e1 // Size: 0x07
	struct TArray<struct UBodySetup*> BodySetups; // Offset: 0x9e8 // Size: 0x10
	char pad_0x9F8[0x28]; // Offset: 0x9f8 // Size: 0x28

	// Functions

	// Object Name: Function MRMesh.MRMeshComponent.GetReconstructor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMeshReconstructorBase* GetReconstructor(); // Offset: 0x105731454 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MRMesh.MRMeshComponent.ConnectReconstructor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ConnectReconstructor(struct UMeshReconstructorBase* Reconstructor); // Offset: 0x1057313d8 // Return & Params: Num(1) Size(0x8)
};

