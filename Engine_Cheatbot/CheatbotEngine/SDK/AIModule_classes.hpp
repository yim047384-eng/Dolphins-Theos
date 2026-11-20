#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AIModule.BTNode
// Size: 0x58 // Inherited bytes: 0x28
struct UBTNode : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	StrProperty NodeName; // Offset: 0x30 // Size: 0x10
	struct UBehaviorTree* TreeAsset; // Offset: 0x40 // Size: 0x08
	struct UBTCompositeNode* ParentNode; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x8]; // Offset: 0x50 // Size: 0x08
};

// Object Name: Class AIModule.BTAuxiliaryNode
// Size: 0x58 // Inherited bytes: 0x58
struct UBTAuxiliaryNode : UBTNode {
};

// Object Name: Class AIModule.BTDecorator
// Size: 0x60 // Inherited bytes: 0x58
struct UBTDecorator : UBTAuxiliaryNode {
	// Fields
	char pad_0x58_0 : 7; // Offset: 0x58 // Size: 0x01
	char bInverseCondition : 1; // Offset: 0x58 // Size: 0x01
	enum class EBTFlowAbortMode FlowAbortMode; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
};

// Object Name: Class AIModule.BTService
// Size: 0x68 // Inherited bytes: 0x58
struct UBTService : UBTAuxiliaryNode {
	// Fields
	float Interval; // Offset: 0x58 // Size: 0x04
	float RandomDeviation; // Offset: 0x5c // Size: 0x04
	char bCallTickOnSearchStart : 1; // Offset: 0x60 // Size: 0x01
	char bRestartTimerOnEachActivation : 1; // Offset: 0x60 // Size: 0x01
	char pad_0x60_2 : 6; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
};

// Object Name: Class AIModule.BTTaskNode
// Size: 0x70 // Inherited bytes: 0x58
struct UBTTaskNode : UBTNode {
	// Fields
	struct TArray<struct UBTService*> Services; // Offset: 0x58 // Size: 0x10
	char bIgnoreRestartSelf : 1; // Offset: 0x68 // Size: 0x01
	char pad_0x68_1 : 7; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x7]; // Offset: 0x69 // Size: 0x07
};

// Object Name: Class AIModule.AIController
// Size: 0x5b8 // Inherited bytes: 0x518
struct AAIController : AController {
	// Fields
	char pad_0x518[0x38]; // Offset: 0x518 // Size: 0x38
	char bStopAILogicOnUnposses : 1; // Offset: 0x550 // Size: 0x01
	char bLOSflag : 1; // Offset: 0x550 // Size: 0x01
	char bSkipExtraLOSChecks : 1; // Offset: 0x550 // Size: 0x01
	char bAllowStrafe : 1; // Offset: 0x550 // Size: 0x01
	char bWantsPlayerState : 1; // Offset: 0x550 // Size: 0x01
	char bSetControlRotationFromPawnOrientation : 1; // Offset: 0x550 // Size: 0x01
	char pad_0x550_6 : 2; // Offset: 0x550 // Size: 0x01
	char pad_0x551[0x7]; // Offset: 0x551 // Size: 0x07
	struct UPathFollowingComponent* PathFollowingComponent; // Offset: 0x558 // Size: 0x08
	struct UBrainComponent* BrainComponent; // Offset: 0x560 // Size: 0x08
	struct UAIPerceptionComponent* PerceptionComponent; // Offset: 0x568 // Size: 0x08
	struct UPawnActionsComponent* ActionsComp; // Offset: 0x570 // Size: 0x08
	struct UBlackboardComponent* Blackboard; // Offset: 0x578 // Size: 0x08
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // Offset: 0x580 // Size: 0x08
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // Offset: 0x588 // Size: 0x08
	struct FScriptMulticastDelegate ReceiveMoveCompleted; // Offset: 0x590 // Size: 0x10
	char pad_0x5A0[0x1]; // Offset: 0x5a0 // Size: 0x01
	bool UseGameplayTasksComponent; // Offset: 0x5a1 // Size: 0x01
	bool bShareNavigationSystem; // Offset: 0x5a2 // Size: 0x01
	char pad_0x5A3[0x1]; // Offset: 0x5a3 // Size: 0x01
	struct FVector ShareNavSysOffset; // Offset: 0x5a4 // Size: 0x0c
	bool bEnableActiveRegion; // Offset: 0x5b0 // Size: 0x01
	char pad_0x5B1[0x7]; // Offset: 0x5b1 // Size: 0x07

	// Functions

	// Object Name: Function AIModule.AIController.UseBlackboard
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Offset: 0x10563cae4 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AIModule.AIController.UnclaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Offset: 0x10563ca68 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.SetMoveBlockDetection
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMoveBlockDetection(bool bEnable); // Offset: 0x10563c9e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.AIController.RunBehaviorTree
	// Flags: [Native|Public|BlueprintCallable]
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Offset: 0x10563c950 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.AIController.OnUsingBlackBoard
	// Flags: [Event|Protected|BlueprintEvent]
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AIController.OnUnpossess
	// Flags: [Event|Public|BlueprintEvent]
	void OnUnpossess(struct APawn* UnpossessedPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.OnPossess
	// Flags: [Event|Public|BlueprintEvent]
	void OnPossess(struct APawn* PossessedPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	// Flags: [Native|Public]
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Offset: 0x10563c890 // Return & Params: Num(2) Size(0x4)

	// Object Name: Function AIModule.AIController.MoveToLocation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Offset: 0x10563c61c // Return & Params: Num(9) Size(0x22)

	// Object Name: Function AIModule.AIController.MoveToActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Offset: 0x10563c400 // Return & Params: Num(8) Size(0x1a)

	// Object Name: Function AIModule.AIController.K2_SetFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void K2_SetFocus(struct AActor* NewFocus); // Offset: 0x10563c384 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.K2_SetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void K2_SetFocalPoint(struct FVector FP); // Offset: 0x10563c308 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AIModule.AIController.K2_ClearFocus
	// Flags: [Final|Native|Public|BlueprintCallable]
	void K2_ClearFocus(); // Offset: 0x10563c2f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.AIController.HasPartialPath
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasPartialPath(); // Offset: 0x10563c2c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.AIController.GetPathFollowingComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Offset: 0x10563c2a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.GetMoveStatus
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EPathFollowingStatus GetMoveStatus(); // Offset: 0x10563c270 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.AIController.GetImmediateMoveDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetImmediateMoveDestination(); // Offset: 0x10563c238 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AIModule.AIController.GetFocusActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetFocusActor(); // Offset: 0x10563c204 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.GetFocalPointOnActor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Offset: 0x10563c16c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.AIController.GetFocalPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetFocalPoint(); // Offset: 0x10563c134 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AIModule.AIController.GetAIPerceptionComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Offset: 0x10563c118 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIController.ClaimTaskResource
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Offset: 0x10563c09c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AIModule.BTService_BlackboardBase
// Size: 0x90 // Inherited bytes: 0x68
struct UBTService_BlackboardBase : UBTService {
	// Fields
	struct FBlackboardKeySelector BlackboardKey; // Offset: 0x68 // Size: 0x28
};

// Object Name: Class AIModule.BTTask_BlackboardBase
// Size: 0x98 // Inherited bytes: 0x70
struct UBTTask_BlackboardBase : UBTTaskNode {
	// Fields
	struct FBlackboardKeySelector BlackboardKey; // Offset: 0x70 // Size: 0x28
};

// Object Name: Class AIModule.BTTask_MoveTo
// Size: 0xb0 // Inherited bytes: 0x98
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	// Fields
	float AcceptableRadius; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
	struct UNavigationQueryFilter* FilterClass; // Offset: 0xa0 // Size: 0x08
	float ObservedBlackboardValueTolerance; // Offset: 0xa8 // Size: 0x04
	char bObserveBlackboardValue : 1; // Offset: 0xac // Size: 0x01
	char bAllowStrafe : 1; // Offset: 0xac // Size: 0x01
	char bAllowPartialPath : 1; // Offset: 0xac // Size: 0x01
	char bTrackMovingGoal : 1; // Offset: 0xac // Size: 0x01
	char bProjectGoalLocation : 1; // Offset: 0xac // Size: 0x01
	char bReachTestIncludesAgentRadius : 1; // Offset: 0xac // Size: 0x01
	char bReachTestIncludesGoalRadius : 1; // Offset: 0xac // Size: 0x01
	char bStopOnOverlap : 1; // Offset: 0xac // Size: 0x01
	char bStopOnOverlapNeedsUpdate : 1; // Offset: 0xad // Size: 0x01
	char pad_0xAD_1 : 7; // Offset: 0xad // Size: 0x01
	char pad_0xAE[0x2]; // Offset: 0xae // Size: 0x02
};

// Object Name: Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xb0 // Inherited bytes: 0xb0
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	// Fields
	char bDisablePathUpdateOnGoalLocationChange : 1; // Offset: 0xae // Size: 0x01
	char bProjectVectorGoalToNavigation : 1; // Offset: 0xae // Size: 0x01
	char bUpdatedDeprecatedProperties : 1; // Offset: 0xae // Size: 0x01
};

// Object Name: Class AIModule.BlackboardComponent
// Size: 0x270 // Inherited bytes: 0x178
struct UBlackboardComponent : UActorComponent {
	// Fields
	struct UBrainComponent* BrainComp; // Offset: 0x178 // Size: 0x08
	struct UBlackboardData* BlackboardAsset; // Offset: 0x180 // Size: 0x08
	char pad_0x188[0x20]; // Offset: 0x188 // Size: 0x20
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // Offset: 0x1a8 // Size: 0x10
	char pad_0x1B8[0xb8]; // Offset: 0x1b8 // Size: 0xb8

