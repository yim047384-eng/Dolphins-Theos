#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class ReAutomatic.AutomaticCommonHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UAutomaticCommonHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function ReAutomatic.AutomaticCommonHelper.IsClassOf
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsClassOf(struct UObject* Object, struct UObject* Class); // Offset: 0x101fcfcd4 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class ReAutomatic.AutomaticPlatformHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UAutomaticPlatformHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDeviceName(); // Offset: 0x101fcff38 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class ReAutomatic.AutomaticUIHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UAutomaticUIHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition
	// Flags: [Final|Native|Static|Public|HasOutParms]
	bool IsWidgetVisibleWithUICondition(struct FFindUICondition& Condition, IntProperty Index); // Offset: 0x101fd0620 // Return & Params: Num(3) Size(0x2d)

	// Object Name: Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible
	// Flags: [Final|Native|Static|Public]
	bool IsWidgetVisible(struct UWidget* Widget); // Offset: 0x101fd05a4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex
	// Flags: [Final|Native|Static|Public]
	bool IsWidgetTextMatchRegex(struct UWidget* Widget, StrProperty Text); // Offset: 0x101fd04d0 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType
	// Flags: [Final|Native|Static|Public]
	bool IsWidgetMatchType(struct UWidget* Widget, enum class EUIType Type); // Offset: 0x101fd0418 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct UWidget* FindWidgetObjectWithUICondition(struct FFindUICondition& Condition, IntProperty Index); // Offset: 0x101fd0320 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject
	// Flags: [Final|Native|Static|Public]
	struct UWidget* FindUWidgetObject(StrProperty Name, IntProperty Index); // Offset: 0x101fd0248 // Return & Params: Num(3) Size(0x20)
};

