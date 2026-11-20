#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class TPlanGame.BackpackComponentTPlan
// Size: 0x5f0 // Inherited bytes: 0x5f0
struct UBackpackComponentTPlan : UBackpackComponent {
	// Fields
	bool bForbidSafeBox; // Offset: 0x5e9 // Size: 0x01

	// Functions

	// Object Name: Function TPlanGame.BackpackComponentTPlan.PickupItemFromWrapperDetail
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickupItemFromWrapperDetail(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason, enum class EBattleItemClientPickupType BattleItemClientPickupType); // Offset: 0x1022445e0 // Return & Params: Num(5) Size(0x73)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.PickItem_IntoSafetyBox
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool PickItem_IntoSafetyBox(struct FItemDefineID& DefineID, struct FBattleItemPickupInfo& PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x102244474 // Return & Params: Num(4) Size(0x72)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.NotifyItemUpdated
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void NotifyItemUpdated(struct FItemDefineID& DefineID); // Offset: 0x1022443dc // Return & Params: Num(1) Size(0x18)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.NotifyItemRemoved
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void NotifyItemRemoved(struct FItemDefineID& DefineID); // Offset: 0x102244344 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.NotifyItemListUpdated
	// Flags: [Native|Public|BlueprintCallable]
	void NotifyItemListUpdated(); // Offset: 0x102244328 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.ChangeItemStoreAreaNewInner
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool ChangeItemStoreAreaNewInner(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x10224420c // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.ChangeItemStoreAreaNew
	// Flags: [Native|Public|BlueprintCallable]
	bool ChangeItemStoreAreaNew(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x1022440f0 // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.ChangeItemStoreAreaInner
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool ChangeItemStoreAreaInner(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x102243fd4 // Return & Params: Num(4) Size(0x1e)

	// Object Name: Function TPlanGame.BackpackComponentTPlan.ChangeItemStoreArea
	// Flags: [Native|Public|BlueprintCallable]
	bool ChangeItemStoreArea(struct FItemDefineID DefineID, IntProperty InItemNum, enum class EItemStoreArea InItemStoreArea); // Offset: 0x102243eb8 // Return & Params: Num(4) Size(0x1e)
};

// Object Name: Class TPlanGame.BackpackTPlanUtils
// Size: 0x28 // Inherited bytes: 0x28
struct UBackpackTPlanUtils : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function TPlanGame.BackpackTPlanUtils.UnRegisterInvokeClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnRegisterInvokeClass(); // Offset: 0x102244bf0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.BackpackTPlanUtils.RegisterInvokeClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RegisterInvokeClass(); // Offset: 0x102244bdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.BackpackTPlanUtils.RealGetBPUtils
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UBackpackBlueprintTPlanUtils* RealGetBPUtils(); // Offset: 0x102244ba8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class TPlanGame.BackpackBlueprintTPlanUtils
// Size: 0xba0 // Inherited bytes: 0xba0
struct UBackpackBlueprintTPlanUtils : UBackpackBlueprintUtils {
};

// Object Name: Class TPlanGame.MetroStoreComponent
// Size: 0x280 // Inherited bytes: 0x238
struct UMetroStoreComponent : ULuaActorComponent {
	// Fields
	IntProperty StoreID; // Offset: 0x234 // Size: 0x04
	IntProperty status; // Offset: 0x238 // Size: 0x04
	float BuyFrequence; // Offset: 0x23c // Size: 0x04
	struct TArray<struct FCurrencyInfo> CurrencyList; // Offset: 0x240 // Size: 0x10
	struct TArray<struct FGoodsInfo> GoodsList; // Offset: 0x250 // Size: 0x10
	struct TArray<IntProperty> GoodsListNum; // Offset: 0x260 // Size: 0x10
	struct TArray<IntProperty> GoodsNum; // Offset: 0x270 // Size: 0x10

	// Functions

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_StoreID
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_StoreID(); // Offset: 0x102244fa0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_Status
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_Status(); // Offset: 0x102244f84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_GoodsNum
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_GoodsNum(); // Offset: 0x102244f68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_GoodsListNum
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_GoodsListNum(); // Offset: 0x102244f4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_GoodsList
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_GoodsList(); // Offset: 0x102244f30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_CurrencyList
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_CurrencyList(); // Offset: 0x102244f14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.MetroStoreComponent.OnRep_BuyFrequence
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_BuyFrequence(); // Offset: 0x102244ef8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class TPlanGame.TPlanPickupItemUsefulProxy
// Size: 0x378 // Inherited bytes: 0x378
struct UTPlanPickupItemUsefulProxy : UPickupItemUsefulProxy {
};

// Object Name: Class TPlanGame.XTGameMode
// Size: 0x2440 // Inherited bytes: 0x23e8
struct AXTGameMode : ABattleRoyaleGameModeTeam {
	// Fields
	struct TArray<struct AActor*> OccupiedPlayerStartGroupList; // Offset: 0x23e8 // Size: 0x10
	struct TArray<struct ASTExtraPlayerStartGroup*> UnOccupiedPlayerStartGroupList; // Offset: 0x23f8 // Size: 0x10
	bool IsResetPlayerStart; // Offset: 0x2408 // Size: 0x01
	char pad_0x2409[0x3]; // Offset: 0x2409 // Size: 0x03
	float LastCheckAITime; // Offset: 0x240c // Size: 0x04
	float CheckAIActiveInterval; // Offset: 0x2410 // Size: 0x04
	float CheckAIActiveRange; // Offset: 0x2414 // Size: 0x04
	IntProperty DogTagID; // Offset: 0x2418 // Size: 0x04
	IntProperty BetrayAIDropID; // Offset: 0x241c // Size: 0x04
	IntProperty BetrayAIDropDot; // Offset: 0x2420 // Size: 0x04
	bool bPreSpawnPlayers; // Offset: 0x2424 // Size: 0x01
	bool bEnableEcapedPlayerInTeam; // Offset: 0x2425 // Size: 0x01
	bool bZombiePVEMode; // Offset: 0x2426 // Size: 0x01
	bool bMapLoaded; // Offset: 0x2427 // Size: 0x01
	IntProperty iRandomPolicestationIndex; // Offset: 0x2428 // Size: 0x04
	char pad_0x242C[0x4]; // Offset: 0x242c // Size: 0x04
	struct TArray<struct FName> LoadingPlayerState; // Offset: 0x2430 // Size: 0x10

	// Functions

	// Object Name: Function TPlanGame.XTGameMode.SetStateLeftTime
	// Flags: [Native|Public]
	void SetStateLeftTime(IntProperty LeftTime); // Offset: 0x102245c1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TPlanGame.XTGameMode.SetPlayerStartOccupied
	// Flags: [Final|Native|Public]
	void SetPlayerStartOccupied(struct AActor* PlayerStart); // Offset: 0x102245ba0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TPlanGame.XTGameMode.RevisePlayerTombBoxDropWrapperList
	// Flags: [Native|Public|HasOutParms]
	void RevisePlayerTombBoxDropWrapperList(struct ASTExtraBaseCharacter* Character, struct TArray<struct FPickUpItemData>& OutItemDataList, struct ASTExtraBaseCharacter* DamageCauser, IntProperty InstanceIDCnt); // Offset: 0x102245a28 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function TPlanGame.XTGameMode.NotifyPlayerExitWhenNotStarted
	// Flags: [Native|Public]
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, struct FName PlayerType, StrProperty Reason); // Offset: 0x102245910 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function TPlanGame.XTGameMode.NotifyPlayerExit
	// Flags: [Native|Public]
	void NotifyPlayerExit(uint32_t PlayerKey, struct FName PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, StrProperty FailureMessage, struct FName ParamState, StrProperty ParamReason); // Offset: 0x1022455e0 // Return & Params: Num(8) Size(0x40)

	// Object Name: Function TPlanGame.XTGameMode.NotifyGameModeInit
	// Flags: [Native|Public]
	void NotifyGameModeInit(); // Offset: 0x1022455c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameMode.LoadMapFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LoadMapFinished(); // Offset: 0x1022455b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameMode.IsNeedRestPlayerStart
	// Flags: [Final|Native|Public]
	bool IsNeedRestPlayerStart(struct AController* Player); // Offset: 0x102245524 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function TPlanGame.XTGameMode.GMShowSpawner
	// Flags: [Final|Exec|Native|Public]
	void GMShowSpawner(); // Offset: 0x102245510 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameMode.GMShowEnterExit
	// Flags: [Final|Exec|Native|Public]
	void GMShowEnterExit(); // Offset: 0x1022454fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameMode.GMShowAssetBox
	// Flags: [Final|Exec|Native|Public]
	void GMShowAssetBox(); // Offset: 0x1022454e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameMode.GMSetPVEAIMax
	// Flags: [Final|Exec|Native|Public]
	void GMSetPVEAIMax(IntProperty Num); // Offset: 0x10224546c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TPlanGame.XTGameMode.GetOccupiedPlayerStartGroupList
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct AActor*> GetOccupiedPlayerStartGroupList(); // Offset: 0x102245408 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function TPlanGame.XTGameMode.CheckNoHumanExist
	// Flags: [Native|Public]
	bool CheckNoHumanExist(); // Offset: 0x1022453cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TPlanGame.XTGameMode.CheckAIActive
	// Flags: [Final|Native|Public]
	void CheckAIActive(); // Offset: 0x1022453b8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class TPlanGame.XTGameModeStateFightingTeam
// Size: 0xd8 // Inherited bytes: 0xd8
struct UXTGameModeStateFightingTeam : UGameModeStateFightingTeam {
};

// Object Name: Class TPlanGame.XTGameModeStateFinished
// Size: 0xc0 // Inherited bytes: 0xc0
struct UXTGameModeStateFinished : UGameModeStateFinishedTeam {
};

// Object Name: Class TPlanGame.XTGameModeStateReady
// Size: 0x118 // Inherited bytes: 0x118
struct UXTGameModeStateReady : UGameModeStateReady {
};

// Object Name: Class TPlanGame.XTGameState
// Size: 0x1678 // Inherited bytes: 0x1620
struct AXTGameState : ASTExtraGameStateBase {
	// Fields
	float LastLeaveTime; // Offset: 0x1620 // Size: 0x04
	char pad_0x1624[0x4]; // Offset: 0x1624 // Size: 0x04
	MapProperty PreciousItemMap; // Offset: 0x1628 // Size: 0x50

	// Functions

	// Object Name: Function TPlanGame.XTGameState.ResetLeftTime
	// Flags: [Final|Native|Public]
	void ResetLeftTime(); // Offset: 0x10224674c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameState.PreLoadPreciousItemsMap
	// Flags: [Final|Native|Public]
	void PreLoadPreciousItemsMap(); // Offset: 0x102246738 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameState.OnRep_LastLeaveTime
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void OnRep_LastLeaveTime(); // Offset: 0x10224671c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTGameState.GetPlayerMilitartyOnClient
	// Flags: [Native|Event|Public|BlueprintEvent]
	IntProperty GetPlayerMilitartyOnClient(); // Offset: 0x1022466e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TPlanGame.XTGameState.CheckPreciousItemPrice
	// Flags: [Final|Native|Public]
	IntProperty CheckPreciousItemPrice(IntProperty TypeSpecificID); // Offset: 0x102246654 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function TPlanGame.XTGameState.BroadcastClimbHelicopter
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public|NetValidate]
	void BroadcastClimbHelicopter(struct ASTExtraPlayerCharacter* Character, struct AActor* ExitActor); // Offset: 0x102246598 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class TPlanGame.XTPlayerState
// Size: 0x1d28 // Inherited bytes: 0x1cd8
struct AXTPlayerState : ASTExtraPlayerState {
	// Fields
	struct TArray<struct FSyncRelevantPlayerTask> SyncRelevantPlayerTask; // Offset: 0x1cd8 // Size: 0x10
	struct TArray<struct FVector> EscapePosi; // Offset: 0x1ce8 // Size: 0x10
	IntProperty BetrayDefaultTime; // Offset: 0x1cf8 // Size: 0x04
	char pad_0x1CFC[0x4]; // Offset: 0x1cfc // Size: 0x04
	uint64 Gold; // Offset: 0x1d00 // Size: 0x08
	bool bIsEscaped; // Offset: 0x1d08 // Size: 0x01
	bool bIsRunAway; // Offset: 0x1d09 // Size: 0x01
	char pad_0x1D0A[0x6]; // Offset: 0x1d0a // Size: 0x06
	struct TArray<IntProperty> AssetPointsCheckedByTeammate; // Offset: 0x1d10 // Size: 0x10
	struct FXTBetrayInfo BetrayInfo; // Offset: 0x1d20 // Size: 0x08

	// Functions

	// Object Name: Function TPlanGame.XTPlayerState.OnRepXTBetrayInfo
	// Flags: [Event|Public|BlueprintEvent]
	void OnRepXTBetrayInfo(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRepRelevantPlayerTaskNotifyBP
	// Flags: [Event|Public|BlueprintEvent]
	void OnRepRelevantPlayerTaskNotifyBP(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRepEscapePosition
	// Flags: [Event|Public|BlueprintEvent]
	void OnRepEscapePosition(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRepAssetPointsCheckedByTeammate
	// Flags: [Event|Public|BlueprintEvent]
	void OnRepAssetPointsCheckedByTeammate(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_RelevantPlayerTaskNotify
	// Flags: [Final|Native|Public]
	void OnRep_RelevantPlayerTaskNotify(); // Offset: 0x102246f08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_IsRunAway
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_IsRunAway(); // Offset: 0x102246eec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_IsEscaped
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_IsEscaped(); // Offset: 0x102246ed0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_Gold
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnRep_Gold(); // Offset: 0x102246eb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_EscapePosiNotify
	// Flags: [Final|Native|Public]
	void OnRep_EscapePosiNotify(); // Offset: 0x102246ea0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_BetrayInfo
	// Flags: [Final|Native|Public]
	void OnRep_BetrayInfo(); // Offset: 0x102246e8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnRep_AssetPointsCheckedByTeammate
	// Flags: [Final|Native|Public]
	void OnRep_AssetPointsCheckedByTeammate(); // Offset: 0x102246e78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.OnPlayerEscaped
	// Flags: [Event|Public|BlueprintEvent]
	void OnPlayerEscaped(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TPlanGame.XTPlayerState.IsInGame
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInGame(); // Offset: 0x102246e3c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TPlanGame.XTPlayerState.IsInBetrayState
	// Flags: [Native|Public]
	bool IsInBetrayState(); // Offset: 0x102246e00 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TPlanGame.XTPlayerState.GetAllPreciousItemsList
	// Flags: [Final|Native|Public]
	struct TArray<struct FPreciousItem> GetAllPreciousItemsList(); // Offset: 0x102246d9c // Return & Params: Num(1) Size(0x10)
};

