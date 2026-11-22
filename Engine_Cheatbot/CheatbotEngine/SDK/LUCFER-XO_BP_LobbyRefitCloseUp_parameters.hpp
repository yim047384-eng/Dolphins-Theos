#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.GetCameraWorldLocation
struct ABP_LobbyRefitCloseUp_C_GetCameraWorldLocation_Params
{
	struct FVector                                     cameraWorldLocation;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.UserConstructionScript
struct ABP_LobbyRefitCloseUp_C_UserConstructionScript_Params
{
};

// Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.Timeline_1
struct ABP_LobbyRefitCloseUp_C_Timeline_1_Params
{
};

// Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.ChanTransformWithBlend
struct ABP_LobbyRefitCloseUp_C_ChanTransformWithBlend_Params
{
	struct FTransform                                  B;                                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C.ExecuteUbergraph_BP_LobbyRefitCloseUp
struct ABP_LobbyRefitCloseUp_C_ExecuteUbergraph_BP_LobbyRefitCloseUp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

