#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_Dacia_AnimBP.VH_Dacia_AnimBP_C
// Size: 0x1460 // Inherited bytes: 0xbb0
struct UVH_Dacia_AnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_AFB347A145A351878615819D37F60C62; // Offset: 0xbb8 // Size: 0x50
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_00B4A2DE4D8106DED46BD0897DF5B299; // Offset: 0xc08 // Size: 0x38
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_6C729B1A44E604E6249C0FBAF25B2AEA; // Offset: 0xc40 // Size: 0x90
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_DBE480574138552CBE3E4ABBA2077491; // Offset: 0xcd0 // Size: 0x50
	struct FAnimNode_LookAt AnimGraphNode_LookAt_A5AD3C714060C4575022BC88BB0F6087; // Offset: 0xd20 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_72D25D2F467847E4EF70BABE8B2469E3; // Offset: 0xec0 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_7DBA1CA749FDE192B8A751A51A60E8B3; // Offset: 0x1060 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_97B55E7F46F38D0C494B51B2DC419134; // Offset: 0x1200 // Size: 0x1a0
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_47B1F9DC498426048E198DACEC0B6352; // Offset: 0x13a0 // Size: 0xc0

	// Functions

	// Object Name: Function VH_Dacia_AnimBP.VH_Dacia_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Dacia_AnimBP_AnimGraphNode_ModifyBone_47B1F9DC498426048E198DACEC0B6352
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Dacia_AnimBP_AnimGraphNode_ModifyBone_47B1F9DC498426048E198DACEC0B6352(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Dacia_AnimBP.VH_Dacia_AnimBP_C.ExecuteUbergraph_VH_Dacia_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_Dacia_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

