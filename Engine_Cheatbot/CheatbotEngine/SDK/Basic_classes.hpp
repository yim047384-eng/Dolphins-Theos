#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Basic.PlayerActorChannelExActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct APlayerActorChannelExActor : AActor {
};

// Object Name: Class Basic.PlayerReliableSequentialSyncActor
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct APlayerReliableSequentialSyncActor : APlayerActorChannelExActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	struct APlayerController* OwningController; // Offset: 0x4b8 // Size: 0x08

	// Functions

	// Object Name: Function Basic.PlayerReliableSequentialSyncActor.OnActorSpawned
	// Flags: [Final|Native|Protected]
	void OnActorSpawned(struct AActor* Actor); // Offset: 0x1039ec0a4 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Basic.OnlyActorComponent
// Size: 0x180 // Inherited bytes: 0x178
struct UOnlyActorComponent : UActorComponent {
	// Fields
	char bCanEverUpdate; // Offset: 0x178 // Size: 0x01
	char pad_0x179[0x7]; // Offset: 0x179 // Size: 0x07
};

// Object Name: Class Basic.UAENetActor
// Size: 0x580 // Inherited bytes: 0x570
struct AUAENetActor : ALuaActor {
	// Fields
	char pad_0x570[0x8]; // Offset: 0x570 // Size: 0x08
	IntProperty iRegionActor; // Offset: 0x578 // Size: 0x04
	bool bStaticAddNetworkActor; // Offset: 0x57c // Size: 0x01
	char AutoDormancyType; // Offset: 0x57d // Size: 0x01
	char pad_0x57E[0x2]; // Offset: 0x57e // Size: 0x02

	// Functions

	// Object Name: Function Basic.UAENetActor.ReceivedPlayerActiveRegionsChanged
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedPlayerActiveRegionsChanged(bool bEnter); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.UAEAnimListComponentBase
// Size: 0x2c8 // Inherited bytes: 0x178
struct UUAEAnimListComponentBase : UActorComponent {
	// Fields
	char pad_0x178[0xb0]; // Offset: 0x178 // Size: 0xb0
	MapProperty AnimListMap; // Offset: 0x228 // Size: 0x50
	struct TArray<struct UAnimationAsset*> AnimationCacheList; // Offset: 0x278 // Size: 0x10
	char pad_0x288[0x38]; // Offset: 0x288 // Size: 0x38
	bool bDisableAnimListOnDS; // Offset: 0x2c0 // Size: 0x01
	char pad_0x2C1[0x7]; // Offset: 0x2c1 // Size: 0x07
};

// Object Name: Class Basic.ItemHandleBase
// Size: 0xa8 // Inherited bytes: 0x28
struct UItemHandleBase : UObject {
	// Fields
	IntProperty Count; // Offset: 0x28 // Size: 0x04
	IntProperty MaxCount; // Offset: 0x2c // Size: 0x04
	bool bUnique; // Offset: 0x30 // Size: 0x01
	bool bStackable; // Offset: 0x31 // Size: 0x01
	bool bSingle; // Offset: 0x32 // Size: 0x01
	char pad_0x33[0x5]; // Offset: 0x33 // Size: 0x05
	MapProperty AssociationMap; // Offset: 0x38 // Size: 0x50
	struct FItemDefineID DefineID; // Offset: 0x88 // Size: 0x18
	char pad_0xA0[0x8]; // Offset: 0xa0 // Size: 0x08

	// Functions

	// Object Name: Function Basic.ItemHandleBase.SetAssociation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAssociation(IntProperty AssociationType, struct FItemAssociation Association); // Offset: 0x1039e2ea8 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Basic.ItemHandleBase.RemoveAssociation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAssociation(IntProperty AssociationType); // Offset: 0x1039e2e2c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.ItemHandleBase.Init
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void Init(struct FItemDefineID InDefineID); // Offset: 0x1039e2d98 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Basic.ItemHandleBase.GetDefineID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FItemDefineID GetDefineID(); // Offset: 0x1039e2d44 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Basic.ItemHandleBase.GetAssociationMap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	MapProperty GetAssociationMap(); // Offset: 0x1039e2ce0 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Basic.ItemHandleBase.GetAssociationListByTargetType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FItemAssociation> GetAssociationListByTargetType(IntProperty Type); // Offset: 0x1039e2c2c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FItemAssociation GetAssociationByTargetDefineID(struct FItemDefineID TargetDefineID); // Offset: 0x1039e2b80 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function Basic.ItemHandleBase.GetAssociation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FItemAssociation GetAssociation(IntProperty AssociationType); // Offset: 0x1039e2ae4 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Basic.ItemHandleBase.Constuct
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void Constuct(struct FItemDefineID& InDefineID); // Offset: 0x1039e2a4c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Basic.ItemHandleBase.CollectionNeedLoadSoftPath
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void CollectionNeedLoadSoftPath(struct TArray<struct FSoftObjectPath>& OutSoftPathList); // Offset: 0x1039e299c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.ItemHandleBase.AddAssociation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddAssociation(IntProperty AssociationType, struct FItemAssociation Association); // Offset: 0x1039e28d0 // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class Basic.BattleItemHandleBase
// Size: 0x138 // Inherited bytes: 0xa8
struct UBattleItemHandleBase : UItemHandleBase {
	// Fields
	char pad_0xA8[0x58]; // Offset: 0xa8 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x100 // Size: 0x10
	bool bEquipping; // Offset: 0x110 // Size: 0x01
	enum class EItemStoreArea ItemStoreArea; // Offset: 0x111 // Size: 0x01
	char pad_0x112[0x6]; // Offset: 0x112 // Size: 0x06
	struct TArray<struct FBattleItemAdditionalData> AdditionalData; // Offset: 0x118 // Size: 0x10
	bool bDropOnDead; // Offset: 0x128 // Size: 0x01
	bool bDropWhenDisuse; // Offset: 0x129 // Size: 0x01
	char pad_0x12A[0x2]; // Offset: 0x12a // Size: 0x02
	float UnitWeight; // Offset: 0x12c // Size: 0x04
	bool bEquippable; // Offset: 0x130 // Size: 0x01
	bool bConsumable; // Offset: 0x131 // Size: 0x01
	bool bAutoEquipAndDrop; // Offset: 0x132 // Size: 0x01
	char pad_0x133[0x1]; // Offset: 0x133 // Size: 0x01
	IntProperty ItemAttrsFlag; // Offset: 0x134 // Size: 0x04

	// Functions

	// Object Name: Function Basic.BattleItemHandleBase.UpdateAttributeModify
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	void UpdateAttributeModify(bool bEnable); // Offset: 0x1039d60f8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.UnEquip
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool UnEquip(); // Offset: 0x1039d60c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.ShouldDropInDisuse
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool ShouldDropInDisuse(struct TScriptInterface<Class>& ItemContainer, struct FItemDefineID CurrentPickupItemDefineID, struct FItemDefineID ThisItemDefineID, IntProperty KeptCount, enum class EBattleItemDisuseReason Reason); // Offset: 0x1039d5f0c // Return & Params: Num(6) Size(0x46)

	// Object Name: Function Basic.BattleItemHandleBase.HanldePickupAssociationData
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HanldePickupAssociationData(struct TArray<struct FBattleItemAdditionalData>& PickupAdditionalData); // Offset: 0x1039d5e4c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.BattleItemHandleBase.HanldeDropAssociationData
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HanldeDropAssociationData(); // Offset: 0x1039d5e10 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.HanldeCleared
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HanldeCleared(); // Offset: 0x1039d5dd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.HandleUse
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleUse(struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1039d5cf4 // Return & Params: Num(3) Size(0x2a)

	// Object Name: Function Basic.BattleItemHandleBase.HandlePickup
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HandlePickup(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemPickupInfo PickupInfo, enum class EBattleItemPickupReason Reason); // Offset: 0x1039d5b78 // Return & Params: Num(4) Size(0x6a)

	// Object Name: Function Basic.BattleItemHandleBase.HandleEnable
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleEnable(bool bEnable); // Offset: 0x1039d5adc // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Basic.BattleItemHandleBase.HandleDrop
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleDrop(IntProperty InCount, enum class EBattleItemDropReason Reason); // Offset: 0x1039d5a0c // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Basic.BattleItemHandleBase.HandleDisuse
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleDisuse(enum class EBattleItemDisuseReason Reason); // Offset: 0x1039d5978 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Basic.BattleItemHandleBase.HandleChangeItemStoreArea
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleChangeItemStoreArea(enum class EItemStoreArea InItemStoreArea); // Offset: 0x1039d58e4 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Basic.BattleItemHandleBase.HandleBindToTargetItem
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	bool HandleBindToTargetItem(); // Offset: 0x1039d58a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.GetWorldInternal
	// Flags: [Native|Event|Protected|BlueprintEvent|Const]
	struct UWorld* GetWorldInternal(); // Offset: 0x1039d586c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.BattleItemHandleBase.GetCurrentWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWorld* GetCurrentWorld(); // Offset: 0x1039d5838 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.BattleItemHandleBase.ExtractItemData
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct FBattleItemData ExtractItemData(); // Offset: 0x1039d57cc // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function Basic.BattleItemHandleBase.ClearAdditionalDataByType
	// Flags: [Final|Native|Public]
	void ClearAdditionalDataByType(enum class EBattleItemAdditionalDataType DataType); // Offset: 0x1039d5750 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.BattleItemHandleBase.ClearAdditionalData
	// Flags: [Final|Native|Public]
	void ClearAdditionalData(); // Offset: 0x1039d573c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.BattleItemHandleBase.CheckCanUse
	// Flags: [Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CheckCanUse(struct TScriptInterface<Class>& ItemContainer, struct FBattleItemUseTarget Target, enum class EBattleItemUseReason Reason); // Offset: 0x1039d560c // Return & Params: Num(4) Size(0x3a)
};

// Object Name: Class Basic.UAEGameInstance
// Size: 0x568 // Inherited bytes: 0x2e8
struct UUAEGameInstance : UGameInstance {
	// Fields
	struct FClientBaseInfo ClientBaseInfo; // Offset: 0x2e8 // Size: 0x158
	struct FScriptMulticastDelegate EnginePreTick; // Offset: 0x440 // Size: 0x10
	char pad_0x450[0x68]; // Offset: 0x450 // Size: 0x68
	struct UFrontendHUD* AssociatedFrontendHUD; // Offset: 0x4b8 // Size: 0x08
	char pad_0x4C0[0x8]; // Offset: 0x4c0 // Size: 0x08
	struct ULuaStateWrapper* LuaStateWrapper; // Offset: 0x4c8 // Size: 0x08
	bool bStandAloneFromLobby; // Offset: 0x4d0 // Size: 0x01
	char pad_0x4D1[0x27]; // Offset: 0x4d1 // Size: 0x27
	struct FScriptMulticastDelegate OnPreBattleResult; // Offset: 0x4f8 // Size: 0x10
	char pad_0x508[0x10]; // Offset: 0x508 // Size: 0x10
	struct TArray<StrProperty> HighWeatherNames; // Offset: 0x518 // Size: 0x10
	IntProperty HighWeatherMinRenderQuality; // Offset: 0x528 // Size: 0x04
	IntProperty HighWeatherMaxRenderQuality; // Offset: 0x52c // Size: 0x04
	IntProperty ModeID; // Offset: 0x530 // Size: 0x04
	char pad_0x534[0x4]; // Offset: 0x534 // Size: 0x04
	StrProperty ModType; // Offset: 0x538 // Size: 0x10
	StrProperty ModType2; // Offset: 0x548 // Size: 0x10
	struct TArray<StrProperty> ExtraModules; // Offset: 0x558 // Size: 0x10

	// Functions

	// Object Name: Function Basic.UAEGameInstance.SetModeID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetModeID(IntProperty InModeID); // Offset: 0x103a05694 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEGameInstance.SetLuaStateWrapper
	// Flags: [Final|Native|Public]
	void SetLuaStateWrapper(struct ULuaStateWrapper* TLuaStateWrapper); // Offset: 0x103a05618 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAEGameInstance.SetExtraModules
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetExtraModules(struct TArray<StrProperty> InExtraModules); // Offset: 0x103a05534 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.OpenAssetLoadLog
	// Flags: [Final|Exec|Native|Public]
	void OpenAssetLoadLog(); // Offset: 0x103a05520 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Basic.UAEGameInstance.OnPreBattleResult__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnPreBattleResult__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAEGameInstance.LuaLeakDetect
	// Flags: [Final|Exec|Native|Public|Const]
	void LuaLeakDetect(); // Offset: 0x103a0550c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAEGameInstance.LuaDoString
	// Flags: [Final|Exec|Native|Public|Const]
	void LuaDoString(StrProperty LuaString); // Offset: 0x103a05474 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetWeatherTime
	// Flags: [Native|Public|BlueprintCallable]
	float GetWeatherTime(); // Offset: 0x103a05438 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEGameInstance.GetWeatherLevelName
	// Flags: [Native|Public|BlueprintCallable]
	StrProperty GetWeatherLevelName(); // Offset: 0x103a053cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetWeatherID
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetWeatherID(); // Offset: 0x103a05390 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEGameInstance.GetModType2
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetModType2(); // Offset: 0x103a0532c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetModType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetModType(); // Offset: 0x103a052c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetModeID
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetModeID(); // Offset: 0x103a05294 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEGameInstance.GetLuaStateWrapper
	// Flags: [Final|Native|Public]
	struct ULuaStateWrapper* GetLuaStateWrapper(); // Offset: 0x103a05260 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAEGameInstance.GetLoadWeatherName
	// Flags: [Native|Public|BlueprintCallable]
	StrProperty GetLoadWeatherName(StrProperty InWeatherName); // Offset: 0x103a05188 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.UAEGameInstance.GetIsHighWeatherLevel
	// Flags: [Native|Public|BlueprintCallable]
	bool GetIsHighWeatherLevel(StrProperty InWeatherLevelName); // Offset: 0x103a050d8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.UAEGameInstance.GetGameID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetGameID(); // Offset: 0x103a05064 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetExtraModulesString
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetExtraModulesString(); // Offset: 0x103a05000 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetExtraModules
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<StrProperty> GetExtraModules(); // Offset: 0x103a04fc8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEGameInstance.GetDeviceLevel
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetDeviceLevel(); // Offset: 0x103a04f8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEGameInstance.GetDataTable_Mod
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEDataTable* GetDataTable_Mod(StrProperty tableName); // Offset: 0x103a04ee4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAEGameInstance.GetDataTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEDataTable* GetDataTable(StrProperty tableName); // Offset: 0x103a04e3c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetAssociatedFrontendHUD(); // Offset: 0x103a04e08 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAEGameInstance.CloseAssetLoadLog
	// Flags: [Final|Exec|Native|Public]
	void CloseAssetLoadLog(); // Offset: 0x103a04df4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.UAENetBunchQueueSystem
// Size: 0x30 // Inherited bytes: 0x30
struct UUAENetBunchQueueSystem : UWorldSubsystem {
};

// Object Name: Class Basic.UAEBaseSkillCondition
// Size: 0x88 // Inherited bytes: 0x80
struct UUAEBaseSkillCondition : UUTSkillCondition {
	// Fields
	struct APawn* OwnerPawnForBuff; // Offset: 0x80 // Size: 0x08
};

// Object Name: Class Basic.AttrModifyComponent
// Size: 0x958 // Inherited bytes: 0x178
struct UAttrModifyComponent : UActorComponent {
	// Fields
	char pad_0x178[0xf0]; // Offset: 0x178 // Size: 0xf0
	IntProperty ConfigAutoAddAttId; // Offset: 0x268 // Size: 0x04
	char pad_0x26C[0xa4]; // Offset: 0x26c // Size: 0xa4
	struct TArray<struct FAttrModifyItem> ConfigAttrModifyList; // Offset: 0x310 // Size: 0x10
	char pad_0x320[0xa0]; // Offset: 0x320 // Size: 0xa0
	uint32_t AttrModifyStateList; // Offset: 0x3c0 // Size: 0x04
	char pad_0x3C4[0x74]; // Offset: 0x3c4 // Size: 0x74
	struct FRepAttributeModify DynamicModifierRep; // Offset: 0x438 // Size: 0x18
	struct FRepAttributeModify DynamicModifierRepOnlyOwner; // Offset: 0x450 // Size: 0x18
	char pad_0x468[0x20]; // Offset: 0x468 // Size: 0x20
	struct FScriptMulticastDelegate OnAttrModified; // Offset: 0x488 // Size: 0x10
	struct FScriptMulticastDelegate OnAttrRemoved; // Offset: 0x498 // Size: 0x10
	struct FAttrDynamicModifier DynamicModifier; // Offset: 0x4a8 // Size: 0xa8
	char pad_0x550[0x50]; // Offset: 0x550 // Size: 0x50
	struct TArray<struct FAttributeExpand> AttributeExpands; // Offset: 0x5a0 // Size: 0x10
	bool bAddReserveNum; // Offset: 0x5b0 // Size: 0x01
	char pad_0x5B1[0x7]; // Offset: 0x5b1 // Size: 0x07
	MapProperty RelateAttributeGroup; // Offset: 0x5b8 // Size: 0x50
	enum class EActorRegAttrTableType ActorAttrType; // Offset: 0x608 // Size: 0x01
	char pad_0x609[0x10f]; // Offset: 0x609 // Size: 0x10f
	struct TArray<struct FModAttrSimulateSyncItem> ModSimulateSyncList; // Offset: 0x718 // Size: 0x10
	char pad_0x728[0x108]; // Offset: 0x728 // Size: 0x108
	struct FScriptMulticastDelegate OnNeedSetSpeedOverLimit; // Offset: 0x830 // Size: 0x10
	char pad_0x840[0xf8]; // Offset: 0x840 // Size: 0xf8
	struct TArray<struct FAttrModifyRecordItem> ExceptionAttrModifyRecords_DS; // Offset: 0x938 // Size: 0x10
	struct TArray<struct FAttrModifyRecordItem> ExceptionAttrModifyRecords_Client; // Offset: 0x948 // Size: 0x10

