#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class KantanChartsUMG.KantanChart
// Size: 0x150 // Inherited bytes: 0x100
struct UKantanChart : UWidget {
	// Fields
	struct FMargin Margins; // Offset: 0x100 // Size: 0x10
	struct FText ChartTitle; // Offset: 0x110 // Size: 0x18
	struct FMargin TitlePadding; // Offset: 0x128 // Size: 0x10
	float UpdateTickRate; // Offset: 0x138 // Size: 0x04
	char pad_0x13C[0x14]; // Offset: 0x13c // Size: 0x14

	// Functions

	// Object Name: Function KantanChartsUMG.KantanChart.SetUpdateTickRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetUpdateTickRate(float InRate); // Offset: 0x101a9b038 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KantanChartsUMG.KantanChart.SetMargins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetMargins(struct FMargin& InMargins); // Offset: 0x101a9afac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanChart.SetChartTitlePadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetChartTitlePadding(struct FMargin& InPadding); // Offset: 0x101a9af20 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanChart.SetChartTitle
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetChartTitle(struct FText& InTitle); // Offset: 0x101a9ae74 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class KantanChartsUMG.KantanCategoryChart
// Size: 0x170 // Inherited bytes: 0x150
struct UKantanCategoryChart : UKantanChart {
	// Fields
	bool bAutoPerCategoryStyles; // Offset: 0x150 // Size: 0x01
	char pad_0x151[0x7]; // Offset: 0x151 // Size: 0x07
	struct UKantanCategoryStyleSet* CategoryStyleSet; // Offset: 0x158 // Size: 0x08
	struct TArray<struct FCategoryStyleManualMapping> ManualStyleMappings; // Offset: 0x160 // Size: 0x10

	// Functions

	// Object Name: Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AddCategoryStyleOverride(struct FName CategoryId, struct FLinearColor Color); // Offset: 0x101a9ac94 // Return & Params: Num(2) Size(0x18)
};

// Object Name: Class KantanChartsUMG.KantanBarChartBase
// Size: 0x328 // Inherited bytes: 0x170
struct UKantanBarChartBase : UKantanCategoryChart {
	// Fields
	struct FKantanBarChartStyle WidgetStyle; // Offset: 0x170 // Size: 0x158
	enum class EKantanBarChartOrientation Orientation; // Offset: 0x2c8 // Size: 0x01
	char pad_0x2C9[0x3]; // Offset: 0x2c9 // Size: 0x03
	float MaxBarValue; // Offset: 0x2cc // Size: 0x04
	enum class EKantanBarLabelPosition LabelPosition; // Offset: 0x2d0 // Size: 0x01
	char pad_0x2D1[0x3]; // Offset: 0x2d1 // Size: 0x03
	float BarToGapRatio; // Offset: 0x2d4 // Size: 0x04
	enum class EKantanBarValueExtents ValueExtentsDisplay; // Offset: 0x2d8 // Size: 0x01
	char pad_0x2D9[0x7]; // Offset: 0x2d9 // Size: 0x07
	struct FCartesianAxisConfig ValueAxisCfg; // Offset: 0x2e0 // Size: 0x48

	// Functions

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAxisConfig(struct FCartesianAxisConfig& InCfg); // Offset: 0x101a99c00 // Return & Params: Num(1) Size(0x48)

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetOrientation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOrientation(enum class EKantanBarChartOrientation InOrientation); // Offset: 0x101a99b84 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMaxBarValue(float InMaxValue); // Offset: 0x101a99b08 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLabelPosition(enum class EKantanBarLabelPosition InPosition); // Offset: 0x101a99a8c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetExtentsDisplay(enum class EKantanBarValueExtents InExtents); // Offset: 0x101a99a10 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBarToGapRatio(float InRatio); // Offset: 0x101a99994 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class KantanChartsUMG.BarChart
// Size: 0x330 // Inherited bytes: 0x328
struct UBarChart : UKantanBarChartBase {
	// Fields
	struct UObject* DataSource; // Offset: 0x328 // Size: 0x08

	// Functions

