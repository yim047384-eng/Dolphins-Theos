//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_System_Close_UIBP.Common_System_Close_UIBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_System_Close_UIBP_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_System_Close_UIBP.Common_System_Close_UIBP_C.PreConstruct");

	UCommon_System_Close_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Common_System_Close_UIBP.Common_System_Close_UIBP_C.ExecuteUbergraph_Common_System_Close_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_System_Close_UIBP_C::ExecuteUbergraph_Common_System_Close_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_System_Close_UIBP.Common_System_Close_UIBP_C.ExecuteUbergraph_Common_System_Close_UIBP");

	UCommon_System_Close_UIBP_C_ExecuteUbergraph_Common_System_Close_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

