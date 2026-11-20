#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C
// Size: 0x798 // Inherited bytes: 0x400
struct UCH_MainChar_Anim_BP_C : UMainCharAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x400 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_29FBB5C84AA95043DE3725AA9FAB5D9B; // Offset: 0x408 // Size: 0x50
	bool __SUBINSTANCE_bIsFPPAnimInstace_1E6668964E4BAA438CD5A3958631C7E0; // Offset: 0x458 // Size: 0x01
	char pad_0x459[0x7]; // Offset: 0x459 // Size: 0x07
	struct FAnimNode_SubInstance AnimGraphNode_SubInstance_1E6668964E4BAA438CD5A3958631C7E0; // Offset: 0x460 // Size: 0xf8
	bool __SUBINSTANCE_bIsFPPAnimInstace_C9C6D110426F05EEF79F0EA47F0A00F3; // Offset: 0x558 // Size: 0x01
	char pad_0x559[0x7]; // Offset: 0x559 // Size: 0x07
	struct FAnimNode_SubInstance AnimGraphNode_SubInstance_C9C6D110426F05EEF79F0EA47F0A00F3; // Offset: 0x560 // Size: 0xf8
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042; // Offset: 0x658 // Size: 0xd0
	struct FAnimNode_Slot AnimGraphNode_Slot_BB6C36284ACBE90B274152B2D2F8DBA6; // Offset: 0x728 // Size: 0x70

	// Functions

	// Object Name: Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CH_MainChar_Anim_BP_AnimGraphNode_BlendListByBool_2E47FBFF49F72ABC9D5C60B35FCBF042(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CH_MainChar_Anim_BP.CH_MainChar_Anim_BP_C.ExecuteUbergraph_CH_MainChar_Anim_BP
	// Flags: [None]
	void ExecuteUbergraph_CH_MainChar_Anim_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

