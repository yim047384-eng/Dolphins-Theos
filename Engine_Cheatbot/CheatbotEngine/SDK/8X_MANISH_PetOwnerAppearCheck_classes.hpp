#pragma once

// SDK GENERATE BY TELEGRAM ;- (@Manish8x) (4.7.0 -- 64Bit) DM TO BUY TOOL AVLABLE FOR SELL
// Telegram:- @Manish8x
// GEN ONWed Nov 18 07:25:11 2026
 
namespace SDK
{
//---------------------By Tg @Manish8x---------------------------
//Classes
//---------------------By Tg @Manish8x---------------------------

// BlueprintGeneratedClass PetOwnerAppearCheck.PetOwnerAppearCheck_C
// 0x0000 (0x0098 - 0x0098)
class UPetOwnerAppearCheck_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetOwnerAppearCheck.PetOwnerAppearCheck_C");
		return pStaticClass;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