	// Functions

	// Object Name: Function Basic.AttrModifyComponent.SwitchAttrModifierByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SwitchAttrModifierByIndex(IntProperty ModifyConfigIndex, bool Enable); // Offset: 0x1039d20d8 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Basic.AttrModifyComponent.SwitchAttrModifier
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SwitchAttrModifier(StrProperty AttrModifyItemName, bool Enable); // Offset: 0x1039d1fe8 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Basic.AttrModifyComponent.StartTimerToSyncRecordAttrValue
	// Flags: [Final|Native|Public]
	void StartTimerToSyncRecordAttrValue(float Time); // Offset: 0x1039d1f6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.AttrModifyComponent.SetValueToAttributeSafety
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetValueToAttributeSafety(StrProperty AttrName, float Value, IntProperty ModifyRecordType); // Offset: 0x1039d1e54 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.AttrModifyComponent.SetOrignalValueToAttribute
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOrignalValueToAttribute(StrProperty AttrName, float Value); // Offset: 0x1039d1d7c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.SetOrignalValueAndBaseValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOrignalValueAndBaseValue(StrProperty AttrName, float Value); // Offset: 0x1039d1ca4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.SetAttrModifyStateValue
	// Flags: [Final|Native|Public]
	void SetAttrModifyStateValue(IntProperty Index, bool Value); // Offset: 0x1039d1be8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.SetAttributeMinValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAttributeMinValue(StrProperty AttrName, float MinValue); // Offset: 0x1039d1b10 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.SetAttributeMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAttributeMaxValue(StrProperty AttrName, float MaxValue); // Offset: 0x1039d1a38 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.ServerSendExceptionType
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ServerSendExceptionType(StrProperty AttrName, IntProperty ExceptionType); // Offset: 0x1039d1958 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.ServerRequestRecordAttrValue
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ServerRequestRecordAttrValue(StrProperty AttrName); // Offset: 0x1039d18b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyComponent.ResponeAttrValue
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ResponeAttrValue(StrProperty AttrName, float FinalValue); // Offset: 0x1039d17d8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.RequestAttrValue
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RequestAttrValue(StrProperty AttrName); // Offset: 0x1039d1738 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyComponent.RemoveModifyItemFromCache
	// Flags: [Final|Native|Public]
	bool RemoveModifyItemFromCache(uint32_t ModifyUID); // Offset: 0x1039d16ac // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.RemoveAttrListener
	// Flags: [Final|Native|Public]
	void RemoveAttrListener(StrProperty AttrName, struct FSluaBPVar Listener); // Offset: 0x1039d1594 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function Basic.AttrModifyComponent.RemoveAllDynamicModifier
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAllDynamicModifier(bool bForce); // Offset: 0x1039d1510 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool RegisterModifyAbleAttr(struct TArray<struct FAttrRegisterItem>& AttrRegists, bool bSetAttrByOrigin); // Offset: 0x1039d140c // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Basic.AttrModifyComponent.RegistAttrModifyRecordList
	// Flags: [Final|Native|Public]
	void RegistAttrModifyRecordList(StrProperty AttrName, IntProperty RecordLen); // Offset: 0x1039d1334 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.RegCurrentModAttrs
	// Flags: [Final|Native|Public]
	void RegCurrentModAttrs(); // Offset: 0x1039d1320 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.RefreshAttributeModify
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshAttributeModify(StrProperty AttrName); // Offset: 0x1039d1288 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyComponent.PushAttrModifyRecordItem
	// Flags: [Final|Native|Public]
	void PushAttrModifyRecordItem(StrProperty AttrName, float PreValue, float CurValue, IntProperty ModifyRecordType, StrProperty ModifyDesc); // Offset: 0x1039d10e0 // Return & Params: Num(5) Size(0x30)

	// Object Name: Function Basic.AttrModifyComponent.OnRep_ModSimulateSyncList
	// Flags: [Final|Native|Public]
	void OnRep_ModSimulateSyncList(); // Offset: 0x1039d10cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.OnRep_ExceptionAttrModifyRecords
	// Flags: [Final|Native|Public]
	void OnRep_ExceptionAttrModifyRecords(); // Offset: 0x1039d10b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.OnRep_DynamicModifier
	// Flags: [Final|Native|Public]
	void OnRep_DynamicModifier(); // Offset: 0x1039d10a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
	// Flags: [Final|Native|Public]
	void OnRep_AttrModifyStateList(); // Offset: 0x1039d1090 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Basic.AttrModifyComponent.OnNeedSetSpeedOverLimit__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnNeedSetSpeedOverLimit__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms]
	void OnAttrModifiedEvent__DelegateSignature(struct TArray<struct FAttrAffected>& AffectedAttrS); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyComponent.LuaSetValueToAttributeSafety
	// Flags: [Final|Native|Public|BlueprintCallable]
	void LuaSetValueToAttributeSafety(StrProperty AttrName, float Value); // Offset: 0x1039d0fb8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.IsAttrModifyStateValidIndex
	// Flags: [Final|Native|Public]
	bool IsAttrModifyStateValidIndex(IntProperty Index); // Offset: 0x1039d0f2c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.InitializeRelateAttributeExpands
	// Flags: [Final|Native|Public]
	void InitializeRelateAttributeExpands(); // Offset: 0x1039d0f18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.HasDynamicModifier
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasDynamicModifier(StrProperty AttrModifyId); // Offset: 0x1039d0e70 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.AttrModifyComponent.HandleExceptionAttrModify
	// Flags: [Final|Native|Public]
	void HandleExceptionAttrModify(StrProperty AttrName, IntProperty ExceptionType); // Offset: 0x1039d0d98 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.GetSubsystem
	// Flags: [Final|Native|Public]
	struct UAttrModifyModDataSubsystem* GetSubsystem(); // Offset: 0x1039d0d64 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.AttrModifyComponent.GetMaxAttrName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetMaxAttrName(StrProperty AttrName); // Offset: 0x1039d0c94 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.AttrModifyComponent.GetAttrModifyStateValue
	// Flags: [Final|Native|Public]
	bool GetAttrModifyStateValue(IntProperty Index); // Offset: 0x1039d0c08 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.GetAttrModifyStateNum
	// Flags: [Final|Native|Public]
	IntProperty GetAttrModifyStateNum(); // Offset: 0x1039d0bec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.AttrModifyComponent.GetAttrModifyItemByItemName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FAttrModifyItem GetAttrModifyItemByItemName(StrProperty ItemName); // Offset: 0x1039d0ad4 // Return & Params: Num(2) Size(0x58)

	// Object Name: Function Basic.AttrModifyComponent.GetAttributeValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAttributeValue(StrProperty AttrName); // Offset: 0x1039d0a2c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.GetAttributeOrignalValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAttributeOrignalValue(StrProperty AttrName); // Offset: 0x1039d0984 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.GetAttributeMaxValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	float GetAttributeMaxValue(StrProperty AttrName); // Offset: 0x1039d08dc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.GetAttrDynamicModifyTargetString
	// Flags: [Final|Native|Public|HasOutParms]
	StrProperty GetAttrDynamicModifyTargetString(struct FAttrDynamicModifyTarget& DynamicModifyTarget); // Offset: 0x1039d07f0 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Basic.AttrModifyComponent.GetAttrDynamicModifyItemString
	// Flags: [Final|Native|Public|HasOutParms]
	StrProperty GetAttrDynamicModifyItemString(struct FAttrDynamicModifyItem& DynamicModifyItem); // Offset: 0x1039d070c // Return & Params: Num(2) Size(0x38)

	// Object Name: Function Basic.AttrModifyComponent.EnableAttrModifierByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool EnableAttrModifierByIndex(IntProperty ModifyConfigIndex); // Offset: 0x1039d0680 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.EnableAttrModifier
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool EnableAttrModifier(StrProperty AttrModifyItemName); // Offset: 0x1039d05d8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.AttrModifyComponent.DisableAttrModifierByIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool DisableAttrModifierByIndex(IntProperty ModifyConfigIndex); // Offset: 0x1039d054c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.AttrModifyComponent.DisableAttrModifier
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool DisableAttrModifier(StrProperty AttrModifyItemName); // Offset: 0x1039d04a4 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.AttrModifyComponent.DisableAllAttrModifier
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool DisableAllAttrModifier(bool bForce); // Offset: 0x1039d0410 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Basic.AttrModifyComponent.ConditionSyncRecordAttrValue
	// Flags: [Final|Native|Public]
	void ConditionSyncRecordAttrValue(); // Offset: 0x1039d03fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.ClientSyncRecordAttrValue
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ClientSyncRecordAttrValue(struct TArray<struct FAttrDesc> AttrDescs); // Offset: 0x1039d035c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyComponent.ClientSendRecordData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ClientSendRecordData(struct FAttrModifyRecordItem RecordItem, IntProperty ExceptionType); // Offset: 0x1039d026c // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function Basic.AttrModifyComponent.ClearAllAttrModify
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllAttrModify(); // Offset: 0x1039d0258 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyComponent.AddValueToAttribute
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddValueToAttribute(StrProperty AttrName, float Value); // Offset: 0x1039d0180 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyComponent.AddModifyItemAndCache
	// Flags: [Final|Native|Public]
	uint32_t AddModifyItemAndCache(StrProperty AttrName, enum class EAttrModifyRefType CModifyType, float CValue, bool bEnable, struct UObject* Causer, bool bOldModify); // Offset: 0x1039cff88 // Return & Params: Num(7) Size(0x30)

	// Object Name: Function Basic.AttrModifyComponent.AddDynamicModifier
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AddDynamicModifier(struct FAttrModifyItem& AttrModifyItem, bool RepOnlyOwner); // Offset: 0x1039cfe88 // Return & Params: Num(2) Size(0x49)

	// Object Name: Function Basic.AttrModifyComponent.AddBModifyAndCacheWithCParam
	// Flags: [Final|Native|Public]
	uint32_t AddBModifyAndCacheWithCParam(StrProperty AttrName, enum class EAttrModifyRefType CModifyType, float CValue, bool ClientSimulate); // Offset: 0x1039cfd18 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Basic.AttrModifyComponent.AddBModifyAndCache
	// Flags: [Final|Native|Public]
	uint32_t AddBModifyAndCache(StrProperty AttrName, enum class EAttrOperator ModifyType, float Value, bool ClientSimulate); // Offset: 0x1039cfba8 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Basic.AttrModifyComponent.AddAttrListener
	// Flags: [Final|Native|Public]
	void AddAttrListener(StrProperty AttrName, struct FSluaBPVar Listener); // Offset: 0x1039cfa90 // Return & Params: Num(2) Size(0x30)
};

// Object Name: Class Basic.AttrModifyInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UAttrModifyInterface : UInterface {
	// Functions

	// Object Name: Function Basic.AttrModifyInterface.SetAttrValue
	// Flags: [Native|Public|BlueprintCallable]
	void SetAttrValue(StrProperty AttrName, float NewVal, IntProperty Reason); // Offset: 0x1039d3668 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.AttrModifyInterface.RequestAttrValue
	// Flags: [Native|Public|BlueprintCallable]
	void RequestAttrValue(StrProperty AttrName); // Offset: 0x1039d35c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyInterface.RegisterModifiedAttributes
	// Flags: [Native|Public|BlueprintCallable]
	void RegisterModifiedAttributes(); // Offset: 0x1039d35ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.AttrModifyInterface.GetAttrValue
	// Flags: [Native|Public|BlueprintCallable]
	float GetAttrValue(StrProperty AttrName); // Offset: 0x1039d34fc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
	// Flags: [Native|Public|BlueprintCallable]
	struct TArray<struct AActor*> GetAttrModifyRelevantActors(); // Offset: 0x1039d3490 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.AttrModifyInterface.GetAttrModifyComponent
	// Flags: [Native|Public|BlueprintCallable]
	struct UAttrModifyComponent* GetAttrModifyComponent(); // Offset: 0x1039d3454 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.AttrModifyInterface.GetAttributeValue
	// Flags: [Native|Public|BlueprintCallable]
	float GetAttributeValue(StrProperty AttrName); // Offset: 0x1039d33a4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.AttrModifyInterface.AddAttrValue
	// Flags: [Native|Public|BlueprintCallable]
	void AddAttrValue(StrProperty AttrName, float AddVal, IntProperty Reason); // Offset: 0x1039d3284 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class Basic.AttrModifyModDataSubsystem
// Size: 0x188 // Inherited bytes: 0x30
struct UAttrModifyModDataSubsystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x158]; // Offset: 0x30 // Size: 0x158
};

// Object Name: Class Basic.BCDataTable
// Size: 0xb0 // Inherited bytes: 0x28
struct UBCDataTable : UObject {
	// Fields
	struct UScriptStruct* BigRowStruct; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x68]; // Offset: 0x30 // Size: 0x68
	struct UUAEDataTable* FixedTable; // Offset: 0x98 // Size: 0x08
	char pad_0xA0[0x10]; // Offset: 0xa0 // Size: 0x10
};

// Object Name: Class Basic.BlueprintFunctionOverride
// Size: 0x90 // Inherited bytes: 0x28
struct UBlueprintFunctionOverride : UBlueprintFunctionLibrary {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class Basic.LuaDataAsset
// Size: 0x98 // Inherited bytes: 0x30
struct ULuaDataAsset : UDataAsset {
	// Fields
	char pad_0x30[0x58]; // Offset: 0x30 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x88 // Size: 0x10
};

// Object Name: Class Basic.BPClassManager
// Size: 0x1f8 // Inherited bytes: 0x98
struct UBPClassManager : ULuaDataAsset {
	// Fields
	struct TArray<struct FBPClassItem> BPClassList; // Offset: 0x98 // Size: 0x10
	MapProperty BPClassLookUp; // Offset: 0xa8 // Size: 0x50
	MapProperty BPClassLookUpOverride; // Offset: 0xf8 // Size: 0x50
	MapProperty BPClassNameLookUp; // Offset: 0x148 // Size: 0x50
	MapProperty BPClassNameLookUpOverride; // Offset: 0x198 // Size: 0x50
	StrProperty BPClassManagerPath; // Offset: 0x1e8 // Size: 0x10

	// Functions

	// Object Name: Function Basic.BPClassManager.ModifyClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ModifyClass(struct UObject* InNativeClass, StrProperty BPClassPath, StrProperty ModTag); // Offset: 0x1039dd590 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.BPClassManager.GetUClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* GetUClass(IntProperty KeyIndex); // Offset: 0x1039dd504 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.BPClassManager.GetBPClassOverrideByName
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct UObject* GetBPClassOverrideByName(StrProperty ClassTagName, StrProperty ModTag); // Offset: 0x1039dd400 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.BPClassManager.GetBPClassOverride
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct UObject* GetBPClassOverride(struct UObject* InNativeClass, StrProperty ModTag); // Offset: 0x1039dd314 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.BPClassManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UBPClassManager* Get(); // Offset: 0x1039dd2e0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Basic.BudgetSchedulerSettings
// Size: 0x48 // Inherited bytes: 0x38
struct UBudgetSchedulerSettings : UDeveloperSettings {
	// Fields
	struct TArray<struct FBudgetSchedulerChannelConfig> Channels; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class Basic.BuffConfigSubsystem
// Size: 0x1b0 // Inherited bytes: 0x30
struct UBuffConfigSubsystem : UBattleSubsystem {
	// Fields
	char pad_0x30[0x20]; // Offset: 0x30 // Size: 0x20
	MapProperty BuffClassMap; // Offset: 0x50 // Size: 0x50
	char pad_0xA0[0x110]; // Offset: 0xa0 // Size: 0x110