	// Object Name: Function KantanChartsUMG.BarChart.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetDatasource(struct UObject* InDatasource); // Offset: 0x101a994d4 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class KantanChartsUMG.KantanCartesianChartBase
// Size: 0x390 // Inherited bytes: 0x150
struct UKantanCartesianChartBase : UKantanChart {
	// Fields
	struct FKantanCartesianChartStyle WidgetStyle; // Offset: 0x150 // Size: 0x158
	struct FKantanCartesianPlotScale PlotScale; // Offset: 0x2a8 // Size: 0x24
	enum class EKantanDataPointSize DataPointSize; // Offset: 0x2cc // Size: 0x01
	char pad_0x2CD[0x3]; // Offset: 0x2cd // Size: 0x03
	struct FCartesianAxisConfig XAxisCfg; // Offset: 0x2d0 // Size: 0x48
	struct FCartesianAxisConfig YAxisCfg; // Offset: 0x318 // Size: 0x48
	struct FMargin AxisTitlePadding; // Offset: 0x360 // Size: 0x10
	struct UKantanSeriesStyleSet* SeriesStyleSet; // Offset: 0x370 // Size: 0x08
	struct TArray<struct FSeriesStyleManualMapping> ManualStyleMappings; // Offset: 0x378 // Size: 0x10
	bool bAntiAlias; // Offset: 0x388 // Size: 0x01
	char pad_0x389[0x7]; // Offset: 0x389 // Size: 0x07

	// Functions

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetYAxisConfig(struct FCartesianAxisConfig& InCfg); // Offset: 0x101a9a66c // Return & Params: Num(1) Size(0x48)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetXAxisConfig(struct FCartesianAxisConfig& InCfg); // Offset: 0x101a9a5c0 // Return & Params: Num(1) Size(0x48)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetPlotScaleByRange(struct FCartesianAxisRange& InRangeX, struct FCartesianAxisRange& InRangeY); // Offset: 0x101a9a4d0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetPlotScale(struct FVector2D& InScale, struct FVector2D& InFocalCoords); // Offset: 0x101a9a3f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDataPointSize(enum class EKantanDataPointSize InSize); // Offset: 0x101a9a374 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetAxisTitlePadding(struct FMargin& InPadding); // Offset: 0x101a9a2e8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableSeries(struct FName ID, bool bEnable); // Offset: 0x101a9a228 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ConfigureSeries(struct FName ID, bool bDrawPoints, bool bDrawLines); // Offset: 0x101a9a11c // Return & Params: Num(3) Size(0xa)

	// Object Name: Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AddSeriesStyleOverride(struct FName SeriesId, struct UKantanPointStyle* PointStyle, struct FLinearColor Color); // Offset: 0x101a9a02c // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class KantanChartsUMG.KantanCartesianPlotBase
// Size: 0x390 // Inherited bytes: 0x390
struct UKantanCartesianPlotBase : UKantanCartesianChartBase {
};

// Object Name: Class KantanChartsUMG.CartesianPlot
// Size: 0x398 // Inherited bytes: 0x390
struct UCartesianPlot : UKantanCartesianPlotBase {
	// Fields
	struct UObject* DataSource; // Offset: 0x390 // Size: 0x08

	// Functions

	// Object Name: Function KantanChartsUMG.CartesianPlot.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetDatasource(struct UObject* InDatasource); // Offset: 0x101a99758 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class KantanChartsUMG.KantanChartLegend
// Size: 0x1f8 // Inherited bytes: 0x100
struct UKantanChartLegend : UWidget {
	// Fields
	struct FMargin Margins; // Offset: 0x100 // Size: 0x10
	struct FMargin SeriesPadding; // Offset: 0x110 // Size: 0x10
	struct FSlateBrush Background; // Offset: 0x120 // Size: 0xb8
	IntProperty FontSize; // Offset: 0x1d8 // Size: 0x04
	struct TWeakObjectPtr<struct UKantanCartesianChartBase> Chart; // Offset: 0x1dc // Size: 0x08
	char pad_0x1E4[0x14]; // Offset: 0x1e4 // Size: 0x14

	// Functions

