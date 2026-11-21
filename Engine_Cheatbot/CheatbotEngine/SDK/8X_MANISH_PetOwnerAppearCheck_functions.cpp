// SDK GENERATE BY TELEGRAM ;- (@Manish8x) (4.7.0 -- 64Bit) DM TO BUY TOOL AVLABLE FOR SELL
// Telegram:- @Manish8x
// GEN ONWed Nov 18 07:25:11 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By Tg @Manish8x---------------------------
//Functions
//---------------------By Tg @Manish8x---------------------------

// Function PetOwnerAppearCheck.PetOwnerAppearCheck_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPetOwnerAppearCheck_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PetOwnerAppearCheck.PetOwnerAppearCheck_C.PerformConditionCheckAI");

	UPetOwnerAppearCheck_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

