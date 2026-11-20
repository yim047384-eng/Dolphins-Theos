#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class bp_plugin.bp_pluginBPLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct Ubp_pluginBPLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void bp_pluginSendEvent(StrProperty jsonEventCmd); // Offset: 0x10236d27c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function bp_plugin.bp_pluginBPLibrary.bp_pluginRequestInstallWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty bp_pluginRequestInstallWidget(IntProperty wigetType, StrProperty authInfo); // Offset: 0x10236d1a8 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float bp_pluginLaunchMeemoFunction(StrProperty Param); // Offset: 0x10236d110 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool bp_pluginIsInForeground(); // Offset: 0x10236d0dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty bp_pluginGetInstalledWidgetType(); // Offset: 0x10236d0a8 // Return & Params: Num(1) Size(0x4)
};

