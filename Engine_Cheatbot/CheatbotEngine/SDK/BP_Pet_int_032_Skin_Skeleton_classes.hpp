#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass BP_Pet_int_032_Skin_Skeleton.BP_Pet_int_032_Skin_Skeleton_C
// Size: 0x528 // Inherited bytes: 0x3f0
struct UBP_Pet_int_032_Skin_Skeleton_C : UAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3f0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_1C14E27D46BFB7AC318AE0910CFF50CD; // Offset: 0x3f8 // Size: 0x50
	struct FAnimNode_Slot AnimGraphNode_Slot_5F6615A6494BE0934BFFDEA3DD95DDB6; // Offset: 0x448 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EE0F72C6434B768526E3FD82C5CF4BB8; // Offset: 0x4b8 // Size: 0x70

	// Functions

	// Object Name: Function BP_Pet_int_032_Skin_Skeleton.BP_Pet_int_032_Skin_Skeleton_C.BlueprintUpdateAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintUpdateAnimation(float DeltaTimeX); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BP_Pet_int_032_Skin_Skeleton.BP_Pet_int_032_Skin_Skeleton_C.ExecuteUbergraph_BP_Pet_int_032_Skin_Skeleton
	// Flags: [None]
	void ExecuteUbergraph_BP_Pet_int_032_Skin_Skeleton(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

