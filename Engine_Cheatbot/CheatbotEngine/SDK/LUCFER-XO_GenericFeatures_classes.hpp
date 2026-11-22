#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GenericFeatures.BehaviorControlComponent
// 0x0030 (0x01A8 - 0x0178)
class UBehaviorControlComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0178(0x0010) UNKNOWN PROPERTY: ArrayProperty GenericFeatures.BehaviorControlComponent.BehaviorTreePath
	class APawn*                                       OwnerPawn;                                                // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AAIController*                               AIController;                                             // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorTreeComp;                                         // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x01A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BehaviorControlComponent");
		return pStaticClass;
	}


	void UnPossessed();
	void StopBehaviorTree();
	void StopBehavior(const struct FString& Reason);
	bool RunBehaviorTreeByIndex(int PathIndex);
	void ResumeBehavior(const struct FString& Reason);
	void RestartBehavior();
	void PossessedBy(class AController* NewController);
	void PauseBehavior(const struct FString& Reason);
	void OnPlayerActiveRegionsChanged(bool bEnter);
};


// Class GenericFeatures.BTDecorator_Generic_HasAIState
// 0x0040 (0x00A0 - 0x0060)
class UBTDecorator_Generic_HasAIState : public UBTDecorator
{
public:
	TArray<struct FGameplayTag>                        States;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	EHasAITagStateLogic                                LogicOp;                                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExact;                                                   // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      BBKeyTarget;                                              // 0x0078(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTDecorator_Generic_HasAIState");
		return pStaticClass;
	}

};


// Class GenericFeatures.BTService_Generic_ChooseEnemy
// 0x0080 (0x00E8 - 0x0068)
class UBTService_Generic_ChooseEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               // 0x0068(0x0028) (Edit)
	struct FBlackboardKeySelector                      BBKeyCanNotSeeTarget;                                     // 0x0090(0x0028) (Edit)
	struct FBlackboardKeySelector                      BBKeyDynamicSearchRuleIndex;                              // 0x00B8(0x0028) (Edit)
	bool                                               bShowDebugInfo;                                           // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              DebugInfoLife;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTService_Generic_ChooseEnemy");
		return pStaticClass;
	}

};


// Class GenericFeatures.BTTask_Generic_ClearEnemy
// 0x0028 (0x0098 - 0x0070)
class UBTTask_Generic_ClearEnemy : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BBKeyEnemy;                                               // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.BTTask_Generic_ClearEnemy");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericAIController
// 0x0068 (0x0620 - 0x05B8)
class AGenericAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x05B8(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0610(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAIController");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericAnimInstanceBase
// 0x0000 (0x1780 - 0x1780)
class UGenericAnimInstanceBase : public UDataDriverAnimInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAnimInstanceBase");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericAnimShareParamsCompBase
// 0x00E8 (0x0598 - 0x04B0)
class UGenericAnimShareParamsCompBase : public UDataDriverAnimShareParamsComp
{
public:
	struct FSoftObjectPath                             AnimDataAsset;                                            // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSkipAssetLoadingOnDedicatedServer;                       // 0x04C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FGameplayTag                                AnimContextType;                                          // 0x04D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x50];                                      // 0x04D8(0x0050) UNKNOWN PROPERTY: MapProperty GenericFeatures.GenericAnimShareParamsCompBase.AnimContainerClassMap
	unsigned char                                      UnknownData02[0x30];                                      // 0x0528(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimContainerPreActive;                                 // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimContainerActive;                                    // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0578(0x0010) MISSED OFFSET
	struct FName                                       AnimSourceKey;                                            // 0x0588(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimAssetsLoaded;                                        // 0x0590(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0591(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericAnimShareParamsCompBase");
		return pStaticClass;
	}


	bool IsAnimAssetsLoaded();
	class UAnimationAsset* GetLoadedAnimAsset(const struct FGameplayTag& Tag);
	void DeactiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bForceRemove);
	void DeactiveAnimContainer(const struct FName& InTag, bool bForceRemove);
	void ActiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bEndNotify);
	void ActiveAnimContainer(const struct FName& InTag, bool bEndNotify);
};


