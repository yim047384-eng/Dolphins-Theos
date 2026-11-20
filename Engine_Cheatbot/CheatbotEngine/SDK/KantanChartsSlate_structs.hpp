#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct KantanChartsSlate.CartesianAxisConfig
// Size: 0x48 // Inherited bytes: 0x00
struct FCartesianAxisConfig {
	// Fields
	struct FText Title; // Offset: 0x00 // Size: 0x18
	struct FText Unit; // Offset: 0x18 // Size: 0x18
	float MarkerSpacing; // Offset: 0x30 // Size: 0x04
	IntProperty MaxValueDigits; // Offset: 0x34 // Size: 0x04
	struct FCartesianAxisInstanceConfig LeftBottomAxis; // Offset: 0x38 // Size: 0x04
	struct FCartesianAxisInstanceConfig RightTopAxis; // Offset: 0x3c // Size: 0x04
	struct FCartesianAxisInstanceConfig FloatingAxis; // Offset: 0x40 // Size: 0x04
	char pad_0x44[0x4]; // Offset: 0x44 // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.CartesianAxisInstanceConfig
// Size: 0x04 // Inherited bytes: 0x00
struct FCartesianAxisInstanceConfig {
	// Fields
	bool bEnabled; // Offset: 0x00 // Size: 0x01
	bool bShowTitle; // Offset: 0x01 // Size: 0x01
	bool bShowMarkers; // Offset: 0x02 // Size: 0x01
	bool bShowLabels; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct KantanChartsSlate.KantanChartStyle
// Size: 0x150 // Inherited bytes: 0x08
struct FKantanChartStyle : FSlateWidgetStyle {
	// Fields
	struct FSlateBrush Background; // Offset: 0x08 // Size: 0xb8
	struct FLinearColor ChartLineColor; // Offset: 0xc0 // Size: 0x10
	float ChartLineThickness; // Offset: 0xd0 // Size: 0x04
	char pad_0xD4[0x4]; // Offset: 0xd4 // Size: 0x04
	struct FSlateFontInfo BaseFont; // Offset: 0xd8 // Size: 0x58
	IntProperty TitleFontSize; // Offset: 0x130 // Size: 0x04
	IntProperty AxisDescriptionFontSize; // Offset: 0x134 // Size: 0x04
	IntProperty AxisValueFontSize; // Offset: 0x138 // Size: 0x04
	struct FLinearColor FontColor; // Offset: 0x13c // Size: 0x10
	char pad_0x14C[0x4]; // Offset: 0x14c // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.KantanBarChartStyle
// Size: 0x158 // Inherited bytes: 0x150
struct FKantanBarChartStyle : FKantanChartStyle {
	// Fields
	float BarOpacity; // Offset: 0x14c // Size: 0x04
	float BarOutlineOpacity; // Offset: 0x150 // Size: 0x04
	float BarOutlineThickness; // Offset: 0x154 // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.KantanCartesianChartStyle
// Size: 0x158 // Inherited bytes: 0x150
struct FKantanCartesianChartStyle : FKantanChartStyle {
	// Fields
	float DataOpacity; // Offset: 0x14c // Size: 0x04
	float DataLineThickness; // Offset: 0x150 // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.CartesianRangeBound
// Size: 0x08 // Inherited bytes: 0x00
struct FCartesianRangeBound {
	// Fields
	enum class ECartesianRangeBoundType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FixedBoundValue; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.KantanCartesianPlotScale
// Size: 0x24 // Inherited bytes: 0x00
struct FKantanCartesianPlotScale {
	// Fields
	enum class ECartesianScalingType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	struct FVector2D Scale; // Offset: 0x04 // Size: 0x08
	struct FVector2D FocalCoordinates; // Offset: 0x0c // Size: 0x08
	struct FCartesianAxisRange RangeX; // Offset: 0x14 // Size: 0x08
	struct FCartesianAxisRange RangeY; // Offset: 0x1c // Size: 0x08
};

// Object Name: ScriptStruct KantanChartsSlate.CartesianAxisRange
// Size: 0x08 // Inherited bytes: 0x00
struct FCartesianAxisRange {
	// Fields
	float Min; // Offset: 0x00 // Size: 0x04
	float Max; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct KantanChartsSlate.KantanCategoryStyle
// Size: 0x18 // Inherited bytes: 0x00
struct FKantanCategoryStyle {
	// Fields
	struct FName CategoryStyleId; // Offset: 0x00 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct KantanChartsSlate.KantanSeriesStyle
// Size: 0x20 // Inherited bytes: 0x00
struct FKantanSeriesStyle {
	// Fields
	struct FName StyleID; // Offset: 0x00 // Size: 0x08
	struct UKantanPointStyle* PointStyle; // Offset: 0x08 // Size: 0x08
	struct FLinearColor Color; // Offset: 0x10 // Size: 0x10
};

