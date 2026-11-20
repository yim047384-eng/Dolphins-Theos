#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass ABP_LootTruck.ABP_LootTruck_C
// Size: 0x1489 // Inherited bytes: 0xbb0
struct UABP_LootTruck_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_360798F14B74DCEA916AAA821EA74CEC; // Offset: 0xbb8 // Size: 0x50
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_86F137E947406C762BECA5AC7CACDEBD; // Offset: 0xc08 // Size: 0x90
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_DCB02C394738165D9B4416B1F9780274; // Offset: 0xc98 // Size: 0x38
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_974C96F84C5D2C1221D3908A222FF5AD; // Offset: 0xcd0 // Size: 0x2c0
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_303846664D0F9E0A47A2F2B9B3B9C04F; // Offset: 0xf90 // Size: 0x2c0
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_56EC6324464109C4E01A9A9EE5047505; // Offset: 0x1250 // Size: 0xd0
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_D8375A34476EB9262A1B8EB1EEA18998; // Offset: 0x1320 // Size: 0x38
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5482B79E4C5852B865A265A2E58FB9DA; // Offset: 0x1358 // Size: 0x50
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C3C2A263482FCC6ADEAAB19718AE3F14; // Offset: 0x13a8 // Size: 0x50
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_ACF3120D4B1AE081334ED4BEC29BA55D; // Offset: 0x13f8 // Size: 0x90
	bool IsDoorOpen; // Offset: 0x1488 // Size: 0x01

	// Functions

	// Object Name: Function ABP_LootTruck.ABP_LootTruck_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LootTruck_AnimGraphNode_BlendListByBool_56EC6324464109C4E01A9A9EE5047505
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LootTruck_AnimGraphNode_BlendListByBool_56EC6324464109C4E01A9A9EE5047505(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function ABP_LootTruck.ABP_LootTruck_C.ExecuteUbergraph_ABP_LootTruck
	// Flags: [None]
	void ExecuteUbergraph_ABP_LootTruck(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

