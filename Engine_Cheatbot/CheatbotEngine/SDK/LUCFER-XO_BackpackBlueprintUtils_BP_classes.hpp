#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C
// 0x0268 (0x0830 - 0x05C8)
class UBackpackBlueprintUtils_BP_C : public UBackpackBlueprintUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (Transient, DuplicateTransient)
	TArray<struct FBattleItemAdditionalData>           EmptyAdditionalData;                                      // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FItemAssociation>        EmptyAssociationMap;                                      // 0x05E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemAssociation>                    EmptyAssociationArray;                                    // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, EAvatarSlotType>                         EquipmentID2SlotID_Map;                                   // 0x0640(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentBagID2Level_Map;                                 // 0x0690(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentHelmetID2Level_Map;                              // 0x06E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     EquipmentArmorID2Level_Map;                               // 0x0730(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        GhillieSuitItem;                                          // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     GrenadeTypeToPriority;                                    // 0x0790(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     CacheItemId2BagLevelMap;                                  // 0x07E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C");
		return pStaticClass;
	}


	struct FBattleItemData ConstructBattleItemDataByDefineIDInternal(struct FItemDefineID* DefineID);
	int GetEquipmentSkinIDByAvatar(int* InItemID, struct FGameModePlayerEquipmentAvatar* InEquipmentAvatar);
	int GetEquipmentArmorLevel(int* ItemId);
	int GetEquipmentHelmetLevel(int* ItemId);
	bool IsForceLoadLobbyHandle(struct FItemDefineID* InItemID);
	class UClass* GetBattleItemHandleClass(struct FItemDefineID* DefineID);
	bool CanNotAutoSwitchToGrenade(int* InGrenadeID);
	bool IsConsumableMissionItemType(int* ItemId);
	int GetGrenadePriorityByType(int* InGrenadeType);
	bool IsIceDrinkEmoteIDInBackpack(int* InItemID, int* InEmoteID);
	bool IsEquipmentItem(int* ItemId);
	class UBattleItemHandleBase* CreateVirtualItemHandle(class UObject** Outer, struct FItemDefineID* DefineID);
	int GetPendantIDByWeaponID(int* WeaponId);
	int GetWeaponSkinMappingID(int* InWeaponSkinID);
	bool GetItemOperationSoundAndBank(int* ItemSoundID, EBattleItemOperationType* ItemOperation, struct FString* OutBankName, struct FString* OutSoundName);
	bool IsGhillieSuitItemType(int* ItemId);
	int GetEquipmentBagLevel(int* ItemId);
	int GetEquipmentLevel(int* ItemId);
	bool Is3BackpackID(int* ID);
	bool IsInPveMode();
	void IsPVEMode(bool* Out);
	int GetBPIDByResID(int* resID);
	void AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType Socket);
	struct FString GetBattleItemHandlePath(bool* bLobby, bool* bForceLobby, struct FItemDefineID* DefineID);
	struct FString GetRawBattleTextByRawTextID(int* ID);
	struct FString GetRawBattleTextByType(EBattleTextType* Type, int* InSubType);
	int GetItemSubTypeID(int* SpecificID);
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID);
	void GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID);
	bool IsVirtualItemData(struct FBattleItemData* ItemData);
	class UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp);
	void CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, bool bLobby, class UBattleItemHandleBase** BattleItemHandle);
	void GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* CreateBattleItemHandle(class UObject** Outer, bool* bLobby, struct FItemDefineID* DefineID);
	struct FBattleItemData GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp);
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int* ItemTableID);
	struct FBattleItemData ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID);
	void AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character);
	void InitialItemTable();
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint);
};


}

