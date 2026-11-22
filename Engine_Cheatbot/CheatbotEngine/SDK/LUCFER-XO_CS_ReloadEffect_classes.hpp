#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C
// 0x0000 (0x0160 - 0x0160)
class UCS_ReloadEffect_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C");
		return pStaticClass;
	}

};


}

