#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Overlay.Overlays
// Size: 0x28 // Inherited bytes: 0x28
struct UOverlays : UObject {
};

// Object Name: Class Overlay.BasicOverlays
// Size: 0x38 // Inherited bytes: 0x28
struct UBasicOverlays : UOverlays {
	// Fields
	struct TArray<struct FOverlayItem> Overlays; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class Overlay.LocalizedOverlays
// Size: 0x80 // Inherited bytes: 0x28
struct ULocalizedOverlays : UOverlays {
	// Fields
	struct UBasicOverlays* DefaultOverlays; // Offset: 0x28 // Size: 0x08
	MapProperty LocaleToOverlaysMap; // Offset: 0x30 // Size: 0x50
};

