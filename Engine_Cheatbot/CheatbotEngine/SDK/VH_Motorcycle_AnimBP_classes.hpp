#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C
// Size: 0x1758 // Inherited bytes: 0xc20
struct UVH_Motorcycle_AnimBP_C : UVehicleAnimInstanceMotorcycle {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xc20 // Size: 0x08
	char pad_0xC28[0x8]; // Offset: 0xc28 // Size: 0x08
	struct FAnimNode_LookAt AnimGraphNode_LookAt_88B06336400102E1061A0488FDF585D0; // Offset: 0xc30 // Size: 0x1a0
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_F5DBBED1463C2847AF627FAD64FAE4A5; // Offset: 0xdd0 // Size: 0xb0
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_C985E03E48300D088EA11C8D893BB46E; // Offset: 0xe80 // Size: 0xe8
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_CE57BFAC479504BE3E7A3EA359B9EB16; // Offset: 0xf68 // Size: 0xb0
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_286A52FC4541513341E1DD9441B4516D; // Offset: 0x1018 // Size: 0x90
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_688A741C452BC4569DF8919FDA57BFA8; // Offset: 0x10a8 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_28710ABD4D51A9C05D5B7E9B58D9EA32; // Offset: 0x10f8 // Size: 0xc0
	struct FAnimNode_Root AnimGraphNode_Root_5D360A9F4534B4CEC9821F934558C859; // Offset: 0x11b8 // Size: 0x50
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_11B3029345A26AFA8CED3DB081AE0F27; // Offset: 0x1208 // Size: 0x38
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0CEB68CB44F9F56D0C6DB597A39539E0; // Offset: 0x1240 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_0DD67D6549E8B652D21394A3D33B3029; // Offset: 0x1290 // Size: 0xc0
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ECAC73EE4673C72590E21396CF0A6106; // Offset: 0x1350 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3621A64440B71A6B199CE9B19B3D3D00; // Offset: 0x13a0 // Size: 0xc0
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler_7ED86CCF46B7A7D78B1707A772F9AE11; // Offset: 0x1460 // Size: 0x90
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_9DEA6C4B43F8EA5FAC6B67BFB948AA29; // Offset: 0x14f0 // Size: 0x38
	struct FAnimNode_Root AnimGraphNode_StateResult_6E7BBE14485F53E050E240BCD970BFAE; // Offset: 0x1528 // Size: 0x50
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_CE84F2394E900E72B4A46D8CEB9EF247; // Offset: 0x1578 // Size: 0xd8
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_D308E09248EFC85C404981A45059DCA4; // Offset: 0x1650 // Size: 0xd0
	struct ASTExtraWheeledVehicle* BikeRef; // Offset: 0x1720 // Size: 0x08
	struct FRotator BodyRot; // Offset: 0x1728 // Size: 0x0c
	struct FVector LastVelocity; // Offset: 0x1734 // Size: 0x0c
	struct FVector EF; // Offset: 0x1740 // Size: 0x0c
	float ADAlpha; // Offset: 0x174c // Size: 0x04
	struct UVehicleMotorbikeComponent* BikeMotorbikeRef; // Offset: 0x1750 // Size: 0x08

	// Functions

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.TickPose
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void TickPose(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_3621A64440B71A6B199CE9B19B3D3D00
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_3621A64440B71A6B199CE9B19B3D3D00(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_0DD67D6549E8B652D21394A3D33B3029
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_0DD67D6549E8B652D21394A3D33B3029(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_BlendListByBool_D308E09248EFC85C404981A45059DCA4
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_BlendListByBool_D308E09248EFC85C404981A45059DCA4(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_28710ABD4D51A9C05D5B7E9B58D9EA32
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_Motorcycle_AnimBP_AnimGraphNode_ModifyBone_28710ABD4D51A9C05D5B7E9B58D9EA32(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.BlueprintUpdateAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintUpdateAnimation(float DeltaTimeX); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VH_Motorcycle_AnimBP.VH_Motorcycle_AnimBP_C.ExecuteUbergraph_VH_Motorcycle_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_Motorcycle_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

