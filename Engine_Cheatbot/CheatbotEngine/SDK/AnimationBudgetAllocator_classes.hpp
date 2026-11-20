#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Offset: 0x101ab8300 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Offset: 0x101ab8248 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0x1370 // Inherited bytes: 0x1350
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	// Fields
	char pad_0x1350[0x18]; // Offset: 0x1350 // Size: 0x18
	char bAutoRegisterWithBudgetAllocator : 1; // Offset: 0x1368 // Size: 0x01
	char bAutoCalculateSignificance : 1; // Offset: 0x1368 // Size: 0x01
	char bShouldUseActorRenderedFlag : 1; // Offset: 0x1368 // Size: 0x01
	char bKeepUpdateRateOptimizationWhenBudgeted : 1; // Offset: 0x1368 // Size: 0x01
	char pad_0x1368_4 : 4; // Offset: 0x1368 // Size: 0x01
	char pad_0x1369[0x7]; // Offset: 0x1369 // Size: 0x07

	// Functions

	// Object Name: Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Offset: 0x101ab85e8 // Return & Params: Num(1) Size(0x1)
};

