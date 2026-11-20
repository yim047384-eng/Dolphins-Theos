#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_MotorcycleCart_AnimBP.VH_MotorcycleCart_AnimBP_C
// Size: 0x149c // Inherited bytes: 0xbb0
struct UVH_MotorcycleCart_AnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_A54AE5FD40433541B2B5D795486F014F; // Offset: 0xbb8 // Size: 0xb0
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0CC7D0B449A6598211A4F4870ABB3768; // Offset: 0xc68 // Size: 0xe8
	struct FAnimNode_LookAt AnimGraphNode_LookAt_08DEAB27480692EAEB2F8FABB803B340; // Offset: 0xd50 // Size: 0x1a0
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_32881ED14533782D98E278A22B4DE9BB; // Offset: 0xef0 // Size: 0x90
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_D934A4604C67BA07C1F273BF398C3F1D; // Offset: 0xf80 // Size: 0xb0
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5F9393D24D62362344EA1488EC6A5B30; // Offset: 0x1030 // Size: 0x50
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_37C93E644899E686F27A44A05BCBDEE1; // Offset: 0x1080 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_680729AC40DA6E5FD48BC0AF82418A58; // Offset: 0x10d0 // Size: 0xc0
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_A5E0AA12477BB3D4661148BF9B5D111C; // Offset: 0x1190 // Size: 0xb0
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_3352CEE4430ABB49041BE69CB38CFEBF; // Offset: 0x1240 // Size: 0x38
	struct FAnimNode_Root AnimGraphNode_Root_872928F44636E9893D5FCBB5B663AF30; // Offset: 0x1278 // Size: 0x50
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2B26394649D119CA62C435997CEBD75B; // Offset: 0x12c8 // Size: 0xe8
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_90DF423A4D91AAA32CDFF0AFA572FD4D; // Offset: 0x13b0 // Size: 0xc0
	float SteerRoll; // Offset: 0x1470 // Size: 0x04
	struct FRotator BodyRot; // Offset: 0x1474 // Size: 0x0c
	float AD_Alpha; // Offset: 0x1480 // Size: 0x04
	struct FVector LastVelocity; // Offset: 0x1484 // Size: 0x0c
	struct FVector EF; // Offset: 0x1490 // Size: 0x0c

	// Functions

	// Object Name: Function VH_MotorcycleCart_AnimBP.VH_MotorcycleCart_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_MotorcycleCart_AnimBP_AnimGraphNode_ModifyBone_90DF423A4D91AAA32CDFF0AFA572FD4D
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_MotorcycleCart_AnimBP_AnimGraphNode_ModifyBone_90DF423A4D91AAA32CDFF0AFA572FD4D(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_MotorcycleCart_AnimBP.VH_MotorcycleCart_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_MotorcycleCart_AnimBP_AnimGraphNode_ModifyBone_680729AC40DA6E5FD48BC0AF82418A58
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_MotorcycleCart_AnimBP_AnimGraphNode_ModifyBone_680729AC40DA6E5FD48BC0AF82418A58(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_MotorcycleCart_AnimBP.VH_MotorcycleCart_AnimBP_C.ExecuteUbergraph_VH_MotorcycleCart_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_MotorcycleCart_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

