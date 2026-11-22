//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.BPStructToCPP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBP_STRUCT_UIElemLayoutDetail In                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FUIElemLayoutDetail     Out                            (Parm, OutParm)

void UBP_SAVEGAME_UIElemLayout_C::BPStructToCPP(struct FBP_STRUCT_UIElemLayoutDetail* In, struct FUIElemLayoutDetail* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.BPStructToCPP");

	UBP_SAVEGAME_UIElemLayout_C_BPStructToCPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.CPPStructToBP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FUIElemLayoutDetail     In                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBP_STRUCT_UIElemLayoutDetail Out                            (Parm, OutParm)

void UBP_SAVEGAME_UIElemLayout_C::CPPStructToBP(struct FUIElemLayoutDetail* In, struct FBP_STRUCT_UIElemLayoutDetail* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.CPPStructToBP");

	UBP_SAVEGAME_UIElemLayout_C_CPPStructToBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}


}

