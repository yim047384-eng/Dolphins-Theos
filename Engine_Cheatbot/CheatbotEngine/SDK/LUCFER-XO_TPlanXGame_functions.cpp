//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TPlanXGame.BackpackComponentTPlanX.PickupItemFromWrapperDetail
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemClientPickupType    BattleItemClientPickupType     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.PickupItemFromWrapperDetail");

	UBackpackComponentTPlanX_PickupItemFromWrapperDetail_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;
	params.BattleItemClientPickupType = BattleItemClientPickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackComponentTPlanX.PickItem_IntoSafetyBox
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBattleItemPickupInfo   PickupInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.PickItem_IntoSafetyBox");

	UBackpackComponentTPlanX_PickItem_IntoSafetyBox_Params params;
	params.DefineID = DefineID;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemUpdated
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlanX::NotifyItemUpdated(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemUpdated");

	UBackpackComponentTPlanX_NotifyItemUpdated_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemRemoved
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBackpackComponentTPlanX::NotifyItemRemoved(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemRemoved");

	UBackpackComponentTPlanX_NotifyItemRemoved_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemListUpdated
// (Native, Public, BlueprintCallable)

void UBackpackComponentTPlanX::NotifyItemListUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.NotifyItemListUpdated");

	UBackpackComponentTPlanX_NotifyItemListUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNewInner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::ChangeItemStoreAreaNewInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNewInner");

	UBackpackComponentTPlanX_ChangeItemStoreAreaNewInner_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNew
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNew");

	UBackpackComponentTPlanX_ChangeItemStoreAreaNew_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaInner
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::ChangeItemStoreAreaInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaInner");

	UBackpackComponentTPlanX_ChangeItemStoreAreaInner_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreArea
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// int                            InItemNum                      (Parm, ZeroConstructor, IsPlainOldData)
// EItemStoreArea                 InItemStoreArea                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBackpackComponentTPlanX::ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreArea");

	UBackpackComponentTPlanX_ChangeItemStoreArea_Params params;
	params.DefineID = DefineID;
	params.InItemNum = InItemNum;
	params.InItemStoreArea = InItemStoreArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.BackpackTPlanXUtils.UnRegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanXUtils::UnRegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.UnRegisterInvokeClass");

	UBackpackTPlanXUtils_UnRegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.BackpackTPlanXUtils.RegisterInvokeClass
// (Final, Native, Static, Public, BlueprintCallable)

void UBackpackTPlanXUtils::RegisterInvokeClass()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.RegisterInvokeClass");

	UBackpackTPlanXUtils_RegisterInvokeClass_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.BackpackTPlanXUtils.RealGetBPUtils
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackBlueprintTPlanXUtils* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBackpackBlueprintTPlanXUtils* UBackpackTPlanXUtils::RealGetBPUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.BackpackTPlanXUtils.RealGetBPUtils");

	UBackpackTPlanXUtils_RealGetBPUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameMode.SetStateLeftTime
// (Native, Public)
// Parameters:
// int                            LeftTime                       (Parm, ZeroConstructor, IsPlainOldData)

void ATPlanXGameMode::SetStateLeftTime(int LeftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.SetStateLeftTime");

	ATPlanXGameMode_SetStateLeftTime_Params params;
	params.LeftTime = LeftTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.SetPlayerStartOccupied
// (Final, Native, Public)
// Parameters:
// class AActor*                  PlayerStart                    (Parm, ZeroConstructor, IsPlainOldData)

void ATPlanXGameMode::SetPlayerStartOccupied(class AActor* PlayerStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.SetPlayerStartOccupied");

	ATPlanXGameMode_SetPlayerStartOccupied_Params params;
	params.PlayerStart = PlayerStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.RevisePlayerTombBoxDropWrapperList
// (Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPickUpItemData> OutItemDataList                (Parm, OutParm, ZeroConstructor)
// class ASTExtraBaseCharacter*   DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIDCnt                  (Parm, ZeroConstructor, IsPlainOldData)

void ATPlanXGameMode::RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.RevisePlayerTombBoxDropWrapperList");

	ATPlanXGameMode_RevisePlayerTombBoxDropWrapperList_Params params;
	params.Character = Character;
	params.DamageCauser = DamageCauser;
	params.InstanceIDCnt = InstanceIDCnt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutItemDataList != nullptr)
		*OutItemDataList = params.OutItemDataList;
}


// Function TPlanXGame.TPlanXGameMode.NotifyPlayerExitWhenNotStarted
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Reason                         (Parm, ZeroConstructor)

void ATPlanXGameMode::NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyPlayerExitWhenNotStarted");

	ATPlanXGameMode_NotifyPlayerExitWhenNotStarted_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.NotifyPlayerExit
// (Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyPlayerController       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDestroyCharacter              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSendFailure                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FailureMessage                 (Parm, ZeroConstructor)
// struct FName                   ParamState                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ParamReason                    (Parm, ZeroConstructor)

void ATPlanXGameMode::NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyPlayerExit");

	ATPlanXGameMode_NotifyPlayerExit_Params params;
	params.PlayerKey = PlayerKey;
	params.PlayerType = PlayerType;
	params.bDestroyPlayerController = bDestroyPlayerController;
	params.bDestroyCharacter = bDestroyCharacter;
	params.bSendFailure = bSendFailure;
	params.FailureMessage = FailureMessage;
	params.ParamState = ParamState;
	params.ParamReason = ParamReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.NotifyGameModeInit
// (Native, Public)

void ATPlanXGameMode::NotifyGameModeInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.NotifyGameModeInit");

	ATPlanXGameMode_NotifyGameModeInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.LoadMapFinished
// (Final, Native, Public, BlueprintCallable)

void ATPlanXGameMode::LoadMapFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.LoadMapFinished");

	ATPlanXGameMode_LoadMapFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.IsNeedRestPlayerStart
// (Final, Native, Public)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATPlanXGameMode::IsNeedRestPlayerStart(class AController* Player)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.IsNeedRestPlayerStart");

	ATPlanXGameMode_IsNeedRestPlayerStart_Params params;
	params.Player = Player;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameMode.GMShowSpawner
// (Final, Exec, Native, Public)

void ATPlanXGameMode::GMShowSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowSpawner");

	ATPlanXGameMode_GMShowSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.GMShowEnterExit
// (Final, Exec, Native, Public)

void ATPlanXGameMode::GMShowEnterExit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowEnterExit");

	ATPlanXGameMode_GMShowEnterExit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.GMShowAssetBox
// (Final, Exec, Native, Public)

void ATPlanXGameMode::GMShowAssetBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMShowAssetBox");

	ATPlanXGameMode_GMShowAssetBox_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.GMSetPVEAIMax
// (Final, Exec, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void ATPlanXGameMode::GMSetPVEAIMax(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GMSetPVEAIMax");

	ATPlanXGameMode_GMSetPVEAIMax_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameMode.GetOccupiedPlayerStartGroupList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ATPlanXGameMode::GetOccupiedPlayerStartGroupList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.GetOccupiedPlayerStartGroupList");

	ATPlanXGameMode_GetOccupiedPlayerStartGroupList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameMode.CheckNoHumanExist
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATPlanXGameMode::CheckNoHumanExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.CheckNoHumanExist");

	ATPlanXGameMode_CheckNoHumanExist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameMode.CheckAIActive
// (Final, Native, Public)

void ATPlanXGameMode::CheckAIActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameMode.CheckAIActive");

	ATPlanXGameMode_CheckAIActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameState.ResetLeftTime
// (Final, Native, Public)

void ATPlanXGameState::ResetLeftTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.ResetLeftTime");

	ATPlanXGameState_ResetLeftTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameState.PreLoadPreciousItemsMap
// (Final, Native, Public)

void ATPlanXGameState::PreLoadPreciousItemsMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.PreLoadPreciousItemsMap");

	ATPlanXGameState_PreLoadPreciousItemsMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameState.OnRep_LastLeaveTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ATPlanXGameState::OnRep_LastLeaveTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.OnRep_LastLeaveTime");

	ATPlanXGameState_OnRep_LastLeaveTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXGameState.GetPlayerMilitartyOnClient
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATPlanXGameState::GetPlayerMilitartyOnClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.GetPlayerMilitartyOnClient");

	ATPlanXGameState_GetPlayerMilitartyOnClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameState.CheckPreciousItemPrice
// (Final, Native, Public)
// Parameters:
// int                            TypeSpecificID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATPlanXGameState::CheckPreciousItemPrice(int TypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.CheckPreciousItemPrice");

	ATPlanXGameState_CheckPreciousItemPrice_Params params;
	params.TypeSpecificID = TypeSpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXGameState.BroadcastClimbHelicopter
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ASTExtraPlayerCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ExitActor                      (Parm, ZeroConstructor, IsPlainOldData)

void ATPlanXGameState::BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXGameState.BroadcastClimbHelicopter");

	ATPlanXGameState_BroadcastClimbHelicopter_Params params;
	params.Character = Character;
	params.ExitActor = ExitActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_StoreID
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_StoreID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_StoreID");

	UTPlanXMetroStoreComponent_OnRep_StoreID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_Status
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_Status()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_Status");

	UTPlanXMetroStoreComponent_OnRep_Status_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsNum
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_GoodsNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsNum");

	UTPlanXMetroStoreComponent_OnRep_GoodsNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsListNum
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_GoodsListNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsListNum");

	UTPlanXMetroStoreComponent_OnRep_GoodsListNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsList
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_GoodsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsList");

	UTPlanXMetroStoreComponent_OnRep_GoodsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_CurrencyList
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_CurrencyList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_CurrencyList");

	UTPlanXMetroStoreComponent_OnRep_CurrencyList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_BuyFrequence
// (Native, Event, Public, BlueprintEvent)

void UTPlanXMetroStoreComponent::OnRep_BuyFrequence()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_BuyFrequence");

	UTPlanXMetroStoreComponent_OnRep_BuyFrequence_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRepXTBetrayInfo
// (Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRepXTBetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepXTBetrayInfo");

	ATPlanXPlayerState_OnRepXTBetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRepRelevantPlayerTaskNotifyBP
// (Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRepRelevantPlayerTaskNotifyBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepRelevantPlayerTaskNotifyBP");

	ATPlanXPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRepEscapePosition
// (Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRepEscapePosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepEscapePosition");

	ATPlanXPlayerState_OnRepEscapePosition_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRepAssetPointsCheckedByTeammate
// (Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRepAssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRepAssetPointsCheckedByTeammate");

	ATPlanXPlayerState_OnRepAssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_RelevantPlayerTaskNotify
// (Final, Native, Public)

void ATPlanXPlayerState::OnRep_RelevantPlayerTaskNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_RelevantPlayerTaskNotify");

	ATPlanXPlayerState_OnRep_RelevantPlayerTaskNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_IsRunAway
// (Native, Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRep_IsRunAway()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_IsRunAway");

	ATPlanXPlayerState_OnRep_IsRunAway_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_IsEscaped
// (Native, Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRep_IsEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_IsEscaped");

	ATPlanXPlayerState_OnRep_IsEscaped_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_Gold
// (Native, Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnRep_Gold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_Gold");

	ATPlanXPlayerState_OnRep_Gold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_EscapePosiNotify
// (Final, Native, Public)

void ATPlanXPlayerState::OnRep_EscapePosiNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_EscapePosiNotify");

	ATPlanXPlayerState_OnRep_EscapePosiNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_BetrayInfo
// (Final, Native, Public)

void ATPlanXPlayerState::OnRep_BetrayInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_BetrayInfo");

	ATPlanXPlayerState_OnRep_BetrayInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnRep_AssetPointsCheckedByTeammate
// (Final, Native, Public)

void ATPlanXPlayerState::OnRep_AssetPointsCheckedByTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnRep_AssetPointsCheckedByTeammate");

	ATPlanXPlayerState_OnRep_AssetPointsCheckedByTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.OnPlayerEscaped
// (Event, Public, BlueprintEvent)

void ATPlanXPlayerState::OnPlayerEscaped()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.OnPlayerEscaped");

	ATPlanXPlayerState_OnPlayerEscaped_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.TPlanXPlayerState.IsInGame
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATPlanXPlayerState::IsInGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.IsInGame");

	ATPlanXPlayerState_IsInGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXPlayerState.IsInBetrayState
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATPlanXPlayerState::IsInBetrayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.IsInBetrayState");

	ATPlanXPlayerState_IsInBetrayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.TPlanXPlayerState.GetAllPreciousItemsList
// (Final, Native, Public)
// Parameters:
// TArray<struct FPreciousItem>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPreciousItem> ATPlanXPlayerState::GetAllPreciousItemsList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.TPlanXPlayerState.GetAllPreciousItemsList");

	ATPlanXPlayerState_GetAllPreciousItemsList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.WorldPositionDisplayWidget.UpdatePosition
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*        PanelSlot                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InWorldPosition                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWorldPositionDisplayWidget::UpdatePosition(class UCanvasPanelSlot* PanelSlot, const struct FVector& InWorldPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.UpdatePosition");

	UWorldPositionDisplayWidget_UpdatePosition_Params params;
	params.PanelSlot = PanelSlot;
	params.InWorldPosition = InWorldPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.WorldPositionDisplayWidget.SetWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWorldLocation                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWorldPositionDisplayWidget::SetWorldLocation(const struct FVector& InWorldLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.SetWorldLocation");

	UWorldPositionDisplayWidget_SetWorldLocation_Params params;
	params.InWorldLocation = InWorldLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TPlanXGame.WorldPositionDisplayWidget.GetWorldLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UWorldPositionDisplayWidget::GetWorldLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.GetWorldLocation");

	UWorldPositionDisplayWidget_GetWorldLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TPlanXGame.WorldPositionDisplayWidget.GetScreenOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UWorldPositionDisplayWidget::GetScreenOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TPlanXGame.WorldPositionDisplayWidget.GetScreenOffset");

	UWorldPositionDisplayWidget_GetScreenOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