	// Functions

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsVector
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Offset: 0x105647bd8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsString
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(struct FName& KeyName, StrProperty StringValue); // Offset: 0x105647a94 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsRotator
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(struct FName& KeyName, struct FRotator RotatorValue); // Offset: 0x1056479bc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsObject
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Offset: 0x1056478e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsName
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Offset: 0x10564780c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsInt
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(struct FName& KeyName, IntProperty IntValue); // Offset: 0x105647734 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsFloat
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Offset: 0x10564765c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsEnum
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Offset: 0x105647584 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsClass
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Offset: 0x1056474ac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.SetValueAsBool
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Offset: 0x1056473cc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BlackboardComponent.IsVectorValueSet
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsVectorValueSet(struct FName& KeyName); // Offset: 0x105647330 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetValueAsVector(struct FName& KeyName); // Offset: 0x105647290 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetValueAsString(struct FName& KeyName); // Offset: 0x1056471cc // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Offset: 0x10564712c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsObject(struct FName& KeyName); // Offset: 0x105647090 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FName GetValueAsName(struct FName& KeyName); // Offset: 0x105646ff4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetValueAsInt(struct FName& KeyName); // Offset: 0x105646f58 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	float GetValueAsFloat(struct FName& KeyName); // Offset: 0x105646ebc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	char GetValueAsEnum(struct FName& KeyName); // Offset: 0x105646e20 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsClass(struct FName& KeyName); // Offset: 0x105646d84 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BlackboardComponent.GetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetValueAsBool(struct FName& KeyName); // Offset: 0x105646ce8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BlackboardComponent.GetRotationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Offset: 0x105646c04 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function AIModule.BlackboardComponent.GetLocationFromEntry
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Offset: 0x105646b20 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function AIModule.BlackboardComponent.ClearValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ClearValue(struct FName& KeyName); // Offset: 0x105646a94 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AIModule.PathFollowingComponent
// Size: 0x348 // Inherited bytes: 0x178
struct UPathFollowingComponent : UActorComponent {
	// Fields
	char pad_0x178[0x48]; // Offset: 0x178 // Size: 0x48
	struct UNavMovementComponent* MovementComp; // Offset: 0x1c0 // Size: 0x08
	char pad_0x1C8[0x8]; // Offset: 0x1c8 // Size: 0x08
	struct ANavigationData* MyNavData; // Offset: 0x1d0 // Size: 0x08
	char pad_0x1D8[0x170]; // Offset: 0x1d8 // Size: 0x170

	// Functions

	// Object Name: Function AIModule.PathFollowingComponent.OnNavDataRegistered
	// Flags: [Final|Native|Protected]
	void OnNavDataRegistered(struct ANavigationData* NavData); // Offset: 0x10565f84c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.PathFollowingComponent.OnActorBump
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x10565f6f8 // Return & Params: Num(4) Size(0xa8)

	// Object Name: Function AIModule.PathFollowingComponent.GetPathDestination
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetPathDestination(); // Offset: 0x10565f6c0 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AIModule.PathFollowingComponent.GetPathActionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EPathFollowingAction GetPathActionType(); // Offset: 0x10565f68c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AIModule.AISense
// Size: 0x80 // Inherited bytes: 0x28
struct UAISense : UObject {
	// Fields
	float DefaultExpirationAge; // Offset: 0x28 // Size: 0x04
	enum class EAISenseNotifyType NotifyType; // Offset: 0x2c // Size: 0x01
	char bWantsNewPawnNotification : 1; // Offset: 0x2d // Size: 0x01
	char bAutoRegisterAllPawnsAsSources : 1; // Offset: 0x2d // Size: 0x01
	char pad_0x2D_2 : 6; // Offset: 0x2d // Size: 0x01
	char pad_0x2E[0x2]; // Offset: 0x2e // Size: 0x02
	struct UAIPerceptionSystem* PerceptionSystemInstance; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x48]; // Offset: 0x38 // Size: 0x48
};

// Object Name: Class AIModule.AISenseConfig
// Size: 0x48 // Inherited bytes: 0x28
struct UAISenseConfig : UObject {
	// Fields
	struct FColor DebugColor; // Offset: 0x28 // Size: 0x04
	float MaxAge; // Offset: 0x2c // Size: 0x04
	char bStartsEnabled : 1; // Offset: 0x30 // Size: 0x01
	char pad_0x30_1 : 7; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x17]; // Offset: 0x31 // Size: 0x17
};

// Object Name: Class AIModule.AISenseEvent
// Size: 0x28 // Inherited bytes: 0x28
struct UAISenseEvent : UObject {
};

// Object Name: Class AIModule.CrowdFollowingComponent
// Size: 0x398 // Inherited bytes: 0x348
struct UCrowdFollowingComponent : UPathFollowingComponent {
	// Fields
	char pad_0x348[0x8]; // Offset: 0x348 // Size: 0x08
	struct FVector CrowdAgentMoveDirection; // Offset: 0x350 // Size: 0x0c
	char pad_0x35C[0x4]; // Offset: 0x35c // Size: 0x04
	struct UCharacterMovementComponent* CharacterMovement; // Offset: 0x360 // Size: 0x08
	struct FNavAvoidanceMask AvoidanceGroup; // Offset: 0x368 // Size: 0x04
	struct FNavAvoidanceMask GroupsToAvoid; // Offset: 0x36c // Size: 0x04
	struct FNavAvoidanceMask GroupsToIgnore; // Offset: 0x370 // Size: 0x04
	char pad_0x374[0x24]; // Offset: 0x374 // Size: 0x24

	// Functions

	// Object Name: Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// Flags: [Native|Public|BlueprintCallable]
	void SuspendCrowdSteering(bool bSuspend); // Offset: 0x10565377c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AIModule.CrowdManager
// Size: 0xf8 // Inherited bytes: 0x28
struct UCrowdManager : UCrowdManagerBase {
	// Fields
	char EnabledCrowd : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct ANavigationData* MyNavData; // Offset: 0x30 // Size: 0x08
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // Offset: 0x48 // Size: 0x10
	IntProperty MaxAgents; // Offset: 0x58 // Size: 0x04
	float MaxAgentRadius; // Offset: 0x5c // Size: 0x04
	IntProperty MaxAvoidedAgents; // Offset: 0x60 // Size: 0x04
	IntProperty MaxAvoidedWalls; // Offset: 0x64 // Size: 0x04
	float NavmeshCheckInterval; // Offset: 0x68 // Size: 0x04
	float PathOptimizationInterval; // Offset: 0x6c // Size: 0x04
	float SeparationDirClamp; // Offset: 0x70 // Size: 0x04
	float PathOffsetRadiusMultiplier; // Offset: 0x74 // Size: 0x04
	char pad_0x78_0 : 4; // Offset: 0x78 // Size: 0x01
	char bResolveCollisions : 1; // Offset: 0x78 // Size: 0x01
	char pad_0x78_5 : 3; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7f]; // Offset: 0x79 // Size: 0x7f
};

// Object Name: Class AIModule.BrainComponent
// Size: 0x1d8 // Inherited bytes: 0x178
struct UBrainComponent : UActorComponent {
	// Fields
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08
	struct UBlackboardComponent* BlackboardComp; // Offset: 0x180 // Size: 0x08
	struct AAIController* AIOwner; // Offset: 0x188 // Size: 0x08
	char pad_0x190[0x48]; // Offset: 0x190 // Size: 0x48

	// Functions

	// Object Name: Function AIModule.BrainComponent.StopLogic
	// Flags: [Native|Public|BlueprintCallable]
	void StopLogic(StrProperty Reason); // Offset: 0x105649488 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.BrainComponent.RestartLogic
	// Flags: [Native|Public|BlueprintCallable]
	void RestartLogic(); // Offset: 0x10564946c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.BrainComponent.IsRunning
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsRunning(); // Offset: 0x105649430 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.BrainComponent.IsPaused
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPaused(); // Offset: 0x1056493f4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AIModule.BehaviorTreeComponent
// Size: 0x310 // Inherited bytes: 0x1d8
struct UBehaviorTreeComponent : UBrainComponent {
	// Fields
	char pad_0x1D8[0x20]; // Offset: 0x1d8 // Size: 0x20
	struct TArray<struct UBTNode*> NodeInstances; // Offset: 0x1f8 // Size: 0x10
	char pad_0x208[0x108]; // Offset: 0x208 // Size: 0x108

	// Functions

	// Object Name: Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// Flags: [Native|Public|BlueprintCallable]
	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Offset: 0x1056462f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Offset: 0x10564626c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Offset: 0x105646170 // Return & Params: Num(3) Size(0xd)
};

// Object Name: Class AIModule.BTDecorator_BlackboardBase
// Size: 0x88 // Inherited bytes: 0x60
struct UBTDecorator_BlackboardBase : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector BlackboardKey; // Offset: 0x60 // Size: 0x28
};

// Object Name: Class AIModule.BTDecorator_Cooldown
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_Cooldown : UBTDecorator {
	// Fields
	float CoolDownTime; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AIModule.BTService_DefaultFocus
// Size: 0x98 // Inherited bytes: 0x90
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	// Fields
	char FocusPriority; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
};

// Object Name: Class AIModule.BTTask_Wait
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_Wait : UBTTaskNode {
	// Fields
	float WaitTime; // Offset: 0x6c // Size: 0x04
	float RandomDeviation; // Offset: 0x70 // Size: 0x04
};

// Object Name: Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x68 // Inherited bytes: 0x28
struct UAIAsyncTaskBlueprintProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFail; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x20]; // Offset: 0x48 // Size: 0x20

	// Functions

	// Object Name: Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// Flags: [Final|Native|Public]
	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Offset: 0x10563af74 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class AIModule.AIBlueprintHelperLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Offset: 0x10563b9f8 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail); // Offset: 0x10563b84c // Return & Params: Num(7) Size(0x40)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Offset: 0x10563b720 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// Flags: [Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable]
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Offset: 0x10563b624 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	bool IsValidAIRotation(struct FRotator Rotation); // Offset: 0x10563b5a8 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	bool IsValidAILocation(struct FVector Location); // Offset: 0x10563b52c // Return & Params: Num(2) Size(0xd)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	bool IsValidAIDirection(struct FVector DirectionVector); // Offset: 0x10563b4b0 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Offset: 0x10563b434 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Offset: 0x10563b3b8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.GetAIController
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Offset: 0x10563b33c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Offset: 0x10563b18c // Return & Params: Num(7) Size(0x38)
};

// Object Name: Class AIModule.AIDataProvider
// Size: 0x28 // Inherited bytes: 0x28
struct UAIDataProvider : UObject {
};

// Object Name: Class AIModule.AIDataProvider_QueryParams
// Size: 0x40 // Inherited bytes: 0x28
struct UAIDataProvider_QueryParams : UAIDataProvider {
	// Fields
	struct FName ParamName; // Offset: 0x28 // Size: 0x08
	float FloatValue; // Offset: 0x30 // Size: 0x04
	IntProperty IntValue; // Offset: 0x34 // Size: 0x04
	bool BoolValue; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
};

// Object Name: Class AIModule.AIDataProvider_Random
// Size: 0x48 // Inherited bytes: 0x40
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	// Fields
	float Min; // Offset: 0x3c // Size: 0x04
	float Max; // Offset: 0x40 // Size: 0x04
	char bInteger : 1; // Offset: 0x44 // Size: 0x01
};

