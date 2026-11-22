#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TPlanXGame.BackpackComponentTPlanX.PickupItemFromWrapperDetail
struct UBackpackComponentTPlanX_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackComponentTPlanX.PickItem_IntoSafetyBox
struct UBackpackComponentTPlanX_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBattleItemPickupInfo                       PickupInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EBattleItemPickupReason                            Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemUpdated
struct UBackpackComponentTPlanX_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemRemoved
struct UBackpackComponentTPlanX_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TPlanXGame.BackpackComponentTPlanX.NotifyItemListUpdated
struct UBackpackComponentTPlanX_NotifyItemListUpdated_Params
{
};

// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNewInner
struct UBackpackComponentTPlanX_ChangeItemStoreAreaNewInner_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                InItemNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaNew
struct UBackpackComponentTPlanX_ChangeItemStoreAreaNew_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                InItemNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreAreaInner
struct UBackpackComponentTPlanX_ChangeItemStoreAreaInner_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                InItemNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackComponentTPlanX.ChangeItemStoreArea
struct UBackpackComponentTPlanX_ChangeItemStoreArea_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	int                                                InItemNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EItemStoreArea                                     InItemStoreArea;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.BackpackTPlanXUtils.UnRegisterInvokeClass
struct UBackpackTPlanXUtils_UnRegisterInvokeClass_Params
{
};

// Function TPlanXGame.BackpackTPlanXUtils.RegisterInvokeClass
struct UBackpackTPlanXUtils_RegisterInvokeClass_Params
{
};