// Class GenericFeatures.GenericCameraSpringArmComponent
// 0x0150 (0x05A0 - 0x0450)
class UGenericCameraSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0450(0x0048) MISSED OFFSET
	float                                              ArmLengthInterpSpeed;                                     // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OffsetInterpSpeed;                                        // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfViewInterpSpeed;                                   // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyInitialPitch;                                       // 0x04A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	float                                              InitialPitch;                                             // 0x04A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIndependentOrbit;                                        // 0x04AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	float                                              MinOrbitPitch;                                            // 0x04B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxOrbitPitch;                                            // 0x04B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableZoom;                                              // 0x04B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              MinZoomArmLength;                                         // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxZoomArmLength;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            ViewingController;                                        // 0x04C4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UCameraComponent>             CameraComponent;                                          // 0x04CC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0xCC];                                      // 0x04D4(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCameraSpringArmComponent");
		return pStaticClass;
	}


	void NotifyEndViewTarget(class APlayerController* Controller);
	void NotifyBecomeViewTarget(class APlayerController* Controller);
	bool IsCameraStateActive(const struct FName& StateName);
	void HandleViewTargetChanged(class AActor* NewTarget, class AActor* PreviousTarget);
	void HandleControllerRotationChanged();
	bool DeactivateCameraState(const struct FName& StateName);
	void AddZoomInput(float Delta);
	void AddLookInput(float Yaw, float Pitch);
	bool ActivateCameraState(const struct FName& StateName, float DurationSeconds);
};


// Class GenericFeatures.GenericCharacter
// 0x00F0 (0x09E0 - 0x08F0)
class AGenericCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x08F0(0x0090) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x0980(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0984(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGenericInputEvent;                                      // 0x0988(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	ESpecialMovementType                               CurrentSpecialMoveType;                                   // 0x0998(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	class UStateReflectComp*                           StateReflectComp;                                         // 0x09A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ERegionSizeIndex                                   RegionSize;                                               // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegionStatic;                                            // 0x09A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09AA(0x0006) MISSED OFFSET
	class UAttrModifyComponent*                        AttrModifyComp;                                           // 0x09B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LuaFilePath;                                              // 0x09B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGenericInputOverrideEntry>          InputOverrideHandlers;                                    // 0x09C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacter");
		return pStaticClass;
	}


	void UnregisterInputOverrideHandler(const struct FName& Key);
	void SetCurrentSpecialMoveType(ESpecialMovementType InSpecialMoveType);
	void RegisterRegionObjectIfEnabled();
	void RegisterInputOverrideHandler(const struct FName& Key, int Priority, const struct FScriptDelegate& Handler);
	void OnStateLeft(const struct FGameplayTag& State);
	void OnStateEntered(const struct FGameplayTag& State);
	void OnRep_PlayerKey();
	void OnRep_CurrentSpecialMoveType(ESpecialMovementType OldType);
	bool IsInObjectPool();
	bool IsAlive();
	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UStateReflectComp* GetStateReflectComp();
	void DispatchGenericInputEvent(const struct FName& EventName, EGenericInputEventType EventType, float Value);
};


// Class GenericFeatures.GenericCharacterAnimShareParamsComp
// 0x0000 (0x0598 - 0x0598)
class UGenericCharacterAnimShareParamsComp : public UGenericAnimShareParamsCompBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacterAnimShareParamsComp");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericCharacterMovementComponent
// 0x00A0 (0x08B0 - 0x0810)
class UGenericCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	TMap<TEnumAsByte<ECustomMovmentMode>, ESpecialMovementType> CustomMoveModeToSpecialMoveType;                          // 0x0810(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<ESpecialMovementType, class USpecialMoveBaseObj*> SpecialObjes;                                             // 0x0860(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericCharacterMovementComponent");
		return pStaticClass;
	}


	ESpecialMovementType GetSpecialMoveTypebyCustomMovemode(unsigned char CustomMovmentMode);
	class USpecialMoveBaseObj* GetSpecialMoveObjBySpecialMoveType(ESpecialMovementType SpecialMoveType);
	class USpecialMoveBaseObj* GetSpecialMoveObjByCustomMovementMode(unsigned char CustomMovmentMode);
	class USpecialMoveBaseObj* GetCurrentSpecialMoveByType();
};


