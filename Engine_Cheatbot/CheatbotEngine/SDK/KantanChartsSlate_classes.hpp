#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class KantanChartsSlate.KantanBarChartWidgetStyle
// Size: 0x188 // Inherited bytes: 0x30
struct UKantanBarChartWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FKantanBarChartStyle ChartStyle; // Offset: 0x30 // Size: 0x158
};

// Object Name: Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// Size: 0x188 // Inherited bytes: 0x30
struct UKantanCartesianChartWidgetStyle : USlateWidgetStyleContainerBase {
	// Fields
	struct FKantanCartesianChartStyle ChartStyle; // Offset: 0x30 // Size: 0x158
};

// Object Name: Class KantanChartsSlate.KantanCategoryStyleSet
// Size: 0x40 // Inherited bytes: 0x30
struct UKantanCategoryStyleSet : UDataAsset {
	// Fields
	struct TArray<struct FKantanCategoryStyle> Styles; // Offset: 0x30 // Size: 0x10
};

// Object Name: Class KantanChartsSlate.KantanPointStyle
// Size: 0x50 // Inherited bytes: 0x30
struct UKantanPointStyle : UDataAsset {
	// Fields
	struct UTexture2D* DataPointTexture; // Offset: 0x30 // Size: 0x08
	struct FIntPoint PointSizeTextureOffsets[0x3]; // Offset: 0x38 // Size: 0x18
};

// Object Name: Class KantanChartsSlate.KantanSeriesStyleSet
// Size: 0x40 // Inherited bytes: 0x30
struct UKantanSeriesStyleSet : UDataAsset {
	// Fields
	struct TArray<struct FKantanSeriesStyle> Styles; // Offset: 0x30 // Size: 0x10
};