// Object Name: Class AIModule.AIHotSpotManager
// Size: 0x28 // Inherited bytes: 0x28
struct UAIHotSpotManager : UObject {
};

// Object Name: Class AIModule.AIPerceptionComponent
// Size: 0x250 // Inherited bytes: 0x178
struct UAIPerceptionComponent : UActorComponent {
	// Fields
	struct TArray<struct UAISenseConfig*> SensesConfig; // Offset: 0x178 // Size: 0x10
	struct UAISense* DominantSense; // Offset: 0x188 // Size: 0x08
	char pad_0x190[0x10]; // Offset: 0x190 // Size: 0x10
	struct AAIController* AIOwner; // Offset: 0x1a0 // Size: 0x08
	char pad_0x1A8[0x80]; // Offset: 0x1a8 // Size: 0x80
	struct FScriptMulticastDelegate OnPerceptionUpdated; // Offset: 0x228 // Size: 0x10
	struct FScriptMulticastDelegate OnTargetPerceptionUpdated; // Offset: 0x238 // Size: 0x10
	char pad_0x248[0x8]; // Offset: 0x248 // Size: 0x08

	// Functions

	// Object Name: Function AIModule.AIPerceptionComponent.SetSenseEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // Offset: 0x10563e358 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RequestStimuliListenerUpdate(); // Offset: 0x10563e344 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// Flags: [Final|Native|Public]
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Offset: 0x10563e28c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Offset: 0x10563e1e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.AIPerceptionComponent.GetPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Offset: 0x10563e100 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Offset: 0x10563e01c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Offset: 0x10563df38 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function AIModule.AIPerceptionComponent.GetActorsPerception
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Offset: 0x10563de38 // Return & Params: Num(3) Size(0x29)
};

// Object Name: Class AIModule.AIPerceptionListenerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAIPerceptionListenerInterface : UInterface {
};

// Object Name: Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x190 // Inherited bytes: 0x178
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	// Fields
	char bAutoRegisterAsSource : 1; // Offset: 0x178 // Size: 0x01
	char pad_0x178_1 : 7; // Offset: 0x178 // Size: 0x01
	char pad_0x179[0x7]; // Offset: 0x179 // Size: 0x07
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // Offset: 0x180 // Size: 0x10

	// Functions

	// Object Name: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterFromSense(struct UAISense* SenseClass); // Offset: 0x10563e91c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterFromPerceptionSystem(); // Offset: 0x10563e908 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterWithPerceptionSystem(); // Offset: 0x10563e8f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterForSense(struct UAISense* SenseClass); // Offset: 0x10563e878 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AIModule.AIPerceptionSystem
// Size: 0x130 // Inherited bytes: 0x28
struct UAIPerceptionSystem : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	struct TArray<struct UAISense*> Senses; // Offset: 0x80 // Size: 0x10
	float PerceptionAgingRate; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x9c]; // Offset: 0x94 // Size: 0x9c

	// Functions

	// Object Name: Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Offset: 0x10563eec8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AIPerceptionSystem.ReportEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Offset: 0x10563ee4c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // Offset: 0x10563ed5c // Return & Params: Num(4) Size(0x19)

	// Object Name: Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// Flags: [Final|Native|Protected]
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Offset: 0x10563eca4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Offset: 0x10563ebd8 // Return & Params: Num(3) Size(0x70)
};

// Object Name: Class AIModule.AIResourceInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAIResourceInterface : UInterface {
};

// Object Name: Class AIModule.AIResource_Movement
// Size: 0x30 // Inherited bytes: 0x30
struct UAIResource_Movement : UGameplayTaskResource {
};

// Object Name: Class AIModule.AIResource_Logic
// Size: 0x30 // Inherited bytes: 0x30
struct UAIResource_Logic : UGameplayTaskResource {
};

// Object Name: Class AIModule.AISense_Blueprint
// Size: 0xa8 // Inherited bytes: 0x80
struct UAISense_Blueprint : UAISense {
	// Fields
	struct UUserDefinedStruct* ListenerDataType; // Offset: 0x80 // Size: 0x08
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // Offset: 0x88 // Size: 0x10
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // Offset: 0x98 // Size: 0x10

	// Functions

	// Object Name: Function AIModule.AISense_Blueprint.OnUpdate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function AIModule.AISense_Blueprint.OnListenerUpdated
	// Flags: [Event|Public|BlueprintEvent]
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AISense_Blueprint.OnListenerUnregistered
	// Flags: [Event|Public|BlueprintEvent]
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AISense_Blueprint.OnListenerRegistered
	// Flags: [Event|Public|BlueprintEvent]
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.AISense_Blueprint.K2_OnNewPawn
	// Flags: [Event|Public|BlueprintEvent]
	void K2_OnNewPawn(struct APawn* NewPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.AISense_Blueprint.GetAllListenerComponents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Offset: 0x10563fac4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.AISense_Blueprint.GetAllListenerActors
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Offset: 0x10563fa1c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AIModule.AISense_Damage
// Size: 0x90 // Inherited bytes: 0x80
struct UAISense_Damage : UAISense {
	// Fields
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // Offset: 0x80 // Size: 0x10

	// Functions

	// Object Name: Function AIModule.AISense_Damage.ReportDamageEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Offset: 0x10563ff30 // Return & Params: Num(6) Size(0x34)
};

// Object Name: Class AIModule.AISense_Hearing
// Size: 0xe8 // Inherited bytes: 0x80
struct UAISense_Hearing : UAISense {
	// Fields
	struct TArray<struct FAINoiseEvent> NoiseEvents; // Offset: 0x80 // Size: 0x10
	float SpeedOfSoundSq; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x54]; // Offset: 0x94 // Size: 0x54

	// Functions

	// Object Name: Function AIModule.AISense_Hearing.ReportNoiseEvent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Offset: 0x1056402f4 // Return & Params: Num(6) Size(0x30)
};

// Object Name: Class AIModule.AISense_Prediction
// Size: 0x90 // Inherited bytes: 0x80
struct UAISense_Prediction : UAISense {
	// Fields
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // Offset: 0x80 // Size: 0x10

	// Functions

	// Object Name: Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Offset: 0x1056407a8 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Offset: 0x1056406c0 // Return & Params: Num(3) Size(0x14)
};

// Object Name: Class AIModule.AISense_Sight
// Size: 0x158 // Inherited bytes: 0x80
struct UAISense_Sight : UAISense {
	// Fields
	char pad_0x80[0xb0]; // Offset: 0x80 // Size: 0xb0
	IntProperty MaxTracesPerTick; // Offset: 0x130 // Size: 0x04
	IntProperty MinQueriesPerTimeSliceCheck; // Offset: 0x134 // Size: 0x04
	double MaxTimeSlicePerTick; // Offset: 0x138 // Size: 0x08
	float HighImportanceQueryDistanceThreshold; // Offset: 0x140 // Size: 0x04
	char pad_0x144[0x4]; // Offset: 0x144 // Size: 0x04
	float MaxQueryImportance; // Offset: 0x148 // Size: 0x04
	float SightLimitQueryImportance; // Offset: 0x14c // Size: 0x04
	char pad_0x150[0x8]; // Offset: 0x150 // Size: 0x08
};

// Object Name: Class AIModule.AISense_Team
// Size: 0x90 // Inherited bytes: 0x80
struct UAISense_Team : UAISense {
	// Fields
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class AIModule.AISense_Touch
// Size: 0x90 // Inherited bytes: 0x80
struct UAISense_Touch : UAISense {
	// Fields
	struct TArray<struct FAITouchEvent> RegisteredEvents; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class AIModule.AISenseBlueprintListener
// Size: 0xa8 // Inherited bytes: 0xa8
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Object Name: Class AIModule.AISenseConfig_Blueprint
// Size: 0x50 // Inherited bytes: 0x48
struct UAISenseConfig_Blueprint : UAISenseConfig {
	// Fields
	struct UAISense_Blueprint* Implementation; // Offset: 0x48 // Size: 0x08
};

// Object Name: Class AIModule.AISenseConfig_Damage
// Size: 0x50 // Inherited bytes: 0x48
struct UAISenseConfig_Damage : UAISenseConfig {
	// Fields
	struct UAISense_Damage* Implementation; // Offset: 0x48 // Size: 0x08
};

// Object Name: Class AIModule.AISenseConfig_Hearing
// Size: 0x60 // Inherited bytes: 0x48
struct UAISenseConfig_Hearing : UAISenseConfig {
	// Fields
	struct UAISense_Hearing* Implementation; // Offset: 0x48 // Size: 0x08
	float HearingRange; // Offset: 0x50 // Size: 0x04
	float LoSHearingRange; // Offset: 0x54 // Size: 0x04
	char bUseLoSHearing : 1; // Offset: 0x58 // Size: 0x01
	char pad_0x58_1 : 7; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x3]; // Offset: 0x59 // Size: 0x03
	struct FAISenseAffiliationFilter DetectionByAffiliation; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AIModule.AISenseConfig_Prediction
// Size: 0x48 // Inherited bytes: 0x48
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Object Name: Class AIModule.AISenseConfig_Sight
// Size: 0x68 // Inherited bytes: 0x48
struct UAISenseConfig_Sight : UAISenseConfig {
	// Fields
	struct UAISense_Sight* Implementation; // Offset: 0x48 // Size: 0x08
	float SightRadius; // Offset: 0x50 // Size: 0x04
	float LoseSightRadius; // Offset: 0x54 // Size: 0x04
	float PeripheralVisionAngleDegrees; // Offset: 0x58 // Size: 0x04
	struct FAISenseAffiliationFilter DetectionByAffiliation; // Offset: 0x5c // Size: 0x04
	float AutoSuccessRangeFromLastSeenLocation; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AIModule.AISenseConfig_Team
// Size: 0x48 // Inherited bytes: 0x48
struct UAISenseConfig_Team : UAISenseConfig {
};

// Object Name: Class AIModule.AISenseConfig_Touch
// Size: 0x48 // Inherited bytes: 0x48
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Object Name: Class AIModule.AISenseEvent_Damage
// Size: 0x58 // Inherited bytes: 0x28
struct UAISenseEvent_Damage : UAISenseEvent {
	// Fields
	struct FAIDamageEvent Event; // Offset: 0x28 // Size: 0x30
};

// Object Name: Class AIModule.AISenseEvent_Hearing
// Size: 0x58 // Inherited bytes: 0x28
struct UAISenseEvent_Hearing : UAISenseEvent {
	// Fields
	struct FAINoiseEvent Event; // Offset: 0x28 // Size: 0x30
};

// Object Name: Class AIModule.AISightTargetInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAISightTargetInterface : UInterface {
};

// Object Name: Class AIModule.AISystem
// Size: 0x128 // Inherited bytes: 0x50
struct UAISystem : UAISystemBase {
	// Fields
	struct FSoftClassPath PerceptionSystemClassName; // Offset: 0x50 // Size: 0x18
	struct FSoftClassPath HotSpotManagerClassName; // Offset: 0x68 // Size: 0x18
	float AcceptanceRadius; // Offset: 0x80 // Size: 0x04
	float PathfollowingRegularPathPointAcceptanceRadius; // Offset: 0x84 // Size: 0x04
	float PathfollowingNavLinkAcceptanceRadius; // Offset: 0x88 // Size: 0x04
	bool bFinishMoveOnGoalOverlap; // Offset: 0x8c // Size: 0x01
	bool bAcceptPartialPaths; // Offset: 0x8d // Size: 0x01
	bool bAllowStrafing; // Offset: 0x8e // Size: 0x01
	bool bEnableBTAITasks; // Offset: 0x8f // Size: 0x01
	bool bAllowControllersAsEQSQuerier; // Offset: 0x90 // Size: 0x01
	bool bEnableDebuggerPlugin; // Offset: 0x91 // Size: 0x01
	enum class ECollisionChannel DefaultSightCollisionChannel; // Offset: 0x92 // Size: 0x01
	char pad_0x93[0x5]; // Offset: 0x93 // Size: 0x05
	struct UBehaviorTreeManager* BehaviorTreeManager; // Offset: 0x98 // Size: 0x08
	struct UEnvQueryManager* EnvironmentQueryManager; // Offset: 0xa0 // Size: 0x08
	struct UAIPerceptionSystem* PerceptionSystem; // Offset: 0xa8 // Size: 0x08
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // Offset: 0xb0 // Size: 0x10
	struct UAIHotSpotManager* HotSpotManager; // Offset: 0xc0 // Size: 0x08
	struct UNavLocalGridManager* NavLocalGrids; // Offset: 0xc8 // Size: 0x08
	char pad_0xD0[0x58]; // Offset: 0xd0 // Size: 0x58