// Class GenericFeatures.GenericChooseEnemyComponent
// 0x0058 (0x01D0 - 0x0178)
class UGenericChooseEnemyComponent : public UActorComponent
{
public:
	struct FGenericMonsterSensingConfig                SensingConfig;                                            // 0x0178(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGenericSensingRuntimeState                 RuntimeState;                                             // 0x01C0(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericChooseEnemyComponent");
		return pStaticClass;
	}


	class ACharacter* SelectFromCandidates(TArray<class ACharacter*> Filtered, EGenericSearchEnemyRule Rule);
	bool IsValidEnemy(class ACharacter* Target, bool bUseMonsterFilter, bool* bOutIsNearDeath);
	static bool IsTargetAlive(class ACharacter* Target);
	bool IsEnemyByActor(class ACharacter* InTarget);
	static float GetTargetHealth(class ACharacter* Target);
	struct FGenericMonsterSensingConfig GetSensingConfig();
	class AGenericMonsterBase* GetOwnerMonster();
	void CollectPlayerCandidates(TArray<class ACharacter*>* OutPlayers);
	void CollectMonsterCandidates(TArray<class ACharacter*>* OutMonsters);
};


// Class GenericFeatures.GenericHitReactionAnimAbility
// 0x0040 (0x0070 - 0x0030)
class UGenericHitReactionAnimAbility : public UAnimAbility
{
public:
	struct FAnimAssetBlendSpace                        HitBlendSpace;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, EditConst)
	struct FVector                                     HitDirection;                                             // 0x0040(0x000C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	float                                              HitNormalizedTime;                                        // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HitWeight;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0054(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericHitReactionAnimAbility");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericHitReactionComponent
// 0x0038 (0x01B0 - 0x0178)
class UGenericHitReactionComponent : public UActorComponent
{
public:
	EGenericHitAnimationMode                           AnimationMode;                                            // 0x0178(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FGenericHitReactionEntry                    DefaultReaction;                                          // 0x0180(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FGenericHitReactionEntry>            Reactions;                                                // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericHitReactionComponent");
		return pStaticClass;
	}


	bool PlayHitReaction(EAvatarDamagePosition BodyPart, const struct FVector& LocalSourceDirection, const struct FVector& ImpactPoint);
	void MulticastPlayHitReaction(EAvatarDamagePosition BodyPart, EGenericHitDirection Direction, const struct FVector& ImpactPoint);
};