	// Functions

	// Object Name: Function Basic.BuffConfigSubsystem.ReloadTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReloadTable(struct UWorld* World); // Offset: 0x1039ddd18 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.BuffConfigSubsystem.ClearTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearTable(); // Offset: 0x1039ddd04 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.BuffNodeLuaInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UBuffNodeLuaInterface : UInterface {
};

// Object Name: Class Basic.BuffUtils
// Size: 0x28 // Inherited bytes: 0x28
struct UBuffUtils : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.BuffUtils.IsRoleOK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsRoleOK(enum class EBuffEnabledRole EnabledRole, struct UActorComponent* OwnerComponent); // Offset: 0x1039de044 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class Basic.DelayReplicationInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UDelayReplicationInterface : UInterface {
	// Functions

	// Object Name: Function Basic.DelayReplicationInterface.ReSendRPCAfterBeginPlay
	// Flags: [Native|Public|BlueprintCallable]
	void ReSendRPCAfterBeginPlay(); // Offset: 0x1039de284 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.DelayReplicationInterface.ReCallRepAfterBeginPlay
	// Flags: [Native|Public|BlueprintCallable]
	void ReCallRepAfterBeginPlay(); // Offset: 0x1039de268 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.PathCompressionRef
// Size: 0x78 // Inherited bytes: 0x30
struct UPathCompressionRef : UDataAsset {
	// Fields
	struct TArray<struct FName> NodeNames; // Offset: 0x30 // Size: 0x10
	struct TArray<uint32_t> ParentIndices; // Offset: 0x40 // Size: 0x10
	StrProperty Dict; // Offset: 0x50 // Size: 0x10
	struct FSoftObjectPath DataTableRef; // Offset: 0x60 // Size: 0x18
};

// Object Name: Class Basic.GameModeEnvInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UGameModeEnvInterface : UInterface {
};

// Object Name: Class Basic.GameModeEnvUtil
// Size: 0x28 // Inherited bytes: 0x28
struct UGameModeEnvUtil : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.GameModeEnvUtil.GetModeID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetModeID(StrProperty GameModeClassPath); // Offset: 0x1039de810 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.GameModeEnvUtil.GetGameModeEnvData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool GetGameModeEnvData(IntProperty InModeID, struct FGameModeEnvData& OutData); // Offset: 0x1039de718 // Return & Params: Num(3) Size(0x59)
};

// Object Name: Class Basic.StackModifyAttrInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UStackModifyAttrInterface : UInterface {
	// Functions

	// Object Name: Function Basic.StackModifyAttrInterface.PushVectorModify
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PushVectorModify(IntProperty ModifyKey, struct FName PropertyName, struct FVector& InValue); // Offset: 0x1039e1900 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Basic.StackModifyAttrInterface.PushVector4Modify
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PushVector4Modify(IntProperty ModifyKey, struct FName PropertyName, struct FVector4& InValue); // Offset: 0x1039e17ec // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.PushVector2DModify
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void PushVector2DModify(IntProperty ModifyKey, struct FName PropertyName, struct FVector2D InValue); // Offset: 0x1039e16f4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.PushTransformModify
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PushTransformModify(IntProperty ModifyKey, struct FName PropertyName, struct FTransform& InValue); // Offset: 0x1039e15d0 // Return & Params: Num(3) Size(0x40)

	// Object Name: Function Basic.StackModifyAttrInterface.PushStringModify
	// Flags: [Native|Public|BlueprintCallable]
	void PushStringModify(IntProperty ModifyKey, struct FName PropertyName, StrProperty InValue); // Offset: 0x1039e14b8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.PushRotatorModify
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PushRotatorModify(IntProperty ModifyKey, struct FName PropertyName, struct FRotator& InValue); // Offset: 0x1039e13b0 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Basic.StackModifyAttrInterface.PushQuatModify
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PushQuatModify(IntProperty ModifyKey, struct FName PropertyName, struct FQuat& InValue); // Offset: 0x1039e12a8 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.PushNameModify
	// Flags: [Native|Public|BlueprintCallable]
	void PushNameModify(IntProperty ModifyKey, struct FName PropertyName, struct FName InValue); // Offset: 0x1039e11b0 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.PushLinearColorModify
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void PushLinearColorModify(IntProperty ModifyKey, struct FName PropertyName, struct FLinearColor InValue); // Offset: 0x1039e10b4 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.PushIntVectorModify
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void PushIntVectorModify(IntProperty ModifyKey, struct FName PropertyName, struct FIntVector InValue); // Offset: 0x1039e0fb8 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Basic.StackModifyAttrInterface.PushIntPointModify
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void PushIntPointModify(IntProperty ModifyKey, struct FName PropertyName, struct FIntPoint InValue); // Offset: 0x1039e0ec4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.PushInt32Modify
	// Flags: [Native|Public|BlueprintCallable]
	void PushInt32Modify(IntProperty ModifyKey, struct FName PropertyName, IntProperty InValue); // Offset: 0x1039e0dc8 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Basic.StackModifyAttrInterface.PushFloatModify
	// Flags: [Native|Public|BlueprintCallable]
	void PushFloatModify(IntProperty ModifyKey, struct FName PropertyName, float InValue); // Offset: 0x1039e0ccc // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Basic.StackModifyAttrInterface.PushColorModify
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	void PushColorModify(IntProperty ModifyKey, struct FName PropertyName, struct FColor InValue); // Offset: 0x1039e0bd4 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function Basic.StackModifyAttrInterface.PushByteModify
	// Flags: [Native|Public|BlueprintCallable]
	void PushByteModify(IntProperty ModifyKey, struct FName PropertyName, char InValue); // Offset: 0x1039e0ad8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Basic.StackModifyAttrInterface.PushBoolModify
	// Flags: [Native|Public|BlueprintCallable]
	void PushBoolModify(IntProperty ModifyKey, struct FName PropertyName, bool InValue); // Offset: 0x1039e09d4 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Basic.StackModifyAttrInterface.PopStackModifyAttr
	// Flags: [Native|Public|BlueprintCallable]
	bool PopStackModifyAttr(IntProperty ModifyKey, struct FName PropertyName); // Offset: 0x1039e0904 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Basic.StackModifyAttrInterface.HasStackModify
	// Flags: [Native|Public|BlueprintCallable]
	bool HasStackModify(struct FName PropertyName); // Offset: 0x1039e0870 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedVector4
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FVector4 GetModifiedVector4(struct FName PropertyName, struct FVector4 OriginalValue); // Offset: 0x1039e0790 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedVector2D
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D GetModifiedVector2D(struct FName PropertyName, struct FVector2D OriginalValue); // Offset: 0x1039e06c4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedVector
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FVector GetModifiedVector(struct FName PropertyName, struct FVector OriginalValue); // Offset: 0x1039e05f0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedTransform
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FTransform GetModifiedTransform(struct FName PropertyName, struct FTransform OriginalValue); // Offset: 0x1039e04e8 // Return & Params: Num(3) Size(0x70)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedString
	// Flags: [Native|Public|BlueprintCallable]
	StrProperty GetModifiedString(struct FName PropertyName, StrProperty OriginalValue); // Offset: 0x1039e0388 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedRotator
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FRotator GetModifiedRotator(struct FName PropertyName, struct FRotator OriginalValue); // Offset: 0x1039e02b4 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedQuat
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FQuat GetModifiedQuat(struct FName PropertyName, struct FQuat OriginalValue); // Offset: 0x1039e01d8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedName
	// Flags: [Native|Public|BlueprintCallable]
	struct FName GetModifiedName(struct FName PropertyName, struct FName OriginalValue); // Offset: 0x1039e010c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedLinearColor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FLinearColor GetModifiedLinearColor(struct FName PropertyName, struct FLinearColor OriginalValue); // Offset: 0x1039e0038 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedIntVector
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FIntVector GetModifiedIntVector(struct FName PropertyName, struct FIntVector OriginalValue); // Offset: 0x1039dff60 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedIntPoint
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FIntPoint GetModifiedIntPoint(struct FName PropertyName, struct FIntPoint OriginalValue); // Offset: 0x1039dfe98 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedInt32
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty GetModifiedInt32(struct FName PropertyName, IntProperty OriginalValue); // Offset: 0x1039dfdc8 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedFloat
	// Flags: [Native|Public|BlueprintCallable]
	float GetModifiedFloat(struct FName PropertyName, float OriginalValue); // Offset: 0x1039dfcf8 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedColor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	struct FColor GetModifiedColor(struct FName PropertyName, struct FColor OriginalValue); // Offset: 0x1039dfc2c // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedByte
	// Flags: [Native|Public|BlueprintCallable]
	char GetModifiedByte(struct FName PropertyName, char OriginalValue); // Offset: 0x1039dfb5c // Return & Params: Num(3) Size(0xa)

	// Object Name: Function Basic.StackModifyAttrInterface.GetModifiedBool
	// Flags: [Native|Public|BlueprintCallable]
	bool GetModifiedBool(struct FName PropertyName, bool OriginalValue); // Offset: 0x1039dfa84 // Return & Params: Num(3) Size(0xa)
};

// Object Name: Class Basic.ItemContainerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UItemContainerInterface : UInterface {
	// Functions

	// Object Name: Function Basic.ItemContainerInterface.GetOwningObject
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetOwningObject(); // Offset: 0x1039e3890 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<struct UItemHandleBase*> GetItemHandleListByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1039e37c0 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Basic.ItemContainerInterface.GetItemHandleByDefineID
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct UItemHandleBase* GetItemHandleByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1039e3718 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.ItemContainerInterface.GetItemDefineIDList
	// Flags: [Native|Public|BlueprintCallable]
	struct TArray<struct FItemDefineID> GetItemDefineIDList(); // Offset: 0x1039e36ac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.ItemContainerInterface.GetFirstItemDefineBySpecificID
	// Flags: [Native|Public|BlueprintCallable]
	struct FItemDefineID GetFirstItemDefineBySpecificID(IntProperty ID); // Offset: 0x1039e3608 // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class Basic.ItemContainerOwnerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UItemContainerOwnerInterface : UInterface {
	// Functions

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyUpdateCustomAccessoriesData
	// Flags: [Native|Event|Public|BlueprintEvent]
	void NotifyUpdateCustomAccessoriesData(IntProperty WeaponItemId, IntProperty Index, IntProperty ItemId, bool bIsSetOrRemove); // Offset: 0x1039e3fc0 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyUpdateCapacity
	// Flags: [Native|Event|Public|BlueprintEvent]
	void NotifyUpdateCapacity(float InBackPackCapacity, float InOccupiedCapacity, float InSafetyBoxCapacity, float InSafetyBoxOccupiedCapacity); // Offset: 0x1039e3e90 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyItemUpdated
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void NotifyItemUpdated(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x1039e3d80 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyItemRemoved
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void NotifyItemRemoved(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x1039e3c70 // Return & Params: Num(2) Size(0xd8)

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyItemEmpty
	// Flags: [Native|Event|Public|BlueprintEvent]
	void NotifyItemEmpty(); // Offset: 0x1039e3c54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.ItemContainerOwnerInterface.NotifyItemAdded
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void NotifyItemAdded(struct FItemDefineID& DefineID, struct FBattleItemData& ItemData); // Offset: 0x1039e3b44 // Return & Params: Num(2) Size(0xd8)
};

// Object Name: Class Basic.ItemFactoryInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UItemFactoryInterface : UInterface {
};

// Object Name: Class Basic.LuaAsyncTasksSubsystem
// Size: 0x38 // Inherited bytes: 0x30
struct ULuaAsyncTasksSubsystem : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08

	// Functions

	// Object Name: Function Basic.LuaAsyncTasksSubsystem.IsNeedClear
	// Flags: [Final|Native|Public|HasOutParms]
	bool IsNeedClear(float ClearMemorySize, float ClearArrayObjectSize, struct FSluaBPVar& Callback); // Offset: 0x1039e9940 // Return & Params: Num(4) Size(0x29)
};

// Object Name: Class Basic.LuaAsyncTaskSubsystem
// Size: 0x38 // Inherited bytes: 0x30
struct ULuaAsyncTaskSubsystem : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08

	// Functions

	// Object Name: Function Basic.LuaAsyncTaskSubsystem.IsNeedClear
	// Flags: [Final|Native|Public]
	bool IsNeedClear(struct UFrontendHUD* FrontendHUD, struct FSluaBPVar Callback); // Offset: 0x1039e9be0 // Return & Params: Num(3) Size(0x29)
};

// Object Name: Class Basic.LuaEventBridgeFunction
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaEventBridgeFunction : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.LuaEventBridgeFunction.UnRegisterEventByTarget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnRegisterEventByTarget(struct UObject* ObjContext); // Offset: 0x1039ea6d4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.LuaEventBridgeFunction.UnRegisterEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnRegisterEvent(StrProperty FEventType, StrProperty EventID, struct UObject* ObjContext, IntProperty EventHandle); // Offset: 0x1039ea570 // Return & Params: Num(4) Size(0x2c)

	// Object Name: Function Basic.LuaEventBridgeFunction.RegistEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty RegistEvent(StrProperty EventType, StrProperty EventID, struct UObject* ObjContext, StrProperty FunctionName); // Offset: 0x1039ea3f0 // Return & Params: Num(5) Size(0x3c)
};

// Object Name: Class Basic.LuaEventBridge
// Size: 0x158 // Inherited bytes: 0x28
struct ULuaEventBridge : UObject {
	// Fields
	struct TWeakObjectPtr<struct ULuaStateWrapper> LuaStateWrapper; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
	MapProperty RegisterEventMap; // Offset: 0x38 // Size: 0x50
	MapProperty LuaRegisterEventMap; // Offset: 0x88 // Size: 0x50
	MapProperty FilterKeyRegisterMap; // Offset: 0xd8 // Size: 0x50
	struct TArray<struct ULuaTemBPData*> CurrentParamArray; // Offset: 0x128 // Size: 0x10
	struct TArray<struct UProperty*> Params; // Offset: 0x138 // Size: 0x10
	char pad_0x148[0x10]; // Offset: 0x148 // Size: 0x10

	// Functions

	// Object Name: Function Basic.LuaEventBridge.SyncLuaRegisterEventNum
	// Flags: [Final|Native|Public]
	void SyncLuaRegisterEventNum(StrProperty EventType, StrProperty EventID, IntProperty Number); // Offset: 0x1039ead14 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Basic.LuaEventBridge.GetCurrentParam
	// Flags: [Final|Native|Public|Const]
	struct TArray<struct ULuaTemBPData*> GetCurrentParam(); // Offset: 0x1039eacdc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.LuaEventBridge.DeactivateEventsByFilterKey
	// Flags: [Final|Native|Public|HasOutParms]
	void DeactivateEventsByFilterKey(uint32_t& FilterKey); // Offset: 0x1039eac50 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.LuaEventBridge.CheckNeedPostEventWithFilterKey
	// Flags: [Final|Native|Public|HasOutParms]
	bool CheckNeedPostEventWithFilterKey(uint32_t& FilterKey, StrProperty EventType, StrProperty EventID, bool bCheckNeedPostLua); // Offset: 0x1039eaabc // Return & Params: Num(5) Size(0x2a)

	// Object Name: Function Basic.LuaEventBridge.ActiveEventByFilterKey
	// Flags: [Final|Native|Public|HasOutParms]
	void ActiveEventByFilterKey(uint32_t& FilterKey, StrProperty EventType, StrProperty EventID, bool bActive); // Offset: 0x1039ea930 // Return & Params: Num(4) Size(0x29)
};

// Object Name: Class Basic.LuaEventSubsystem
// Size: 0x170 // Inherited bytes: 0x30
struct ULuaEventSubsystem : UGameInstanceSubsystem {
	// Fields
	char pad_0x30[0x80]; // Offset: 0x30 // Size: 0x80
	struct TArray<struct ULuaTemBPData*> CurrentParamArray; // Offset: 0xb0 // Size: 0x10
	char pad_0xC0[0xa0]; // Offset: 0xc0 // Size: 0xa0
	struct FName LastEventTriggerObjectName; // Offset: 0x160 // Size: 0x08
	struct FName LastEventTriggerFunctionName; // Offset: 0x168 // Size: 0x08

	// Functions

	// Object Name: Function Basic.LuaEventSubsystem.UnRegistEvent
	// Flags: [Final|Native|Public]
	void UnRegistEvent(IntProperty EventHandle); // Offset: 0x1039eb4a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.LuaEventSubsystem.SetBridgeFunction
	// Flags: [Final|Native|Public]
	void SetBridgeFunction(struct FSluaBPVar OnRegistEvent, struct FSluaBPVar OnUnRegistEvent, struct FSluaBPVar OnPostEvent, struct FSluaBPVar OnPostBlueprintEvent); // Offset: 0x1039eb260 // Return & Params: Num(4) Size(0x80)

