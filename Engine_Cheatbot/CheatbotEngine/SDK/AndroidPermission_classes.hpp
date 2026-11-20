#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x48 // Inherited bytes: 0x28
struct UAndroidPermissionCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnPermissionsGrantedDynamicDelegate; // Offset: 0x28 // Size: 0x10
	char pad_0x38[0x10]; // Offset: 0x38 // Size: 0x10
};

// Object Name: Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CheckPermission(StrProperty permission); // Offset: 0x1023b8a80 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<StrProperty>& Permissions); // Offset: 0x1023b89d8 // Return & Params: Num(2) Size(0x18)
};

