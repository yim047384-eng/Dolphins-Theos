#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class iTOP.FBHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UFBHelper : UObject {
	// Functions

	// Object Name: Function iTOP.FBHelper.DelayToSetAutoInitFacebookLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DelayToSetAutoInitFacebookLog(bool IsAutoInit); // Offset: 0x10229f7d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function iTOP.FBHelper.DelayToInitFacebookSDK
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DelayToInitFacebookSDK(bool IsAutoInit, bool WithLaunchOption); // Offset: 0x10229f710 // Return & Params: Num(2) Size(0x2)
};

