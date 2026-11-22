#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.BPStructToCPP
struct UBP_SAVEGAME_UIElemLayout_C_BPStructToCPP_Params
{
	struct FBP_STRUCT_UIElemLayoutDetail               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FUIElemLayoutDetail                         Out;                                                      // (Parm, OutParm)
};

// Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.CPPStructToBP
struct UBP_SAVEGAME_UIElemLayout_C_CPPStructToBP_Params
{
	struct FUIElemLayoutDetail                         In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBP_STRUCT_UIElemLayoutDetail               Out;                                                      // (Parm, OutParm)
};

}

