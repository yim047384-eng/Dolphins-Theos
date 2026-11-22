#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum QDevKit.EQFirebaseRemoteConfigStatus
enum class EQFirebaseRemoteConfigStatus : uint8_t
{
	EQFirebaseRemoteConfigStatus__kUnfetched = 0,
	EQFirebaseRemoteConfigStatus__kFetchedSuccessfully = 1,
	EQFirebaseRemoteConfigStatus__kFetchedFailed = 2,
	EQFirebaseRemoteConfigStatus__EQFirebaseRemoteConfigStatus_MAX = 3
};



}

