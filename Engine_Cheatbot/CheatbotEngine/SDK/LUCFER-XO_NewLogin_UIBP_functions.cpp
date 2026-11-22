//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewLogin_UIBP.NewLogin_UIBP_C.SetRenderTransformWheniPhone
// (Public, BlueprintCallable, BlueprintEvent)

void UNewLogin_UIBP_C::SetRenderTransformWheniPhone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NewLogin_UIBP.NewLogin_UIBP_C.SetRenderTransformWheniPhone");

	UNewLogin_UIBP_C_SetRenderTransformWheniPhone_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NewLogin_UIBP.NewLogin_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewLogin_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NewLogin_UIBP.NewLogin_UIBP_C.Construct");

	UNewLogin_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function NewLogin_UIBP.NewLogin_UIBP_C.ExecuteUbergraph_NewLogin_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewLogin_UIBP_C::ExecuteUbergraph_NewLogin_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NewLogin_UIBP.NewLogin_UIBP_C.ExecuteUbergraph_NewLogin_UIBP");

	UNewLogin_UIBP_C_ExecuteUbergraph_NewLogin_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