	// Functions

	// Object Name: Function AIModule.AISystem.AILoggingVerbose
	// Flags: [Exec|Native|Public]
	void AILoggingVerbose(); // Offset: 0x105644f58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AIModule.AISystem.AIIgnorePlayers
	// Flags: [Exec|Native|Public]
	void AIIgnorePlayers(); // Offset: 0x105644f3c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AIModule.AITask
// Size: 0x68 // Inherited bytes: 0x60
struct UAITask : UGameplayTask {
	// Fields
	struct AAIController* OwnerController; // Offset: 0x60 // Size: 0x08
};

// Object Name: Class AIModule.AITask_LockLogic
// Size: 0x68 // Inherited bytes: 0x68
struct UAITask_LockLogic : UAITask {
};

// Object Name: Class AIModule.AITask_MoveTo
// Size: 0x108 // Inherited bytes: 0x68
struct UAITask_MoveTo : UAITask {
	// Fields
	struct FScriptMulticastDelegate OnRequestFailed; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate OnMoveFinished; // Offset: 0x78 // Size: 0x10
	struct FAIMoveRequest MoveRequest; // Offset: 0x88 // Size: 0x40
	char pad_0xC8[0x40]; // Offset: 0xc8 // Size: 0x40

	// Functions

	// Object Name: Function AIModule.AITask_MoveTo.AIMoveTo
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking); // Offset: 0x105645440 // Return & Params: Num(10) Size(0x38)
};

// Object Name: Class AIModule.AITask_RunEQS
// Size: 0xe0 // Inherited bytes: 0x68
struct UAITask_RunEQS : UAITask {
	// Fields
	char pad_0x68[0x78]; // Offset: 0x68 // Size: 0x78

	// Functions

	// Object Name: Function AIModule.AITask_RunEQS.RunEQS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Offset: 0x1056458d0 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class AIModule.BehaviorTree
// Size: 0x60 // Inherited bytes: 0x28
struct UBehaviorTree : UObject {
	// Fields
	struct UBTCompositeNode* RootNode; // Offset: 0x28 // Size: 0x08
	struct UBlackboardData* BlackboardAsset; // Offset: 0x30 // Size: 0x08
	struct TArray<struct UBTDecorator*> RootDecorators; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
};

// Object Name: Class AIModule.BehaviorTreeManager
// Size: 0x50 // Inherited bytes: 0x28
struct UBehaviorTreeManager : UObject {
	// Fields
	IntProperty MaxDebuggerSteps; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // Offset: 0x30 // Size: 0x10
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // Offset: 0x40 // Size: 0x10
};

// Object Name: Class AIModule.BehaviorTreeTypes
// Size: 0x28 // Inherited bytes: 0x28
struct UBehaviorTreeTypes : UObject {
};

// Object Name: Class AIModule.BlackboardData
// Size: 0x50 // Inherited bytes: 0x30
struct UBlackboardData : UDataAsset {
	// Fields
	struct UBlackboardData* Parent; // Offset: 0x30 // Size: 0x08
	struct TArray<struct FBlackboardEntry> Keys; // Offset: 0x38 // Size: 0x10
	char bHasSynchronizedKeys : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_1 : 7; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: Class AIModule.BlackboardKeyType
// Size: 0x30 // Inherited bytes: 0x28
struct UBlackboardKeyType : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class AIModule.BlackboardKeyType_Bool
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Object Name: Class AIModule.BlackboardKeyType_Class
// Size: 0x38 // Inherited bytes: 0x30
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	// Fields
	struct UObject* BaseClass; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class AIModule.BlackboardKeyType_Enum
// Size: 0x50 // Inherited bytes: 0x30
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	// Fields
	struct UEnum* EnumType; // Offset: 0x30 // Size: 0x08
	StrProperty EnumName; // Offset: 0x38 // Size: 0x10
	char bIsEnumNameValid : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_1 : 7; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: Class AIModule.BlackboardKeyType_Float
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Object Name: Class AIModule.BlackboardKeyType_Int
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Object Name: Class AIModule.BlackboardKeyType_Name
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Object Name: Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x48 // Inherited bytes: 0x30
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	// Fields
	StrProperty EnumName; // Offset: 0x30 // Size: 0x10
	struct UEnum* EnumType; // Offset: 0x40 // Size: 0x08
};

// Object Name: Class AIModule.BlackboardKeyType_Object
// Size: 0x38 // Inherited bytes: 0x30
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	// Fields
	struct UObject* BaseClass; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class AIModule.BlackboardKeyType_Rotator
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Object Name: Class AIModule.BlackboardKeyType_String
// Size: 0x40 // Inherited bytes: 0x30
struct UBlackboardKeyType_String : UBlackboardKeyType {
	// Fields
	StrProperty StringValue; // Offset: 0x30 // Size: 0x10
};

// Object Name: Class AIModule.BlackboardKeyType_Vector
// Size: 0x30 // Inherited bytes: 0x30
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Object Name: Class AIModule.BTCompositeNode
// Size: 0x90 // Inherited bytes: 0x58
struct UBTCompositeNode : UBTNode {
	// Fields
	struct TArray<struct FBTCompositeChild> Children; // Offset: 0x58 // Size: 0x10
	struct TArray<struct UBTService*> Services; // Offset: 0x68 // Size: 0x10
	char pad_0x78[0x18]; // Offset: 0x78 // Size: 0x18
};

// Object Name: Class AIModule.BTComposite_Selector
// Size: 0x90 // Inherited bytes: 0x90
struct UBTComposite_Selector : UBTCompositeNode {
};

// Object Name: Class AIModule.BTComposite_Sequence
// Size: 0x90 // Inherited bytes: 0x90
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Object Name: Class AIModule.BTComposite_SimpleParallel
// Size: 0x90 // Inherited bytes: 0x90
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	// Fields
	enum class EBTParallelMode FinishMode; // Offset: 0x8b // Size: 0x01
};

// Object Name: Class AIModule.BTDecorator_Blackboard
// Size: 0xb8 // Inherited bytes: 0x88
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	// Fields
	IntProperty IntValue; // Offset: 0x88 // Size: 0x04
	float FloatValue; // Offset: 0x8c // Size: 0x04
	StrProperty StringValue; // Offset: 0x90 // Size: 0x10
	StrProperty CachedDescription; // Offset: 0xa0 // Size: 0x10
	char OperationType; // Offset: 0xb0 // Size: 0x01
	enum class EBTBlackboardRestart NotifyObserver; // Offset: 0xb1 // Size: 0x01
	char pad_0xB2[0x6]; // Offset: 0xb2 // Size: 0x06
};

// Object Name: Class AIModule.BTDecorator_BlueprintBase
// Size: 0x98 // Inherited bytes: 0x60
struct UBTDecorator_BlueprintBase : UBTDecorator {
	// Fields
	struct AAIController* AIOwner; // Offset: 0x60 // Size: 0x08
	struct AActor* ActorOwner; // Offset: 0x68 // Size: 0x08
	struct TArray<struct FName> ObservedKeyNames; // Offset: 0x70 // Size: 0x10
	char pad_0x80[0x10]; // Offset: 0x80 // Size: 0x10
	char bShowPropertyDetails : 1; // Offset: 0x90 // Size: 0x01
	char bCheckConditionOnlyBlackBoardChanges : 1; // Offset: 0x90 // Size: 0x01
	char bIsObservingBB : 1; // Offset: 0x90 // Size: 0x01
	char pad_0x90_3 : 5; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07