// Class GenericFeatures.GenericLocomotionAnimAbility
// 0x0028 (0x0058 - 0x0030)
class UGenericLocomotionAnimAbility : public UAnimAbility
{
public:
	float                                              DirectionInterpSpeed;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InAirVelocityThreshold;                                   // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Direction;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	TWeakObjectPtr<class ACharacter>                   OwnerCharacter;                                           // 0x0044(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UCharacterMovementComponent>  OwnerCMC;                                                 // 0x004C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericLocomotionAnimAbility");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericMonsterBase
// 0x01C0 (0x0BA0 - 0x09E0)
class AGenericMonsterBase : public AGenericCharacter
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x09E0(0x0068) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMonsterSetPlayedIdleIndex;                              // 0x0A48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FMonsterIdleIndex                           MonsterIdleIndex;                                         // 0x0A58(0x0008) (BlueprintVisible, Net)
	struct FScriptMulticastDelegate                    OnMonsterHurting;                                         // 0x0A60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyChanged;                                           // 0x0A70(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A80(0x0004) MISSED OFFSET
	float                                              WalkSpeed;                                                // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedScale;                                               // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0A90(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Campid;                                                   // 0x0A94(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MonsterLevel;                                             // 0x0A98(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A9C(0x0004) MISSED OFFSET
	struct FString                                     CharacterName;                                            // 0x0AA0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UUTSkillManagerComponent*                    SkillManager;                                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USTBuffSystemComponent*                      BuffSystem;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USimulateSyncSmoothComponent*                SimulateSyncSmooth;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGenericChooseEnemyComponent*                ChooseEnemyComponent;                                     // 0x0AC8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBehaviorControlComponent*                   BehaviorControlComp;                                      // 0x0AD0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bEnableSimulateSyncSmooth;                                // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AD9(0x0003) MISSED OFFSET
	float                                              MovementTickInterval;                                     // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableMobMoveBatch;                                      // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegisteredInMoveBatchMgr;                                // 0x0AE1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      CurrentMonsterLOD;                                        // 0x0AE2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      AutoDormancyType;                                         // 0x0AE3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnAnimTime;                                            // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0AE8(0x0018) MISSED OFFSET
	float                                              LandDuration;                                             // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirVelocityThreshold;                                   // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveSpeedTolerance;                                       // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	bool                                               bAllowVehicleKnockback;                                   // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	float                                              VehicleHitLaunchPitchDeg;                                 // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefMinImpulse;                                  // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefMaxImpulse;                                  // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinLaunchVelocity;                              // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMaxLaunchVelocity;                              // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowLaunchAirState;                                     // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              DelayCheckLaunchAirState;                                 // 0x0B2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinLaunchAirGroundTime;                                   // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchAirGroundTime;                                   // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAirRiseUpDuration;                                  // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1C];                                      // 0x0B3C(0x001C) MISSED OFFSET
	float                                              StunBeginAnimTime;                                        // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunAnimTime;                                             // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StunRecoveryAnimTime;                                     // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1C];                                      // 0x0B64(0x001C) MISSED OFFSET
	bool                                               CloseCollisionForMeshOnDS;                                // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAnimationUpdatedOnClient;                           // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMeshUntilAnimAssetsLoaded;                           // 0x0B82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0B83(0x0001) MISSED OFFSET
	float                                              ShowMeshDelayAfterAnimAssetsLoaded;                       // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEditorKeyPressedDelegate;                               // 0x0B88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0B98(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterBase");
		return pStaticClass;
	}


	void SetTeamID(int NewTeamId);
	void SetSpeedScale(float NewSpeedScale);
	void SetMonsterIdleIndex(int NewIndex);
	void SetCharacterName(const struct FString& NewCharacterName);
	void SetCampID(int NewCampID);
	class ACharacter* SelectEnemyByLua(TArray<class ACharacter*> Candidates);
	float ReviseSenseDistanceByActor(float InDistance, class AActor* InTarget);
	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
	void OnSmoothComponentSnapshotPreReplicate();
	void OnRep_MonsterIdleIndex();
	void OnRep_CampID();
	void OnEnemyChangedInternal(class APawn* NewEnemy);
	void LeaveLaunchAirRiseUp();
	void LeaveLaunchAirGround();
	void LaunchCharacterWithParam(const struct FVector& LaunchVelocity, bool bChangeState);
	bool IsValidEnemyTarget(class AActor* InTarget);
	bool IsRegionActive();
	bool IsInCombat();
	bool IsEnemyByActor(class ACharacter* InTarget);
	int GetTeamID();
	float GetSpeedScale();
	struct FGenericMonsterSensingConfig GetSensingConfig();
	int GetMonsterIdleIndex();
	float GetCurrentSpeed();
	class UGenericChooseEnemyComponent* GetChooseEnemyComponent();
	struct FString GetCharacterName();
	int GetCampID();
	class USTBuffSystemComponent* GetBuffComponent();
	void FinishStunRecovery();
	void ExitSpawnState();
	void EnterStunRecovery();
	void EnterStun();
	void DoHurting(const struct FVector& HurtDir);
	void ClearStunState();
	void ClearLaunchAirState();
	void CheckLaunchAirState();
	void ChangeWalkSpeed(EMobWalkType InWalkType);
};


