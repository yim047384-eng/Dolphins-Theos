//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlanPHRuntime.BinFileHelper.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            z4BufferSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            zeroListSize                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBinFileHelper::Init(int z4BufferSize, int zeroListSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.BinFileHelper.Init");

	UBinFileHelper_Init_Params params;
	params.z4BufferSize = z4BufferSize;
	params.zeroListSize = zeroListSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.MapBarrierWidget.SetMapStructureData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FStructureData>  InMapStructureData             (ConstParm, Parm, ZeroConstructor)

void UMapBarrierWidget::SetMapStructureData(TArray<struct FStructureData> InMapStructureData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapStructureData");

	UMapBarrierWidget_SetMapStructureData_Params params;
	params.InMapStructureData = InMapStructureData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.MapBarrierWidget.SetMapMidPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InMapMidPoint                  (Parm, OutParm, IsPlainOldData)

void UMapBarrierWidget::SetMapMidPoint(struct FVector2D* InMapMidPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetMapMidPoint");

	UMapBarrierWidget_SetMapMidPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InMapMidPoint != nullptr)
		*InMapMidPoint = params.InMapMidPoint;
}


// Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InLevelBoundExtent             (Parm, ZeroConstructor, IsPlainOldData)

void UMapBarrierWidget::SetLevelBoundExtent(int InLevelBoundExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetLevelBoundExtent");

	UMapBarrierWidget_SetLevelBoundExtent_Params params;
	params.InLevelBoundExtent = InLevelBoundExtent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.MapBarrierWidget.SetGridSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGridSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapBarrierWidget::SetGridSize(float InGridSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.MapBarrierWidget.SetGridSize");

	UMapBarrierWidget_SetGridSize_Params params;
	params.InGridSize = InGridSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo
// (Final, Native, Private)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void APlanPH_GameMode::HandleNavigationInfo(class AController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.HandleNavigationInfo");

	APlanPH_GameMode_HandleNavigationInfo_Params params;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerStart*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerStart* APlanPH_GameMode::GetPlayerStart(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.GetPlayerStart");

	APlanPH_GameMode_GetPlayerStart_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut
// (Final, Native, Public)
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExitReason                     (Parm, ZeroConstructor)

void APlanPH_GameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameMode.DSPlayerKickOut");

	APlanPH_GameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_5
// (Final, Native, Public)

void APlanPH_GameState::OnRep_PartyDanceLeadInfo_5()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_5");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_5_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_4
// (Final, Native, Public)

void APlanPH_GameState::OnRep_PartyDanceLeadInfo_4()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_4");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_4_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_3
// (Final, Native, Public)

void APlanPH_GameState::OnRep_PartyDanceLeadInfo_3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_3");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_2
// (Final, Native, Public)

void APlanPH_GameState::OnRep_PartyDanceLeadInfo_2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.OnRep_PartyDanceLeadInfo_2");

	APlanPH_GameState_OnRep_PartyDanceLeadInfo_2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.LuaOnRep_PartyDanceLeadInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)

void APlanPH_GameState::LuaOnRep_PartyDanceLeadInfo(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.LuaOnRep_PartyDanceLeadInfo");

	APlanPH_GameState_LuaOnRep_PartyDanceLeadInfo_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_GameState.ChangePartyLeadInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LandId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOccupied                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            BeginTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerUID                      (Parm, ZeroConstructor)
// bool                           bIsWedding                     (Parm, ZeroConstructor, IsPlainOldData)

void APlanPH_GameState::ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID, bool bIsWedding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_GameState.ChangePartyLeadInfo");

	APlanPH_GameState_ChangePartyLeadInfo_Params params;
	params.LandId = LandId;
	params.bOccupied = bOccupied;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;
	params.PlayerUID = PlayerUID;
	params.bIsWedding = bIsWedding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.RequestPaintDecal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TargetTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlanPH_PlayerState::RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.RequestPaintDecal");

	APlanPH_PlayerState_RequestPaintDecal_Params params;
	params.DecalId = DecalId;
	params.TargetTransform = TargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId
// (Final, Native, Public)

void APlanPH_PlayerState::OnRep_LandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.OnRep_LandId");

	APlanPH_PlayerState_OnRep_LandId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.InitLandId
// (Event, Public, BlueprintEvent)

void APlanPH_PlayerState::InitLandId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.InitLandId");

	APlanPH_PlayerState_InitLandId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPH_PlayerState.CanPaintDecal
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            DecalId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlanPH_PlayerState::CanPaintDecal(int DecalId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPH_PlayerState.CanPaintDecal");

	APlanPH_PlayerState_CanPaintDecal_Params params;
	params.DecalId = DecalId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPreSetStaticMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHCustomStaticMeshComponent::BPPreSetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPreSetStaticMesh");

	UPlanPHCustomStaticMeshComponent_BPPreSetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPostSetStaticMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHCustomStaticMeshComponent::BPPostSetStaticMesh(class UStaticMesh* NewMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHCustomStaticMeshComponent.BPPostSetStaticMesh");

	UPlanPHCustomStaticMeshComponent_BPPostSetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnableCollision               (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHDoor::Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.Refresh_DoorCollisionChanel");

	APlanPHDoor_Refresh_DoorCollisionChanel_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.bEnableCollision = bEnableCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHDoor.DoorAniFinish
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    InDoorCheckBox                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Bright                         (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHDoor::DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHDoor.DoorAniFinish");

	APlanPHDoor_DoorAniFinish_Params params;
	params.InDoorCheckBox = InDoorCheckBox;
	params.Bright = Bright;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHGameplayStatics.SpinEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          S                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPlanPHGameplayStatics::SpinEvaluate(float S, float T)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.SpinEvaluate");

	UPlanPHGameplayStatics_SpinEvaluate_Params params;
	params.S = S;
	params.T = T;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHGameplayStatics.SetPlayerMovementBlendTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerChar                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            nType                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHGameplayStatics::SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.SetPlayerMovementBlendTime");

	UPlanPHGameplayStatics_SetPlayerMovementBlendTime_Params params;
	params.PlayerChar = PlayerChar;
	params.nType = nType;
	params.BlendTime = BlendTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHGameplayStatics.GetActorBound
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Size                           (Parm, OutParm, IsPlainOldData)

void UPlanPHGameplayStatics::GetActorBound(class AActor* Actor, struct FVector* Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.GetActorBound");

	UPlanPHGameplayStatics_GetActorBound_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            InChannelBitMask               (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHGameplayStatics::ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHGameplayStatics.ChangeLightChannel");

	UPlanPHGameplayStatics_ChangeLightChannel_Params params;
	params.InComponent = InComponent;
	params.InChannelBitMask = InChannelBitMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntVector              InMinGridIndexXYZ              (Parm, IsPlainOldData)
// struct FIntVector              InMaxGridIndexXYZ              (Parm, IsPlainOldData)

void APlanPHHomeArea::UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeArea.UpdateEditableArea");

	APlanPHHomeArea_UpdateEditableArea_Params params;
	params.InMinGridIndexXYZ = InMinGridIndexXYZ;
	params.InMaxGridIndexXYZ = InMaxGridIndexXYZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InBShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHHomeAreaVisualizationComponent::ShowGrids(bool InBShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHHomeAreaVisualizationComponent.ShowGrids");

	UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params params;
	params.InBShow = InBShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHMapData::RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.RemovePlayerItem");

	UPlanPHMapData_RemovePlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHMapData.AddPlayerItem
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraPlayerCharacter* PlayerCharacterItem            (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 PlayerInfoBPItem               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 PlayerInfoRotWidgetItem        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 OffsetLocation                 (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHMapData::AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHMapData.AddPlayerItem");

	UPlanPHMapData_AddPlayerItem_Params params;
	params.PlayerCharacterItem = PlayerCharacterItem;
	params.PlayerInfoBPItem = PlayerInfoBPItem;
	params.PlayerInfoRotWidgetItem = PlayerInfoRotWidgetItem;
	params.OffsetLocation = OffsetLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.SubmitProjection
// (Final, Native, Public, BlueprintCallable)

void UPlanPHProjectionComponent::SubmitProjection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SubmitProjection");

	UPlanPHProjectionComponent_SubmitProjection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverMeshExcluded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExcluded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHProjectionComponent::SetReceiverMeshExcluded(class UStaticMesh* Mesh, bool bExcluded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverMeshExcluded");

	UPlanPHProjectionComponent_SetReceiverMeshExcluded_Params params;
	params.Mesh = Mesh;
	params.bExcluded = bExcluded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverActorExcluded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExcluded                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHProjectionComponent::SetReceiverActorExcluded(class AActor* Actor, bool bExcluded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetReceiverActorExcluded");

	UPlanPHProjectionComponent_SetReceiverActorExcluded_Params params;
	params.Actor = Actor;
	params.bExcluded = bExcluded;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHProjectionComponent::SetProjectionIntensity(float Intensity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionIntensity");

	UPlanPHProjectionComponent_SetProjectionIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHProjectionComponent::SetProjectionEnabled(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.SetProjectionEnabled");

	UPlanPHProjectionComponent_SetProjectionEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.ResumeProjectionWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHProjectionComponent::ResumeProjectionWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.ResumeProjectionWorld");

	UPlanPHProjectionComponent_ResumeProjectionWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.ReleaseProjection
// (Final, Native, Public, BlueprintCallable)

void UPlanPHProjectionComponent::ReleaseProjection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.ReleaseProjection");

	UPlanPHProjectionComponent_ReleaseProjection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.CleanupProjectionWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHProjectionComponent::CleanupProjectionWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.CleanupProjectionWorld");

	UPlanPHProjectionComponent_CleanupProjectionWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.BeginProjection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 BatchHelper                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlanPHProjectionComponent::BeginProjection(class UObject* BatchHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.BeginProjection");

	UPlanPHProjectionComponent_BeginProjection_Params params;
	params.BatchHelper = BatchHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.AddReceiverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHProjectionComponent::AddReceiverActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.AddReceiverActor");

	UPlanPHProjectionComponent_AddReceiverActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHProjectionComponent.AddDecorationActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHProjectionComponent::AddDecorationActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHProjectionComponent.AddDecorationActor");

	UPlanPHProjectionComponent_AddDecorationActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart
// (Event, Public, BlueprintEvent)

void APlanPHSpectatorPawn::OnSpectatorRestart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.OnSpectatorRestart");

	APlanPHSpectatorPawn_OnSpectatorRestart_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveRight");

	APlanPHSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void APlanPHSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHSpectatorPawn.MoveForward");

	APlanPHSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHVisualGridComponent.ShowGrids
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InBShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UPlanPHVisualGridComponent::ShowGrids(bool InBShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHVisualGridComponent.ShowGrids");

	UPlanPHVisualGridComponent_ShowGrids_Params params;
	params.InBShow = InBShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlanPHRuntime.PlanPHVisualGridComponent.RefreshGrids
// (Final, Native, Public, BlueprintCallable)

void UPlanPHVisualGridComponent::RefreshGrids()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlanPHRuntime.PlanPHVisualGridComponent.RefreshGrids");

	UPlanPHVisualGridComponent_RefreshGrids_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