	// Functions

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// Flags: [Event|Protected|BlueprintEvent]
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// Flags: [Event|Protected|BlueprintEvent]
	bool PerformConditionCheck(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsDecoratorObserverActive(); // Offset: 0x10564a68c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsDecoratorExecutionActive(); // Offset: 0x10564a658 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xc0 // Inherited bytes: 0x60
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector ActorToCheck; // Offset: 0x60 // Size: 0x28
	enum class EGameplayContainerMatchType TagsToMatch; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07
	struct FGameplayTagContainer GameplayTags; // Offset: 0x90 // Size: 0x20
	StrProperty CachedDescription; // Offset: 0xb0 // Size: 0x10
};

// Object Name: Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xb0 // Inherited bytes: 0x60
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	// Fields
	enum class EBlackBoardEntryComparison Operator; // Offset: 0x5a // Size: 0x01
	struct FBlackboardKeySelector BlackboardKeyA; // Offset: 0x60 // Size: 0x28
	struct FBlackboardKeySelector BlackboardKeyB; // Offset: 0x88 // Size: 0x28
};

// Object Name: Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xb8 // Inherited bytes: 0xb8
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Object Name: Class AIModule.BTDecorator_ConeCheck
// Size: 0xe0 // Inherited bytes: 0x60
struct UBTDecorator_ConeCheck : UBTDecorator {
	// Fields
	float ConeHalfAngle; // Offset: 0x5c // Size: 0x04
	struct FBlackboardKeySelector ConeOrigin; // Offset: 0x60 // Size: 0x28
	struct FBlackboardKeySelector ConeDirection; // Offset: 0x88 // Size: 0x28
	struct FBlackboardKeySelector Observed; // Offset: 0xb0 // Size: 0x28
	char pad_0xDC[0x4]; // Offset: 0xdc // Size: 0x04
};

// Object Name: Class AIModule.BTDecorator_DoesPathExist
// Size: 0xc0 // Inherited bytes: 0x60
struct UBTDecorator_DoesPathExist : UBTDecorator {
	// Fields
	struct FBlackboardKeySelector BlackboardKeyA; // Offset: 0x60 // Size: 0x28
	struct FBlackboardKeySelector BlackboardKeyB; // Offset: 0x88 // Size: 0x28
	char bUseSelf : 1; // Offset: 0xb0 // Size: 0x01
	char pad_0xB0_1 : 7; // Offset: 0xb0 // Size: 0x01
	enum class EPathExistanceQueryType PathQueryType; // Offset: 0xb1 // Size: 0x01
	char pad_0xB2[0x6]; // Offset: 0xb2 // Size: 0x06
	struct UNavigationQueryFilter* FilterClass; // Offset: 0xb8 // Size: 0x08
};

// Object Name: Class AIModule.BTDecorator_ForceSuccess
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Object Name: Class AIModule.BTDecorator_IsAtLocation
// Size: 0xc8 // Inherited bytes: 0x88
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	// Fields
	float AcceptableRadius; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // Offset: 0x90 // Size: 0x30
	enum class FAIDistanceType GeometricDistanceType; // Offset: 0xc0 // Size: 0x01
	char bUseParametrizedRadius : 1; // Offset: 0xc1 // Size: 0x01
	char bUseNavAgentGoalLocation : 1; // Offset: 0xc1 // Size: 0x01
	char bPathFindingBasedTest : 1; // Offset: 0xc1 // Size: 0x01
	char pad_0xC1_3 : 5; // Offset: 0xc1 // Size: 0x01
	char pad_0xC2[0x6]; // Offset: 0xc2 // Size: 0x06
};

// Object Name: Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x90 // Inherited bytes: 0x88
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	// Fields
	struct UObject* TestClass; // Offset: 0x88 // Size: 0x08
};

// Object Name: Class AIModule.BTDecorator_KeepInCone
// Size: 0xb8 // Inherited bytes: 0x60
struct UBTDecorator_KeepInCone : UBTDecorator {
	// Fields
	float ConeHalfAngle; // Offset: 0x5c // Size: 0x04
	struct FBlackboardKeySelector ConeOrigin; // Offset: 0x60 // Size: 0x28
	struct FBlackboardKeySelector Observed; // Offset: 0x88 // Size: 0x28
	char bUseSelfAsOrigin : 1; // Offset: 0xb0 // Size: 0x01
	char bUseSelfAsObserved : 1; // Offset: 0xb0 // Size: 0x01
	char pad_0xB4_2 : 6; // Offset: 0xb4 // Size: 0x01
	char pad_0xB5[0x3]; // Offset: 0xb5 // Size: 0x03
};

// Object Name: Class AIModule.BTDecorator_Loop
// Size: 0x68 // Inherited bytes: 0x60
struct UBTDecorator_Loop : UBTDecorator {
	// Fields
	IntProperty NumLoops; // Offset: 0x5c // Size: 0x04
	bool bInfiniteLoop; // Offset: 0x60 // Size: 0x01
	float InfiniteLoopTimeoutTime; // Offset: 0x64 // Size: 0x04
};

// Object Name: Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Object Name: Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x70 // Inherited bytes: 0x60
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	// Fields
	struct FGameplayTag CooldownTag; // Offset: 0x60 // Size: 0x08
	float CooldownDuration; // Offset: 0x68 // Size: 0x04
	bool bAddToExistingDuration; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
};

// Object Name: Class AIModule.BTDecorator_TagCooldown
// Size: 0x70 // Inherited bytes: 0x60
struct UBTDecorator_TagCooldown : UBTDecorator {
	// Fields
	struct FGameplayTag CooldownTag; // Offset: 0x60 // Size: 0x08
	float CooldownDuration; // Offset: 0x68 // Size: 0x04
	bool bAddToExistingDuration; // Offset: 0x6c // Size: 0x01
	bool bActivatesCooldown; // Offset: 0x6d // Size: 0x01
	char pad_0x6E[0x2]; // Offset: 0x6e // Size: 0x02
};

// Object Name: Class AIModule.BTDecorator_TimeLimit
// Size: 0x60 // Inherited bytes: 0x60
struct UBTDecorator_TimeLimit : UBTDecorator {
	// Fields
	float TimeLimit; // Offset: 0x5c // Size: 0x04
};

// Object Name: Class AIModule.BTFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Offset: 0x105650790 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Offset: 0x1056506e4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Offset: 0x1056505b8 // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, StrProperty Value); // Offset: 0x105650428 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Offset: 0x1056502fc // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Offset: 0x1056501d0 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Offset: 0x1056500a4 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, IntProperty Value); // Offset: 0x10564ff78 // Return & Params: Num(3) Size(0x34)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Offset: 0x10564fe4c // Return & Params: Num(3) Size(0x34)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Offset: 0x10564fd20 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Offset: 0x10564fbf4 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Offset: 0x10564fac0 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Offset: 0x10564fa44 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTFunctionLibrary.GetOwnerComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Offset: 0x10564f9c8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f8d0 // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f7b8 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f6c0 // Return & Params: Num(3) Size(0x3c)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f5d0 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f4dc // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f3ec // Return & Params: Num(3) Size(0x34)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f2fc // Return & Params: Num(3) Size(0x34)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f20c // Return & Params: Num(3) Size(0x31)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f11c // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564f02c // Return & Params: Num(3) Size(0x31)

	// Object Name: Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564ef3c // Return & Params: Num(3) Size(0x38)

	// Object Name: Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564ee54 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function AIModule.BTFunctionLibrary.ClearBlackboardValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Offset: 0x10564ed6c // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class AIModule.BTService_BlueprintBase
