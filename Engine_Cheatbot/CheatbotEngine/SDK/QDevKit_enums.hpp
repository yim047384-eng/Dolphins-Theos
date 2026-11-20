#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum QDevKit.EQFirebaseRemoteConfigStatus
enum class EQFirebaseRemoteConfigStatus : int32 {
	kUnfetched = -1,
	kFetchedSuccessfully = 0,
	kFetchedFailed = 1,
	EQFirebaseRemoteConfigStatus_MAX = 2
};

