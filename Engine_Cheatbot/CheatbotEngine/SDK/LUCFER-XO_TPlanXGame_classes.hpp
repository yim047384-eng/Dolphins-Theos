#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TPlanXGame.BackpackComponentTPlanX
// 0x0000 (0x0618 - 0x0618)
class UBackpackComponentTPlanX : public UBackpackComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackComponentTPlanX");
		return pStaticClass;
	}


	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	bool ChangeItemStoreAreaNewInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
};


// Class TPlanXGame.BackpackTPlanXUtils
// 0x0000 (0x0028 - 0x0028)
class UBackpackTPlanXUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackTPlanXUtils");
		return pStaticClass;
	}


	static void UnRegisterInvokeClass();
	static void RegisterInvokeClass();
	static class UBackpackBlueprintTPlanXUtils* RealGetBPUtils();
};


// Class TPlanXGame.BackpackBlueprintTPlanXUtils
// 0x0000 (0x05C8 - 0x05C8)
class UBackpackBlueprintTPlanXUtils : public UBackpackBlueprintUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackBlueprintTPlanXUtils");
		return pStaticClass;
	}

};


// Class TPlanXGame.TPlanXGameMode
// 0x0058 (0x2498 - 0x2440)
class ATPlanXGameMode : public ABattleRoyaleGameModeTeam
{
public:
	TArray<class AActor*>                              OccupiedPlayerStartGroupList;                             // 0x2440(0x0010) (ZeroConstructor)
	TArray<class ASTExtraPlayerStartGroup*>            UnOccupiedPlayerStartGroupList;                           // 0x2450(0x0010) (ZeroConstructor)
	bool                                               IsResetPlayerStart;                                       // 0x2460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2461(0x0003) MISSED OFFSET
	float                                              LastCheckAITime;                                          // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveInterval;                                    // 0x2468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheckAIActiveRange;                                       // 0x246C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                DogTagID;                                                 // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropID;                                           // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                BetrayAIDropDot;                                          // 0x2478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPreSpawnPlayers;                                         // 0x247C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEcapedPlayerInTeam;                                // 0x247D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bZombiePVEMode;                                           // 0x247E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMapLoaded;                                               // 0x247F(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                iRandomPolicestationIndex;                                // 0x2480(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2484(0x0004) MISSED OFFSET
	TArray<struct FName>                               LoadingPlayerState;                                       // 0x2488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameMode");
		return pStaticClass;
	}


	void SetStateLeftTime(int LeftTime);
	void SetPlayerStartOccupied(class AActor* PlayerStart);
	void RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	void NotifyGameModeInit();
	void LoadMapFinished();
	bool IsNeedRestPlayerStart(class AController* Player);
	void GMShowSpawner();
	void GMShowEnterExit();
	void GMShowAssetBox();
	void GMSetPVEAIMax(int Num);
	TArray<class AActor*> GetOccupiedPlayerStartGroupList();
	bool CheckNoHumanExist();
	void CheckAIActive();
};


// Class TPlanXGame.TPlanXGameModeStateFightingTeam
// 0x0000 (0x00D8 - 0x00D8)
class UTPlanXGameModeStateFightingTeam : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateFightingTeam");
		return pStaticClass;
	}

};


// Class TPlanXGame.TPlanXGameModeStateFinished
// 0x0000 (0x00C0 - 0x00C0)
class UTPlanXGameModeStateFinished : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateFinished");
		return pStaticClass;
	}

};


// Class TPlanXGame.TPlanXGameModeStateReady
// 0x0000 (0x0118 - 0x0118)
class UTPlanXGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateReady");
		return pStaticClass;
	}

};


// Class TPlanXGame.TPlanXGameState
// 0x0058 (0x1698 - 0x1640)
class ATPlanXGameState : public ASTExtraGameStateBase
{
public:
	float                                              LastLeaveTime;                                            // 0x1640(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1644(0x0004) MISSED OFFSET
	TMap<int, int>                                     PreciousItemMap;                                          // 0x1648(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameState");
		return pStaticClass;
	}


	void ResetLeftTime();
	void PreLoadPreciousItemsMap();
	void OnRep_LastLeaveTime();
	int GetPlayerMilitartyOnClient();
	int CheckPreciousItemPrice(int TypeSpecificID);
	void BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor);
};


// Class TPlanXGame.TPlanXMetroStoreComponent
// 0x0048 (0x0280 - 0x0238)
class UTPlanXMetroStoreComponent : public ULuaActorComponent
{
public:
	int                                                status;                                                   // 0x0238(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BuyFrequence;                                             // 0x023C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FCurrencyInfo>                       CurrencyList;                                             // 0x0240(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGoodsInfo>                          GoodsList;                                                // 0x0250(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsListNum;                                             // 0x0260(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<int>                                        GoodsNum;                                                 // 0x0270(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXMetroStoreComponent");
		return pStaticClass;
	}


	void OnRep_StoreID();
	void OnRep_Status();
	void OnRep_GoodsNum();
	void OnRep_GoodsListNum();
	void OnRep_GoodsList();
	void OnRep_CurrencyList();
	void OnRep_BuyFrequence();
};


// Class TPlanXGame.TPlanXPickupItemUsefulProxy
// 0x0000 (0x0910 - 0x0910)
class UTPlanXPickupItemUsefulProxy : public UPickupItemUsefulProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXPickupItemUsefulProxy");
		return pStaticClass;
	}

};


// Class TPlanXGame.TPlanXPlayerState
// 0x0050 (0x1D28 - 0x1CD8)
class ATPlanXPlayerState : public ASTExtraPlayerState
{
public:
	TArray<struct FSyncRelevantPlayerTask>             SyncRelevantPlayerTask;                                   // 0x1CD8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FVector>                             EscapePosi;                                               // 0x1CE8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                BetrayDefaultTime;                                        // 0x1CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1CFC(0x0004) MISSED OFFSET
	uint64_t                                           Gold;                                                     // 0x1D00(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEscaped;                                               // 0x1D08(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRunAway;                                               // 0x1D09(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x1D0A(0x0006) MISSED OFFSET
	TArray<int>                                        AssetPointsCheckedByTeammate;                             // 0x1D10(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FXTBetrayInfo                               BetrayInfo;                                               // 0x1D20(0x0008) (BlueprintVisible, Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXPlayerState");
		return pStaticClass;
	}


	void OnRepXTBetrayInfo();
	void OnRepRelevantPlayerTaskNotifyBP();
	void OnRepEscapePosition();
	void OnRepAssetPointsCheckedByTeammate();
	void OnRep_RelevantPlayerTaskNotify();
	void OnRep_IsRunAway();
	void OnRep_IsEscaped();
	void OnRep_Gold();
	void OnRep_EscapePosiNotify();
	void OnRep_BetrayInfo();
	void OnRep_AssetPointsCheckedByTeammate();
	void OnPlayerEscaped();
	bool IsInGame();
	bool IsInBetrayState();
	TArray<struct FPreciousItem> GetAllPreciousItemsList();
};


// Class TPlanXGame.WorldPositionDisplayWidget
// 0x0020 (0x04A8 - 0x0488)
class UWorldPositionDisplayWidget : public ULuaUAEUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_Root;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0490(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ScreenOffset;                                             // 0x049C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bNeedDivideByScale;                                       // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.WorldPositionDisplayWidget");
		return pStaticClass;
	}


	void UpdatePosition(class UCanvasPanelSlot* PanelSlot, const struct FVector& InWorldPosition);
	void SetWorldLocation(const struct FVector& InWorldLocation);
	struct FVector GetWorldLocation();
	struct FVector2D GetScreenOffset();
};


}

