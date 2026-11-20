#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class OMobileFBPL.OMobileFBPL
// Size: 0x28 // Inherited bytes: 0x28
struct UOMobileFBPL : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function OMobileFBPL.OMobileFBPL.IsRunningOnBattery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsRunningOnBattery(); // Offset: 0x1019d870c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OMobileFBPL.OMobileFBPL.IsBatteryStateCharging
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsBatteryStateCharging(); // Offset: 0x1019d86d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OMobileFBPL.OMobileFBPL.GetVolumeState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetVolumeState(); // Offset: 0x1019d86a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OMobileFBPL.OMobileFBPL.GetDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDeviceName(); // Offset: 0x1019d8640 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function OMobileFBPL.OMobileFBPL.GetBatteryTemperature
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetBatteryTemperature(); // Offset: 0x1019d860c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OMobileFBPL.OMobileFBPL.GetBatteryLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetBatteryLevel(); // Offset: 0x1019d85d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OMobileFBPL.OMobileFBPL.AreHeadphonesPluggedIn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool AreHeadphonesPluggedIn(); // Offset: 0x1019d85a4 // Return & Params: Num(1) Size(0x1)
};

