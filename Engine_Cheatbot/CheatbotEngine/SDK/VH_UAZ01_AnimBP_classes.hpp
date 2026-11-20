#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_UAZ01_AnimBP.VH_UAZ01_AnimBP_C
// Size: 0x1460 // Inherited bytes: 0xbb0
struct UVH_UAZ01_AnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_3DFDED3D493AF901763B759CEEB27FDB; // Offset: 0xbb8 // Size: 0x50
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_07F501AB4B84A6CED07AD4938E34E06C; // Offset: 0xc08 // Size: 0x38
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_0ACA60624CE764C9A2AF0FAC7F9E7410; // Offset: 0xc40 // Size: 0x90
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B719B4B947515C2AE7BB4687C718DA60; // Offset: 0xcd0 // Size: 0x50
	struct FAnimNode_LookAt AnimGraphNode_LookAt_BCC7CED8496392C66D7E6E871AC30C54; // Offset: 0xd20 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_BDBF1F8D4E3BB1143ABCBA9FDEFC246F; // Offset: 0xec0 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_E2F7B4FB4FBF3F4B9B1293A0BA06AACB; // Offset: 0x1060 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_7DF064414CE47BBDB3389E89A6C869EE; // Offset: 0x1200 // Size: 0x1a0
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3B6D4E444A893F7A14C101A0F76DA605; // Offset: 0x13a0 // Size: 0xc0

	// Functions

	// Object Name: Function VH_UAZ01_AnimBP.VH_UAZ01_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_UAZ01_AnimBP_AnimGraphNode_ModifyBone_3B6D4E444A893F7A14C101A0F76DA605
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_UAZ01_AnimBP_AnimGraphNode_ModifyBone_3B6D4E444A893F7A14C101A0F76DA605(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_UAZ01_AnimBP.VH_UAZ01_AnimBP_C.ExecuteUbergraph_VH_UAZ01_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_UAZ01_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

