#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C
// Size: 0x17a8 // Inherited bytes: 0x1680
struct UCharacterAvatarComp2_BP_C : UCharacterAvatarComponent2 {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x1680 // Size: 0x08
	struct UBackpackAvatarItemColor* BasedAvatarColorHandle; // Offset: 0x1688 // Size: 0x08
	struct UBackpackAvatarItemPattern* BasedAvatarPatternHandle; // Offset: 0x1690 // Size: 0x08
	enum class EBattleItemUseReason PreEquipClothReason; // Offset: 0x1698 // Size: 0x01
	char pad_0x1699[0x7]; // Offset: 0x1699 // Size: 0x07
	struct USkeletalMesh* MaleBatchBodySoftPath; // Offset: 0x16a0 // Size: 0x28
	struct USkeletalMesh* FemaleBatchBodySoftPath; // Offset: 0x16c8 // Size: 0x28
	bool bForbidBindAvatarEquippedEvent; // Offset: 0x16f0 // Size: 0x01
	char pad_0x16F1[0x7]; // Offset: 0x16f1 // Size: 0x07
	struct TArray<IntProperty> NeedModifyVehicleID; // Offset: 0x16f8 // Size: 0x10
	MapProperty SlotToFakeHandleMap; // Offset: 0x1708 // Size: 0x50
	MapProperty CurHandhleMap; // Offset: 0x1758 // Size: 0x50

	// Functions

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetHeadIgnoreSlots
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct TArray<IntProperty> GetHeadIgnoreSlots(IntProperty InItemHeadID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CanUseDefaultAvatarHandleItem
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool CanUseDefaultAvatarHandleItem(IntProperty InSlotID, IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetDefaultAvatarHandleItem
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetDefaultAvatarHandleItem(IntProperty InSlotID, IntProperty InItemID, IntProperty AdditionalItemID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PrintDefaultConfig
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void PrintDefaultConfig(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandleCharacterHiddenChange
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleCharacterHiddenChange(bool bHidden); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HandlePlayerScopeInOrOut
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandlePlayerScopeInOrOut(bool bScopeIn); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.EnableAvatarAnimation
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void EnableAvatarAnimation(bool IsEnable); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetRepalceIDOnVehicle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetRepalceIDOnVehicle(IntProperty OriginID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBPSlotNameConfigType
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	enum class EAvatarSlotNameConfig GetBPSlotNameConfigType(struct UBackpackAvatarHandle* InAvatarHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.IsEnableItemDownload
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool IsEnableItemDownload(IntProperty ItemId); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetBatchDefaultBodyPath
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct FSoftObjectPath GetBatchDefaultBodyPath(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.HideHeadMesh
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool HideHeadMesh(struct UMeshComponent* MasterBoneComp, struct USkeletalMesh* SkeletalMesh); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOffEquimentByResID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool PutOffEquimentByResID(IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnEquipmentByResID
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool PutOnEquipmentByResID(IntProperty resID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem_InDev
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetFakeAvatarHandleItem_InDev(IntProperty InSlotID, IntProperty InItemID, IntProperty AdditionalItemID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GenerateClientDefaultAvatar
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool GenerateClientDefaultAvatar(struct UBattleItemHandleBase* InAvatarHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.BPClientPostProcessViewDataMiddle
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	bool BPClientPostProcessViewDataMiddle(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ProcessGodzillaSuit
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void ProcessGodzillaSuit(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetFakeAvatarHandleItem
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetFakeAvatarHandleItem(IntProperty InSlotID, IntProperty InItemID, IntProperty AdditionalItemID); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CheckAvatarWhoHideWho
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void CheckAvatarWhoHideWho(enum class EAvatarSlotType SlotType, struct FItemDefineID resID, struct TArray<IntProperty>& HideSomeAvatar, struct TArray<IntProperty>& HideBySomeAvatar); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x40)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentPattern
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEquipmentPattern(enum class EAvatarSlotType SlotType, struct UTexture* MaskGrayTexture); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.SetEquipmentColor
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SetEquipmentColor(enum class EAvatarSlotType SlotType, struct FLinearColor MaskColor1, struct FLinearColor MaskColor2, struct FLinearColor MaskColor3, struct UTexture* MaskGrayTextrue); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x60)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemPattern
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	struct UBackpackAvatarItemPattern* CreateAvatarItemPattern(enum class EAvatarSlotType InSlotType, IntProperty InPatternID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.CreateAvatarItemColor
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	struct UBackpackAvatarItemColor* CreateAvatarItemColor(enum class EAvatarSlotType InSlotType, IntProperty InColorID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.GetEquipmentSkinItemID
	// Flags: [Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent]
	IntProperty GetEquipmentSkinItemID(IntProperty InItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicUnequipped
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void Bp_ProcessAvatarLogicUnequipped(IntProperty SlotID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_ProcessAvatarLogicEquipped
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void Bp_ProcessAvatarLogicEquipped(IntProperty SlotID, struct FItemDefineID NewItemID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PutOnDefaultEquipment
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool PutOnDefaultEquipment(struct UBackpackAvatarHandle* ItemHandle); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.InitBodyMeshByHead
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	bool InitBodyMeshByHead(struct FItemDefineID& InItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ReceiveBeginPlay
	// Flags: [Event|Public|BlueprintEvent]
	void ReceiveBeginPlay(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicEquipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Bp_EventAvatarLogicEquipped(IntProperty SlotID, struct FItemDefineID NewItemID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.Bp_EventAvatarLogicUnequipped
	// Flags: [BlueprintCallable|BlueprintEvent]
	void Bp_EventAvatarLogicUnequipped(IntProperty SlotID, struct FItemDefineID OldItemID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.PreHanleEquipCloth
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	void PreHanleEquipCloth(struct FBattleItemUseTarget Target, struct UBackpackAvatarHandle* InAvatarHandle, enum class EBattleItemUseReason Reason); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x31)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ClearEventFromOnAvatarEquippedEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	void ClearEventFromOnAvatarEquippedEvent(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeIn
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerScopeIn(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnPlayerScopeOut
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnPlayerScopeOut(bool bIsBegin); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.OnCharacterHiddenStateChange
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnCharacterHiddenStateChange(bool bIsHidden); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CharacterAvatarComp2_BP.CharacterAvatarComp2_BP_C.ExecuteUbergraph_CharacterAvatarComp2_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_CharacterAvatarComp2_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