// Size: 0x90 // Inherited bytes: 0x68
struct UBTService_BlueprintBase : UBTService {
	// Fields
	struct AAIController* AIOwner; // Offset: 0x68 // Size: 0x08
	struct AActor* ActorOwner; // Offset: 0x70 // Size: 0x08
	char pad_0x78[0x10]; // Offset: 0x78 // Size: 0x10
	char bShowPropertyDetails : 1; // Offset: 0x88 // Size: 0x01
	char bShowEventDetails : 1; // Offset: 0x88 // Size: 0x01
	char pad_0x88_2 : 6; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x7]; // Offset: 0x89 // Size: 0x07

	// Functions

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveSearchStart(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveDeactivation(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTService_BlueprintBase.ReceiveActivation
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveActivation(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTService_BlueprintBase.IsServiceActive
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsServiceActive(); // Offset: 0x1056515ec // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class AIModule.BTService_RunEQS
// Size: 0xe8 // Inherited bytes: 0x90
struct UBTService_RunEQS : UBTService_BlackboardBase {
	// Fields
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // Offset: 0x90 // Size: 0x48
	char pad_0xD8[0x10]; // Offset: 0xd8 // Size: 0x10
};

// Object Name: Class AIModule.BTTask_BlueprintBase
// Size: 0xa0 // Inherited bytes: 0x70
struct UBTTask_BlueprintBase : UBTTaskNode {
	// Fields
	struct AAIController* AIOwner; // Offset: 0x70 // Size: 0x08
	struct AActor* ActorOwner; // Offset: 0x78 // Size: 0x08
	char pad_0x80[0x18]; // Offset: 0x80 // Size: 0x18
	char bShowPropertyDetails : 1; // Offset: 0x98 // Size: 0x01
	char pad_0x98_1 : 7; // Offset: 0x98 // Size: 0x01
	char pad_0x99[0x7]; // Offset: 0x99 // Size: 0x07

	// Functions

	// Object Name: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetFinishOnMessageWithId(struct FName MessageName, IntProperty RequestID); // Offset: 0x10565205c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void SetFinishOnMessage(struct FName MessageName); // Offset: 0x105651fe0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveTick
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveExecute(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveAbort(struct AActor* OwnerActor); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsTaskExecuting(); // Offset: 0x105651fac // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	bool IsTaskAborting(); // Offset: 0x105651f78 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.BTTask_BlueprintBase.FinishExecute
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void FinishExecute(bool bSuccess); // Offset: 0x105651ef4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.BTTask_BlueprintBase.FinishAbort
	// Flags: [Final|Native|Protected|BlueprintCallable]
	void FinishAbort(); // Offset: 0x105651ee0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AIModule.BTTask_GameplayTaskBase
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	// Fields
	char bWaitForGameplayTask : 1; // Offset: 0x69 // Size: 0x01
};

// Object Name: Class AIModule.BTTask_MakeNoise
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_MakeNoise : UBTTaskNode {
	// Fields
	float Loudnes; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class AIModule.BTTask_PawnActionBase
// Size: 0x70 // Inherited bytes: 0x70
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Object Name: Class AIModule.BTTask_PlayAnimation
// Size: 0xb0 // Inherited bytes: 0x70
struct UBTTask_PlayAnimation : UBTTaskNode {
	// Fields
	struct UAnimationAsset* AnimationToPlay; // Offset: 0x70 // Size: 0x08
	char bLooping : 1; // Offset: 0x78 // Size: 0x01
	char bNonBlocking : 1; // Offset: 0x78 // Size: 0x01
	char pad_0x78_2 : 6; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x7]; // Offset: 0x79 // Size: 0x07
	struct UBehaviorTreeComponent* MyOwnerComp; // Offset: 0x80 // Size: 0x08
	struct USkeletalMeshComponent* CachedSkelMesh; // Offset: 0x88 // Size: 0x08
	char pad_0x90[0x20]; // Offset: 0x90 // Size: 0x20
};

// Object Name: Class AIModule.BTTask_PlaySound
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_PlaySound : UBTTaskNode {
	// Fields
	struct USoundCue* SoundToPlay; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class AIModule.BTTask_PushPawnAction
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	// Fields
	struct UPawnAction* Action; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xa0 // Inherited bytes: 0x98
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	// Fields
	float Precision; // Offset: 0x98 // Size: 0x04
	char pad_0x9C[0x4]; // Offset: 0x9c // Size: 0x04
};

// Object Name: Class AIModule.BTTask_RunBehavior
// Size: 0x78 // Inherited bytes: 0x70
struct UBTTask_RunBehavior : UBTTaskNode {
	// Fields
	struct UBehaviorTree* BehaviorAsset; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x88 // Inherited bytes: 0x70
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	// Fields
	struct FGameplayTag InjectionTag; // Offset: 0x70 // Size: 0x08
	struct UBehaviorTree* DefaultBehaviorAsset; // Offset: 0x78 // Size: 0x08
	struct UBehaviorTree* BehaviorAsset; // Offset: 0x80 // Size: 0x08
};

// Object Name: Class AIModule.BTTask_RunEQSQuery
// Size: 0x150 // Inherited bytes: 0x98
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	// Fields
	struct UEnvQuery* QueryTemplate; // Offset: 0x98 // Size: 0x08
	struct TArray<struct FEnvNamedValue> QueryParams; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct FAIDynamicParam> QueryConfig; // Offset: 0xb0 // Size: 0x10
	enum class EEnvQueryRunMode RunMode; // Offset: 0xc0 // Size: 0x01
	char pad_0xC1[0x7]; // Offset: 0xc1 // Size: 0x07
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // Offset: 0xc8 // Size: 0x28
	bool bUseBBKey; // Offset: 0xf0 // Size: 0x01
	char pad_0xF1[0x7]; // Offset: 0xf1 // Size: 0x07
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // Offset: 0xf8 // Size: 0x48
	char pad_0x140[0x10]; // Offset: 0x140 // Size: 0x10
};

// Object Name: Class AIModule.BTTask_SetTagCooldown
// Size: 0x80 // Inherited bytes: 0x70
struct UBTTask_SetTagCooldown : UBTTaskNode {
	// Fields
	struct FGameplayTag CooldownTag; // Offset: 0x70 // Size: 0x08
	bool bAddToExistingDuration; // Offset: 0x78 // Size: 0x01
	char pad_0x79[0x3]; // Offset: 0x79 // Size: 0x03
	float CooldownDuration; // Offset: 0x7c // Size: 0x04
};

// Object Name: Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xa0 // Inherited bytes: 0x78
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	// Fields
	struct FBlackboardKeySelector BlackboardKey; // Offset: 0x78 // Size: 0x28
};

// Object Name: Class AIModule.CrowdAgentInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UCrowdAgentInterface : UInterface {
};

// Object Name: Class AIModule.DetourCrowdAIController
// Size: 0x5b8 // Inherited bytes: 0x5b8
struct ADetourCrowdAIController : AAIController {
};

// Object Name: Class AIModule.EnvQuery
// Size: 0x48 // Inherited bytes: 0x30
struct UEnvQuery : UDataAsset {
	// Fields
	struct FName QueryName; // Offset: 0x30 // Size: 0x08
	struct TArray<struct UEnvQueryOption*> Options; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class AIModule.EnvQueryContext
// Size: 0x28 // Inherited bytes: 0x28
struct UEnvQueryContext : UObject {
};

// Object Name: Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30 // Inherited bytes: 0x28
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class AIModule.EnvQueryContext_Item
// Size: 0x28 // Inherited bytes: 0x28
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Object Name: Class AIModule.EnvQueryContext_Querier
// Size: 0x28 // Inherited bytes: 0x28
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Object Name: Class AIModule.EnvQueryDebugHelpers
// Size: 0x28 // Inherited bytes: 0x28
struct UEnvQueryDebugHelpers : UObject {
};

// Object Name: Class AIModule.EnvQueryNode
// Size: 0x30 // Inherited bytes: 0x28
struct UEnvQueryNode : UObject {
	// Fields
	IntProperty VerNum; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: Class AIModule.EnvQueryGenerator
// Size: 0x50 // Inherited bytes: 0x30
struct UEnvQueryGenerator : UEnvQueryNode {
	// Fields
	StrProperty OptionName; // Offset: 0x30 // Size: 0x10
	struct UEnvQueryItemType* itemType; // Offset: 0x40 // Size: 0x08
	char bAutoSortTests : 1; // Offset: 0x48 // Size: 0x01
	char pad_0x48_1 : 7; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
};

// Object Name: Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xc0 // Inherited bytes: 0x50
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	// Fields
	struct AActor* SearchedActorClass; // Offset: 0x50 // Size: 0x08
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // Offset: 0x58 // Size: 0x30
	struct FAIDataProviderFloatValue SearchRadius; // Offset: 0x88 // Size: 0x30
	struct UEnvQueryContext* SearchCenter; // Offset: 0xb8 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x80 // Inherited bytes: 0x50
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	// Fields
	struct FText GeneratorsActionDescription; // Offset: 0x50 // Size: 0x18
	struct UEnvQueryContext* Context; // Offset: 0x68 // Size: 0x08
	struct UEnvQueryItemType* GeneratedItemType; // Offset: 0x70 // Size: 0x08
	char pad_0x78[0x8]; // Offset: 0x78 // Size: 0x08

	// Functions

	// Object Name: Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetQuerier(); // Offset: 0x105656e38 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// Flags: [Event|Public|HasOutParms|BlueprintEvent|Const]
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|Const]
	void AddGeneratedVector(struct FVector GeneratedVector); // Offset: 0x105656dbc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void AddGeneratedActor(struct AActor* GeneratedActor); // Offset: 0x105656d40 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 // Inherited bytes: 0x50
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	// Fields
	struct TArray<struct UEnvQueryGenerator*> Generators; // Offset: 0x50 // Size: 0x10
	char bAllowDifferentItemTypes : 1; // Offset: 0x60 // Size: 0x01
	char bHasMatchingItemType : 1; // Offset: 0x60 // Size: 0x01
	char pad_0x60_2 : 6; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x7]; // Offset: 0x61 // Size: 0x07
	struct UEnvQueryItemType* ForcedItemType; // Offset: 0x68 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x80 // Inherited bytes: 0x50
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	// Fields
	struct FEnvTraceData ProjectionData; // Offset: 0x50 // Size: 0x30
};

// Object Name: Class AIModule.EnvQueryGenerator_Cone
// Size: 0x150 // Inherited bytes: 0x80
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	// Fields
	struct FAIDataProviderFloatValue AlignedPointsDistance; // Offset: 0x80 // Size: 0x30
	struct FAIDataProviderFloatValue ConeDegrees; // Offset: 0xb0 // Size: 0x30
	struct FAIDataProviderFloatValue AngleStep; // Offset: 0xe0 // Size: 0x30
	struct FAIDataProviderFloatValue Range; // Offset: 0x110 // Size: 0x30
	struct UEnvQueryContext* CenterActor; // Offset: 0x140 // Size: 0x08
	char bIncludeContextLocation : 1; // Offset: 0x148 // Size: 0x01
	char pad_0x148_1 : 7; // Offset: 0x148 // Size: 0x01
	char pad_0x149[0x7]; // Offset: 0x149 // Size: 0x07
};

// Object Name: Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x58 // Inherited bytes: 0x50
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	// Fields
	struct UEnvQueryContext* QueryContext; // Offset: 0x50 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1a8 // Inherited bytes: 0x80
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	// Fields
	struct FAIDataProviderFloatValue InnerRadius; // Offset: 0x80 // Size: 0x30
	struct FAIDataProviderFloatValue OuterRadius; // Offset: 0xb0 // Size: 0x30
	struct FAIDataProviderIntValue NumberOfRings; // Offset: 0xe0 // Size: 0x30
	struct FAIDataProviderIntValue PointsPerRing; // Offset: 0x110 // Size: 0x30
	struct FEnvDirection ArcDirection; // Offset: 0x140 // Size: 0x20
	struct FAIDataProviderFloatValue ArcAngle; // Offset: 0x160 // Size: 0x30
	bool bUseSpiralPattern; // Offset: 0x190 // Size: 0x01
	char pad_0x191[0x7]; // Offset: 0x191 // Size: 0x07
	struct UEnvQueryContext* Center; // Offset: 0x198 // Size: 0x08
	char bDefineArc : 1; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A0_1 : 7; // Offset: 0x1a0 // Size: 0x01
	char pad_0x1A1[0x7]; // Offset: 0x1a1 // Size: 0x07
};

// Object Name: Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1e8 // Inherited bytes: 0x80
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	// Fields
	struct FAIDataProviderFloatValue CircleRadius; // Offset: 0x80 // Size: 0x30
	struct FAIDataProviderFloatValue SpaceBetween; // Offset: 0xb0 // Size: 0x30
	struct FAIDataProviderIntValue NumberOfPoints; // Offset: 0xe0 // Size: 0x30
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x7]; // Offset: 0x111 // Size: 0x07
	struct FEnvDirection ArcDirection; // Offset: 0x118 // Size: 0x20
	struct FAIDataProviderFloatValue ArcAngle; // Offset: 0x138 // Size: 0x30
	float AngleRadians; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04
	struct UEnvQueryContext* CircleCenter; // Offset: 0x170 // Size: 0x08
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // Offset: 0x178 // Size: 0x01
	char pad_0x179[0x7]; // Offset: 0x179 // Size: 0x07
	struct FAIDataProviderFloatValue CircleCenterZOffset; // Offset: 0x180 // Size: 0x30
	struct FEnvTraceData TraceData; // Offset: 0x1b0 // Size: 0x30
	char bDefineArc : 1; // Offset: 0x1e0 // Size: 0x01
	char pad_0x1E0_1 : 7; // Offset: 0x1e0 // Size: 0x01
	char pad_0x1E1[0x7]; // Offset: 0x1e1 // Size: 0x07
};

// Object Name: Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xe8 // Inherited bytes: 0x80
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	// Fields
	struct FAIDataProviderFloatValue GridSize; // Offset: 0x80 // Size: 0x30
	struct FAIDataProviderFloatValue SpaceBetween; // Offset: 0xb0 // Size: 0x30
	struct UEnvQueryContext* GenerateAround; // Offset: 0xe0 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x150 // Inherited bytes: 0xe8
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	// Fields
	struct FAIDataProviderBoolValue PathToItem; // Offset: 0xe8 // Size: 0x30
	struct UNavigationQueryFilter* NavigationFilter; // Offset: 0x118 // Size: 0x08
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // Offset: 0x120 // Size: 0x30
};

