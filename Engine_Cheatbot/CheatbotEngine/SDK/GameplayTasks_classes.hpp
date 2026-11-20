#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GameplayTasks.GameplayTasksComponent
// Size: 0x1f0 // Inherited bytes: 0x178
struct UGameplayTasksComponent : UActorComponent {
	// Fields
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08
	struct TArray<struct UGameplayTask*> SimulatedTasks; // Offset: 0x180 // Size: 0x10
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // Offset: 0x190 // Size: 0x10
	char pad_0x1A0[0x10]; // Offset: 0x1a0 // Size: 0x10
	struct TArray<struct UGameplayTask*> TickingTasks; // Offset: 0x1b0 // Size: 0x10
	struct TArray<struct UGameplayTask*> KnownTasks; // Offset: 0x1c0 // Size: 0x10
	char pad_0x1D0[0x8]; // Offset: 0x1d0 // Size: 0x08
	struct FScriptMulticastDelegate OnClaimedResourcesChange; // Offset: 0x1d8 // Size: 0x10
	char pad_0x1E8[0x8]; // Offset: 0x1e8 // Size: 0x08

	// Functions

	// Object Name: Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// Flags: [Final|Native|Public]
	void OnRep_SimulatedTasks(); // Offset: 0x1055c4f00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<Class> TaskOwner, struct UGameplayTask* Task, char Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources); // Offset: 0x1055c4cb0 // Return & Params: Num(6) Size(0x41)
};

// Object Name: Class GameplayTasks.GameplayTask
// Size: 0x60 // Inherited bytes: 0x28
struct UGameplayTask : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct FName InstanceName; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x2]; // Offset: 0x38 // Size: 0x02
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // Offset: 0x3a // Size: 0x01
	char pad_0x3B[0x1d]; // Offset: 0x3b // Size: 0x1d
	struct UGameplayTask* ChildTask; // Offset: 0x58 // Size: 0x08

	// Functions

	// Object Name: Function GameplayTasks.GameplayTask.ReadyForActivation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReadyForActivation(); // Offset: 0x1055c3a5c // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void GenericGameplayTaskDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function GameplayTasks.GameplayTask.EndTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EndTask(); // Offset: 0x1055c3a48 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x60 // Inherited bytes: 0x60
struct UGameplayTask_ClaimResource : UGameplayTask {
	// Functions

	// Object Name: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<Class> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, char Priority, struct FName TaskInstanceName); // Offset: 0x1055c3d14 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<Class> InTaskOwner, struct UGameplayTaskResource* ResourceClass, char Priority, struct FName TaskInstanceName); // Offset: 0x1055c3bd4 // Return & Params: Num(5) Size(0x30)
};

// Object Name: Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa0 // Inherited bytes: 0x60
struct UGameplayTask_SpawnActor : UGameplayTask {
	// Fields
	struct FScriptMulticastDelegate Success; // Offset: 0x60 // Size: 0x10
	struct FScriptMulticastDelegate DidNotSpawn; // Offset: 0x70 // Size: 0x10
	char pad_0x80[0x18]; // Offset: 0x80 // Size: 0x18
	struct AActor* ClassToSpawn; // Offset: 0x98 // Size: 0x08

	// Functions

	// Object Name: Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<Class> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // Offset: 0x1055c4254 // Return & Params: Num(6) Size(0x40)

	// Object Name: Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// Flags: [Native|Public|BlueprintCallable]
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Offset: 0x1055c4198 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor); // Offset: 0x1055c40b8 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x90 // Inherited bytes: 0x60
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	// Fields
	struct FScriptMulticastDelegate OnFinished; // Offset: 0x60 // Size: 0x10
	struct FScriptMulticastDelegate OnTimeExpired; // Offset: 0x70 // Size: 0x10
	char pad_0x80[0x10]; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x78 // Inherited bytes: 0x60
struct UGameplayTask_WaitDelay : UGameplayTask {
	// Fields
	struct FScriptMulticastDelegate OnFinish; // Offset: 0x60 // Size: 0x10
	char pad_0x70[0x8]; // Offset: 0x70 // Size: 0x08

	// Functions

	// Object Name: Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<Class> TaskOwner, float Time, char Priority); // Offset: 0x1055c47b0 // Return & Params: Num(4) Size(0x20)

	// Object Name: DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void TaskDelayDelegate__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGameplayTaskOwnerInterface : UInterface {
};

// Object Name: Class GameplayTasks.GameplayTaskResource
// Size: 0x30 // Inherited bytes: 0x28
struct UGameplayTaskResource : UObject {
	// Fields
	IntProperty ManualResourceID; // Offset: 0x28 // Size: 0x04
	uint8_t AutoResourceID; // Offset: 0x2c // Size: 0x01
	char bManuallySetID : 1; // Offset: 0x2d // Size: 0x01
	char pad_0x2D_1 : 7; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
};