// Class GenericFeatures.GenericMonster
// 0x0120 (0x0CC0 - 0x0BA0)
class AGenericMonster : public AGenericMonsterBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0BA0(0x0098) MISSED OFFSET
	float                                              HealthMax;                                                // 0x0C38(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x0C3C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EDamageableGameObjectType>                  DamageableGameObjectTypes;                                // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TakeDamageScale;                                          // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VehicleSpeedDamageCurve;                                  // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitDamageScale;                                    // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamageSpeedKmh;                              // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefDamageSpeedKmh;                              // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamageImpulse;                               // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitRefDamageImpulse;                               // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMinDamage;                                      // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleHitMaxDamage;                                      // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadAnimTime;                                             // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HurtAnimTime;                                             // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsInvincible : 1;                                         // 0x0C84(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0C85(0x0001) MISSED OFFSET
	bool                                               bForceOpenPawnCollision;                                  // 0x0C86(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowGenericHPBar;                                        // 0x0C87(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GenericHPBarPlanID;                                       // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomHPBarType;                                          // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomHPBarScreenMarkID;                                  // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C94(0x0004) MISSED OFFSET
	struct FString                                     CustomHPBarUIConfig;                                      // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0CA8(0x0010) MISSED OFFSET
	class UPartHitComponentBase*                       PartHitComp;                                              // 0x0CB8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonster");
		return pStaticClass;
	}


	void SetTakeDamageScale(float NewTakeDamageScale);
	void SetIsInvincible(bool bInvincible, unsigned char InMaskBit);
	void SetHealthMax(float NewHealthMax);
	void SetHealth(float NewHealth);
	void SetDamageScale(float NewDamageScale);
	float OnTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	void OnDie(class APawn* Causer);
	float HandleTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator);
	float GetTakeDamageScale();
	class UPartHitComponentBase* GetPartHitComponentBase();
	bool GetIsInvincible();
	float GetHealthMax();
	float GetHealth();
	float GetDamageScale();
	float CalcVehicleHitDamage(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& HitImpulseDirection, float HitSpeed);
	void BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType);
	float BPPreTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class GenericFeatures.GenericMonsterAnimInstance
// 0x00D0 (0x1850 - 0x1780)
class UGenericMonsterAnimInstance : public UGenericAnimInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1780(0x0008) MISSED OFFSET
	float                                              Speed;                                                    // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomIdleIndex;                                          // 0x178C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomIdleIndexInt;                                       // 0x1790(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1794(0x0004) MISSED OFFSET
	struct FGameplayTag                                RandomIdleBS1DTag;                                        // 0x1798(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     HurtDirection;                                            // 0x17A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              HurtingAccumulate;                                        // 0x17AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHurting;                                               // 0x17B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17B1(0x0003) MISSED OFFSET
	float                                              HurtingAnimPlayRate;                                      // 0x17B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                HurtBSTag;                                                // 0x17B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToMontageParamMap;                                   // 0x17C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMonsterIdleIndexDelegateBound;                           // 0x1810(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1811(0x0007) MISSED OFFSET
	class AGenericMonsterBase*                         CachedOwnerMonster;                                       // 0x1818(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMonsterHurtingDelegateBound;                             // 0x1820(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1821(0x0007) MISSED OFFSET
	class UStateReflectComp*                           CachedStateReflectComp;                                   // 0x1828(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FGameplayTag>                        PendingMontageTags;                                       // 0x1830(0x0010) (ZeroConstructor, Transient)
	bool                                               bAnimAssetsLoadedDelegateBound;                           // 0x1840(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF];                                       // 0x1841(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimInstance");
		return pStaticClass;
	}


	float PlayMontageWithAnimEventByName(const struct FName& InTag);
	float PlayMontageWithAnimEvent(const struct FGameplayTag& EventTag);
	void OnMonsterRandomIdleIndexSet(int NewIndex);
	void OnMonsterHurting(class AGenericMonsterBase* Monster, const struct FVector& HurtDir);
	void HandleStateEntered(const struct FGameplayTag& State);
	class UGenericMonsterAnimShareParamsComp* GetMonsterShareParams();
};