// Function TPlanXGame.BackpackTPlanXUtils.RealGetBPUtils
struct UBackpackTPlanXUtils_RealGetBPUtils_Params
{
	class UBackpackBlueprintTPlanXUtils*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.SetStateLeftTime
struct ATPlanXGameMode_SetStateLeftTime_Params
{
	int                                                LeftTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.SetPlayerStartOccupied
struct ATPlanXGameMode_SetPlayerStartOccupied_Params
{
	class AActor*                                      PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.RevisePlayerTombBoxDropWrapperList
struct ATPlanXGameMode_RevisePlayerTombBoxDropWrapperList_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPickUpItemData>                     OutItemDataList;                                          // (Parm, OutParm, ZeroConstructor)
	class ASTExtraBaseCharacter*                       DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIDCnt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.NotifyPlayerExitWhenNotStarted
struct ATPlanXGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function TPlanXGame.TPlanXGameMode.NotifyPlayerExit
struct ATPlanXGameMode_NotifyPlayerExit_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyPlayerController;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSendFailure;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FailureMessage;                                           // (Parm, ZeroConstructor)
	struct FName                                       ParamState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ParamReason;                                              // (Parm, ZeroConstructor)
};

// Function TPlanXGame.TPlanXGameMode.NotifyGameModeInit
struct ATPlanXGameMode_NotifyGameModeInit_Params
{
};

// Function TPlanXGame.TPlanXGameMode.LoadMapFinished
struct ATPlanXGameMode_LoadMapFinished_Params
{
};

// Function TPlanXGame.TPlanXGameMode.IsNeedRestPlayerStart
struct ATPlanXGameMode_IsNeedRestPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.GMShowSpawner
struct ATPlanXGameMode_GMShowSpawner_Params
{
};

// Function TPlanXGame.TPlanXGameMode.GMShowEnterExit
struct ATPlanXGameMode_GMShowEnterExit_Params
{
};

// Function TPlanXGame.TPlanXGameMode.GMShowAssetBox
struct ATPlanXGameMode_GMShowAssetBox_Params
{
};

// Function TPlanXGame.TPlanXGameMode.GMSetPVEAIMax
struct ATPlanXGameMode_GMSetPVEAIMax_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.GetOccupiedPlayerStartGroupList
struct ATPlanXGameMode_GetOccupiedPlayerStartGroupList_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TPlanXGame.TPlanXGameMode.CheckNoHumanExist
struct ATPlanXGameMode_CheckNoHumanExist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameMode.CheckAIActive
struct ATPlanXGameMode_CheckAIActive_Params
{
};

// Function TPlanXGame.TPlanXGameState.ResetLeftTime
struct ATPlanXGameState_ResetLeftTime_Params
{
};

// Function TPlanXGame.TPlanXGameState.PreLoadPreciousItemsMap
struct ATPlanXGameState_PreLoadPreciousItemsMap_Params
{
};

// Function TPlanXGame.TPlanXGameState.OnRep_LastLeaveTime
struct ATPlanXGameState_OnRep_LastLeaveTime_Params
{
};

// Function TPlanXGame.TPlanXGameState.GetPlayerMilitartyOnClient
struct ATPlanXGameState_GetPlayerMilitartyOnClient_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameState.CheckPreciousItemPrice
struct ATPlanXGameState_CheckPreciousItemPrice_Params
{
	int                                                TypeSpecificID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXGameState.BroadcastClimbHelicopter
struct ATPlanXGameState_BroadcastClimbHelicopter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ExitActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_StoreID
struct UTPlanXMetroStoreComponent_OnRep_StoreID_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_Status
struct UTPlanXMetroStoreComponent_OnRep_Status_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsNum
struct UTPlanXMetroStoreComponent_OnRep_GoodsNum_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsListNum
struct UTPlanXMetroStoreComponent_OnRep_GoodsListNum_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_GoodsList
struct UTPlanXMetroStoreComponent_OnRep_GoodsList_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_CurrencyList
struct UTPlanXMetroStoreComponent_OnRep_CurrencyList_Params
{
};

// Function TPlanXGame.TPlanXMetroStoreComponent.OnRep_BuyFrequence
struct UTPlanXMetroStoreComponent_OnRep_BuyFrequence_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRepXTBetrayInfo
struct ATPlanXPlayerState_OnRepXTBetrayInfo_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRepRelevantPlayerTaskNotifyBP
struct ATPlanXPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRepEscapePosition
struct ATPlanXPlayerState_OnRepEscapePosition_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRepAssetPointsCheckedByTeammate
struct ATPlanXPlayerState_OnRepAssetPointsCheckedByTeammate_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_RelevantPlayerTaskNotify
struct ATPlanXPlayerState_OnRep_RelevantPlayerTaskNotify_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_IsRunAway
struct ATPlanXPlayerState_OnRep_IsRunAway_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_IsEscaped
struct ATPlanXPlayerState_OnRep_IsEscaped_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_Gold
struct ATPlanXPlayerState_OnRep_Gold_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_EscapePosiNotify
struct ATPlanXPlayerState_OnRep_EscapePosiNotify_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_BetrayInfo
struct ATPlanXPlayerState_OnRep_BetrayInfo_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnRep_AssetPointsCheckedByTeammate
struct ATPlanXPlayerState_OnRep_AssetPointsCheckedByTeammate_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.OnPlayerEscaped
struct ATPlanXPlayerState_OnPlayerEscaped_Params
{
};

// Function TPlanXGame.TPlanXPlayerState.IsInGame
struct ATPlanXPlayerState_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXPlayerState.IsInBetrayState
struct ATPlanXPlayerState_IsInBetrayState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.TPlanXPlayerState.GetAllPreciousItemsList
struct ATPlanXPlayerState_GetAllPreciousItemsList_Params
{
	TArray<struct FPreciousItem>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TPlanXGame.WorldPositionDisplayWidget.UpdatePosition
struct UWorldPositionDisplayWidget_UpdatePosition_Params
{
	class UCanvasPanelSlot*                            PanelSlot;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InWorldPosition;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TPlanXGame.WorldPositionDisplayWidget.SetWorldLocation
struct UWorldPositionDisplayWidget_SetWorldLocation_Params
{
	struct FVector                                     InWorldLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TPlanXGame.WorldPositionDisplayWidget.GetWorldLocation
struct UWorldPositionDisplayWidget_GetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TPlanXGame.WorldPositionDisplayWidget.GetScreenOffset
struct UWorldPositionDisplayWidget_GetScreenOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

