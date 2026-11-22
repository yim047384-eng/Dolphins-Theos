#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetParentCharacter
struct UAnimNotifyState_TimedNiagaraEffect_GetParentCharacter_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