	// Object Name: Function Basic.LuaEventSubsystem.RegistEvent
	// Flags: [Final|Native|Public]
	IntProperty RegistEvent(StrProperty EventID, StrProperty EventType, struct UObject* Object, StrProperty FunctionName); // Offset: 0x1039eb0d0 // Return & Params: Num(5) Size(0x3c)
};

// Object Name: Class Basic.ModTable
// Size: 0x120 // Inherited bytes: 0x28
struct UModTable : UObject {
	// Fields
	char pad_0x28[0xf8]; // Offset: 0x28 // Size: 0xf8
};

// Object Name: Class Basic.NetRelevancyGroup
// Size: 0x60 // Inherited bytes: 0x28
struct UNetRelevancyGroup : UObject {
	// Fields
	struct FNetRelevancyGroupID GroupID; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct UUAENetConnection*> Connections; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x20]; // Offset: 0x40 // Size: 0x20
};

// Object Name: Class Basic.OnlyActorCompManagerComponent
// Size: 0x1d8 // Inherited bytes: 0x178
struct UOnlyActorCompManagerComponent : UActorComponent {
	// Fields
	MapProperty CacheComponents; // Offset: 0x178 // Size: 0x50
	struct TArray<struct UOnlyActorComponent*> CacheUpdateComponents; // Offset: 0x1c8 // Size: 0x10
};

// Object Name: Class Basic.OnlyActorComponentManagerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UOnlyActorComponentManagerInterface : UInterface {
};

// Object Name: Class Basic.OwnerRelevancyDependencyInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UOwnerRelevancyDependencyInterface : UInterface {
};

// Object Name: Class Basic.PlayerActorChannelEx
// Size: 0x580 // Inherited bytes: 0x580
struct UPlayerActorChannelEx : UActorChannel {
};

// Object Name: Class Basic.PlayerReliableSequentialSyncActorChannel
// Size: 0x580 // Inherited bytes: 0x580
struct UPlayerReliableSequentialSyncActorChannel : UPlayerActorChannelEx {
};

// Object Name: Class Basic.RenderFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct URenderFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.RenderFunctionLibrary.MarkComponentRenderStateDirty
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MarkComponentRenderStateDirty(struct UActorComponent* Comp); // Offset: 0x1039ec384 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Basic.RepPropertyModOptim
// Size: 0x88 // Inherited bytes: 0x28
struct URepPropertyModOptim : UObject {
	// Fields
	char pad_0x28[0x60]; // Offset: 0x28 // Size: 0x60
};

// Object Name: Class Basic.STBaseBuffCarrierInterface
// Size: 0x28 // Inherited bytes: 0x28
struct USTBaseBuffCarrierInterface : UInterface {
	// Functions

	// Object Name: Function Basic.STBaseBuffCarrierInterface.SetEndTime
	// Flags: [Native|Public|BlueprintCallable]
	bool SetEndTime(IntProperty InstID, float EndTime); // Offset: 0x1039ecf00 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.RemoveBuffBySkill
	// Flags: [Native|Public|BlueprintCallable]
	bool RemoveBuffBySkill(IntProperty SkillID, IntProperty LayerCount, struct AActor* Causer); // Offset: 0x1039ecdf8 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.RemoveBuffByID
	// Flags: [Native|Public|BlueprintCallable]
	bool RemoveBuffByID(IntProperty BuffID, struct AActor* Causer, IntProperty LayerCount, IntProperty CauseSkillID); // Offset: 0x1039eccb4 // Return & Params: Num(5) Size(0x19)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.HasSkillID
	// Flags: [Native|Public|BlueprintCallable]
	bool HasSkillID(IntProperty SkillID); // Offset: 0x1039ecc20 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.HasBuffID
	// Flags: [Native|Public|BlueprintCallable]
	bool HasBuffID(IntProperty BuffID); // Offset: 0x1039ecb8c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.GetBuffIDsBySkillID
	// Flags: [Native|Public|BlueprintCallable]
	struct TArray<IntProperty> GetBuffIDsBySkillID(IntProperty SkillID); // Offset: 0x1039ecaf0 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.GetBuffDuration
	// Flags: [Native|Public|BlueprintCallable]
	float GetBuffDuration(IntProperty InstID, IntProperty CauseSkillID); // Offset: 0x1039eca24 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.GetBuffComponent
	// Flags: [Native|Public|Const]
	struct USTBuffSystemComponent* GetBuffComponent(); // Offset: 0x1039ec9e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.ChangeBuffDuration
	// Flags: [Native|Public|BlueprintCallable]
	bool ChangeBuffDuration(IntProperty InstID, float Duration); // Offset: 0x1039ec918 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.AddBuffBySkill
	// Flags: [Native|Public|BlueprintCallable]
	bool AddBuffBySkill(IntProperty SkillID, IntProperty LayerCount, struct AActor* Causer, IntProperty Level); // Offset: 0x1039ec7d4 // Return & Params: Num(5) Size(0x15)

	// Object Name: Function Basic.STBaseBuffCarrierInterface.AddBuffByID
	// Flags: [Native|Public|BlueprintCallable]
	IntProperty AddBuffByID(IntProperty BuffID, struct AActor* Causer, IntProperty LayerCount, IntProperty CauseSkillID, IntProperty Level); // Offset: 0x1039ec654 // Return & Params: Num(6) Size(0x20)
};