// Class GenericFeatures.GenericMonsterAnimShareParamsComp
// 0x0058 (0x05F0 - 0x0598)
class UGenericMonsterAnimShareParamsComp : public UGenericAnimShareParamsCompBase
{
public:
	TMap<struct FGameplayTag, struct FGameplayTag>     StateToAnimParamMap;                                      // 0x0598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStateReflectComp*                           CachedStateRef;                                           // 0x05E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterAnimShareParamsComp");
		return pStaticClass;
	}


	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
};


// Class GenericFeatures.GenericMonsterEditor
// 0x0090 (0x0D50 - 0x0CC0)
class AGenericMonsterEditor : public AGenericMonster
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0CC0(0x0010) MISSED OFFSET
	struct FActorEditorLargeDataContent                LargeDataContent;                                         // 0x0CD0(0x0080) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterEditor");
		return pStaticClass;
	}


	void SetLargeDataContent(TArray<unsigned char> NewContent);
	void OnRep_LargeDataContent();
	TArray<unsigned char> GetLargeDataContent();
};


// Class GenericFeatures.GenericMonsterLODComponent
// 0x0040 (0x01B8 - 0x0178)
class UGenericMonsterLODComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
	unsigned char                                      CurrentLOD;                                               // 0x0180(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExemptFromLOD;                                           // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
	TArray<struct FMonsterLODLevelConfig>              LevelConfigs;                                             // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MovementTickInterval;                                     // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLODChangedDelegate;                                     // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AGenericMonsterBase*                         CachedOwnerMonster;                                       // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericMonsterLODComponent");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericNPC
// 0x0000 (0x0BA0 - 0x0BA0)
class AGenericNPC : public AGenericMonsterBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericNPC");
		return pStaticClass;
	}

};


// Class GenericFeatures.GenericPartHitComponent
// 0x0168 (0x02E0 - 0x0178)
class UGenericPartHitComponent : public UPartHitComponentBase
{
public:
	class ACharacter*                                  OwnerCharacter;                                           // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              UpdateHitBoxDeltaTime;                                    // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bActivePartHit;                                           // 0x0184(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	uint64_t                                           LastPartHitRefreshBoxCollisionFrameNum;                   // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, TEnumAsByte<ESTEPoseState>> TagToPoseMap;                                             // 0x0190(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ESTEPoseState>, struct FHitBoxTagInfo> HitBoxTagMapData;                                         // 0x01E0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FHitBoxTagInfo                              UselessHitBoxData;                                        // 0x0230(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<class UPrimitiveComponent*>                 HitBoxList;                                               // 0x0248(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0258(0x0020) MISSED OFFSET
	TMap<struct FString, EAvatarDamagePosition>        NewHitBodyPosMap;                                         // 0x0278(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              PawnCollisionCountdown;                                   // 0x02C8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRefreshPawnCollision;                                  // 0x02CC(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	float                                              BoxCollisionCountdown;                                    // 0x02D0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsRefreshBoxCollision;                                   // 0x02D4(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EHitPartJugementType>                  ClientHitPartJudgment;                                    // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x02D6(0x0001) MISSED OFFSET
	bool                                               bDebugDrawHitPos;                                         // 0x02D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseCharacterMeshCollision;                             // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericPartHitComponent");
		return pStaticClass;
	}


	void UpdatePoseCollisionShapes(TEnumAsByte<ESTEPoseState> PoseState);
	void UpdateAllInstanceBodyTransform(int Type);
	void RefreshWorldBoxCollision(float countdown);
	void RefreshByStateChange(const struct FGameplayTag& State);
	void InitBodyHitBox();
	class UPrimitiveComponent* GetHitBoxByState(TEnumAsByte<ESTEPoseState> InPoseState);
	EAvatarDamagePosition GetHitBodyTypeByHitPos(const struct FVector& InHitPos);
	EAvatarDamagePosition GetHitBodyTypeByBoneName(const struct FString& InBoneName);
	EAvatarDamagePosition GetHitBodyType(const struct FVector& InHitPos, const struct FVector& InImpactVec, const struct FString& InBoneName);
	TEnumAsByte<EHitPartJugementType> GetCurHitPartJudgementType();
	void CloseBodyBulletCollision();
	EAvatarDamagePosition CalcHitBodyType(const struct FVector& InHitPos, const struct FVector& InProjvec, const struct FVector& InCenterPos, const struct FBodyTypeDef& InBodyDef);
};