// Object Name: Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78 // Inherited bytes: 0x28
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	IntProperty QueryID; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x24]; // Offset: 0x34 // Size: 0x24
	struct UEnvQueryItemType* itemType; // Offset: 0x58 // Size: 0x08
	IntProperty OptionIndex; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04
	struct FScriptMulticastDelegate OnQueryFinishedEvent; // Offset: 0x68 // Size: 0x10

	// Functions

	// Object Name: Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNamedParam(struct FName ParamName, float Value); // Offset: 0x105657c3c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct TArray<struct FVector> GetResultsAsLocations(); // Offset: 0x105657bd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct TArray<struct AActor*> GetResultsAsActors(); // Offset: 0x105657b74 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetItemScore(IntProperty ItemIndex); // Offset: 0x105657ae8 // Return & Params: Num(2) Size(0x8)

	// Object Name: DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class AIModule.EnvQueryItemType
// Size: 0x30 // Inherited bytes: 0x28
struct UEnvQueryItemType : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x30 // Inherited bytes: 0x30
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Object Name: Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x30 // Inherited bytes: 0x30
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Object Name: Class AIModule.EnvQueryItemType_Actor
// Size: 0x30 // Inherited bytes: 0x30
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Object Name: Class AIModule.EnvQueryItemType_Direction
// Size: 0x30 // Inherited bytes: 0x30
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Object Name: Class AIModule.EnvQueryItemType_Point
// Size: 0x30 // Inherited bytes: 0x30
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Object Name: Class AIModule.EnvQueryManager
// Size: 0x138 // Inherited bytes: 0x28
struct UEnvQueryManager : UObject {
	// Fields
	char pad_0x28[0x78]; // Offset: 0x28 // Size: 0x78
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // Offset: 0xa0 // Size: 0x10
	struct TArray<struct UEnvQueryContext*> LocalContexts; // Offset: 0xb0 // Size: 0x10
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // Offset: 0xc0 // Size: 0x10
	char pad_0xD0[0x54]; // Offset: 0xd0 // Size: 0x54
	float MaxAllowedTestingTime; // Offset: 0x124 // Size: 0x04
	bool bTestQueriesUsingBreadth; // Offset: 0x128 // Size: 0x01
	char pad_0x129[0x3]; // Offset: 0x129 // Size: 0x03
	IntProperty QueryCountWarningThreshold; // Offset: 0x12c // Size: 0x04
	double QueryCountWarningInterval; // Offset: 0x130 // Size: 0x08

	// Functions

	// Object Name: Function AIModule.EnvQueryManager.RunEQSQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Offset: 0x105658664 // Return & Params: Num(6) Size(0x30)
};

// Object Name: Class AIModule.EnvQueryOption
// Size: 0x40 // Inherited bytes: 0x28
struct UEnvQueryOption : UObject {
	// Fields
	struct UEnvQueryGenerator* Generator; // Offset: 0x28 // Size: 0x08
	struct TArray<struct UEnvQueryTest*> Tests; // Offset: 0x30 // Size: 0x10
};

// Object Name: Class AIModule.EnvQueryTest
// Size: 0x1c0 // Inherited bytes: 0x30
struct UEnvQueryTest : UEnvQueryNode {
	// Fields
	IntProperty TestOrder; // Offset: 0x2c // Size: 0x04
	enum class EEnvTestPurpose TestPurpose; // Offset: 0x30 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
	StrProperty TestComment; // Offset: 0x38 // Size: 0x10
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // Offset: 0x48 // Size: 0x01
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // Offset: 0x49 // Size: 0x01
	enum class EEnvTestFilterType FilterType; // Offset: 0x4a // Size: 0x01
	char pad_0x4B[0x5]; // Offset: 0x4b // Size: 0x05
	struct FAIDataProviderBoolValue BoolValue; // Offset: 0x50 // Size: 0x30
	struct FAIDataProviderFloatValue FloatValueMin; // Offset: 0x80 // Size: 0x30
	struct FAIDataProviderFloatValue FloatValueMax; // Offset: 0xb0 // Size: 0x30
	char pad_0xE0[0x1]; // Offset: 0xe0 // Size: 0x01
	enum class EEnvTestScoreEquation ScoringEquation; // Offset: 0xe1 // Size: 0x01
	enum class EEnvQueryTestClamping ClampMinType; // Offset: 0xe2 // Size: 0x01
	enum class EEnvQueryTestClamping ClampMaxType; // Offset: 0xe3 // Size: 0x01
	enum class EEQSNormalizationType NormalizationType; // Offset: 0xe4 // Size: 0x01
	char pad_0xE5[0x3]; // Offset: 0xe5 // Size: 0x03
	struct FAIDataProviderFloatValue ScoreClampMin; // Offset: 0xe8 // Size: 0x30
	struct FAIDataProviderFloatValue ScoreClampMax; // Offset: 0x118 // Size: 0x30
	struct FAIDataProviderFloatValue ScoringFactor; // Offset: 0x148 // Size: 0x30
	struct FAIDataProviderFloatValue ReferenceValue; // Offset: 0x178 // Size: 0x30
	bool bDefineReferenceValue; // Offset: 0x1a8 // Size: 0x01
	char pad_0x1A9[0xf]; // Offset: 0x1a9 // Size: 0x0f
	char bWorkOnFloatValues : 1; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B8_1 : 7; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x7]; // Offset: 0x1b9 // Size: 0x07
};

// Object Name: Class AIModule.EnvQueryTest_Distance
// Size: 0x1c8 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Distance : UEnvQueryTest {
	// Fields
	enum class EEnvTestDistance TestMode; // Offset: 0x1b9 // Size: 0x01
	struct UEnvQueryContext* DistanceTo; // Offset: 0x1c0 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryTest_Dot
// Size: 0x208 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Dot : UEnvQueryTest {
	// Fields
	struct FEnvDirection LineA; // Offset: 0x1c0 // Size: 0x20
	struct FEnvDirection LineB; // Offset: 0x1e0 // Size: 0x20
	enum class EEnvTestDot TestMode; // Offset: 0x200 // Size: 0x01
	bool bAbsoluteValue; // Offset: 0x201 // Size: 0x01
	char pad_0x202[0x6]; // Offset: 0x202 // Size: 0x06
};

// Object Name: Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x230 // Inherited bytes: 0x1c0
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	// Fields
	struct FGameplayTagQuery TagQueryToMatch; // Offset: 0x1c0 // Size: 0x48
	bool bUpdatedToUseQuery; // Offset: 0x208 // Size: 0x01
	enum class EGameplayContainerMatchType TagsToMatch; // Offset: 0x209 // Size: 0x01
	char pad_0x20A[0x6]; // Offset: 0x20a // Size: 0x06
	struct FGameplayTagContainer GameplayTags; // Offset: 0x210 // Size: 0x20
};

// Object Name: Class AIModule.EnvQueryTest_Overlap
// Size: 0x1d8 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	// Fields
	struct FEnvOverlapData OverlapData; // Offset: 0x1bc // Size: 0x1c
};

// Object Name: Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x230 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	// Fields
	enum class EEnvTestPathfinding TestMode; // Offset: 0x1b9 // Size: 0x01
	struct UEnvQueryContext* Context; // Offset: 0x1c0 // Size: 0x08
	struct FAIDataProviderBoolValue PathFromContext; // Offset: 0x1c8 // Size: 0x30
	struct FAIDataProviderBoolValue SkipUnreachable; // Offset: 0x1f8 // Size: 0x30
	struct UNavigationQueryFilter* FilterClass; // Offset: 0x228 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x260 // Inherited bytes: 0x230
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	// Fields
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // Offset: 0x230 // Size: 0x30
};

// Object Name: Class AIModule.EnvQueryTest_Project
// Size: 0x1f0 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Project : UEnvQueryTest {
	// Fields
	struct FEnvTraceData ProjectionData; // Offset: 0x1c0 // Size: 0x30
};

// Object Name: Class AIModule.EnvQueryTest_Random
// Size: 0x1c0 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Object Name: Class AIModule.EnvQueryTest_Trace
// Size: 0x288 // Inherited bytes: 0x1c0
struct UEnvQueryTest_Trace : UEnvQueryTest {
	// Fields
	struct FEnvTraceData TraceData; // Offset: 0x1c0 // Size: 0x30
	struct FAIDataProviderBoolValue TraceFromContext; // Offset: 0x1f0 // Size: 0x30
	struct FAIDataProviderFloatValue ItemHeightOffset; // Offset: 0x220 // Size: 0x30
	struct FAIDataProviderFloatValue ContextHeightOffset; // Offset: 0x250 // Size: 0x30
	struct UEnvQueryContext* Context; // Offset: 0x280 // Size: 0x08
};

// Object Name: Class AIModule.EnvQueryTypes
// Size: 0x28 // Inherited bytes: 0x28
struct UEnvQueryTypes : UObject {
};

// Object Name: Class AIModule.EQSQueryResultSourceInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UEQSQueryResultSourceInterface : UInterface {
};

// Object Name: Class AIModule.EQSRenderingComponent
// Size: 0xa00 // Inherited bytes: 0x9d0
struct UEQSRenderingComponent : UPrimitiveComponent {
	// Fields
	char pad_0x9D0[0x30]; // Offset: 0x9d0 // Size: 0x30
};

// Object Name: Class AIModule.EQSTestingPawn
// Size: 0x950 // Inherited bytes: 0x8f0
struct AEQSTestingPawn : ACharacter {
	// Fields
	struct UEnvQuery* QueryTemplate; // Offset: 0x8f0 // Size: 0x08
	struct TArray<struct FEnvNamedValue> QueryParams; // Offset: 0x8f8 // Size: 0x10
	struct TArray<struct FAIDynamicParam> QueryConfig; // Offset: 0x908 // Size: 0x10
	float TimeLimitPerStep; // Offset: 0x918 // Size: 0x04
	IntProperty StepToDebugDraw; // Offset: 0x91c // Size: 0x04
	enum class EEnvQueryHightlightMode HighlightMode; // Offset: 0x920 // Size: 0x01
	char bDrawLabels : 1; // Offset: 0x921 // Size: 0x01
	char bDrawFailedItems : 1; // Offset: 0x921 // Size: 0x01
	char bReRunQueryOnlyOnFinishedMove : 1; // Offset: 0x921 // Size: 0x01
	char bShouldBeVisibleInGame : 1; // Offset: 0x921 // Size: 0x01
	char bTickDuringGame : 1; // Offset: 0x921 // Size: 0x01
	char pad_0x921_5 : 3; // Offset: 0x921 // Size: 0x01
	enum class EEnvQueryRunMode QueryingMode; // Offset: 0x922 // Size: 0x01
	char pad_0x923[0x2d]; // Offset: 0x923 // Size: 0x2d
};

