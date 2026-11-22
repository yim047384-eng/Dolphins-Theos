//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError
// (Final, Native, Public, Const)
// Parameters:
// int                            errCode                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBridgeLuaVM::UGCLuaError(int errCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError");

	UCreativeBridgeLuaVM_UGCLuaError_Params params;
	params.errCode = errCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBridgeLuaVM::SetUGCSuspendStateFix(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix");

	UCreativeBridgeLuaVM_SetUGCSuspendStateFix_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler
// (Final, Native, Public)

void UCreativeBridgeLuaVM::RegisterSluaCallUgcluaEventHandler()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler");

	UCreativeBridgeLuaVM_RegisterSluaCallUgcluaEventHandler_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.PostInit
// (Native, Public, BlueprintCallable)

void UCreativeBridgeLuaVM::PostInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.PostInit");

	UCreativeBridgeLuaVM_PostInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBridgeLuaVM::GetUGCSuspendStateFix()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix");

	UCreativeBridgeLuaVM_GetUGCSuspendStateFix_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