// Class GenericFeatures.GenericPlayerCharacter
// 0x0080 (0x0A60 - 0x09E0)
class AGenericPlayerCharacter : public AGenericCharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x09E0(0x0060) MISSED OFFSET
	float                                              Health;                                                   // 0x0A40(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HealthMax;                                                // 0x0A44(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageScale;                                              // 0x0A48(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	class UPartHitComponentBase*                       PartHitComp;                                              // 0x0A50(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0A58(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericPlayerCharacter");
		return pStaticClass;
	}


	float GetHealth();
};


// Class GenericFeatures.GenericStateAnimAbility
// 0x0080 (0x00B0 - 0x0030)
class UGenericStateAnimAbility : public UAnimAbility
{
public:
	TArray<struct FGameplayTag>                        WatchedStates;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TWeakObjectPtr<class UStateReflectComp>            CachedStateRef;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UBoolProperty*>                       WatchedProps;                                             // 0x0048(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0058(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.GenericStateAnimAbility");
		return pStaticClass;
	}


	void HandleStateLeft(const struct FGameplayTag& State);
	void HandleStateEntered(const struct FGameplayTag& State);
};


// Class GenericFeatures.PlanarDragComponent
// 0x0050 (0x01C8 - 0x0178)
class UPlanarDragComponent : public UActorComponent
{
public:
	float                                              MinLength;                                                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLength;                                                // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0184(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.PlanarDragComponent");
		return pStaticClass;
	}


	void SetDragEnabled(class ASTExtraPlayerController* Controller, bool bEnabled);
	void SetAimLength(float Length);
	bool IsDragging();
	void HandleTouchRelease(TEnumAsByte<ETouchIndex> FingerIndex);
	void HandleTouchMove(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void HandleTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	bool ConsumeAimInput(struct FVector* Direction, float* Length);
	void CancelDrag();
};


// Class GenericFeatures.StateReflectComp
// 0x0050 (0x01C8 - 0x0178)
class UStateReflectComp : public UActorComponent
{
public:
	class UStateRelationDataAsset*                     RelationData;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStateEntered;                                           // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateLeft;                                              // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGameplayTagContainer                       CurrentStates;                                            // 0x01A0(0x0020) (Net)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateReflectComp");
		return pStaticClass;
	}


	void OnRep_CurrentStates(const struct FGameplayTagContainer& OldStates);
	void LeaveState(const struct FGameplayTag& State);
	bool HasState(const struct FGameplayTag& State, bool bExact);
	struct FGameplayTagContainer GetCurrentStates();
	bool EnterState(const struct FGameplayTag& State);
	void ClearAllStates();
	bool CanEnterState(const struct FGameplayTag& State);
};


// Class GenericFeatures.StateRelationDataAsset
// 0x0060 (0x0090 - 0x0030)
class UStateRelationDataAsset : public UDataAsset
{
public:
	TArray<struct FStateRelationEntry>                 Entries;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GenericFeatures.StateRelationDataAsset");
		return pStaticClass;
	}

};


}

