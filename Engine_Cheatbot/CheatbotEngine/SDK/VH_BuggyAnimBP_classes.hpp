#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_BuggyAnimBP.VH_BuggyAnimBP_C
// Size: 0x1460 // Inherited bytes: 0xbb0
struct UVH_BuggyAnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_E0DCE6F140272247576A7789A45C0403; // Offset: 0xbb8 // Size: 0x50
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_F6B850E344A8B0B367572B8FF96E656C; // Offset: 0xc08 // Size: 0x38
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_B60295B8491A343B7CBA4DB79E292146; // Offset: 0xc40 // Size: 0x90
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9316531F4ED4079E7CF743B275FDF3FD; // Offset: 0xcd0 // Size: 0x50
	struct FAnimNode_LookAt AnimGraphNode_LookAt_A632869344F20EA466E838921EDB4C32; // Offset: 0xd20 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_EB6169534D1955073248059B2F408CB7; // Offset: 0xec0 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_00FE4D874DB99ECB1AA6659E0E29CD77; // Offset: 0x1060 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_128D374043C64318267BFC96C92069BF; // Offset: 0x1200 // Size: 0x1a0
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6E581FD4464D3B7EEC419DBAA9447CFF; // Offset: 0x13a0 // Size: 0xc0

	// Functions

	// Object Name: Function VH_BuggyAnimBP.VH_BuggyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_BuggyAnimBP_AnimGraphNode_ModifyBone_6E581FD4464D3B7EEC419DBAA9447CFF
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_BuggyAnimBP_AnimGraphNode_ModifyBone_6E581FD4464D3B7EEC419DBAA9447CFF(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_BuggyAnimBP.VH_BuggyAnimBP_C.ExecuteUbergraph_VH_BuggyAnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_BuggyAnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

