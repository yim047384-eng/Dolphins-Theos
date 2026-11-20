#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct CustomLayout.CustomLayoutBlueprintCode
// Size: 0x08 // Inherited bytes: 0x00
struct FCustomLayoutBlueprintCode {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct CustomLayout.DynamicCustomConfig
// Size: 0x02 // Inherited bytes: 0x00
struct FDynamicCustomConfig {
	// Fields
	bool bIsShowInLobby; // Offset: 0x00 // Size: 0x01
	bool bIgnoreDPIScale; // Offset: 0x01 // Size: 0x01
};

// Object Name: ScriptStruct CustomLayout.DynamicCustomInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FDynamicCustomInfo {
	// Fields
	struct UUserWidget* DynamicCustomAsset; // Offset: 0x00 // Size: 0x08
	struct TArray<IntProperty> CustomTypes; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct CustomLayout.UIElemLayoutDetail
// Size: 0x28 // Inherited bytes: 0x00
struct FUIElemLayoutDetail {
	// Fields
	IntProperty Type; // Offset: 0x00 // Size: 0x04
	float Opacity; // Offset: 0x04 // Size: 0x04
	float Scale; // Offset: 0x08 // Size: 0x04
	struct FAnchors AnchorType; // Offset: 0x0c // Size: 0x10
	struct FVector2D RelativePos; // Offset: 0x1c // Size: 0x08
	bool Invalid; // Offset: 0x24 // Size: 0x01
	char pad_0x25[0x3]; // Offset: 0x25 // Size: 0x03
};

// Object Name: ScriptStruct CustomLayout.TouchStatInfo
// Size: 0x08 // Inherited bytes: 0x00
struct FTouchStatInfo {
	// Fields
	IntProperty CustomType; // Offset: 0x00 // Size: 0x04
	uint16_t ScreenSpaceX; // Offset: 0x04 // Size: 0x02
	uint16_t ScreenSpaceY; // Offset: 0x06 // Size: 0x02
};