	// Object Name: Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSeriesPadding(struct FMargin& InPadding); // Offset: 0x101a9b4d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanChartLegend.SetMargins
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetMargins(struct FMargin& InMargins); // Offset: 0x101a9b444 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function KantanChartsUMG.KantanChartLegend.SetFontSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFontSize(IntProperty InFontSize); // Offset: 0x101a9b3c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KantanChartsUMG.KantanChartLegend.SetChart
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetChart(struct UKantanCartesianChartBase* InChart); // Offset: 0x101a9b34c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KantanChartsUMG.KantanChartLegend.SetBackground
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetBackground(struct FSlateBrush& InBrush); // Offset: 0x101a9b2a0 // Return & Params: Num(1) Size(0xb8)
};

// Object Name: Class KantanChartsUMG.KantanTimeSeriesPlotBase
// Size: 0x3b0 // Inherited bytes: 0x390
struct UKantanTimeSeriesPlotBase : UKantanCartesianChartBase {
	// Fields
	bool bUseFixedTimeRange; // Offset: 0x389 // Size: 0x01
	float DisplayTimeRange; // Offset: 0x38c // Size: 0x04
	struct FCartesianRangeBound LowerTimeBound; // Offset: 0x390 // Size: 0x08
	struct FCartesianRangeBound UpperTimeBound; // Offset: 0x398 // Size: 0x08
	struct FCartesianRangeBound LowerValueBound; // Offset: 0x3a0 // Size: 0x08
	struct FCartesianRangeBound UpperValueBound; // Offset: 0x3a8 // Size: 0x08
};

// Object Name: Class KantanChartsUMG.SimpleBarChart
// Size: 0x340 // Inherited bytes: 0x328
struct USimpleBarChart : UKantanBarChartBase {
	// Fields
	char pad_0x328[0x18]; // Offset: 0x328 // Size: 0x18

	// Functions

	// Object Name: Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_UpdateCategoryValue(struct FName ID, float Value, bool& bSuccess); // Offset: 0x101a9bc28 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_RemoveCategory(struct FName ID, bool& bSuccess); // Offset: 0x101a9bb60 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_RemoveAllCategories(); // Offset: 0x101a9bb4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddCategoryWithId(struct FName ID, struct FText Name, bool& bSuccess); // Offset: 0x101a9b9f4 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function KantanChartsUMG.SimpleBarChart.BP_AddCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddCategory(struct FText Name, struct FName& CatId); // Offset: 0x101a9b8dc // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class KantanChartsUMG.SimpleCartesianPlot
// Size: 0x3a8 // Inherited bytes: 0x390
struct USimpleCartesianPlot : UKantanCartesianPlotBase {
	// Fields
	char pad_0x390[0x18]; // Offset: 0x390 // Size: 0x18

	// Functions

	// Object Name: Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_RemoveSeries(struct FName ID, bool& bSuccess); // Offset: 0x101a9c51c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_RemoveAllSeries(); // Offset: 0x101a9c508 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeriesWithId(bool& bSuccess, struct FName ID, struct FText Name, bool bEnabled, bool bShowPoints, bool bShowLines); // Offset: 0x101a9c2d0 // Return & Params: Num(6) Size(0x2b)

	// Object Name: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeries(struct FName& SeriesId, struct FText Name, bool bEnabled, bool bShowPoints, bool bShowLines); // Offset: 0x101a9c0d8 // Return & Params: Num(5) Size(0x23)

	// Object Name: Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_AddDatapoint(struct FName SeriesId, struct FVector2D& Point, bool& bSuccess); // Offset: 0x101a9bfc0 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class KantanChartsUMG.SimpleTimeSeriesPlot
// Size: 0x3c8 // Inherited bytes: 0x3b0
struct USimpleTimeSeriesPlot : UKantanTimeSeriesPlotBase {
	// Fields
	char pad_0x3B0[0x18]; // Offset: 0x3b0 // Size: 0x18

	// Functions

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_RemoveSeries(struct FName ID, bool& bSuccess); // Offset: 0x101a9cf20 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_RemoveAllSeries(); // Offset: 0x101a9cf0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeriesWithId(bool& bSuccess, struct FName ID, struct FText Name, bool bEnabled, bool bShowPoints, bool bShowLines); // Offset: 0x101a9ccd4 // Return & Params: Num(6) Size(0x2b)

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeries(struct FName& SeriesId, struct FText Name, bool bEnabled, bool bShowPoints, bool bShowLines); // Offset: 0x101a9cadc // Return & Params: Num(5) Size(0x23)

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddDatapointNow(struct FName SeriesId, float Value, bool& bSuccess); // Offset: 0x101a9c9d8 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_AddDatapoint(struct FName SeriesId, struct FVector2D& Point, bool& bSuccess); // Offset: 0x101a9c8c0 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class KantanChartsUMG.TimeSeriesPlot
// Size: 0x3b8 // Inherited bytes: 0x3b0
struct UTimeSeriesPlot : UKantanTimeSeriesPlotBase {
	// Fields
	struct UObject* DataSource; // Offset: 0x3b0 // Size: 0x08

	// Functions

	// Object Name: Function KantanChartsUMG.TimeSeriesPlot.SetDatasource
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetDatasource(struct UObject* InDatasource); // Offset: 0x101a9d314 // Return & Params: Num(2) Size(0x9)
};

