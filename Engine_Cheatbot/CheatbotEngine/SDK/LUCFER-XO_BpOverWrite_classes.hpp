#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BpOverWrite.BpOverWrite_C
// 0x0000 (0x01F8 - 0x01F8)
class UBpOverWrite_C : public UBPClassManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BpOverWrite.BpOverWrite_C");
		return pStaticClass;
	}

};


}

