#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_CoupeRB_AnimBP.VH_CoupeRB_AnimBP_C
// Size: 0x1460 // Inherited bytes: 0xbb0
struct UVH_CoupeRB_AnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_290FC69C4906D3705D07919442A818A0; // Offset: 0xbb8 // Size: 0x50
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_66535AC444A27D067974A8836AAE9ABB; // Offset: 0xc08 // Size: 0x38
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BE002F7945716AAB1F6B5CBE69168926; // Offset: 0xc40 // Size: 0x50
	struct FAnimNode_LookAt AnimGraphNode_LookAt_F37848B74BD53AF95598F8B042D5ABC5; // Offset: 0xc90 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_DF0CD13C485792EE18E5B7A072DEF9EE; // Offset: 0xe30 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_92BBF8154FD61DB8106BF8A771804FA8; // Offset: 0xfd0 // Size: 0x1a0
	struct FAnimNode_LookAt AnimGraphNode_LookAt_8B5020D34809BA53CDD12EA859DEB5F8; // Offset: 0x1170 // Size: 0x1a0
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_40CC68FE4B063E6549DE16AD1C5A3201; // Offset: 0x1310 // Size: 0xc0
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_CB3BB4D3492C266E4C59538561D57981; // Offset: 0x13d0 // Size: 0x90

	// Functions

	// Object Name: Function VH_CoupeRB_AnimBP.VH_CoupeRB_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_CoupeRB_AnimBP_AnimGraphNode_ModifyBone_40CC68FE4B063E6549DE16AD1C5A3201
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_CoupeRB_AnimBP_AnimGraphNode_ModifyBone_40CC68FE4B063E6549DE16AD1C5A3201(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_CoupeRB_AnimBP.VH_CoupeRB_AnimBP_C.ExecuteUbergraph_VH_CoupeRB_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_CoupeRB_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

