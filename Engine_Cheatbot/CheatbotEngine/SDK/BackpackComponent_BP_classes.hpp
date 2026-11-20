#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass BackpackComponent_BP.BackpackComponent_BP_C
// Size: 0x5f8 // Inherited bytes: 0x5f0
struct UBackpackComponent_BP_C : UBackpackComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x5f0 // Size: 0x08

	// Functions

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.CheckItemAttrsFlag
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool CheckItemAttrsFlag(IntProperty ItemId, enum class EItemAttrs ItemAttrEnum); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemAttrsFlag
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	IntProperty GetItemAttrsFlag(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySoundByItemOperation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void ServerPlaySoundByItemOperation(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, char Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetChipAssociationType
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetChipAssociationType(IntProperty Index, IntProperty& ChipAssociationType); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetSafetyBoxCapacity
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	float GetSafetyBoxCapacity(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemDefineID
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FItemDefineID NewItemDefineID(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.CheckLeftLimitCountForItem
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty CheckLeftLimitCountForItem(IntProperty InItemID, IntProperty InCount); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.IsItemExist
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsItemExist(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetEmptyChipSlotIdx
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetEmptyChipSlotIdx(struct FBattleItemData ItemData, IntProperty SupportChipNum, IntProperty& Index); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0xc8)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetItemSubType
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetItemSubType(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.HasTagSub
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	bool HasTagSub(IntProperty ItemId, struct FName& TagName); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetEquipChipNum
	// Flags: [Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	void GetEquipChipNum(struct FBattleItemData ItemData, IntProperty& Num); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc4)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetAvailableEquipChipSlot
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void GetAvailableEquipChipSlot(IntProperty ChipResID, bool bFindEmptySlot, bool& IsFind, struct FBattleItemUseTarget& ItemUseTarget); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.IsAutoUse
	// Flags: [Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool IsAutoUse(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.CheckSkillPropItemCanBePickup
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	bool CheckSkillPropItemCanBePickup(struct UBackpackComponent* BackpackComp, struct FItemDefineID DefineID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.UpdateCapacity
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent]
	float UpdateCapacity(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.GetBattleItemFeatureDataByDefineID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x48)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.NewItemHandle
	// Flags: [Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const]
	struct UBattleItemHandleBase* NewItemHandle(struct FItemDefineID& DefineID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.ServerPlaySound
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ServerPlaySound(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, char Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.OperationFailed
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OperationFailed(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, enum class EBattleItemOperationFailedReason OperationFailedReason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.ClientPlayerSound
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ClientPlayerSound(struct FItemDefineID DefineID, enum class EBattleItemOperationType OperationType, char Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x1a)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.EventAutoEquipAim
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventAutoEquipAim(bool BoolValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.EventPickClipType
	// Flags: [BlueprintCallable|BlueprintEvent]
	void EventPickClipType(IntProperty IntValue); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BackpackComponent_BP.BackpackComponent_BP_C.ExecuteUbergraph_BackpackComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_BackpackComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

