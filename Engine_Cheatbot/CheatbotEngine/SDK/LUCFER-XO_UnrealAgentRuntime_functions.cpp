//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.ResolveSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USplineComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USplineComponent* UPCGSplineTubeMeshComponent::ResolveSpline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.ResolveSpline");

	UPCGSplineTubeMeshComponent_ResolveSpline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RefreshTubePhysicsCollision
// (Final, Native, Public, BlueprintCallable)

void UPCGSplineTubeMeshComponent::RefreshTubePhysicsCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RefreshTubePhysicsCollision");

	UPCGSplineTubeMeshComponent_RefreshTubePhysicsCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RebuildTubeMesh
// (Final, Native, Public, BlueprintCallable)

void UPCGSplineTubeMeshComponent::RebuildTubeMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RebuildTubeMesh");

	UPCGSplineTubeMeshComponent_RebuildTubeMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