// Object Name: Class AIModule.GenericTeamAgentInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGenericTeamAgentInterface : UInterface {
};

// Object Name: Class AIModule.GridPathAIController
// Size: 0x5b8 // Inherited bytes: 0x5b8
struct AGridPathAIController : AAIController {
};

// Object Name: Class AIModule.GridPathFollowingComponent
// Size: 0x378 // Inherited bytes: 0x348
struct UGridPathFollowingComponent : UPathFollowingComponent {
	// Fields
	struct UNavLocalGridManager* GridManager; // Offset: 0x348 // Size: 0x08
	char pad_0x350[0x28]; // Offset: 0x350 // Size: 0x28
};

// Object Name: Class AIModule.NavFilter_AIControllerDefault
// Size: 0x48 // Inherited bytes: 0x48
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Object Name: Class AIModule.NavLocalGridManager
// Size: 0x58 // Inherited bytes: 0x28
struct UNavLocalGridManager : UObject {
	// Fields
	char pad_0x28[0x30]; // Offset: 0x28 // Size: 0x30

	// Functions

	// Object Name: Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Offset: 0x10565f074 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, IntProperty GridId, bool bRebuildGrids); // Offset: 0x10565ef84 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Offset: 0x10565ee00 // Return & Params: Num(5) Size(0x31)

	// Object Name: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	IntProperty AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, IntProperty Radius2D, float Height, bool bRebuildGrids); // Offset: 0x10565ec48 // Return & Params: Num(6) Size(0x28)

	// Object Name: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, IntProperty Radius2D, float Height, bool bRebuildGrids); // Offset: 0x10565eac0 // Return & Params: Num(6) Size(0x24)

	// Object Name: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, IntProperty Radius2D, float Height, bool bRebuildGrids); // Offset: 0x10565e8c4 // Return & Params: Num(8) Size(0x2c)

	// Object Name: Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, IntProperty Radius2D, float Height, bool bRebuildGrids); // Offset: 0x10565e6c4 // Return & Params: Num(8) Size(0x3c)
};

// Object Name: Class AIModule.PawnAction
// Size: 0x98 // Inherited bytes: 0x28
struct UPawnAction : UObject {
	// Fields
	struct UPawnAction* ChildAction; // Offset: 0x28 // Size: 0x08
	struct UPawnAction* ParentAction; // Offset: 0x30 // Size: 0x08
	struct UPawnActionsComponent* OwnerComponent; // Offset: 0x38 // Size: 0x08
	struct UObject* Instigator; // Offset: 0x40 // Size: 0x08
	struct UBrainComponent* BrainComp; // Offset: 0x48 // Size: 0x08
	char pad_0x50[0x30]; // Offset: 0x50 // Size: 0x30
	char bAllowNewSameClassInstance : 1; // Offset: 0x80 // Size: 0x01
	char bReplaceActiveSameClassInstance : 1; // Offset: 0x80 // Size: 0x01
	char bShouldPauseMovement : 1; // Offset: 0x80 // Size: 0x01
	char bAlwaysNotifyOnFinished : 1; // Offset: 0x80 // Size: 0x01
	char pad_0x80_4 : 4; // Offset: 0x80 // Size: 0x01
	char pad_0x81[0x17]; // Offset: 0x81 // Size: 0x17

	// Functions

	// Object Name: Function AIModule.PawnAction.GetActionPriority
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	enum class EAIRequestPriority GetActionPriority(); // Offset: 0x10565fd04 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.PawnAction.Finish
	// Flags: [Native|Protected|BlueprintCallable]
	void Finish(enum class EPawnActionResult WithResult); // Offset: 0x10565fc78 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.PawnAction.CreateActionInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // Offset: 0x10565fbc4 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class AIModule.PawnAction_BlueprintBase
// Size: 0x98 // Inherited bytes: 0x98
struct UPawnAction_BlueprintBase : UPawnAction {
	// Functions

	// Object Name: Function AIModule.PawnAction_BlueprintBase.ActionTick
	// Flags: [Event|Public|BlueprintEvent]
	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AIModule.PawnAction_BlueprintBase.ActionStart
	// Flags: [Event|Public|BlueprintEvent]
	void ActionStart(struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.PawnAction_BlueprintBase.ActionResume
	// Flags: [Event|Public|BlueprintEvent]
	void ActionResume(struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.PawnAction_BlueprintBase.ActionPause
	// Flags: [Event|Public|BlueprintEvent]
	void ActionPause(struct APawn* ControlledPawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AIModule.PawnAction_BlueprintBase.ActionFinished
	// Flags: [Event|Public|BlueprintEvent]
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class AIModule.PawnAction_Move
// Size: 0xe8 // Inherited bytes: 0x98
struct UPawnAction_Move : UPawnAction {
	// Fields
	struct AActor* GoalActor; // Offset: 0x98 // Size: 0x08
	struct FVector GoalLocation; // Offset: 0xa0 // Size: 0x0c
	float AcceptableRadius; // Offset: 0xac // Size: 0x04
	struct UNavigationQueryFilter* FilterClass; // Offset: 0xb0 // Size: 0x08
	char bAllowStrafe : 1; // Offset: 0xb8 // Size: 0x01
	char bFinishOnOverlap : 1; // Offset: 0xb8 // Size: 0x01
	char bUsePathfinding : 1; // Offset: 0xb8 // Size: 0x01
	char bAllowPartialPath : 1; // Offset: 0xb8 // Size: 0x01
	char bProjectGoalToNavigation : 1; // Offset: 0xb8 // Size: 0x01
	char bUpdatePathToGoal : 1; // Offset: 0xb8 // Size: 0x01
	char bAbortChildActionOnPathChange : 1; // Offset: 0xb8 // Size: 0x01
	char pad_0xB8_7 : 1; // Offset: 0xb8 // Size: 0x01
	char pad_0xB9[0x2f]; // Offset: 0xb9 // Size: 0x2f
};

// Object Name: Class AIModule.PawnAction_Repeat
// Size: 0xb8 // Inherited bytes: 0x98
struct UPawnAction_Repeat : UPawnAction {
	// Fields
	struct UPawnAction* ActionToRepeat; // Offset: 0x98 // Size: 0x08
	struct UPawnAction* RecentActionCopy; // Offset: 0xa0 // Size: 0x08
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0xf]; // Offset: 0xa9 // Size: 0x0f
};

// Object Name: Class AIModule.PawnAction_Sequence
// Size: 0xc0 // Inherited bytes: 0x98
struct UPawnAction_Sequence : UPawnAction {
	// Fields
	struct TArray<struct UPawnAction*> ActionSequence; // Offset: 0x98 // Size: 0x10
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // Offset: 0xa8 // Size: 0x01
	char pad_0xA9[0x7]; // Offset: 0xa9 // Size: 0x07
	struct UPawnAction* RecentActionCopy; // Offset: 0xb0 // Size: 0x08
	char pad_0xB8[0x8]; // Offset: 0xb8 // Size: 0x08
};

// Object Name: Class AIModule.PawnAction_Wait
// Size: 0xa8 // Inherited bytes: 0x98
struct UPawnAction_Wait : UPawnAction {
	// Fields
	float TimeToWait; // Offset: 0x94 // Size: 0x04
	char pad_0x9C[0xc]; // Offset: 0x9c // Size: 0x0c
};

// Object Name: Class AIModule.PawnActionsComponent
// Size: 0x1b0 // Inherited bytes: 0x178
struct UPawnActionsComponent : UActorComponent {
	// Fields
	struct APawn* ControlledPawn; // Offset: 0x178 // Size: 0x08
	struct TArray<struct FPawnActionStack> ActionStacks; // Offset: 0x180 // Size: 0x10
	struct TArray<struct FPawnActionEvent> ActionEvents; // Offset: 0x190 // Size: 0x10
	struct UPawnAction* CurrentAction; // Offset: 0x1a0 // Size: 0x08
	char pad_0x1A8[0x8]; // Offset: 0x1a8 // Size: 0x08

	// Functions

	// Object Name: Function AIModule.PawnActionsComponent.K2_PushAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Offset: 0x105660bb4 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function AIModule.PawnActionsComponent.K2_PerformAction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Offset: 0x105660abc // Return & Params: Num(4) Size(0x12)

	// Object Name: Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Offset: 0x105660a30 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AIModule.PawnActionsComponent.K2_AbortAction
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Offset: 0x1056609a4 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class AIModule.PawnSensingComponent
// Size: 0x1c0 // Inherited bytes: 0x178
struct UPawnSensingComponent : UActorComponent {
	// Fields
	float HearingThreshold; // Offset: 0x178 // Size: 0x04
	float LOSHearingThreshold; // Offset: 0x17c // Size: 0x04
	float SightRadius; // Offset: 0x180 // Size: 0x04
	float SensingInterval; // Offset: 0x184 // Size: 0x04
	float HearingMaxSoundAge; // Offset: 0x188 // Size: 0x04
	char bEnableSensingUpdates : 1; // Offset: 0x18c // Size: 0x01
	char bOnlySensePlayers : 1; // Offset: 0x18c // Size: 0x01
	char bSeePawns : 1; // Offset: 0x18c // Size: 0x01
	char bHearNoises : 1; // Offset: 0x18c // Size: 0x01
	char pad_0x18C_4 : 4; // Offset: 0x18c // Size: 0x01
	char pad_0x18D[0xb]; // Offset: 0x18d // Size: 0x0b
	struct FScriptMulticastDelegate OnSeePawn; // Offset: 0x198 // Size: 0x10
	struct FScriptMulticastDelegate OnHearNoise; // Offset: 0x1a8 // Size: 0x10
	float PeripheralVisionAngle; // Offset: 0x1b8 // Size: 0x04
	float PeripheralVisionCosine; // Offset: 0x1bc // Size: 0x04

	// Functions

	// Object Name: Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void SetSensingUpdatesEnabled(bool bEnabled); // Offset: 0x105661108 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AIModule.PawnSensingComponent.SetSensingInterval
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void SetSensingInterval(float NewSensingInterval); // Offset: 0x105661084 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// Flags: [BlueprintAuthorityOnly|Native|Public|BlueprintCallable]
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Offset: 0x105661000 // Return & Params: Num(1) Size(0x4)

	// Object Name: DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults]
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPeripheralVisionCosine(); // Offset: 0x105660fe4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetPeripheralVisionAngle(); // Offset: 0x105660fc8 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class AIModule.VisualLoggerExtension
// Size: 0x28 // Inherited bytes: 0x28
struct UVisualLoggerExtension : UObject {
};

