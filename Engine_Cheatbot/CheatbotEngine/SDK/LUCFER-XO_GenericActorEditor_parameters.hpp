#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GenericActorEditor.ActorEditorActor.SetLargeDataContent
struct AActorEditorActor_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorActor.OnRep_LargeDataContent
struct AActorEditorActor_OnRep_LargeDataContent_Params
{
};

// Function GenericActorEditor.ActorEditorActor.GetLargeDataContent
struct AActorEditorActor_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorActor.BPTakeDamage
struct AActorEditorActor_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ULuaDamageInfo*                              LuaDamageInfo;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.SetupAIPerception
struct AActorEditorAIController_SetupAIPerception_Params
{
	struct FActorEditorAIPerceptionSetup               Setup;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAIPerceptionComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.SetPerceptionEnabled
struct AActorEditorAIController_SetPerceptionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.SetPerceptionConfig
struct AActorEditorAIController_SetPerceptionConfig_Params
{
	struct FActorEditorAISightConfig                   InConfig;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.SetLargeDataContent
struct AActorEditorAIController_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorAIController.OnRep_LargeDataContent
struct AActorEditorAIController_OnRep_LargeDataContent_Params
{
};

// Function GenericActorEditor.ActorEditorAIController.OnReceiveHandleAITargetPerceptionUpdated
struct AActorEditorAIController_OnReceiveHandleAITargetPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function GenericActorEditor.ActorEditorAIController.OnReceiveHandleAIPerceptionUpdated
struct AActorEditorAIController_OnReceiveHandleAIPerceptionUpdated_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorAIController.HasReachedLocation
struct AActorEditorAIController_HasReachedLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNavigationDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.HasReachedActor
struct AActorEditorAIController_HasReachedActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNavigationDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.HasActiveStimulus
struct AActorEditorAIController_HasActiveStimulus_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.HandleAITargetPerceptionUpdated
struct AActorEditorAIController_HandleAITargetPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (Parm)
};

// Function GenericActorEditor.ActorEditorAIController.HandleAIPerceptionUpdated
struct AActorEditorAIController_HandleAIPerceptionUpdated_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            // (Parm, ZeroConstructor)
};

// Function GenericActorEditor.ActorEditorAIController.GetPerceptionConfig
struct AActorEditorAIController_GetPerceptionConfig_Params
{
	struct FActorEditorAISightConfig                   OutConfig;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.GetLargeDataContent
struct AActorEditorAIController_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorAIController.GetIsMoving
struct AActorEditorAIController_GetIsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorAIController.GetCurrentlyPerceivedActors
struct AActorEditorAIController_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences
struct UActorEditorAnimInstanceBase_ClearAnimReferences_Params
{
};

// Function GenericActorEditor.ActorEditorCharacter.SetLargeDataContent
struct AActorEditorCharacter_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorCharacter.OnRep_LargeDataContent
struct AActorEditorCharacter_OnRep_LargeDataContent_Params
{
};

// Function GenericActorEditor.ActorEditorCharacter.GetLargeDataContent
struct AActorEditorCharacter_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorCharacter.BPTakeDamage
struct AActorEditorCharacter_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ULuaDamageInfo*                              LuaDamageInfo;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData
struct UActorEditorCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params
{
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent
struct UActorEditorComponentBlueprintLibrary_UnregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnRegisterActorPerceivable
struct UActorEditorComponentBlueprintLibrary_UnRegisterActorPerceivable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture
struct UActorEditorComponentBlueprintLibrary_SetWidgetOpacityFromTexture_Params
{
	class UWidgetComponent*                            InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize
struct UActorEditorComponentBlueprintLibrary_SetWidgetDrawAtDesiredSize_Params
{
	class UWidgetComponent*                            InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy
struct UActorEditorComponentBlueprintLibrary_SetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetNetAddressable
struct UActorEditorComponentBlueprintLibrary_SetNetAddressable_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility
struct UActorEditorComponentBlueprintLibrary_SetMobility_Params
{
	class USceneComponent*                             InSceneComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate
struct UActorEditorComponentBlueprintLibrary_SetComponentAutoActivate_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoActivate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent
struct UActorEditorComponentBlueprintLibrary_SetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NewRootComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent
struct UActorEditorComponentBlueprintLibrary_ReregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent
struct UActorEditorComponentBlueprintLibrary_RegisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterActorPerceivable
struct UActorEditorComponentBlueprintLibrary_RegisterActorPerceivable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics
struct UActorEditorComponentBlueprintLibrary_IsSimulatingPhysics_Params
{
	class UPrimitiveComponent*                         InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered
struct UActorEditorComponentBlueprintLibrary_IsComponentRegistered_Params
{
	class UActorComponent*                             InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy
struct UActorEditorComponentBlueprintLibrary_GetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter
struct UActorEditorComponentBlueprintLibrary_GetFloatParameter_Params
{
	class UParticleSystemComponent*                    InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InName;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds
struct UActorEditorComponentBlueprintLibrary_GetComponentBounds_Params
{
	class USceneComponent*                             InSceneComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag
struct UActorEditorComponentBlueprintLibrary_GetCollisionTraceFlag_Params
{
	class UPrimitiveComponent*                         InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform
struct UActorEditorComponentBlueprintLibrary_GetBoneTransform_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BoneIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LocalToWorld;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation
struct UActorEditorComponentBlueprintLibrary_GetBoneLocation_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           Space;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent
struct UActorEditorComponentBlueprintLibrary_GetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent
struct UActorEditorComponentBlueprintLibrary_ChangeRootComponent_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NewRootComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorDecoratorActor.SetLargeDataContent
struct AActorEditorDecoratorActor_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorDecoratorActor.OnRep_LargeDataContent
struct AActorEditorDecoratorActor_OnRep_LargeDataContent_Params
{
};

// Function GenericActorEditor.ActorEditorDecoratorActor.GetLargeDataContent
struct AActorEditorDecoratorActor_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication
struct UActorEditorDisableTransformReplicationInterface_SetDisableTransformReplication_Params
{
	bool                                               bInDisable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum
struct UActorEditorParticleSystemComponent_GetEmitterInstanceNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorPawn.SetLargeDataContent
struct AActorEditorPawn_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorPawn.OnRep_LargeDataContent
struct AActorEditorPawn_OnRep_LargeDataContent_Params
{
};

// Function GenericActorEditor.ActorEditorPawn.GetLargeDataContent
struct AActorEditorPawn_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GenericActorEditor.ActorEditorPawn.BPTakeDamage
struct AActorEditorPawn_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ULuaDamageInfo*                              LuaDamageInfo;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorSimpleCharacterMovementComponent.OnRep_CharacterMovementSyncData
struct UActorEditorSimpleCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params
{
};

// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset
struct UActorEditorSkeletalMeshComponent_SetSkeletalModelPreset_Params
{
	struct FString                                     ModePresetIDStr;                                          // (Parm, ZeroConstructor)
};

// Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset
struct UActorEditorSkeletalMeshComponent_PlaySkeletalAnimationPreset_Params
{
	struct FString                                     AnimationPresetIDStr;                                     // (Parm, ZeroConstructor)
};

// Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath
struct UActorEditorStaticMeshComponent_SetStaticMeshPath_Params
{
	struct FString                                     InMeshPath;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath
struct UActorEditorStaticMeshComponent_OnRep_StaticMeshPath_Params
{
	struct FString                                     OldPath;                                                  // (Parm, ZeroConstructor)
};

}

