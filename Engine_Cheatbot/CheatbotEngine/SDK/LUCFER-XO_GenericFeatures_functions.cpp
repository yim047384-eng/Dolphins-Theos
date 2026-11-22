//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericFeatures.BehaviorControlComponent.UnPossessed
// (Native, Public, BlueprintCallable)

void UBehaviorControlComponent::UnPossessed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.UnPossessed");

	UBehaviorControlComponent_UnPossessed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.StopBehaviorTree
// (Native, Public, BlueprintCallable)

void UBehaviorControlComponent::StopBehaviorTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.StopBehaviorTree");

	UBehaviorControlComponent_StopBehaviorTree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.StopBehavior
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UBehaviorControlComponent::StopBehavior(const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.StopBehavior");

	UBehaviorControlComponent_StopBehavior_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.RunBehaviorTreeByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            PathIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBehaviorControlComponent::RunBehaviorTreeByIndex(int PathIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.RunBehaviorTreeByIndex");

	UBehaviorControlComponent_RunBehaviorTreeByIndex_Params params;
	params.PathIndex = PathIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.BehaviorControlComponent.ResumeBehavior
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UBehaviorControlComponent::ResumeBehavior(const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.ResumeBehavior");

	UBehaviorControlComponent_ResumeBehavior_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.RestartBehavior
// (Native, Public, BlueprintCallable)

void UBehaviorControlComponent::RestartBehavior()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.RestartBehavior");

	UBehaviorControlComponent_RestartBehavior_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.PossessedBy
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void UBehaviorControlComponent::PossessedBy(class AController* NewController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.PossessedBy");

	UBehaviorControlComponent_PossessedBy_Params params;
	params.NewController = NewController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.PauseBehavior
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor)

void UBehaviorControlComponent::PauseBehavior(const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.PauseBehavior");

	UBehaviorControlComponent_PauseBehavior_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.BehaviorControlComponent.OnPlayerActiveRegionsChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void UBehaviorControlComponent::OnPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.BehaviorControlComponent.OnPlayerActiveRegionsChanged");

	UBehaviorControlComponent_OnPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.IsAnimAssetsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericAnimShareParamsCompBase::IsAnimAssetsLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.IsAnimAssetsLoaded");

	UGenericAnimShareParamsCompBase_IsAnimAssetsLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.GetLoadedAnimAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UGenericAnimShareParamsCompBase::GetLoadedAnimAsset(const struct FGameplayTag& Tag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.GetLoadedAnimAsset");

	UGenericAnimShareParamsCompBase_GetLoadedAnimAsset_Params params;
	params.Tag = Tag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.DeactiveAnimContainerWithInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  AnimClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceRemove                   (Parm, ZeroConstructor, IsPlainOldData)

void UGenericAnimShareParamsCompBase::DeactiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bForceRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.DeactiveAnimContainerWithInstance");

	UGenericAnimShareParamsCompBase_DeactiveAnimContainerWithInstance_Params params;
	params.InTag = InTag;
	params.AnimClass = AnimClass;
	params.bForceRemove = bForceRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.DeactiveAnimContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bForceRemove                   (Parm, ZeroConstructor, IsPlainOldData)

void UGenericAnimShareParamsCompBase::DeactiveAnimContainer(const struct FName& InTag, bool bForceRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.DeactiveAnimContainer");

	UGenericAnimShareParamsCompBase_DeactiveAnimContainer_Params params;
	params.InTag = InTag;
	params.bForceRemove = bForceRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.ActiveAnimContainerWithInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  AnimClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndNotify                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericAnimShareParamsCompBase::ActiveAnimContainerWithInstance(const struct FName& InTag, class UClass* AnimClass, bool bEndNotify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.ActiveAnimContainerWithInstance");

	UGenericAnimShareParamsCompBase_ActiveAnimContainerWithInstance_Params params;
	params.InTag = InTag;
	params.AnimClass = AnimClass;
	params.bEndNotify = bEndNotify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericAnimShareParamsCompBase.ActiveAnimContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bEndNotify                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericAnimShareParamsCompBase::ActiveAnimContainer(const struct FName& InTag, bool bEndNotify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericAnimShareParamsCompBase.ActiveAnimContainer");

	UGenericAnimShareParamsCompBase_ActiveAnimContainer_Params params;
	params.InTag = InTag;
	params.bEndNotify = bEndNotify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.NotifyEndViewTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericCameraSpringArmComponent::NotifyEndViewTarget(class APlayerController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.NotifyEndViewTarget");

	UGenericCameraSpringArmComponent_NotifyEndViewTarget_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.NotifyBecomeViewTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericCameraSpringArmComponent::NotifyBecomeViewTarget(class APlayerController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.NotifyBecomeViewTarget");

	UGenericCameraSpringArmComponent_NotifyBecomeViewTarget_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.IsCameraStateActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericCameraSpringArmComponent::IsCameraStateActive(const struct FName& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.IsCameraStateActive");

	UGenericCameraSpringArmComponent_IsCameraStateActive_Params params;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.HandleViewTargetChanged
// (Final, Native, Private)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PreviousTarget                 (Parm, ZeroConstructor, IsPlainOldData)

void UGenericCameraSpringArmComponent::HandleViewTargetChanged(class AActor* NewTarget, class AActor* PreviousTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.HandleViewTargetChanged");

	UGenericCameraSpringArmComponent_HandleViewTargetChanged_Params params;
	params.NewTarget = NewTarget;
	params.PreviousTarget = PreviousTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.HandleControllerRotationChanged
// (Final, Native, Private)

void UGenericCameraSpringArmComponent::HandleControllerRotationChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.HandleControllerRotationChanged");

	UGenericCameraSpringArmComponent_HandleControllerRotationChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.DeactivateCameraState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericCameraSpringArmComponent::DeactivateCameraState(const struct FName& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.DeactivateCameraState");

	UGenericCameraSpringArmComponent_DeactivateCameraState_Params params;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.AddZoomInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void UGenericCameraSpringArmComponent::AddZoomInput(float Delta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.AddZoomInput");

	UGenericCameraSpringArmComponent_AddZoomInput_Params params;
	params.Delta = Delta;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.AddLookInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UGenericCameraSpringArmComponent::AddLookInput(float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.AddLookInput");

	UGenericCameraSpringArmComponent_AddLookInput_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCameraSpringArmComponent.ActivateCameraState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericCameraSpringArmComponent::ActivateCameraState(const struct FName& StateName, float DurationSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCameraSpringArmComponent.ActivateCameraState");

	UGenericCameraSpringArmComponent_ActivateCameraState_Params params;
	params.StateName = StateName;
	params.DurationSeconds = DurationSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacter.UnregisterInputOverrideHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)

void AGenericCharacter::UnregisterInputOverrideHandler(const struct FName& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.UnregisterInputOverrideHandler");

	AGenericCharacter_UnregisterInputOverrideHandler_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.SetCurrentSpecialMoveType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESpecialMovementType           InSpecialMoveType              (Parm, ZeroConstructor, IsPlainOldData)

void AGenericCharacter::SetCurrentSpecialMoveType(ESpecialMovementType InSpecialMoveType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.SetCurrentSpecialMoveType");

	AGenericCharacter_SetCurrentSpecialMoveType_Params params;
	params.InSpecialMoveType = InSpecialMoveType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.RegisterRegionObjectIfEnabled
// (Final, Native, Public, BlueprintCallable)

void AGenericCharacter::RegisterRegionObjectIfEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.RegisterRegionObjectIfEnabled");

	AGenericCharacter_RegisterRegionObjectIfEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.RegisterInputOverrideHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Handler                        (Parm, ZeroConstructor)

void AGenericCharacter::RegisterInputOverrideHandler(const struct FName& Key, int Priority, const struct FScriptDelegate& Handler)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.RegisterInputOverrideHandler");

	AGenericCharacter_RegisterInputOverrideHandler_Params params;
	params.Key = Key;
	params.Priority = Priority;
	params.Handler = Handler;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.OnStateLeft
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void AGenericCharacter::OnStateLeft(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.OnStateLeft");

	AGenericCharacter_OnStateLeft_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.OnStateEntered
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void AGenericCharacter::OnStateEntered(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.OnStateEntered");

	AGenericCharacter_OnStateEntered_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.OnRep_PlayerKey
// (Native, Public)

void AGenericCharacter::OnRep_PlayerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.OnRep_PlayerKey");

	AGenericCharacter_OnRep_PlayerKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.OnRep_CurrentSpecialMoveType
// (Native, Public)
// Parameters:
// ESpecialMovementType           OldType                        (Parm, ZeroConstructor, IsPlainOldData)

void AGenericCharacter::OnRep_CurrentSpecialMoveType(ESpecialMovementType OldType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.OnRep_CurrentSpecialMoveType");

	AGenericCharacter_OnRep_CurrentSpecialMoveType_Params params;
	params.OldType = OldType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.IsInObjectPool
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericCharacter::IsInObjectPool()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.IsInObjectPool");

	AGenericCharacter_IsInObjectPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacter.IsAlive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericCharacter::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.IsAlive");

	AGenericCharacter_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacter.HandleStateLeft
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void AGenericCharacter::HandleStateLeft(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.HandleStateLeft");

	AGenericCharacter_HandleStateLeft_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.HandleStateEntered
// (Final, Native, Private)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void AGenericCharacter::HandleStateEntered(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.HandleStateEntered");

	AGenericCharacter_HandleStateEntered_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacter.GetStateReflectComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStateReflectComp*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStateReflectComp* AGenericCharacter::GetStateReflectComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.GetStateReflectComp");

	AGenericCharacter_GetStateReflectComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacter.DispatchGenericInputEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// EGenericInputEventType         EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGenericCharacter::DispatchGenericInputEvent(const struct FName& EventName, EGenericInputEventType EventType, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacter.DispatchGenericInputEvent");

	AGenericCharacter_DispatchGenericInputEvent_Params params;
	params.EventName = EventName;
	params.EventType = EventType;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveTypebyCustomMovemode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  CustomMovmentMode              (Parm, ZeroConstructor, IsPlainOldData)
// ESpecialMovementType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESpecialMovementType UGenericCharacterMovementComponent::GetSpecialMoveTypebyCustomMovemode(unsigned char CustomMovmentMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveTypebyCustomMovemode");

	UGenericCharacterMovementComponent_GetSpecialMoveTypebyCustomMovemode_Params params;
	params.CustomMovmentMode = CustomMovmentMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveObjBySpecialMoveType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ESpecialMovementType           SpecialMoveType                (Parm, ZeroConstructor, IsPlainOldData)
// class USpecialMoveBaseObj*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpecialMoveBaseObj* UGenericCharacterMovementComponent::GetSpecialMoveObjBySpecialMoveType(ESpecialMovementType SpecialMoveType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveObjBySpecialMoveType");

	UGenericCharacterMovementComponent_GetSpecialMoveObjBySpecialMoveType_Params params;
	params.SpecialMoveType = SpecialMoveType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveObjByCustomMovementMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  CustomMovmentMode              (Parm, ZeroConstructor, IsPlainOldData)
// class USpecialMoveBaseObj*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpecialMoveBaseObj* UGenericCharacterMovementComponent::GetSpecialMoveObjByCustomMovementMode(unsigned char CustomMovmentMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacterMovementComponent.GetSpecialMoveObjByCustomMovementMode");

	UGenericCharacterMovementComponent_GetSpecialMoveObjByCustomMovementMode_Params params;
	params.CustomMovmentMode = CustomMovmentMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericCharacterMovementComponent.GetCurrentSpecialMoveByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpecialMoveBaseObj*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USpecialMoveBaseObj* UGenericCharacterMovementComponent::GetCurrentSpecialMoveByType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericCharacterMovementComponent.GetCurrentSpecialMoveByType");

	UGenericCharacterMovementComponent_GetCurrentSpecialMoveByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.SelectFromCandidates
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACharacter*>      Filtered                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EGenericSearchEnemyRule        Rule                           (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UGenericChooseEnemyComponent::SelectFromCandidates(TArray<class ACharacter*> Filtered, EGenericSearchEnemyRule Rule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.SelectFromCandidates");

	UGenericChooseEnemyComponent_SelectFromCandidates_Params params;
	params.Filtered = Filtered;
	params.Rule = Rule;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.IsValidEnemy
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACharacter*              Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutIsNearDeath                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bUseMonsterFilter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericChooseEnemyComponent::IsValidEnemy(class ACharacter* Target, bool bUseMonsterFilter, bool* bOutIsNearDeath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.IsValidEnemy");

	UGenericChooseEnemyComponent_IsValidEnemy_Params params;
	params.Target = Target;
	params.bUseMonsterFilter = bUseMonsterFilter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bOutIsNearDeath != nullptr)
		*bOutIsNearDeath = params.bOutIsNearDeath;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.IsTargetAlive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericChooseEnemyComponent::IsTargetAlive(class ACharacter* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.IsTargetAlive");

	UGenericChooseEnemyComponent_IsTargetAlive_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.IsEnemyByActor
// (Final, Native, Public, Const)
// Parameters:
// class ACharacter*              InTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericChooseEnemyComponent::IsEnemyByActor(class ACharacter* InTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.IsEnemyByActor");

	UGenericChooseEnemyComponent_IsEnemyByActor_Params params;
	params.InTarget = InTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.GetTargetHealth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGenericChooseEnemyComponent::GetTargetHealth(class ACharacter* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.GetTargetHealth");

	UGenericChooseEnemyComponent_GetTargetHealth_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.GetSensingConfig
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGenericMonsterSensingConfig ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGenericMonsterSensingConfig UGenericChooseEnemyComponent::GetSensingConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.GetSensingConfig");

	UGenericChooseEnemyComponent_GetSensingConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.GetOwnerMonster
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGenericMonsterBase*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGenericMonsterBase* UGenericChooseEnemyComponent::GetOwnerMonster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.GetOwnerMonster");

	UGenericChooseEnemyComponent_GetOwnerMonster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericChooseEnemyComponent.CollectPlayerCandidates
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACharacter*>      OutPlayers                     (Parm, OutParm, ZeroConstructor)

void UGenericChooseEnemyComponent::CollectPlayerCandidates(TArray<class ACharacter*>* OutPlayers)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.CollectPlayerCandidates");

	UGenericChooseEnemyComponent_CollectPlayerCandidates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPlayers != nullptr)
		*OutPlayers = params.OutPlayers;
}


// Function GenericFeatures.GenericChooseEnemyComponent.CollectMonsterCandidates
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class ACharacter*>      OutMonsters                    (Parm, OutParm, ZeroConstructor)

void UGenericChooseEnemyComponent::CollectMonsterCandidates(TArray<class ACharacter*>* OutMonsters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericChooseEnemyComponent.CollectMonsterCandidates");

	UGenericChooseEnemyComponent_CollectMonsterCandidates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutMonsters != nullptr)
		*OutMonsters = params.OutMonsters;
}


// Function GenericFeatures.GenericHitReactionComponent.PlayHitReaction
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EAvatarDamagePosition          BodyPart                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalSourceDirection           (Parm, IsPlainOldData)
// struct FVector                 ImpactPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGenericHitReactionComponent::PlayHitReaction(EAvatarDamagePosition BodyPart, const struct FVector& LocalSourceDirection, const struct FVector& ImpactPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericHitReactionComponent.PlayHitReaction");

	UGenericHitReactionComponent_PlayHitReaction_Params params;
	params.BodyPart = BodyPart;
	params.LocalSourceDirection = LocalSourceDirection;
	params.ImpactPoint = ImpactPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericHitReactionComponent.MulticastPlayHitReaction
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// EAvatarDamagePosition          BodyPart                       (Parm, ZeroConstructor, IsPlainOldData)
// EGenericHitDirection           Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (Parm, IsPlainOldData)

void UGenericHitReactionComponent::MulticastPlayHitReaction(EAvatarDamagePosition BodyPart, EGenericHitDirection Direction, const struct FVector& ImpactPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericHitReactionComponent.MulticastPlayHitReaction");

	UGenericHitReactionComponent_MulticastPlayHitReaction_Params params;
	params.BodyPart = BodyPart;
	params.Direction = Direction;
	params.ImpactPoint = ImpactPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SetTeamID
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTeamId                      (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::SetTeamID(int NewTeamId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SetTeamID");

	AGenericMonsterBase_SetTeamID_Params params;
	params.NewTeamId = NewTeamId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SetSpeedScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSpeedScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::SetSpeedScale(float NewSpeedScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SetSpeedScale");

	AGenericMonsterBase_SetSpeedScale_Params params;
	params.NewSpeedScale = NewSpeedScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SetMonsterIdleIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::SetMonsterIdleIndex(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SetMonsterIdleIndex");

	AGenericMonsterBase_SetMonsterIdleIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SetCharacterName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewCharacterName               (Parm, ZeroConstructor)

void AGenericMonsterBase::SetCharacterName(const struct FString& NewCharacterName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SetCharacterName");

	AGenericMonsterBase_SetCharacterName_Params params;
	params.NewCharacterName = NewCharacterName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SetCampID
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewCampID                      (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::SetCampID(int NewCampID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SetCampID");

	AGenericMonsterBase_SetCampID_Params params;
	params.NewCampID = NewCampID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.SelectEnemyByLua
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ACharacter*>      Candidates                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* AGenericMonsterBase::SelectEnemyByLua(TArray<class ACharacter*> Candidates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.SelectEnemyByLua");

	AGenericMonsterBase_SelectEnemyByLua_Params params;
	params.Candidates = Candidates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.ReviseSenseDistanceByActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InDistance                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonsterBase::ReviseSenseDistanceByActor(float InDistance, class AActor* InTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ReviseSenseDistanceByActor");

	AGenericMonsterBase_ReviseSenseDistanceByActor_Params params;
	params.InDistance = InDistance;
	params.InTarget = InTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.ReceivedPlayerActiveRegionsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::ReceivedPlayerActiveRegionsChanged(bool bEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ReceivedPlayerActiveRegionsChanged");

	AGenericMonsterBase_ReceivedPlayerActiveRegionsChanged_Params params;
	params.bEnter = bEnter;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.OnSmoothComponentSnapshotPreReplicate
// (Final, Native, Public)

void AGenericMonsterBase::OnSmoothComponentSnapshotPreReplicate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.OnSmoothComponentSnapshotPreReplicate");

	AGenericMonsterBase_OnSmoothComponentSnapshotPreReplicate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.OnRep_MonsterIdleIndex
// (Native, Protected)

void AGenericMonsterBase::OnRep_MonsterIdleIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.OnRep_MonsterIdleIndex");

	AGenericMonsterBase_OnRep_MonsterIdleIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.OnRep_CampID
// (Native, Public)

void AGenericMonsterBase::OnRep_CampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.OnRep_CampID");

	AGenericMonsterBase_OnRep_CampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.OnEnemyChangedInternal
// (Final, Native, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::OnEnemyChangedInternal(class APawn* NewEnemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.OnEnemyChangedInternal");

	AGenericMonsterBase_OnEnemyChangedInternal_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirRiseUp
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::LeaveLaunchAirRiseUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirRiseUp");

	AGenericMonsterBase_LeaveLaunchAirRiseUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirGround
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::LeaveLaunchAirGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.LeaveLaunchAirGround");

	AGenericMonsterBase_LeaveLaunchAirGround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.LaunchCharacterWithParam
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 LaunchVelocity                 (Parm, IsPlainOldData)
// bool                           bChangeState                   (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::LaunchCharacterWithParam(const struct FVector& LaunchVelocity, bool bChangeState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.LaunchCharacterWithParam");

	AGenericMonsterBase_LaunchCharacterWithParam_Params params;
	params.LaunchVelocity = LaunchVelocity;
	params.bChangeState = bChangeState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.IsValidEnemyTarget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InTarget                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericMonsterBase::IsValidEnemyTarget(class AActor* InTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.IsValidEnemyTarget");

	AGenericMonsterBase_IsValidEnemyTarget_Params params;
	params.InTarget = InTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.IsRegionActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericMonsterBase::IsRegionActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.IsRegionActive");

	AGenericMonsterBase_IsRegionActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.IsInCombat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericMonsterBase::IsInCombat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.IsInCombat");

	AGenericMonsterBase_IsInCombat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.IsEnemyByActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacter*              InTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericMonsterBase::IsEnemyByActor(class ACharacter* InTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.IsEnemyByActor");

	AGenericMonsterBase_IsEnemyByActor_Params params;
	params.InTarget = InTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetTeamID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGenericMonsterBase::GetTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetTeamID");

	AGenericMonsterBase_GetTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetSpeedScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonsterBase::GetSpeedScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetSpeedScale");

	AGenericMonsterBase_GetSpeedScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetSensingConfig
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGenericMonsterSensingConfig ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGenericMonsterSensingConfig AGenericMonsterBase::GetSensingConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetSensingConfig");

	AGenericMonsterBase_GetSensingConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetMonsterIdleIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGenericMonsterBase::GetMonsterIdleIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetMonsterIdleIndex");

	AGenericMonsterBase_GetMonsterIdleIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetCurrentSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonsterBase::GetCurrentSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetCurrentSpeed");

	AGenericMonsterBase_GetCurrentSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetChooseEnemyComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGenericChooseEnemyComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGenericChooseEnemyComponent* AGenericMonsterBase::GetChooseEnemyComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetChooseEnemyComponent");

	AGenericMonsterBase_GetChooseEnemyComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetCharacterName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AGenericMonsterBase::GetCharacterName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetCharacterName");

	AGenericMonsterBase_GetCharacterName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetCampID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGenericMonsterBase::GetCampID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetCampID");

	AGenericMonsterBase_GetCampID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.GetBuffComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USTBuffSystemComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBuffSystemComponent* AGenericMonsterBase::GetBuffComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.GetBuffComponent");

	AGenericMonsterBase_GetBuffComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterBase.FinishStunRecovery
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::FinishStunRecovery()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.FinishStunRecovery");

	AGenericMonsterBase_FinishStunRecovery_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.ExitSpawnState
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::ExitSpawnState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ExitSpawnState");

	AGenericMonsterBase_ExitSpawnState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.EnterStunRecovery
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::EnterStunRecovery()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.EnterStunRecovery");

	AGenericMonsterBase_EnterStunRecovery_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.EnterStun
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::EnterStun()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.EnterStun");

	AGenericMonsterBase_EnterStun_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.DoHurting
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HurtDir                        (Parm, IsPlainOldData)

void AGenericMonsterBase::DoHurting(const struct FVector& HurtDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.DoHurting");

	AGenericMonsterBase_DoHurting_Params params;
	params.HurtDir = HurtDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.ClearStunState
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::ClearStunState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ClearStunState");

	AGenericMonsterBase_ClearStunState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.ClearLaunchAirState
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::ClearLaunchAirState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ClearLaunchAirState");

	AGenericMonsterBase_ClearLaunchAirState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.CheckLaunchAirState
// (Native, Public, BlueprintCallable)

void AGenericMonsterBase::CheckLaunchAirState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.CheckLaunchAirState");

	AGenericMonsterBase_CheckLaunchAirState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterBase.ChangeWalkSpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// EMobWalkType                   InWalkType                     (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonsterBase::ChangeWalkSpeed(EMobWalkType InWalkType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterBase.ChangeWalkSpeed");

	AGenericMonsterBase_ChangeWalkSpeed_Params params;
	params.InWalkType = InWalkType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.SetTakeDamageScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTakeDamageScale             (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::SetTakeDamageScale(float NewTakeDamageScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.SetTakeDamageScale");

	AGenericMonster_SetTakeDamageScale_Params params;
	params.NewTakeDamageScale = NewTakeDamageScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.SetIsInvincible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInvincible                    (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InMaskBit                      (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::SetIsInvincible(bool bInvincible, unsigned char InMaskBit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.SetIsInvincible");

	AGenericMonster_SetIsInvincible_Params params;
	params.bInvincible = bInvincible;
	params.InMaskBit = InMaskBit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.SetHealthMax
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHealthMax                   (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::SetHealthMax(float NewHealthMax)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.SetHealthMax");

	AGenericMonster_SetHealthMax_Params params;
	params.NewHealthMax = NewHealthMax;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.SetHealth
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHealth                      (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::SetHealth(float NewHealth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.SetHealth");

	AGenericMonster_SetHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.SetDamageScale
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDamageScale                 (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::SetDamageScale(float NewDamageScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.SetDamageScale");

	AGenericMonster_SetDamageScale_Params params;
	params.NewDamageScale = NewDamageScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.OnTargetTakeDamage
// (Native, Public)
// Parameters:
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::OnTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.OnTargetTakeDamage");

	AGenericMonster_OnTargetTakeDamage_Params params;
	params.DamageTarget = DamageTarget;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.OnDie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::OnDie(class APawn* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.OnDie");

	AGenericMonster_OnDie_Params params;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.HandleTargetTakeDamage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::HandleTargetTakeDamage(class AActor* DamageTarget, float Damage, class AController* EventInstigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.HandleTargetTakeDamage");

	AGenericMonster_HandleTargetTakeDamage_Params params;
	params.DamageTarget = DamageTarget;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetTakeDamageScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::GetTakeDamageScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetTakeDamageScale");

	AGenericMonster_GetTakeDamageScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetPartHitComponentBase
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPartHitComponentBase*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPartHitComponentBase* AGenericMonster::GetPartHitComponentBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetPartHitComponentBase");

	AGenericMonster_GetPartHitComponentBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetIsInvincible
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericMonster::GetIsInvincible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetIsInvincible");

	AGenericMonster_GetIsInvincible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetHealthMax
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::GetHealthMax()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetHealthMax");

	AGenericMonster_GetHealthMax_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetHealth
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::GetHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetHealth");

	AGenericMonster_GetHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.GetDamageScale
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::GetDamageScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.GetDamageScale");

	AGenericMonster_GetDamageScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.CalcVehicleHitDamage
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class ASTExtraVehicleBase*     OtherVehicle                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitImpulseDirection            (Parm, IsPlainOldData)
// float                          HitSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::CalcVehicleHitDamage(class ASTExtraVehicleBase* OtherVehicle, const struct FVector& HitImpulseDirection, float HitSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.CalcVehicleHitDamage");

	AGenericMonster_CalcVehicleHitDamage_Params params;
	params.OtherVehicle = OtherVehicle;
	params.HitImpulseDirection = HitImpulseDirection;
	params.HitSpeed = HitSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonster.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDamageType>       DamageEventType                (Parm, ZeroConstructor, IsPlainOldData)

void AGenericMonster::BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.BPReceiveDamage");

	AGenericMonster_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonster.BPPreTakeDamage
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericMonster::BPPreTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonster.BPPreTakeDamage");

	AGenericMonster_BPPreTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEventByName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InTag                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGenericMonsterAnimInstance::PlayMontageWithAnimEventByName(const struct FName& InTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEventByName");

	UGenericMonsterAnimInstance_PlayMontageWithAnimEventByName_Params params;
	params.InTag = InTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            EventTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGenericMonsterAnimInstance::PlayMontageWithAnimEvent(const struct FGameplayTag& EventTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.PlayMontageWithAnimEvent");

	UGenericMonsterAnimInstance_PlayMontageWithAnimEvent_Params params;
	params.EventTag = EventTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterRandomIdleIndexSet
// (Native, Protected)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UGenericMonsterAnimInstance::OnMonsterRandomIdleIndexSet(int NewIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterRandomIdleIndexSet");

	UGenericMonsterAnimInstance_OnMonsterRandomIdleIndexSet_Params params;
	params.NewIndex = NewIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterHurting
// (Native, Protected, HasDefaults)
// Parameters:
// class AGenericMonsterBase*     Monster                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HurtDir                        (Parm, IsPlainOldData)

void UGenericMonsterAnimInstance::OnMonsterHurting(class AGenericMonsterBase* Monster, const struct FVector& HurtDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.OnMonsterHurting");

	UGenericMonsterAnimInstance_OnMonsterHurting_Params params;
	params.Monster = Monster;
	params.HurtDir = HurtDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterAnimInstance.HandleStateEntered
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericMonsterAnimInstance::HandleStateEntered(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.HandleStateEntered");

	UGenericMonsterAnimInstance_HandleStateEntered_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterAnimInstance.GetMonsterShareParams
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGenericMonsterAnimShareParamsComp* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGenericMonsterAnimShareParamsComp* UGenericMonsterAnimInstance::GetMonsterShareParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimInstance.GetMonsterShareParams");

	UGenericMonsterAnimInstance_GetMonsterShareParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateLeft
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericMonsterAnimShareParamsComp::HandleStateLeft(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateLeft");

	UGenericMonsterAnimShareParamsComp_HandleStateLeft_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateEntered
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericMonsterAnimShareParamsComp::HandleStateEntered(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterAnimShareParamsComp.HandleStateEntered");

	UGenericMonsterAnimShareParamsComp_HandleStateEntered_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterEditor.SetLargeDataContent
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          NewContent                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGenericMonsterEditor::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterEditor.SetLargeDataContent");

	AGenericMonsterEditor_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterEditor.OnRep_LargeDataContent
// (Final, Native, Protected)

void AGenericMonsterEditor::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterEditor.OnRep_LargeDataContent");

	AGenericMonsterEditor_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericMonsterEditor.GetLargeDataContent
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> AGenericMonsterEditor::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericMonsterEditor.GetLargeDataContent");

	AGenericMonsterEditor_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.UpdatePoseCollisionShapes
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESTEPoseState>     PoseState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGenericPartHitComponent::UpdatePoseCollisionShapes(TEnumAsByte<ESTEPoseState> PoseState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.UpdatePoseCollisionShapes");

	UGenericPartHitComponent_UpdatePoseCollisionShapes_Params params;
	params.PoseState = PoseState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.UpdateAllInstanceBodyTransform
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGenericPartHitComponent::UpdateAllInstanceBodyTransform(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.UpdateAllInstanceBodyTransform");

	UGenericPartHitComponent_UpdateAllInstanceBodyTransform_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.RefreshWorldBoxCollision
// (Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          countdown                      (Parm, ZeroConstructor, IsPlainOldData)

void UGenericPartHitComponent::RefreshWorldBoxCollision(float countdown)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.RefreshWorldBoxCollision");

	UGenericPartHitComponent_RefreshWorldBoxCollision_Params params;
	params.countdown = countdown;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.RefreshByStateChange
// (Final, Native, Public)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericPartHitComponent::RefreshByStateChange(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.RefreshByStateChange");

	UGenericPartHitComponent_RefreshByStateChange_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.InitBodyHitBox
// (Native, Public, BlueprintCallable)

void UGenericPartHitComponent::InitBodyHitBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.InitBodyHitBox");

	UGenericPartHitComponent_InitBodyHitBox_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.GetHitBoxByState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESTEPoseState>     InPoseState                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UGenericPartHitComponent::GetHitBoxByState(TEnumAsByte<ESTEPoseState> InPoseState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.GetHitBoxByState");

	UGenericPartHitComponent_GetHitBoxByState_Params params;
	params.InPoseState = InPoseState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByHitPos
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InHitPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EAvatarDamagePosition          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAvatarDamagePosition UGenericPartHitComponent::GetHitBodyTypeByHitPos(const struct FVector& InHitPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByHitPos");

	UGenericPartHitComponent_GetHitBodyTypeByHitPos_Params params;
	params.InHitPos = InHitPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByBoneName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InBoneName                     (Parm, ZeroConstructor)
// EAvatarDamagePosition          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAvatarDamagePosition UGenericPartHitComponent::GetHitBodyTypeByBoneName(const struct FString& InBoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.GetHitBodyTypeByBoneName");

	UGenericPartHitComponent_GetHitBodyTypeByBoneName_Params params;
	params.InBoneName = InBoneName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.GetHitBodyType
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InHitPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InImpactVec                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString                 InBoneName                     (Parm, ZeroConstructor)
// EAvatarDamagePosition          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAvatarDamagePosition UGenericPartHitComponent::GetHitBodyType(const struct FVector& InHitPos, const struct FVector& InImpactVec, const struct FString& InBoneName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.GetHitBodyType");

	UGenericPartHitComponent_GetHitBodyType_Params params;
	params.InHitPos = InHitPos;
	params.InImpactVec = InImpactVec;
	params.InBoneName = InBoneName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.GetCurHitPartJudgementType
// (Native, Public)
// Parameters:
// TEnumAsByte<EHitPartJugementType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EHitPartJugementType> UGenericPartHitComponent::GetCurHitPartJudgementType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.GetCurHitPartJudgementType");

	UGenericPartHitComponent_GetCurHitPartJudgementType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPartHitComponent.CloseBodyBulletCollision
// (Native, Public, BlueprintCallable)

void UGenericPartHitComponent::CloseBodyBulletCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.CloseBodyBulletCollision");

	UGenericPartHitComponent_CloseBodyBulletCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericPartHitComponent.CalcHitBodyType
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InHitPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InProjvec                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InCenterPos                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FBodyTypeDef            InBodyDef                      (ConstParm, Parm, OutParm, ReferenceParm)
// EAvatarDamagePosition          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAvatarDamagePosition UGenericPartHitComponent::CalcHitBodyType(const struct FVector& InHitPos, const struct FVector& InProjvec, const struct FVector& InCenterPos, const struct FBodyTypeDef& InBodyDef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPartHitComponent.CalcHitBodyType");

	UGenericPartHitComponent_CalcHitBodyType_Params params;
	params.InHitPos = InHitPos;
	params.InProjvec = InProjvec;
	params.InCenterPos = InCenterPos;
	params.InBodyDef = InBodyDef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericPlayerCharacter.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGenericPlayerCharacter::GetHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericPlayerCharacter.GetHealth");

	AGenericPlayerCharacter_GetHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.GenericStateAnimAbility.HandleStateLeft
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericStateAnimAbility::HandleStateLeft(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericStateAnimAbility.HandleStateLeft");

	UGenericStateAnimAbility_HandleStateLeft_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.GenericStateAnimAbility.HandleStateEntered
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UGenericStateAnimAbility::HandleStateEntered(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.GenericStateAnimAbility.HandleStateEntered");

	UGenericStateAnimAbility_HandleStateEntered_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.SetDragEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerController* Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlanarDragComponent::SetDragEnabled(class ASTExtraPlayerController* Controller, bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.SetDragEnabled");

	UPlanarDragComponent_SetDragEnabled_Params params;
	params.Controller = Controller;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.SetAimLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlanarDragComponent::SetAimLength(float Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.SetAimLength");

	UPlanarDragComponent_SetAimLength_Params params;
	params.Length = Length;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.IsDragging
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanarDragComponent::IsDragging()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.IsDragging");

	UPlanarDragComponent_IsDragging_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.PlanarDragComponent.HandleTouchRelease
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlanarDragComponent::HandleTouchRelease(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.HandleTouchRelease");

	UPlanarDragComponent_HandleTouchRelease_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.HandleTouchMove
// (Final, Native, Private, HasDefaults)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UPlanarDragComponent::HandleTouchMove(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.HandleTouchMove");

	UPlanarDragComponent_HandleTouchMove_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.HandleTouchBegin
// (Final, Native, Private, HasDefaults)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UPlanarDragComponent::HandleTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.HandleTouchBegin");

	UPlanarDragComponent_HandleTouchBegin_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.PlanarDragComponent.ConsumeAimInput
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanarDragComponent::ConsumeAimInput(struct FVector* Direction, float* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.ConsumeAimInput");

	UPlanarDragComponent_ConsumeAimInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Length != nullptr)
		*Length = params.Length;

	return params.ReturnValue;
}


// Function GenericFeatures.PlanarDragComponent.CancelDrag
// (Final, Native, Public, BlueprintCallable)

void UPlanarDragComponent::CancelDrag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.PlanarDragComponent.CancelDrag");

	UPlanarDragComponent_CancelDrag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.StateReflectComp.OnRep_CurrentStates
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer   OldStates                      (Parm)

void UStateReflectComp::OnRep_CurrentStates(const struct FGameplayTagContainer& OldStates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.OnRep_CurrentStates");

	UStateReflectComp_OnRep_CurrentStates_Params params;
	params.OldStates = OldStates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.StateReflectComp.LeaveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            State                          (Parm)

void UStateReflectComp::LeaveState(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.LeaveState");

	UStateReflectComp_LeaveState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.StateReflectComp.HasState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            State                          (Parm)
// bool                           bExact                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateReflectComp::HasState(const struct FGameplayTag& State, bool bExact)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.HasState");

	UStateReflectComp_HasState_Params params;
	params.State = State;
	params.bExact = bExact;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.StateReflectComp.GetCurrentStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UStateReflectComp::GetCurrentStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.GetCurrentStates");

	UStateReflectComp_GetCurrentStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.StateReflectComp.EnterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            State                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateReflectComp::EnterState(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.EnterState");

	UStateReflectComp_EnterState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericFeatures.StateReflectComp.ClearAllStates
// (Final, Native, Public, BlueprintCallable)

void UStateReflectComp::ClearAllStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.ClearAllStates");

	UStateReflectComp_ClearAllStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GenericFeatures.StateReflectComp.CanEnterState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            State                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStateReflectComp::CanEnterState(const struct FGameplayTag& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericFeatures.StateReflectComp.CanEnterState");

	UStateReflectComp_CanEnterState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