// Object Name: Class Basic.STBuff
// Size: 0x150 // Inherited bytes: 0x28
struct USTBuff : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
	IntProperty BuffID; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
	StrProperty BuffName; // Offset: 0x48 // Size: 0x10
	StrProperty Desc; // Offset: 0x58 // Size: 0x10
	IntProperty LayerMax; // Offset: 0x68 // Size: 0x04
	float Duration; // Offset: 0x6c // Size: 0x04
	float ClientSyncInterval; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<float> CDConfigArray; // Offset: 0x78 // Size: 0x10
	bool bNeedSyncCD; // Offset: 0x88 // Size: 0x01
	enum class EBuffClientSyncType ClientSyncType; // Offset: 0x89 // Size: 0x01
	enum class EBuffTargetType TargetType; // Offset: 0x8a // Size: 0x01
	enum class EBuffRefreshType RefreshType; // Offset: 0x8b // Size: 0x01
	enum class EBuffReActionType ReActionType; // Offset: 0x8c // Size: 0x01
	enum class EMultiCauserHandleType MultiCauserHandleType; // Offset: 0x8d // Size: 0x01
	enum class EMultiSkillHandleType MultiSkillHandleType; // Offset: 0x8e // Size: 0x01
	bool IsExecuteOnece; // Offset: 0x8f // Size: 0x01
	bool RemoveAllLayer; // Offset: 0x90 // Size: 0x01
	char pad_0x91[0x7]; // Offset: 0x91 // Size: 0x07
	struct TArray<struct USTBuffTriggerBase*> TriggerBases; // Offset: 0x98 // Size: 0x10
	struct TArray<struct USTBuffCheckConditionWrapper*> Conditions; // Offset: 0xa8 // Size: 0x10
	struct TArray<struct USTBuffAction*> Actions; // Offset: 0xb8 // Size: 0x10
	enum class EBuffShowInUIType NeedShowBuffTypeInBuffList; // Offset: 0xc8 // Size: 0x01
	char pad_0xC9[0x3]; // Offset: 0xc9 // Size: 0x03
	IntProperty LocalizeDescID; // Offset: 0xcc // Size: 0x04
	StrProperty IconPath; // Offset: 0xd0 // Size: 0x10
	bool IsClientOwnLife; // Offset: 0xe0 // Size: 0x01
	bool ExistForever; // Offset: 0xe1 // Size: 0x01
	char pad_0xE2[0x2]; // Offset: 0xe2 // Size: 0x02
	IntProperty TipsOnAddBuff; // Offset: 0xe4 // Size: 0x04
	StrProperty TimeFormula; // Offset: 0xe8 // Size: 0x10
	MapProperty InstancedNodeNameToMemoryMap; // Offset: 0xf8 // Size: 0x50
	IntProperty InstancedNodesTotalSize; // Offset: 0x148 // Size: 0x04
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04

	// Functions

	// Object Name: Function Basic.STBuff.Tick
	// Flags: [Final|Native|Public|HasOutParms]
	void Tick(struct UActorComponent* BuffSystemComponent, IntProperty InstID, float DetalTime, float TimeSeconds, struct TArray<IntProperty>& TickActionList); // Offset: 0x1039ed8a8 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Basic.STBuff.ResetActionExecute
	// Flags: [Final|Native|Public]
	void ResetActionExecute(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed7f0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuff.OnCreate
	// Flags: [Final|Native|Public]
	void OnCreate(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed738 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuff.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed680 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuff.InitBuffAction
	// Flags: [Final|Native|Public]
	void InitBuffAction(); // Offset: 0x1039ed66c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuff.End
	// Flags: [Final|Native|Public]
	void End(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed5b4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuff.Destroy
	// Flags: [Final|Native|Public]
	void Destroy(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed4fc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuff.ChangeNotify
	// Flags: [Final|Native|Public]
	bool ChangeNotify(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ed434 // Return & Params: Num(3) Size(0xd)
};

// Object Name: Class Basic.STBuffNodeInstanceData
// Size: 0x58 // Inherited bytes: 0x28
struct USTBuffNodeInstanceData : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
	struct UActorComponent* CurOwnerActorComponent; // Offset: 0x40 // Size: 0x08
	IntProperty CurInstID; // Offset: 0x48 // Size: 0x04
	struct TWeakObjectPtr<struct USTBuff> OwnerBuff; // Offset: 0x4c // Size: 0x08
	IntProperty ArrayIndex; // Offset: 0x54 // Size: 0x04

	// Functions

	// Object Name: Function Basic.STBuffNodeInstanceData.GetBuffInstLevel
	// Flags: [Final|Native|Public]
	IntProperty GetBuffInstLevel(); // Offset: 0x1039f7344 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Basic.STBuffAction
// Size: 0xa8 // Inherited bytes: 0x58
struct USTBuffAction : USTBuffNodeInstanceData {
	// Fields
	char pad_0x58[0x8]; // Offset: 0x58 // Size: 0x08
	enum class EBuffEnabledRole ActionRole; // Offset: 0x60 // Size: 0x01
	char pad_0x61[0x3]; // Offset: 0x61 // Size: 0x03
	float ExecuteDelay; // Offset: 0x64 // Size: 0x04
	struct TArray<struct FBuffCheckConditionWrapperItem> ConditionSettings; // Offset: 0x68 // Size: 0x10
	struct TArray<struct FBuffTriggerWrapperItem> TriggerSettings; // Offset: 0x78 // Size: 0x10
	bool bEnableTick; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float Interval; // Offset: 0x8c // Size: 0x04
	float FirstTickStartTime; // Offset: 0x90 // Size: 0x04
	bool bTickByPeriod; // Offset: 0x94 // Size: 0x01
	bool AutoEnabled; // Offset: 0x95 // Size: 0x01
	char pad_0x96[0x2]; // Offset: 0x96 // Size: 0x02
	struct TArray<struct UObject*> CacheSoftObject; // Offset: 0x98 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffAction.ToString
	// Flags: [Native|Public]
	StrProperty ToString(); // Offset: 0x1039eec78 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffAction.Tick2
	// Flags: [Final|Native|Public]
	void Tick2(struct UActorComponent* BuffSystemComponent, IntProperty InstID, float DetalTime); // Offset: 0x1039eeb84 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.STBuffAction.Tick
	// Flags: [Final|Native|Public]
	void Tick(struct UActorComponent* BuffSystemComponent, IntProperty InstID, float DetalTime); // Offset: 0x1039eea90 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.STBuffAction.SetEnabled
	// Flags: [Final|Native|Public]
	void SetEnabled(struct UActorComponent* BuffSystemComponent, IntProperty InstID, bool Enabled); // Offset: 0x1039ee998 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Basic.STBuffAction.ResetExecute
	// Flags: [Final|Native|Public]
	void ResetExecute(struct UActorComponent* BuffSystemComponent, IntProperty InstID, bool IgnoreEnd); // Offset: 0x1039ee8a0 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Basic.STBuffAction.OnTick
	// Flags: [Native|Protected]
	void OnTick(float DetalTime); // Offset: 0x1039ee81c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.STBuffAction.OnResetExecute
	// Flags: [Native|Protected]
	void OnResetExecute(bool IgnoreEnd); // Offset: 0x1039ee790 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffAction.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039ee774 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnExecute
	// Flags: [Native|Protected]
	void OnExecute(); // Offset: 0x1039ee758 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnEnd
	// Flags: [Native|Protected]
	void OnEnd(); // Offset: 0x1039ee73c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039ee720 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnCheckLinkActionEnabled
	// Flags: [Native|Protected]
	void OnCheckLinkActionEnabled(); // Offset: 0x1039ee704 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnChangeNotify
	// Flags: [Native|Protected]
	void OnChangeNotify(); // Offset: 0x1039ee6e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.OnAsyncLoadSoftPathDone
	// Flags: [Final|Native|Protected]
	void OnAsyncLoadSoftPathDone(); // Offset: 0x1039ee6d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction.IsRoleOK
	// Flags: [Final|Native|Public]
	bool IsRoleOK(struct UActorComponent* OwnerComponent); // Offset: 0x1039ee648 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Basic.STBuffAction.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee590 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffAction.GetRealOwnerRole
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRole(); // Offset: 0x1039ee554 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffAction.GetOwner
	// Flags: [Final|Native|Protected]
	struct AActor* GetOwner(); // Offset: 0x1039ee520 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffAction.GetCauser
	// Flags: [Final|Native|Protected]
	struct AActor* GetCauser(); // Offset: 0x1039ee4ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffAction.Execute
	// Flags: [Final|Native|Public]
	void Execute(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee434 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffAction.End
	// Flags: [Final|Native|Public]
	void End(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee37c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffAction.Destroy
	// Flags: [Final|Native|Public]
	void Destroy(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee2c4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffAction.CheckLinkActionEnabled
	// Flags: [Final|Native|Public]
	void CheckLinkActionEnabled(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee20c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffAction.ChangeNotify
	// Flags: [Final|Native|Public]
	void ChangeNotify(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ee154 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Basic.STBuffAction_Lua
// Size: 0x1d0 // Inherited bytes: 0xa8
struct USTBuffAction_Lua : USTBuffAction {
	// Fields
	char pad_0xA8[0xc0]; // Offset: 0xa8 // Size: 0xc0
	MapProperty ActionParams; // Offset: 0x168 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x1b8 // Size: 0x01
	char pad_0x1B9[0x7]; // Offset: 0x1b9 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x1c0 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffAction_Lua.ToString
	// Flags: [Native|Public]
	StrProperty ToString(); // Offset: 0x1039ef5cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffAction_Lua.OnTick
	// Flags: [Native|Public]
	void OnTick(float DetalTime); // Offset: 0x1039ef548 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.STBuffAction_Lua.OnInitialize
	// Flags: [Native|Public]
	void OnInitialize(); // Offset: 0x1039ef52c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction_Lua.OnExecute
	// Flags: [Native|Public]
	void OnExecute(); // Offset: 0x1039ef510 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction_Lua.OnEnd
	// Flags: [Native|Public]
	void OnEnd(); // Offset: 0x1039ef4f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction_Lua.OnDestroy
	// Flags: [Native|Public]
	void OnDestroy(); // Offset: 0x1039ef4d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffAction_Lua.OnChangeNotify
	// Flags: [Native|Public]
	void OnChangeNotify(); // Offset: 0x1039ef4bc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.STBuffCheckConditionWrapper
// Size: 0x80 // Inherited bytes: 0x58
struct USTBuffCheckConditionWrapper : USTBuffNodeInstanceData {
	// Fields
	enum class EBuffEnabledRole ExecuteRole; // Offset: 0x58 // Size: 0x01
	char pad_0x59[0x7]; // Offset: 0x59 // Size: 0x07
	struct USTBuffCondition* Condition; // Offset: 0x60 // Size: 0x08
	float ConditionTickInterval; // Offset: 0x68 // Size: 0x04
	float Probality; // Offset: 0x6c // Size: 0x04
	enum class EBuffConditionExecuteTimeType ExecuteTimeType; // Offset: 0x70 // Size: 0x01
	bool IsDoOnFalse; // Offset: 0x71 // Size: 0x01
	bool IsNeedTick; // Offset: 0x72 // Size: 0x01
	bool IsNeedExecute; // Offset: 0x73 // Size: 0x01
	bool IsSetFalseWhenExecute; // Offset: 0x74 // Size: 0x01
	char pad_0x75[0x3]; // Offset: 0x75 // Size: 0x03
	float ExecuteDelay; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x4]; // Offset: 0x7c // Size: 0x04

	// Functions

	// Object Name: Function Basic.STBuffCheckConditionWrapper.Tick
	// Flags: [Final|Native|Public]
	void Tick(struct UActorComponent* BuffSystemComponent, IntProperty InstID, float DetalTime); // Offset: 0x1039f0060 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.ResetExecute
	// Flags: [Final|Native|Public]
	void ResetExecute(struct UActorComponent* BuffSystemComponent, IntProperty InstID, bool IgnoreEnd); // Offset: 0x1039eff68 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnTick
	// Flags: [Native|Protected]
	void OnTick(float DetalTime); // Offset: 0x1039efee4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039efec8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039efeac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnConditionTrue
	// Flags: [Final|Native|Protected]
	void OnConditionTrue(); // Offset: 0x1039efe98 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnConditionFalse
	// Flags: [Final|Native|Protected]
	void OnConditionFalse(); // Offset: 0x1039efe84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.OnChangeNotify
	// Flags: [Native|Protected]
	void OnChangeNotify(); // Offset: 0x1039efe68 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.IsRoleOK
	// Flags: [Final|Native|Public]
	bool IsRoleOK(struct UActorComponent* OwnerComponent); // Offset: 0x1039efddc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.InitLinkActionEnableState
	// Flags: [Final|Native|Public]
	void InitLinkActionEnableState(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039efd24 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039efc6c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.GetRealOwnerRole
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRole(); // Offset: 0x1039efc30 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.Execute
	// Flags: [Final|Native|Public]
	void Execute(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039efb78 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.End
	// Flags: [Final|Native|Public]
	void End(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039efac0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.Destroy
	// Flags: [Final|Native|Public]
	void Destroy(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039efa08 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.CheckCondition
	// Flags: [Final|Native|Protected]
	void CheckCondition(); // Offset: 0x1039ef9f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCheckConditionWrapper.ChangeNotify
	// Flags: [Final|Native|Public]
	void ChangeNotify(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039ef93c // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Basic.STBuffCondition
// Size: 0x58 // Inherited bytes: 0x28
struct USTBuffCondition : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
	enum class EBuffConditionAndOr AndOrPrev; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07
	struct USTBuffNodeInstanceData* OwnerInstanceData; // Offset: 0x50 // Size: 0x08

	// Functions

	// Object Name: Function Basic.STBuffCondition.OnResetExecute
	// Flags: [Native|Protected]
	void OnResetExecute(bool IgnoreEnd); // Offset: 0x1039f08e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffCondition.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039f08cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCondition.OnEnd
	// Flags: [Native|Public]
	void OnEnd(); // Offset: 0x1039f08b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCondition.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039f0894 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCondition.GetOwner
	// Flags: [Final|Native|Protected]
	struct AActor* GetOwner(); // Offset: 0x1039f0860 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffCondition.GetCauser
	// Flags: [Final|Native|Protected]
	struct AActor* GetCauser(); // Offset: 0x1039f082c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffCondition.Copy
	// Flags: [Native|Public]
	struct USTBuffCondition* Copy(struct UObject* Outer); // Offset: 0x1039f0798 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.STBuffCondition.CheckIsTrue
	// Flags: [Native|Protected]
	bool CheckIsTrue(); // Offset: 0x1039f075c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffCondition.ChangeNotify
	// Flags: [Native|Protected]
	void ChangeNotify(); // Offset: 0x1039f0740 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.STBuffConditionComplex
// Size: 0x68 // Inherited bytes: 0x58
struct USTBuffConditionComplex : USTBuffCondition {
	// Fields
	struct TArray<struct USTBuffCondition*> Conditions; // Offset: 0x58 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffConditionComplex.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039f0df4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionComplex.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039f0dd8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionComplex.Copy
	// Flags: [Native|Public]
	struct USTBuffCondition* Copy(struct UObject* Outer); // Offset: 0x1039f0d44 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.STBuffConditionComplex.CheckIsTrue
	// Flags: [Native|Protected]
	bool CheckIsTrue(); // Offset: 0x1039f0d08 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.STBuffConditionNot
// Size: 0x60 // Inherited bytes: 0x58
struct USTBuffConditionNot : USTBuffCondition {
	// Fields
	struct USTBuffCondition* Condition; // Offset: 0x58 // Size: 0x08

	// Functions

	// Object Name: Function Basic.STBuffConditionNot.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039f1134 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionNot.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039f1118 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionNot.Copy
	// Flags: [Native|Public]
	struct USTBuffCondition* Copy(struct UObject* Outer); // Offset: 0x1039f1084 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.STBuffConditionNot.CheckIsTrue
	// Flags: [Native|Protected]
	bool CheckIsTrue(); // Offset: 0x1039f1048 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.STBuffCondition_Lua
// Size: 0x180 // Inherited bytes: 0x58
struct USTBuffCondition_Lua : USTBuffCondition {
	// Fields
	char pad_0x58[0xc0]; // Offset: 0x58 // Size: 0xc0
	MapProperty ActionParams; // Offset: 0x118 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x168 // Size: 0x01
	char pad_0x169[0x7]; // Offset: 0x169 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x170 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffCondition_Lua.OnInitialize
	// Flags: [Native|Public]
	void OnInitialize(); // Offset: 0x1039f5ae4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCondition_Lua.OnDestroy
	// Flags: [Native|Public]
	void OnDestroy(); // Offset: 0x1039f5ac8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffCondition_Lua.CheckIsTrue
	// Flags: [Native|Public]
	bool CheckIsTrue(); // Offset: 0x1039f5a8c // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.STBuffConditionAction
// Size: 0xd0 // Inherited bytes: 0xa8
struct USTBuffConditionAction : USTBuffAction {
	// Fields
	struct USTBuffCondition* Condition; // Offset: 0xa8 // Size: 0x08
	float ConditionTickInterval; // Offset: 0xb0 // Size: 0x04
	float Probality; // Offset: 0xb4 // Size: 0x04
	enum class EBuffConditionExecuteTimeType ExecuteTimeType; // Offset: 0xb8 // Size: 0x01
	bool IsDoOnFalse; // Offset: 0xb9 // Size: 0x01
	bool IsNeedTick; // Offset: 0xba // Size: 0x01
	bool IsNeedExecute; // Offset: 0xbb // Size: 0x01
	bool IsSetFalseWhenExecute; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	struct TArray<struct FBuffConditionActionItem> LinkActions; // Offset: 0xc0 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffConditionAction.OnTick
	// Flags: [Native|Protected]
	void OnTick(float DetalTime); // Offset: 0x1039f5f20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.STBuffConditionAction.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039f5f04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionAction.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039f5ee8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionAction.OnConditionTrue
	// Flags: [Final|Native|Protected]
	void OnConditionTrue(); // Offset: 0x1039f5ed4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionAction.OnConditionFalse
	// Flags: [Final|Native|Protected]
	void OnConditionFalse(); // Offset: 0x1039f5ec0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionAction.OnChangeNotify
	// Flags: [Native|Protected]
	void OnChangeNotify(); // Offset: 0x1039f5ea4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffConditionAction.CheckCondition
	// Flags: [Final|Native|Protected]
	void CheckCondition(); // Offset: 0x1039f5e90 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.STBuffEvent
// Size: 0x70 // Inherited bytes: 0x28
struct USTBuffEvent : UObject {
	// Fields
	char pad_0x28[0x20]; // Offset: 0x28 // Size: 0x20
	struct USTBuffNodeInstanceData* OwnerInstanceData; // Offset: 0x48 // Size: 0x08
	struct USTBuffEvent* OwnerEvent; // Offset: 0x50 // Size: 0x08
	enum class EBuffEnabledRole ExecuteRole; // Offset: 0x58 // Size: 0x01
	bool bStateEvent; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
	StrProperty StateSharedKey; // Offset: 0x60 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffEvent.TriggerEvent
	// Flags: [Native|Public]
	void TriggerEvent(); // Offset: 0x1039f6764 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent.ToString
	// Flags: [Native|Public]
	StrProperty ToString(); // Offset: 0x1039f66f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffEvent.SetTimer
	// Flags: [Final|Native|Public]
	void SetTimer(struct FName FunctionName, float InRate, bool InbLoop, float InFirstDelay); // Offset: 0x1039f65b8 // Return & Params: Num(4) Size(0x14)

	// Object Name: Function Basic.STBuffEvent.OnInitialize
	// Flags: [Native|Public]
	void OnInitialize(); // Offset: 0x1039f659c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent.OnEnd
	// Flags: [Native|Public]
	void OnEnd(); // Offset: 0x1039f6580 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent.OnDestroy
	// Flags: [Native|Public]
	void OnDestroy(); // Offset: 0x1039f6564 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent.IsRoleOK
	// Flags: [Final|Native|Public]
	bool IsRoleOK(struct UActorComponent* OwnerComponent); // Offset: 0x1039f64d8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Basic.STBuffEvent.GetRealOwnerRole
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRole(); // Offset: 0x1039f649c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffEvent.GetOwner
	// Flags: [Final|Native|Public]
	struct AActor* GetOwner(); // Offset: 0x1039f6468 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffEvent.GetCauser
	// Flags: [Final|Native|Public]
	struct AActor* GetCauser(); // Offset: 0x1039f6434 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffEvent.Copy
	// Flags: [Native|Public]
	struct USTBuffEvent* Copy(struct UObject* Outer); // Offset: 0x1039f63a0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.STBuffEvent.ClearTimer
	// Flags: [Final|Native|Public]
	void ClearTimer(struct FName FunctionName); // Offset: 0x1039f6324 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffEvent.ClearAllTimer
	// Flags: [Final|Native|Public]
	void ClearAllTimer(); // Offset: 0x1039f6310 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.STBuffEvent_Lua
// Size: 0x198 // Inherited bytes: 0x70
struct USTBuffEvent_Lua : USTBuffEvent {
	// Fields
	char pad_0x70[0xc0]; // Offset: 0x70 // Size: 0xc0
	MapProperty ActionParams; // Offset: 0x130 // Size: 0x50
	bool bEnableLuaPrivateData; // Offset: 0x180 // Size: 0x01
	char pad_0x181[0x7]; // Offset: 0x181 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0x188 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffEvent_Lua.ToString
	// Flags: [Native|Public]
	StrProperty ToString(); // Offset: 0x1039f6c80 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Basic.STBuffEvent_Multi
// Size: 0x80 // Inherited bytes: 0x70
struct USTBuffEvent_Multi : USTBuffEvent {
	// Fields
	struct TArray<struct USTBuffEvent*> Events; // Offset: 0x70 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffEvent_Multi.OnInitialize
	// Flags: [Native|Public]
	void OnInitialize(); // Offset: 0x1039f6f24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent_Multi.OnEnd
	// Flags: [Native|Public]
	void OnEnd(); // Offset: 0x1039f6f08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent_Multi.OnDestroy
	// Flags: [Native|Public]
	void OnDestroy(); // Offset: 0x1039f6eec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffEvent_Multi.Copy
	// Flags: [Native|Public]
	struct USTBuffEvent* Copy(struct UObject* Outer); // Offset: 0x1039f6e58 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class Basic.STBuffEvent_OnEnd
// Size: 0x70 // Inherited bytes: 0x70
struct USTBuffEvent_OnEnd : USTBuffEvent {
};

// Object Name: Class Basic.STBuffSharedInterface
// Size: 0x28 // Inherited bytes: 0x28
struct USTBuffSharedInterface : UInterface {
	// Functions

	// Object Name: Function Basic.STBuffSharedInterface.SetVectorShared
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetVectorShared(StrProperty SharedName, struct FVector& InValue); // Offset: 0x1039f8e14 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Basic.STBuffSharedInterface.SetUInt8Shared
	// Flags: [Native|Public|BlueprintCallable]
	void SetUInt8Shared(StrProperty SharedName, char InValue); // Offset: 0x1039f8d34 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.STBuffSharedInterface.SetTargetShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	void SetTargetShared(StrProperty SharedName, struct TArray<struct AActor*>& InActors); // Offset: 0x1039f8c30 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.STBuffSharedInterface.SetStringShared
	// Flags: [Native|Public|BlueprintCallable]
	void SetStringShared(StrProperty SharedName, StrProperty InValue); // Offset: 0x1039f8b3c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.STBuffSharedInterface.SetRotatorShared
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetRotatorShared(StrProperty SharedName, struct FRotator& InValue); // Offset: 0x1039f8a50 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function Basic.STBuffSharedInterface.SetNameShared
	// Flags: [Native|Public|BlueprintCallable]
	void SetNameShared(StrProperty SharedName, struct FName InValue); // Offset: 0x1039f8970 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBuffSharedInterface.SetInt32Shared
	// Flags: [Native|Public|BlueprintCallable]
	void SetInt32Shared(StrProperty SharedName, IntProperty InValue); // Offset: 0x1039f8890 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.STBuffSharedInterface.SetFloatShared
	// Flags: [Native|Public|BlueprintCallable]
	void SetFloatShared(StrProperty SharedName, float InValue); // Offset: 0x1039f87b0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Basic.STBuffSharedInterface.SetBooleanShared
	// Flags: [Native|Public|BlueprintCallable]
	void SetBooleanShared(StrProperty SharedName, bool InValue); // Offset: 0x1039f86c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.STBuffSharedInterface.RemoveShared
	// Flags: [Native|Public|BlueprintCallable]
	void RemoveShared(StrProperty SharedName); // Offset: 0x1039f8628 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffSharedInterface.GetVectorShared
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetVectorShared(StrProperty SharedName, struct FVector& OutValue); // Offset: 0x1039f852c // Return & Params: Num(3) Size(0x1d)

	// Object Name: Function Basic.STBuffSharedInterface.GetUInt8Shared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetUInt8Shared(StrProperty SharedName, char& OutValue); // Offset: 0x1039f842c // Return & Params: Num(3) Size(0x12)

	// Object Name: Function Basic.STBuffSharedInterface.GetTargetShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetTargetShared(StrProperty SharedName, struct TArray<struct AActor*>& OutActors); // Offset: 0x1039f8318 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Basic.STBuffSharedInterface.GetStringShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetStringShared(StrProperty SharedName, StrProperty& OutValue); // Offset: 0x1039f8204 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Basic.STBuffSharedInterface.GetRotatorShared
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetRotatorShared(StrProperty SharedName, struct FRotator& OutValue); // Offset: 0x1039f8108 // Return & Params: Num(3) Size(0x1d)

	// Object Name: Function Basic.STBuffSharedInterface.GetNameShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetNameShared(StrProperty SharedName, struct FName& OutValue); // Offset: 0x1039f8008 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Basic.STBuffSharedInterface.GetInt32Shared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetInt32Shared(StrProperty SharedName, IntProperty& OutValue); // Offset: 0x1039f7f08 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Basic.STBuffSharedInterface.GetFloatShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetFloatShared(StrProperty SharedName, float& OutValue); // Offset: 0x1039f7e08 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Basic.STBuffSharedInterface.GetBooleanShared
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool GetBooleanShared(StrProperty SharedName, bool& OutValue); // Offset: 0x1039f7d08 // Return & Params: Num(3) Size(0x12)
};

// Object Name: Class Basic.STBuffSystemComponent
// Size: 0x4a0 // Inherited bytes: 0x178
struct USTBuffSystemComponent : UActorComponent {
	// Fields
	char pad_0x178[0x8]; // Offset: 0x178 // Size: 0x08
	float RPCSyncInterval; // Offset: 0x180 // Size: 0x04
	char pad_0x184[0x4]; // Offset: 0x184 // Size: 0x04
	struct FScriptMulticastDelegate OnClientAddBuffEvent; // Offset: 0x188 // Size: 0x10
	struct FScriptMulticastDelegate OnClientRemoveBuffEvent; // Offset: 0x198 // Size: 0x10
	struct FScriptMulticastDelegate OnClientUpdateBuffEvent; // Offset: 0x1a8 // Size: 0x10
	struct FScriptMulticastDelegate OnAddBuffEvent; // Offset: 0x1b8 // Size: 0x10
	struct FScriptMulticastDelegate OnRemoveBuffEvent; // Offset: 0x1c8 // Size: 0x10
	struct FScriptMulticastDelegate OnUpdateBuffEvent; // Offset: 0x1d8 // Size: 0x10
	MapProperty BuffBlackboardMap; // Offset: 0x1e8 // Size: 0x50
	struct FBuffIncNetArray SyncBriefs; // Offset: 0x238 // Size: 0x20
	struct FBuffIncNetArray SyncRefBriefs; // Offset: 0x258 // Size: 0x20
	struct FBuffIncNetArray OwnerSyncBriefs; // Offset: 0x278 // Size: 0x20
	struct FBuffIncNetArray OwnerSyncRefBriefs; // Offset: 0x298 // Size: 0x20
	struct FBuffIncNetArray DsBuffBriefs; // Offset: 0x2b8 // Size: 0x20
	SetProperty BriefRemoveInstIds; // Offset: 0x2d8 // Size: 0x50
	MapProperty BuffReplaceData; // Offset: 0x328 // Size: 0x50
	char pad_0x378[0x128]; // Offset: 0x378 // Size: 0x128

	// Functions

	// Object Name: Function Basic.STBuffSystemComponent.UpdateClientBuff
	// Flags: [Final|Native|Protected|HasOutParms]
	void UpdateClientBuff(struct FBuffSyncBrief& Brief); // Offset: 0x1039fafcc // Return & Params: Num(1) Size(0x38)

	// Object Name: Function Basic.STBuffSystemComponent.SetEndTime
	// Flags: [Final|Native|Public]
	bool SetEndTime(IntProperty InstID, float EndTime); // Offset: 0x1039faf04 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBuffSystemComponent.SetBuffReplaceData
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetBuffReplaceData(struct FBuffReplaceData From, struct FBuffReplaceData To); // Offset: 0x1039fae38 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function Basic.STBuffSystemComponent.RemoveBuffBySkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveBuffBySkill(IntProperty SkillID, IntProperty LayerCount, struct AActor* Causer); // Offset: 0x1039fad38 // Return & Params: Num(4) Size(0x11)

	// Object Name: Function Basic.STBuffSystemComponent.RemoveBuff
	// Flags: [Final|Native|Public]
	void RemoveBuff(IntProperty BuffID, IntProperty LayerCount, struct AActor* Causer, IntProperty CauseSkillID); // Offset: 0x1039fac08 // Return & Params: Num(4) Size(0x14)

	// Object Name: Function Basic.STBuffSystemComponent.RemoveAllBuffsWithExcludeArray
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void RemoveAllBuffsWithExcludeArray(struct TArray<IntProperty>& InExcludeArry); // Offset: 0x1039fab60 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffSystemComponent.RemoveAllBuffs
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveAllBuffs(bool bClearAll); // Offset: 0x1039faadc // Return & Params: Num(1) Size(0x1)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnUpdateBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnUpdateBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, IntProperty InstID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Basic.STBuffSystemComponent.OnRep_SyncBriefs
	// Flags: [Final|Native|Public]
	void OnRep_SyncBriefs(); // Offset: 0x1039faac8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffSystemComponent.OnRep_OwnerSyncBriefs
	// Flags: [Final|Native|Public]
	void OnRep_OwnerSyncBriefs(); // Offset: 0x1039faab4 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnRemoveBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnRemoveBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, IntProperty InstID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnClientUpdateBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnClientUpdateBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, IntProperty InstID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnClientRemoveBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnClientRemoveBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, IntProperty InstID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnClientAddBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnClientAddBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, IntProperty InstID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: DelegateFunction Basic.STBuffSystemComponent.OnAddBuffEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnAddBuffEvent__DelegateSignature(IntProperty BuffID, IntProperty SkillID, bool IsExist, struct AActor* Causer); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Basic.STBuffSystemComponent.IsCDOK
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsCDOK(IntProperty InstID, IntProperty Index); // Offset: 0x1039fa9f0 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBuffSystemComponent.IsBuffInstExist
	// Flags: [Final|Native|Public]
	bool IsBuffInstExist(IntProperty InstID); // Offset: 0x1039fa964 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.STBuffSystemComponent.HasSkillID
	// Flags: [Final|Native|Public]
	bool HasSkillID(IntProperty SkillID); // Offset: 0x1039fa8d8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.STBuffSystemComponent.HasBuff
	// Flags: [Final|Native|Public]
	bool HasBuff(IntProperty BuffID); // Offset: 0x1039fa84c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Basic.STBuffSystemComponent.GetSubsystem
	// Flags: [Final|Native|Public]
	struct UBuffConfigSubsystem* GetSubsystem(); // Offset: 0x1039fa818 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.STBuffSystemComponent.GetSTBuffByBuffID
	// Flags: [Final|Native|Public]
	struct USTBuff* GetSTBuffByBuffID(IntProperty BuffID); // Offset: 0x1039fa78c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.STBuffSystemComponent.GetRealOwnerRoleSafety
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRoleSafety(); // Offset: 0x1039fa750 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffReplaceDataByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FBuffReplaceData GetBuffReplaceDataByID(IntProperty ID, bool bBuffInst); // Offset: 0x1039fa67c // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffLayerCount
	// Flags: [Final|Native|Public]
	IntProperty GetBuffLayerCount(IntProperty InstID, IntProperty CauseSkillID); // Offset: 0x1039fa5b8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffInfoBySkillID
	// Flags: [Final|Native|Public]
	struct TArray<struct FBuffSyncBrief> GetBuffInfoBySkillID(IntProperty SkillID); // Offset: 0x1039fa504 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffInfoByBuffID
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FBuffSyncBrief> GetBuffInfoByBuffID(IntProperty BuffID); // Offset: 0x1039fa450 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetBuffInfo(IntProperty InstID, struct FBuffSyncBrief& OutBuff); // Offset: 0x1039fa340 // Return & Params: Num(3) Size(0x41)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffIDsBySkillID
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<IntProperty> GetBuffIDsBySkillID(IntProperty SkillID); // Offset: 0x1039fa2ac // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffDuration
	// Flags: [Final|Native|Public]
	float GetBuffDuration(IntProperty InstID, IntProperty CauseSkillID); // Offset: 0x1039fa1e8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffDSEndTime
	// Flags: [Final|Native|Public]
	float GetBuffDSEndTime(IntProperty InstID, IntProperty CauseSkillID); // Offset: 0x1039fa124 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Basic.STBuffSystemComponent.GetBuffCDInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<float> GetBuffCDInfo(IntProperty InstID); // Offset: 0x1039fa070 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.STBuffSystemComponent.GetAllBuffInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FBuffSyncBrief> GetAllBuffInfo(); // Offset: 0x1039fa00c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.STBuffSystemComponent.DoCooldown
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DoCooldown(IntProperty InstID, IntProperty Index, bool bReset); // Offset: 0x1039f9f14 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBuffSystemComponent.ClearBuffs
	// Flags: [Final|Native|Public]
	void ClearBuffs(); // Offset: 0x1039f9f00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffSystemComponent.ChangeLevel
	// Flags: [Final|Native|Public]
	bool ChangeLevel(IntProperty InstID, IntProperty NewLevel); // Offset: 0x1039f9e3c // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBuffSystemComponent.ChangeDuration
	// Flags: [Final|Native|Public]
	bool ChangeDuration(IntProperty InstID, float Duration); // Offset: 0x1039f9d74 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Basic.STBuffSystemComponent.AddBuffBySkill
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AddBuffBySkill(IntProperty SkillID, IntProperty LayerCount, struct AActor* Causer, IntProperty Level); // Offset: 0x1039f9c38 // Return & Params: Num(5) Size(0x15)

	// Object Name: Function Basic.STBuffSystemComponent.AddBuff
	// Flags: [Final|Native|Public]
	IntProperty AddBuff(IntProperty BuffID, struct AActor* Causer, IntProperty LayerCount, IntProperty CauseSkillID, IntProperty Level); // Offset: 0x1039f9ac0 // Return & Params: Num(6) Size(0x20)
};

// Object Name: Class Basic.STBuffTriggerBase
// Size: 0x70 // Inherited bytes: 0x58
struct USTBuffTriggerBase : USTBuffNodeInstanceData {
	// Fields
	bool bTriggerOnCreate; // Offset: 0x58 // Size: 0x01
	enum class EBuffEnabledRole ExecuteRole; // Offset: 0x59 // Size: 0x01
	char pad_0x5A[0x6]; // Offset: 0x5a // Size: 0x06
	struct FTriggerConditionConfig ConditionConfig; // Offset: 0x60 // Size: 0x10

	// Functions

	// Object Name: Function Basic.STBuffTriggerBase.Tick
	// Flags: [Final|Native|Public]
	void Tick(struct UActorComponent* BuffSystemComponent, IntProperty InstID, float DeltaTime); // Offset: 0x1039fc580 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.STBuffTriggerBase.ResetExecute
	// Flags: [Final|Native|Public]
	void ResetExecute(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fc4c8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffTriggerBase.OnTriggerCreate
	// Flags: [Native|Protected]
	void OnTriggerCreate(); // Offset: 0x1039fc4ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffTriggerBase.OnTick
	// Flags: [Native|Protected]
	void OnTick(float DeltaTime); // Offset: 0x1039fc428 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.STBuffTriggerBase.OnInitialize
	// Flags: [Native|Protected]
	void OnInitialize(); // Offset: 0x1039fc40c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffTriggerBase.OnEnd
	// Flags: [Native|Protected]
	void OnEnd(); // Offset: 0x1039fc3f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffTriggerBase.OnDestroy
	// Flags: [Native|Protected]
	void OnDestroy(); // Offset: 0x1039fc3d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.STBuffTriggerBase.OnCreate
	// Flags: [Final|Native|Public]
	void OnCreate(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fc31c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffTriggerBase.IsRoleOK
	// Flags: [Final|Native|Public]
	bool IsRoleOK(struct UActorComponent* OwnerComponent); // Offset: 0x1039fc290 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Basic.STBuffTriggerBase.IsNeedTick
	// Flags: [Native|Public|Const]
	bool IsNeedTick(); // Offset: 0x1039fc254 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffTriggerBase.InitLinkActionEnableState
	// Flags: [Final|Native|Public]
	void InitLinkActionEnableState(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fc19c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffTriggerBase.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fc0e4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffTriggerBase.GetRealOwnerRole
	// Flags: [Native|Public|BlueprintCallable]
	enum class ENetRole GetRealOwnerRole(); // Offset: 0x1039fc0a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.STBuffTriggerBase.End
	// Flags: [Final|Native|Public]
	void End(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fbff0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Basic.STBuffTriggerBase.Destroy
	// Flags: [Final|Native|Public]
	void Destroy(struct UActorComponent* BuffSystemComponent, IntProperty InstID); // Offset: 0x1039fbf38 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class Basic.STBuffTrigger_Event
// Size: 0x78 // Inherited bytes: 0x70
struct USTBuffTrigger_Event : USTBuffTriggerBase {
	// Fields
	struct USTBuffEvent* Event; // Offset: 0x70 // Size: 0x08
};

// Object Name: Class Basic.STBuffTrigger_OnAdd
// Size: 0x70 // Inherited bytes: 0x70
struct USTBuffTrigger_OnAdd : USTBuffTriggerBase {
};

// Object Name: Class Basic.STBuffTrigger_Timer
// Size: 0x78 // Inherited bytes: 0x70
struct USTBuffTrigger_Timer : USTBuffTriggerBase {
	// Fields
	float TickInterval; // Offset: 0x70 // Size: 0x04
	bool bTriggerOnAdd; // Offset: 0x74 // Size: 0x01
	char pad_0x75[0x3]; // Offset: 0x75 // Size: 0x03
};

// Object Name: Class Basic.UStringMap
// Size: 0x78 // Inherited bytes: 0x28
struct UUStringMap : UObject {
	// Fields
	struct FStringMap Map; // Offset: 0x28 // Size: 0x50
};

// Object Name: Class Basic.STExtraNetPriorityConfig
// Size: 0xe8 // Inherited bytes: 0x30
struct USTExtraNetPriorityConfig : UWorldSubsystem {
	// Fields
	bool ExtraNetPriorityEnabled; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	MapProperty ExtraNetPriorityFactor; // Offset: 0x38 // Size: 0x50
	bool EnemyExtraNetPriorityEnabled; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float EnemyExtraNetPriorityFactor; // Offset: 0x8c // Size: 0x04
	MapProperty NetPriorityIssue; // Offset: 0x90 // Size: 0x50
	float MoveExtraNetPriorityVelocitySquared; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
};

// Object Name: Class Basic.STExtraNetPriorityInterface
// Size: 0x28 // Inherited bytes: 0x28
struct USTExtraNetPriorityInterface : UInterface {
};

// Object Name: Class Basic.DataTableRowDesc
// Size: 0x98 // Inherited bytes: 0x28
struct UDataTableRowDesc : UObject {
	// Fields
	char pad_0x28[0x70]; // Offset: 0x28 // Size: 0x70
};

// Object Name: Class Basic.DataTableProxy
// Size: 0x190 // Inherited bytes: 0x28
struct UDataTableProxy : UObject {
	// Fields
	struct TArray<struct UDataTable*> ModDataTables; // Offset: 0x28 // Size: 0x10
	struct UDataTable* DataTable; // Offset: 0x38 // Size: 0x08
	struct UBCDataTable* BlockTable; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0x140]; // Offset: 0x48 // Size: 0x140
	struct UDataTableRowDesc* Desc; // Offset: 0x188 // Size: 0x08
};

// Object Name: Class Basic.TableManagerSubsystem
// Size: 0x80 // Inherited bytes: 0x30
struct UTableManagerSubsystem : UGameInstanceSubsystem {
	// Fields
	StrProperty BaseTableRelativeDir; // Offset: 0x30 // Size: 0x10
	StrProperty ModTableRelativeDir; // Offset: 0x40 // Size: 0x10
	StrProperty TableRelativeDir; // Offset: 0x50 // Size: 0x10
	StrProperty ManualTableDirectory; // Offset: 0x60 // Size: 0x10
	StrProperty CurrentModName; // Offset: 0x70 // Size: 0x10

	// Functions

	// Object Name: Function Basic.TableManagerSubsystem.SetTableStringDataField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool SetTableStringDataField(struct FName& tableName, StrProperty Key, StrProperty Field, StrProperty NewValue); // Offset: 0x103a02104 // Return & Params: Num(5) Size(0x39)

	// Object Name: Function Basic.TableManagerSubsystem.SetModName
	// Flags: [Final|Native|Public]
	void SetModName(StrProperty ModName); // Offset: 0x103a0206c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TableManagerSubsystem.GetTableProxy
	// Flags: [Final|Native|Public]
	struct UDataTableProxy* GetTableProxy(struct FName tableName, bool bTempory, struct FName SystemName, struct FName SubModName, bool bPreLoadPathCompression); // Offset: 0x103a01ee4 // Return & Params: Num(6) Size(0x30)

	// Object Name: Function Basic.TableManagerSubsystem.GetTableDataField
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetTableDataField(StrProperty tableName, struct FTableRowBase& Key, StrProperty Field, struct FTableRowBase& Out); // Offset: 0x10399e9e4 // Return & Params: Num(5) Size(0x31)

	// Object Name: Function Basic.TableManagerSubsystem.GetTableData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool GetTableData(StrProperty tableName, StrProperty Key, struct FTableRowBase& OutRow); // Offset: 0x10399e840 // Return & Params: Num(4) Size(0x29)
};

// Object Name: Class Basic.TickOptimizationAnimComponent
// Size: 0x1b0 // Inherited bytes: 0x178
struct UTickOptimizationAnimComponent : UActorComponent {
	// Fields
	bool EnableTickOptimization; // Offset: 0x178 // Size: 0x01
	enum class ETickOptimizationAnimUROMode AnimUpdateRateOptimizationsMode; // Offset: 0x179 // Size: 0x01
	char pad_0x17A[0x6]; // Offset: 0x17a // Size: 0x06
	struct TArray<float> FramesSkippedScreenSizeThresholds; // Offset: 0x180 // Size: 0x10
	struct TArray<IntProperty> LODToFramesSkipped; // Offset: 0x190 // Size: 0x10
	IntProperty NonRenderedFramesSkipped; // Offset: 0x1a0 // Size: 0x04
	IntProperty MaxFramesSkippedForInterpolation; // Offset: 0x1a4 // Size: 0x04
	bool bForceEnableAnimUpdateRateOptimizations; // Offset: 0x1a8 // Size: 0x01
	char pad_0x1A9[0x7]; // Offset: 0x1a9 // Size: 0x07

	// Functions

	// Object Name: Function Basic.TickOptimizationAnimComponent.ShouldForceEnableAnimUpdateRateOptimizations
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ShouldForceEnableAnimUpdateRateOptimizations(); // Offset: 0x103a02a24 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetNonRenderedFramesSkipped
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetNonRenderedFramesSkipped(IntProperty InNonRenderedFramesSkipped); // Offset: 0x103a029a8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetMaxFramesSkippedForInterpolation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxFramesSkippedForInterpolation(IntProperty InMaxFramesSkippedForInterpolation); // Offset: 0x103a0292c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetLODToFramesSkipped
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetLODToFramesSkipped(struct TArray<IntProperty>& InLODToFramesSkipped); // Offset: 0x103a02884 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetFramesSkippedScreenSizeThresholds
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetFramesSkippedScreenSizeThresholds(struct TArray<float>& InFramesSkippedScreenSizeThresholds); // Offset: 0x103a027dc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetForceEnableAnimUpdateRateOptimizations
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetForceEnableAnimUpdateRateOptimizations(bool bInForceEnableAnimUpdateRateOptimizations); // Offset: 0x103a02758 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationAnimComponent.SetAnimUpdateRateOptimizationsMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAnimUpdateRateOptimizationsMode(enum class ETickOptimizationAnimUROMode InAnimUpdateRateOptimizationsMode); // Offset: 0x103a026dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationAnimComponent.RegisterDynamicSkinnedMeshComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterDynamicSkinnedMeshComponent(struct USkinnedMeshComponent* SkinnedMeshComponent); // Offset: 0x103a02660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.TickOptimizationAnimComponent.GetNonRenderedFramesSkipped
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNonRenderedFramesSkipped(); // Offset: 0x103a02644 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationAnimComponent.GetMaxFramesSkippedForInterpolation
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetMaxFramesSkippedForInterpolation(); // Offset: 0x103a02628 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationAnimComponent.GetLODToFramesSkipped
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetLODToFramesSkipped(); // Offset: 0x103a0260c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationAnimComponent.GetFramesSkippedScreenSizeThresholds
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<float> GetFramesSkippedScreenSizeThresholds(); // Offset: 0x103a025f0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationAnimComponent.GetAnimUpdateRateOptimizationsMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ETickOptimizationAnimUROMode GetAnimUpdateRateOptimizationsMode(); // Offset: 0x103a025d4 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.TickOptimizationFocusComponent
// Size: 0x3b0 // Inherited bytes: 0x3a0
struct UTickOptimizationFocusComponent : USceneComponent {
	// Fields
	struct UTickOptimizationSubsystem* Subsystem; // Offset: 0x3a0 // Size: 0x08
	char pad_0x3A8[0x8]; // Offset: 0x3a8 // Size: 0x08

	// Functions

	// Object Name: Function Basic.TickOptimizationFocusComponent.ShouldTrack
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool ShouldTrack(); // Offset: 0x103a02f50 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.TickOptimizationSubsystem
// Size: 0xa8 // Inherited bytes: 0x30
struct UTickOptimizationSubsystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
	struct TArray<struct UTickOptimizationFocusComponent*> Focuses; // Offset: 0x38 // Size: 0x10
	struct TArray<struct UTickOptimizationTargetComponent*> SphereRangeTargets; // Offset: 0x48 // Size: 0x10
	char pad_0x58[0x20]; // Offset: 0x58 // Size: 0x20
	struct TArray<struct UTickOptimizationTargetComponent*> SphereZoneTargets; // Offset: 0x78 // Size: 0x10
	char pad_0x88[0x10]; // Offset: 0x88 // Size: 0x10
	struct TArray<struct UTickOptimizationTargetComponent*> UpdatedTargets; // Offset: 0x98 // Size: 0x10
};

// Object Name: Class Basic.TickOptimizationTargetComponent
// Size: 0x430 // Inherited bytes: 0x3a0
struct UTickOptimizationTargetComponent : USceneComponent {
	// Fields
	struct UTickOptimizationSubsystem* Subsystem; // Offset: 0x3a0 // Size: 0x08
	char pad_0x3A8[0x8]; // Offset: 0x3a8 // Size: 0x08
	struct TArray<struct UActorComponent*> TickControlledComponents; // Offset: 0x3b0 // Size: 0x10
	bool EnableTickOptimization; // Offset: 0x3c0 // Size: 0x01
	enum class ETickOptimizationDistanceMode DistanceMode; // Offset: 0x3c1 // Size: 0x01
	char pad_0x3C2[0x2]; // Offset: 0x3c2 // Size: 0x02
	float SphereRadius; // Offset: 0x3c4 // Size: 0x04
	float BufferSize; // Offset: 0x3c8 // Size: 0x04
	char pad_0x3CC[0x4]; // Offset: 0x3cc // Size: 0x04
	struct TArray<float> MidZoneSizes; // Offset: 0x3d0 // Size: 0x10
	bool bActorTickControl; // Offset: 0x3e0 // Size: 0x01
	bool bActorTickChange; // Offset: 0x3e1 // Size: 0x01
	bool bComponentsTickControl; // Offset: 0x3e2 // Size: 0x01
	bool bComponentsTickChange; // Offset: 0x3e3 // Size: 0x01
	bool bForceExecuteFirstTick; // Offset: 0x3e4 // Size: 0x01
	char pad_0x3E5[0x3]; // Offset: 0x3e5 // Size: 0x03
	struct TArray<struct FTickOptimizationTickSettings> TickSettings; // Offset: 0x3e8 // Size: 0x10
	bool bForced; // Offset: 0x3f8 // Size: 0x01
	char pad_0x3F9[0x3]; // Offset: 0x3f9 // Size: 0x03
	IntProperty TickZone; // Offset: 0x3fc // Size: 0x04
	struct FScriptMulticastDelegate OnTickChanged; // Offset: 0x400 // Size: 0x10
	struct FScriptMulticastDelegate OnTickZoneChanged; // Offset: 0x410 // Size: 0x10
	struct FScriptMulticastDelegate OnTickEnabledChanged; // Offset: 0x420 // Size: 0x10

	// Functions

	// Object Name: Function Basic.TickOptimizationTargetComponent.ShouldForceExecuteFirstTick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool ShouldForceExecuteFirstTick(); // Offset: 0x103a03b64 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetTickSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetTickSettings(struct TArray<struct FTickOptimizationTickSettings>& InTickSettings); // Offset: 0x103a03abc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetSphereRadius
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSphereRadius(float InRadius); // Offset: 0x103a03a40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetMidZoneSizes
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetMidZoneSizes(struct TArray<float>& InMidZoneSizes); // Offset: 0x103a03998 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetForceExecuteFirstTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetForceExecuteFirstTick(bool bInForceExecuteFirstTick); // Offset: 0x103a03914 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetDistanceMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDistanceMode(enum class ETickOptimizationDistanceMode InDistanceMode); // Offset: 0x103a03898 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetComponentsTickControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetComponentsTickControl(bool bInComponentsTickControl); // Offset: 0x103a03814 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetBufferSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBufferSize(float InBufferSize); // Offset: 0x103a03798 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.SetActorTickControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetActorTickControl(bool bInActorTickControl); // Offset: 0x103a03714 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.RemoveComponentTickControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveComponentTickControl(struct UActorComponent* Component); // Offset: 0x103a03698 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.TickOptimizationTargetComponent.Release
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Release(); // Offset: 0x103a03684 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.TickOptimizationTargetComponent.IsForced
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsForced(); // Offset: 0x103a03668 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.IsComponentsTickControl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsComponentsTickControl(); // Offset: 0x103a0364c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.IsActorTickControl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsActorTickControl(); // Offset: 0x103a03630 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetTickZone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTickZone(); // Offset: 0x103a03614 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetTickSettings
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FTickOptimizationTickSettings> GetTickSettings(); // Offset: 0x103a035f8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetSphereRadius
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSphereRadius(); // Offset: 0x103a035dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetMidZoneSizes
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<float> GetMidZoneSizes(); // Offset: 0x103a035c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetDistanceMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class ETickOptimizationDistanceMode GetDistanceMode(); // Offset: 0x103a035a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.TickOptimizationTargetComponent.GetBufferSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetBufferSize(); // Offset: 0x103a03588 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.Force
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Force(IntProperty InZone); // Offset: 0x103a0350c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.TickOptimizationTargetComponent.AddComponentTickControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddComponentTickControl(struct UActorComponent* Component); // Offset: 0x103a03490 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Basic.UAEBuffPoolSubsystem
// Size: 0x80 // Inherited bytes: 0x30
struct UUAEBuffPoolSubsystem : UWorldSubsystem {
	// Fields
	MapProperty BuffInstancedTemplateMap; // Offset: 0x30 // Size: 0x50
};

// Object Name: Class Basic.UAEGameEngine
// Size: 0xec0 // Inherited bytes: 0xe70
struct UUAEGameEngine : UGameEngine {
	// Fields
	char pad_0xE70[0x10]; // Offset: 0xe70 // Size: 0x10
	struct UBackendHUD* AssociatedBackendHUD; // Offset: 0xe80 // Size: 0x08
	char pad_0xE88[0xc]; // Offset: 0xe88 // Size: 0x0c
	bool bEnableAutoStat; // Offset: 0xe94 // Size: 0x01
	bool bEnableAutoTickDeltaThreshold; // Offset: 0xe95 // Size: 0x01
	char pad_0xE96[0x2]; // Offset: 0xe96 // Size: 0x02
	float AutoTickDeltaThresholdFactor; // Offset: 0xe98 // Size: 0x04
	float StatCollection_AvgTickDeltaThreshold; // Offset: 0xe9c // Size: 0x04
	float AutoStat_AvgTickDeltaThreshold; // Offset: 0xea0 // Size: 0x04
	float AutoStat_StartTime; // Offset: 0xea4 // Size: 0x04
	char pad_0xEA8[0x4]; // Offset: 0xea8 // Size: 0x04
	float AutoStat_Duration_Engine; // Offset: 0xeac // Size: 0x04
	float AutoStat_Duration_PhysX; // Offset: 0xeb0 // Size: 0x04
	char pad_0xEB4[0xc]; // Offset: 0xeb4 // Size: 0x0c
};

// Object Name: Class Basic.BPTable
// Size: 0xd8 // Inherited bytes: 0x28
struct UBPTable : UObject {
	// Fields
	StrProperty BPTableName; // Offset: 0x28 // Size: 0x10
	MapProperty BPTableItemMap; // Offset: 0x38 // Size: 0x50
	MapProperty BPTableItemMap_Mod; // Offset: 0x88 // Size: 0x50

	// Functions

	// Object Name: Function Basic.BPTable.GetWrapperPath
	// Flags: [Final|Native|Public]
	StrProperty GetWrapperPath(IntProperty ID); // Offset: 0x103a06954 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.BPTable.GetWrapperClass
	// Flags: [Final|Native|Public]
	struct UObject* GetWrapperClass(IntProperty ID); // Offset: 0x103a068c8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.BPTable.GetPath
	// Flags: [Final|Native|Public]
	StrProperty GetPath(IntProperty ID, bool IsLobby, bool bForceLobby); // Offset: 0x103a0678c // Return & Params: Num(4) Size(0x18)

	// Object Name: Function Basic.BPTable.GetObject
	// Flags: [Final|Native|Public]
	struct UObject* GetObject(IntProperty ID, struct UObject* Outer, bool IsLobby, bool IsLowDevice); // Offset: 0x103a0663c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Basic.BPTable.GetModObject
	// Flags: [Final|Native|Public]
	struct UObject* GetModObject(IntProperty ID, struct UObject* Outer, bool IsLobby); // Offset: 0x103a06530 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Basic.BPTable.GetModClass
	// Flags: [Final|Native|Public]
	struct UObject* GetModClass(IntProperty ID, bool IsLobby); // Offset: 0x103a06464 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function Basic.BPTable.GetCustom1Class
	// Flags: [Final|Native|Public]
	struct UObject* GetCustom1Class(IntProperty ID); // Offset: 0x103a063d8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.BPTable.GetClass
	// Flags: [Final|Native|Public]
	struct UObject* GetClass(IntProperty ID, bool IsLobby, bool IsLowDevice); // Offset: 0x103a062c4 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Basic.BPTable.ConvertPath
	// Flags: [Final|Native|Public]
	void ConvertPath(IntProperty ID); // Offset: 0x103a06248 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Basic.UAELoadedClassManager
// Size: 0x3a8 // Inherited bytes: 0x28
struct UUAELoadedClassManager : UObject {
	// Fields
	MapProperty BPTableMap; // Offset: 0x28 // Size: 0x50
	MapProperty BPTableMap_Mod; // Offset: 0x78 // Size: 0x50
	MapProperty BPTableNameMap; // Offset: 0xc8 // Size: 0x50
	MapProperty BPTableNameToNameMap; // Offset: 0x118 // Size: 0x50
	StrProperty LoadedClassManagerClassName; // Offset: 0x168 // Size: 0x10
	char pad_0x178[0x1c8]; // Offset: 0x178 // Size: 0x1c8
	MapProperty AsyncLoadClassDict; // Offset: 0x340 // Size: 0x50
	char pad_0x390[0x18]; // Offset: 0x390 // Size: 0x18

	// Functions

	// Object Name: Function Basic.UAELoadedClassManager.InitTableData
	// Flags: [Native|Event|Public|BlueprintEvent]
	void InitTableData(); // Offset: 0x103a07e8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.InitialModTableItemMap
	// Flags: [Native|Event|Public|BlueprintEvent]
	void InitialModTableItemMap(); // Offset: 0x103a07e70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.InitBPTableMap_Mod
	// Flags: [Event|Public|BlueprintEvent]
	void InitBPTableMap_Mod(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.InitBPTableMap
	// Flags: [Event|Public|BlueprintEvent]
	void InitBPTableMap(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.HandleTableModNameChanged
	// Flags: [Final|Native|Public]
	void HandleTableModNameChanged(StrProperty InModName); // Offset: 0x103a07dd8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAELoadedClassManager.GetWrapperPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetWrapperPath(StrProperty BPTableName, IntProperty ID); // Offset: 0x103a07cc8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.UAELoadedClassManager.GetWrapperClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* GetWrapperClass(StrProperty BPTableName, IntProperty ID); // Offset: 0x103a07be0 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.UAELoadedClassManager.GetPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetPath(StrProperty BPTableName, IntProperty ID, bool IsLobby, bool bForceLobby); // Offset: 0x103a07a40 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function Basic.UAELoadedClassManager.GetObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* GetObject(StrProperty BPTableName, IntProperty ID, struct UObject* Outer, bool IsLobby, bool IsLowDevice); // Offset: 0x103a07888 // Return & Params: Num(6) Size(0x30)

	// Object Name: Function Basic.UAELoadedClassManager.GetExactDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetExactDeviceLevel(); // Offset: 0x103a07854 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAELoadedClassManager.GetDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetDeviceLevel(); // Offset: 0x103a07820 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAELoadedClassManager.GetCustom1Class
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* GetCustom1Class(StrProperty BPTableName, IntProperty ID); // Offset: 0x103a07738 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Basic.UAELoadedClassManager.GetClassLoadingPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetClassLoadingPath(StrProperty BPTableName, IntProperty ID, bool IsLobby); // Offset: 0x103a075e4 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function Basic.UAELoadedClassManager.GetClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UObject* GetClass(StrProperty BPTableName, IntProperty ID, bool IsLobby, bool IsLowDevice); // Offset: 0x103a0746c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Basic.UAELoadedClassManager.GetBPTableName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetBPTableName(IntProperty Type); // Offset: 0x103a073b8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAELoadedClassManager.GetAssetByAssetReferenceAsync
	// Flags: [Final|Native|Public|HasDefaults]
	void GetAssetByAssetReferenceAsync(struct FSoftObjectPath AssetReference, DelegateProperty AssetLoadSuccessDelegate); // Offset: 0x103a07298 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function Basic.UAELoadedClassManager.GetAssetAsyncWithStringForManage
	// Flags: [Final|Native|Public|HasDefaults]
	void GetAssetAsyncWithStringForManage(struct FSoftObjectPath AssetReference, StrProperty InputString, DelegateProperty AssetLoadSuccessDelegate); // Offset: 0x103a070dc // Return & Params: Num(3) Size(0x38)

	// Object Name: Function Basic.UAELoadedClassManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAELoadedClassManager* Get(); // Offset: 0x103a070a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAELoadedClassManager.CreateAndAddBPTable_Mod
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct UBPTable* CreateAndAddBPTable_Mod(StrProperty BPTableName); // Offset: 0x103a07000 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAELoadedClassManager.CreateAndAddBPTable
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct UBPTable* CreateAndAddBPTable(StrProperty BPTableName); // Offset: 0x103a06f58 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAELoadedClassManager.ClearModTableItemMap
	// Flags: [Native|Event|Public|BlueprintEvent]
	void ClearModTableItemMap(); // Offset: 0x103a06f3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.ClearBPTable_Mod
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearBPTable_Mod(); // Offset: 0x103a06f28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.ClearBPTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearBPTable(); // Offset: 0x103a06f14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.ClearAssetByAssetReferenceAsync
	// Flags: [Final|Native|Public]
	void ClearAssetByAssetReferenceAsync(DelegateProperty AssetLoadSuccessDelegate); // Offset: 0x103a06e84 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAELoadedClassManager.ClearAllHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllHandle(); // Offset: 0x103a06e70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAELoadedClassManager.ClearAllData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllData(); // Offset: 0x103a06e5c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Basic.UAEMeshComponent
// Size: 0x13a0 // Inherited bytes: 0x1350
struct UUAEMeshComponent : USkeletalMeshComponent {
	// Fields
	bool bUseBoneRetargetLODFeature; // Offset: 0x1344 // Size: 0x01
	bool bVisibleWithLOD; // Offset: 0x1349 // Size: 0x01
	char pad_0x1352[0x4e]; // Offset: 0x1352 // Size: 0x4e

	// Functions

	// Object Name: Function Basic.UAEMeshComponent.TriggerCacheMaterialParameterNameIndices
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TriggerCacheMaterialParameterNameIndices(); // Offset: 0x103a0c5e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UAEMeshComponent.RemoveDisableClothRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveDisableClothRequest(StrProperty InSource); // Offset: 0x103a0c548 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEMeshComponent.GetPredictedLODLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetPredictedLODLevel(); // Offset: 0x103a0c50c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Basic.UAEMeshComponent.GetAnimUpdateParamsInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAnimUpdateParamsInfo(); // Offset: 0x103a0c4a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UAEMeshComponent.AddDisableClothRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddDisableClothRequest(StrProperty InSource); // Offset: 0x103a0c410 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Basic.UAENetConnection
// Size: 0x35a68 // Inherited bytes: 0x35708
struct UUAENetConnection : UIpConnection {
	// Fields
	char pad_0x35708[0xf4]; // Offset: 0x35708 // Size: 0xf4
	IntProperty InitialHandshakeTimeoutNumThreshold; // Offset: 0x357fc // Size: 0x04
	char pad_0x35800[0x4]; // Offset: 0x35800 // Size: 0x04
	IntProperty ActorChannelProcessBunchErrorNumThreshold_Server_Global; // Offset: 0x35804 // Size: 0x04
	IntProperty ActorChannelProcessBunchErrorNumThreshold_Client_Global; // Offset: 0x35808 // Size: 0x04
	IntProperty ActorChannelProcessBunchErrorNumThreshold_Client_PerActor; // Offset: 0x3580c // Size: 0x04
	char pad_0x35810[0x50]; // Offset: 0x35810 // Size: 0x50
	bool bEnableHTTPDNS; // Offset: 0x35860 // Size: 0x01
	char pad_0x35861[0x7]; // Offset: 0x35861 // Size: 0x07
	StrProperty HTTPDNSServerAddr; // Offset: 0x35868 // Size: 0x10
	float HTTPDNSResponseTimeout; // Offset: 0x35878 // Size: 0x04
	char pad_0x3587C[0xc]; // Offset: 0x3587c // Size: 0x0c
	float CheckLevelInitializedTime; // Offset: 0x35888 // Size: 0x04
	float CheckLevelActorsOvertime; // Offset: 0x3588c // Size: 0x04
	float TempCheckLevelInitializedTime; // Offset: 0x35890 // Size: 0x04
	char pad_0x35894[0x4]; // Offset: 0x35894 // Size: 0x04
	MapProperty UnLevelInitActors; // Offset: 0x35898 // Size: 0x50
	struct UNetRelevancyGroup* RelevancyGroup; // Offset: 0x358e8 // Size: 0x08
	char pad_0x358F0[0x100]; // Offset: 0x358f0 // Size: 0x100
	struct TArray<struct FPendingRegionNetworkObject> PendingRegionNetworkObjects; // Offset: 0x359f0 // Size: 0x10
	float MinRegionActorTickDelta; // Offset: 0x35a00 // Size: 0x04
	float MaxRegionActorTickDelta; // Offset: 0x35a04 // Size: 0x04
	char pad_0x35A08[0xc]; // Offset: 0x35a08 // Size: 0x0c
	bool EnableWeakNetUpdate; // Offset: 0x35a14 // Size: 0x01
	char pad_0x35A15[0x3]; // Offset: 0x35a15 // Size: 0x03
	float MinWeakNetUpdateDelay; // Offset: 0x35a18 // Size: 0x04
	float MaxWeakNetUpdateDelay; // Offset: 0x35a1c // Size: 0x04
	float SquareSegmentSize; // Offset: 0x35a20 // Size: 0x04
	float MaxSegmentDistance; // Offset: 0x35a24 // Size: 0x04
	IntProperty MaxObjectNumInSegments; // Offset: 0x35a28 // Size: 0x04
	char pad_0x35A2C[0x15]; // Offset: 0x35a2c // Size: 0x15
	bool bRecreateSocketOnLost; // Offset: 0x35a41 // Size: 0x01
	char pad_0x35A42[0x12]; // Offset: 0x35a42 // Size: 0x12
	float UpdateClientPingTimeThreshold; // Offset: 0x35a54 // Size: 0x04
	char pad_0x35A58[0x10]; // Offset: 0x35a58 // Size: 0x10

	// Functions

	// Object Name: Function Basic.UAENetConnection.IsClosed
	// Flags: [Final|Native|Public|Const]
	bool IsClosed(); // Offset: 0x103a0d008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.UAENetConnection.HasSameRegion
	// Flags: [Final|Native|Public|HasDefaults]
	bool HasSameRegion(struct FVector OldLoc, struct FVector NewLoc); // Offset: 0x103a0cf40 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Basic.UAENetConnection.ForceRefreshRegionWeakNetUpdateObjects
	// Flags: [Final|Native|Public]
	void ForceRefreshRegionWeakNetUpdateObjects(float WeakNetConsiderFrequency); // Offset: 0x103a0cec4 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Basic.UAENetDriver
// Size: 0xb68 // Inherited bytes: 0xa00
struct UUAENetDriver : UIpNetDriver {
	// Fields
	float NetCullChangeTime; // Offset: 0xa00 // Size: 0x04
	bool bEnableCollectNetStats; // Offset: 0xa04 // Size: 0x01
	bool bEnableResetNetStats; // Offset: 0xa05 // Size: 0x01
	char pad_0xA06[0x2]; // Offset: 0xa06 // Size: 0x02
	struct TArray<struct FRPCShareSerializationFunctionPresetConfig> RPCShareSerializationFunctionPresetConfigs; // Offset: 0xa08 // Size: 0x10
	char pad_0xA18[0x150]; // Offset: 0xa18 // Size: 0x150
};

// Object Name: Class Basic.UAETableManager
// Size: 0x748 // Inherited bytes: 0x28
struct UUAETableManager : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	StrProperty TableRelativeDir; // Offset: 0x30 // Size: 0x10
	struct TArray<struct FName> TablesNeedReleasedInBattle; // Offset: 0x40 // Size: 0x10
	StrProperty ManualTableDirectory; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x160]; // Offset: 0x60 // Size: 0x160
	struct TArray<struct UUAEDataTable*> TableObjList; // Offset: 0x1c0 // Size: 0x10
	struct UWorld* CurWorld; // Offset: 0x1d0 // Size: 0x08
	MapProperty TableObjMap; // Offset: 0x1d8 // Size: 0x50
	MapProperty TableObjMap_Mod; // Offset: 0x228 // Size: 0x50
	struct FScriptMulticastDelegate OnTableCreateInFighting; // Offset: 0x278 // Size: 0x10
	char pad_0x288[0x168]; // Offset: 0x288 // Size: 0x168
	StrProperty PathCompressionConfigsPath; // Offset: 0x3f0 // Size: 0x10
	bool bIsPathCompression; // Offset: 0x400 // Size: 0x01
	bool bIsPathCompressionCache; // Offset: 0x401 // Size: 0x01
	char pad_0x402[0x2]; // Offset: 0x402 // Size: 0x02
	IntProperty PathCompressionCacheMaxSize; // Offset: 0x404 // Size: 0x04
	bool bTranslationFallBackUnloadDuplicate; // Offset: 0x408 // Size: 0x01
	bool bShrinkTranslationMap; // Offset: 0x409 // Size: 0x01
	bool bSpeedUpLoadLocalizationText; // Offset: 0x40a // Size: 0x01
	bool bAsyncLoadLocalizationTable; // Offset: 0x40b // Size: 0x01
	bool bLoadPathCompressionCfgWhenReadTable; // Offset: 0x40c // Size: 0x01
	bool bGenerateTrieTreeFromDict; // Offset: 0x40d // Size: 0x01
	char pad_0x40E[0x2]; // Offset: 0x40e // Size: 0x02
	struct TArray<StrProperty> TableToPreLoadPathCompression; // Offset: 0x410 // Size: 0x10
	char pad_0x420[0x8]; // Offset: 0x420 // Size: 0x08
	StrProperty BaseTableRelativeDir; // Offset: 0x428 // Size: 0x10
	StrProperty ModTableRelativeDir; // Offset: 0x438 // Size: 0x10
	StrProperty SplitModTableRelativeDir; // Offset: 0x448 // Size: 0x10
	struct TArray<StrProperty> BaseModTableConfig; // Offset: 0x458 // Size: 0x10
	struct TArray<struct FName> LobbyTableToLoadInMainCity; // Offset: 0x468 // Size: 0x10
	struct TArray<StrProperty> ModListToLoadTranslation; // Offset: 0x478 // Size: 0x10
	MapProperty ModTableMap; // Offset: 0x488 // Size: 0x50
	MapProperty ModTableObjMap; // Offset: 0x4d8 // Size: 0x50
	struct TArray<struct UUAEDataTable*> InGameTableObjList; // Offset: 0x528 // Size: 0x10
	MapProperty CheckNeedModMap; // Offset: 0x538 // Size: 0x50
	StrProperty CurrentModName; // Offset: 0x588 // Size: 0x10
	StrProperty EmptyModName; // Offset: 0x598 // Size: 0x10
	MapProperty LoadedTableMap; // Offset: 0x5a8 // Size: 0x50
	MapProperty CheckMapTable; // Offset: 0x5f8 // Size: 0x50
	char pad_0x648[0x100]; // Offset: 0x648 // Size: 0x100

	// Functions

	// Object Name: Function Basic.UAETableManager.ReleaseTable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReleaseTable(struct FName TableFName); // Offset: 0x103a0e094 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAETableManager.GetTablePtr_Mod
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEDataTable* GetTablePtr_Mod(struct FName tableName); // Offset: 0x103a0e008 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Basic.UAETableManager.GetTablePtr
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEDataTable* GetTablePtr(struct FName tableName, bool bCheckModTable); // Offset: 0x103a0df38 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.UAETableManager.GetTableMap
	// Flags: [Final|Native|Public]
	struct UBaseTableResMap* GetTableMap(StrProperty tableName); // Offset: 0x103a0de90 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAETableManager.GetTableData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool GetTableData(StrProperty tableName, StrProperty Key, struct FTableRowBase& OutRow); // Offset: 0x103a0da84 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Basic.UAETableManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAETableManager* GetInstance(); // Offset: 0x103a0da50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Basic.UAETableManager.GetDomainByID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDomainByID(IntProperty ID); // Offset: 0x103a0d9ac // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAETableManager.GetDataTableStatic_Mod
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAEDataTable* GetDataTableStatic_Mod(StrProperty tableName); // Offset: 0x103a0d914 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAETableManager.GetDataTableStatic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UUAEDataTable* GetDataTableStatic(StrProperty tableName); // Offset: 0x103a0d87c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UAETableManager.GetDataTableProxy
	// Flags: [Final|Native|Public]
	struct UDataTableProxy* GetDataTableProxy(struct FName tableName, bool bTempory, struct FName SystemName, struct FName SubModName); // Offset: 0x103a0d738 // Return & Params: Num(5) Size(0x28)
};

// Object Name: Class Basic.UELanguageUtilityMethods
// Size: 0x28 // Inherited bytes: 0x28
struct UUELanguageUtilityMethods : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.UELanguageUtilityMethods.SetDownLoadLanguageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetDownLoadLanguageName(StrProperty Language); // Offset: 0x103a0e8bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UELanguageUtilityMethods.IsJaguar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsJaguar(); // Offset: 0x103a0e888 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Basic.UELanguageUtilityMethods.GetPublishRegion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetPublishRegion(); // Offset: 0x103a0e824 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UELanguageUtilityMethods.GetDownLoadLanguageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDownLoadLanguageName(); // Offset: 0x103a0e7c0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UELanguageUtilityMethods.GetCurrentLanguageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetCurrentLanguageName(); // Offset: 0x103a0e75c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UELanguageUtilityMethods.ConvertLanguageName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty ConvertLanguageName(StrProperty prelanguage); // Offset: 0x103a0e69c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.UELanguageUtilityMethods.CheckLocalizationExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CheckLocalizationExist(); // Offset: 0x103a0e668 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Basic.UEMathUtilityMethods
// Size: 0x28 // Inherited bytes: 0x28
struct UUEMathUtilityMethods : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.UEMathUtilityMethods.VectorNormalizeMultiple
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void VectorNormalizeMultiple(struct FVector& Out, struct FVector& v1, float Multiple); // Offset: 0x103a0f484 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Basic.UEMathUtilityMethods.VectorMultiple
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void VectorMultiple(struct FVector& Out, struct FVector& v1, float Multiple); // Offset: 0x103a0f378 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function Basic.UEMathUtilityMethods.VectorMinus
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void VectorMinus(struct FVector& Out, struct FVector& v1, struct FVector& v2); // Offset: 0x103a0f260 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Basic.UEMathUtilityMethods.VectorAdditive
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void VectorAdditive(struct FVector& Out, struct FVector& v1, struct FVector& v2); // Offset: 0x103a0f148 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Basic.UEMathUtilityMethods.FilterOKForCurrentMode
	// Flags: [Final|Native|Static|Public]
	bool FilterOKForCurrentMode(char ModeType, IntProperty ModeOpenFlag, StrProperty ModeTypes); // Offset: 0x103a0efdc // Return & Params: Num(4) Size(0x19)

	// Object Name: Function Basic.UEMathUtilityMethods.Conv_VectorToRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void Conv_VectorToRotator(struct FRotator& Out, struct FVector& Vec); // Offset: 0x103a0ef14 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UEMathUtilityMethods.CalculateAngleToTargetAngle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float CalculateAngleToTargetAngle(float StartAngle, float targetAngle, float StepAngle, enum class EAngleRotationDirectionType Dir); // Offset: 0x103a0ede8 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Basic.UEMathUtilityMethods.BKDRHash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty BKDRHash(StrProperty StrToHash, IntProperty Mod); // Offset: 0x103a0ed10 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Basic.UEMathUtilityMethods.AngleDis
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float AngleDis(float angleA, float angleB); // Offset: 0x103a0ec5c // Return & Params: Num(3) Size(0xc)
};

// Object Name: Class Basic.UEPathUtilityMethods
// Size: 0x28 // Inherited bytes: 0x28
struct UUEPathUtilityMethods : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Basic.UEPathUtilityMethods.IsPathExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsPathExist(StrProperty HandlePath); // Offset: 0x103a100c8 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.UEPathUtilityMethods.IsAvatarResPathExistRetODPakName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsAvatarResPathExistRetODPakName(StrProperty HandlePath, StrProperty& OutODPakName); // Offset: 0x103a0ffcc // Return & Params: Num(3) Size(0x21)

	// Object Name: Function Basic.UEPathUtilityMethods.IsAvatarResPathExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsAvatarResPathExist(StrProperty HandlePath); // Offset: 0x103a0ff34 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourcePaths
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<StrProperty> GetPassiveDownloadResourcePaths(); // Offset: 0x103a0fed0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UEPathUtilityMethods.GetPassiveDownloadResourceIDList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct TArray<IntProperty> GetPassiveDownloadResourceIDList(); // Offset: 0x103a0fe6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Basic.UEPathUtilityMethods.GetODPakFileName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetODPakFileName(StrProperty InODPakPath); // Offset: 0x103a0fdac // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Basic.UEPathUtilityMethods.GetModName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetModName(struct UObject* WorldContext); // Offset: 0x103a0fd08 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Basic.UEPathUtilityMethods.GetFullModName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetFullModName(struct UObject* WorldContext, StrProperty& MainMod, StrProperty& SubMod); // Offset: 0x103a0fbc4 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Basic.UEPathUtilityMethods.FilterOKForCurrentModeString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool FilterOKForCurrentModeString(StrProperty CurrentModeString, StrProperty CurrentExtraModeString, StrProperty ModStringInfo, char ModeType, IntProperty ModeOpenFlag); // Offset: 0x103a0f9b8 // Return & Params: Num(6) Size(0x39)

	// Object Name: Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourcePaths
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearPassiveDownloadResourcePaths(); // Offset: 0x103a0f9a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UEPathUtilityMethods.ClearPassiveDownloadResourceIDList
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearPassiveDownloadResourceIDList(); // Offset: 0x103a0f990 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Basic.UEPathUtilityMethods.AddPassiveResourceDownloadFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AddPassiveResourceDownloadFlag(IntProperty ItemId); // Offset: 0x103a0f91c // Return & Params: Num(1) Size(0x4)
};

