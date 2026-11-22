#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C
// 0x0000 (0x0180 - 0x0180)
class UGameLogicManagerBase_C : public UGameBusinessManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GameLogicManagerBase.GameLogicManagerBase_C");
		return pStaticClass;
	}

};


}

