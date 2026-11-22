#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache
struct UClusterReplicationSubsystem_SetAutoClearCache_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache
struct UClusterReplicationSubsystem_SetAutoCache_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData
struct UClusterReplicationSubsystem_RemoveAllCachedObjectData_Params
{
};

}

