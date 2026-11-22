#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C
// 0x0000 (0x0138 - 0x0138)
class UBattleItemHandle_VirtualItem_C : public UBattleItemHandleBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C");
		return pStaticClass;
	}

};


}

