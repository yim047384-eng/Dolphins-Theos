#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass VH_PG117_AnimBP.VH_PG117_AnimBP_C
// Size: 0xf00 // Inherited bytes: 0xbb0
struct UVH_PG117_AnimBP_C : USTVehicleAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0xbb0 // Size: 0x08
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_E1FA843C4D19BCA34ED6C0B6D4475991; // Offset: 0xbb8 // Size: 0x38
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_C8E1F6C84414027B6BE38992AC5EABA0; // Offset: 0xbf0 // Size: 0xc0
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_84C4FA0D410B6187AB41409890A33135; // Offset: 0xcb0 // Size: 0x50
	struct FAnimNode_Root AnimGraphNode_Root_9D544144464D8AD1FD9D928B724AF329; // Offset: 0xd00 // Size: 0x50
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4883723B413D78833A133B958C4CBFDB; // Offset: 0xd50 // Size: 0xc0
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_518864324F6C77AB200624B7535906A7; // Offset: 0xe10 // Size: 0xc0
	float SteeringWheelAngle; // Offset: 0xed0 // Size: 0x04
	float RudderAngle; // Offset: 0xed4 // Size: 0x04
	float PropellerRotation; // Offset: 0xed8 // Size: 0x04
	struct FRotator RudderRot; // Offset: 0xedc // Size: 0x0c
	struct FRotator SteeringWheelRot; // Offset: 0xee8 // Size: 0x0c
	struct FRotator PropellerRot; // Offset: 0xef4 // Size: 0x0c

	// Functions

	// Object Name: Function VH_PG117_AnimBP.VH_PG117_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_4883723B413D78833A133B958C4CBFDB
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_4883723B413D78833A133B958C4CBFDB(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_PG117_AnimBP.VH_PG117_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_518864324F6C77AB200624B7535906A7
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_518864324F6C77AB200624B7535906A7(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_PG117_AnimBP.VH_PG117_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_C8E1F6C84414027B6BE38992AC5EABA0
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VH_PG117_AnimBP_AnimGraphNode_ModifyBone_C8E1F6C84414027B6BE38992AC5EABA0(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function VH_PG117_AnimBP.VH_PG117_AnimBP_C.BlueprintUpdateAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintUpdateAnimation(float DeltaTimeX); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function VH_PG117_AnimBP.VH_PG117_AnimBP_C.ExecuteUbergraph_VH_PG117_AnimBP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_VH_PG117_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

