#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalLuaWidget.GlobalLuaWidget_C.GetNewLevelTaskData
struct UGlobalLuaWidget_C_GetNewLevelTaskData_Params
{
	struct FString                                     TaskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NewLevelTask_type                BP_STRUCT_NewLevelTask_type;                              // (Parm, OutParm)
};

}

