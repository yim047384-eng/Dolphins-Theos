#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: AnimBlueprintGeneratedClass AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C
// Size: 0x83a // Inherited bytes: 0x3f0
struct UAvatarOBInfo_AnimBP_C : UAnimInstance {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x3f0 // Size: 0x08
	struct FAnimNode_Root AnimGraphNode_Root_6FA1DF1A482C3E8047AC6292CCDC6545; // Offset: 0x3f8 // Size: 0x50
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_59657F1C47E4AACC9B52E4B71F06EE72; // Offset: 0x448 // Size: 0x80
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72FBB08846E12EAAE175539687F94691; // Offset: 0x4c8 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0C28A15D4653BC332EF9EABDF267C61D; // Offset: 0x538 // Size: 0x70
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_CDEA98094A4BEA14D2FDDF934EC95159; // Offset: 0x5a8 // Size: 0xd0
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_EBB1B7BB4CD10FD609DDF7B73FD150A6; // Offset: 0x678 // Size: 0xd0
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4DC057E44332EA59B447AAAD6BE22880; // Offset: 0x748 // Size: 0x70
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_348B6675447632C8A4B9C283731034A9; // Offset: 0x7b8 // Size: 0x70
	struct UAnimSequenceBase* WeaponAnimPose; // Offset: 0x828 // Size: 0x08
	struct UAnimSequenceBase* WeaponAnimAdd; // Offset: 0x830 // Size: 0x08
	bool IsEquipWeapon; // Offset: 0x838 // Size: 0x01
	bool IsMale; // Offset: 0x839 // Size: 0x01

	// Functions

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.SetWeaponAnim
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetWeaponAnim(IntProperty WeaponResID, struct AAvatarCapture_BP_C* AvatarCapture); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_BlendListByBool_CDEA98094A4BEA14D2FDDF934EC95159
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_BlendListByBool_CDEA98094A4BEA14D2FDDF934EC95159(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_BlendListByBool_EBB1B7BB4CD10FD609DDF7B73FD150A6
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_BlendListByBool_EBB1B7BB4CD10FD609DDF7B73FD150A6(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_SequencePlayer_0C28A15D4653BC332EF9EABDF267C61D
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_SequencePlayer_0C28A15D4653BC332EF9EABDF267C61D(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_SequencePlayer_72FBB08846E12EAAE175539687F94691
	// Flags: [BlueprintEvent]
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarOBInfo_AnimBP_AnimGraphNode_SequencePlayer_72FBB08846E12EAAE175539687F94691(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.BlueprintInitializeAnimation
	// Flags: [Event|Public|BlueprintEvent]
	void BlueprintInitializeAnimation(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.OnWeaponAnimBlend
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnWeaponAnimBlend(IntProperty WeaponResID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AvatarOBInfo_AnimBP.AvatarOBInfo_AnimBP_C.ExecuteUbergraph_AvatarOBInfo_AnimBP
	// Flags: [None]
	void ExecuteUbergraph_AvatarOBInfo_AnimBP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

