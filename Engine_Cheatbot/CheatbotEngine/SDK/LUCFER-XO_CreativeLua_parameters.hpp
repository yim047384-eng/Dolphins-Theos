#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CreativeLua.CreativeBridgeLuaVM.UGCLuaError
struct UCreativeBridgeLuaVM_UGCLuaError_Params
{
	int                                                errCode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeLua.CreativeBridgeLuaVM.SetUGCSuspendStateFix
struct UCreativeBridgeLuaVM_SetUGCSuspendStateFix_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeLua.CreativeBridgeLuaVM.RegisterSluaCallUgcluaEventHandler
struct UCreativeBridgeLuaVM_RegisterSluaCallUgcluaEventHandler_Params
{
};

// Function CreativeLua.CreativeBridgeLuaVM.PostInit
struct UCreativeBridgeLuaVM_PostInit_Params
{
};

// Function CreativeLua.CreativeBridgeLuaVM.GetUGCSuspendStateFix
struct UCreativeBridgeLuaVM_GetUGCSuspendStateFix_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

