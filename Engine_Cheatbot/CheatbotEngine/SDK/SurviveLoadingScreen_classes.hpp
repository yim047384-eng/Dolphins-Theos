#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SurviveLoadingScreen.SurviveLoadingSettings
// Size: 0x58 // Inherited bytes: 0x38
struct USurviveLoadingSettings : UDeveloperSettings {
	// Fields
	struct TArray<struct FSoftObjectPath> Images; // Offset: 0x38 // Size: 0x10
	struct TArray<struct FSoftObjectPath> Videos; // Offset: 0x48 // Size: 0x10
};

