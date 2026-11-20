#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30 // Inherited bytes: 0x28
struct USlateWidgetStyleContainerBase : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class SlateCore.FontBulkData
// Size: 0xd8 // Inherited bytes: 0x28
struct UFontBulkData : UObject {
	// Fields
	char pad_0x28[0xb0]; // Offset: 0x28 // Size: 0xb0
};

// Object Name: Class SlateCore.FontFaceInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UFontFaceInterface : UInterface {
};

// Object Name: Class SlateCore.FontProviderInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UFontProviderInterface : UInterface {
};

// Object Name: Class SlateCore.SlateTypes
// Size: 0x28 // Inherited bytes: 0x28
struct USlateTypes : UObject {
};

// Object Name: Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30 // Inherited bytes: 0x28
struct USlateWidgetStyleAsset : UObject {
	// Fields
	struct USlateWidgetStyleContainerBase* CustomStyle; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28 // Inherited bytes: 0x28
struct USlateWidgetStyleContainerInterface : UInterface {
};

