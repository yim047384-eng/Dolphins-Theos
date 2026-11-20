#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class KantanChartsDatasource.KantanCartesianDatasourceInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UKantanCartesianDatasourceInterface : UInterface {
	// Functions

	// Object Name: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FText GetSeriesName(IntProperty SeriesIdx); // Offset: 0x101a7adc4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FName GetSeriesId(IntProperty CatIdx); // Offset: 0x101a7ad30 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct TArray<struct FKantanCartesianDatapoint> GetSeriesDatapoints(IntProperty SeriesIdx); // Offset: 0x101a7ac74 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	IntProperty GetNumSeries(); // Offset: 0x101a7ac38 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class KantanChartsDatasource.KantanCategoryDatasourceInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UKantanCategoryDatasourceInterface : UInterface {
	// Functions

	// Object Name: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	IntProperty GetNumCategories(); // Offset: 0x101a7b5f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	float GetCategoryValue(IntProperty CatIdx); // Offset: 0x101a7b55c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FText GetCategoryName(IntProperty CatIdx); // Offset: 0x101a7b4a0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	struct FName GetCategoryId(IntProperty CatIdx); // Offset: 0x101a7b40c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class KantanChartsDatasource.KantanSimpleCartesianDatasource
// Size: 0x40 // Inherited bytes: 0x28
struct UKantanSimpleCartesianDatasource : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18

	// Functions

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource(); // Offset: 0x101a7bf50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_RemoveSeries(struct FName ID, bool& bSuccess); // Offset: 0x101a7be88 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_RemoveAllSeries(); // Offset: 0x101a7be74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeriesWithId(struct FName ID, struct FText Name, bool& bSuccess); // Offset: 0x101a7bd1c // Return & Params: Num(3) Size(0x21)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddSeries(struct FText Name, struct FName& SeriesId); // Offset: 0x101a7bc04 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_AddDatapoint(struct FName SeriesId, struct FVector2D& Point, bool& bSuccess); // Offset: 0x101a7baec // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class KantanChartsDatasource.KantanSimpleCategoryDatasource
// Size: 0x40 // Inherited bytes: 0x28
struct UKantanSimpleCategoryDatasource : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18

	// Functions

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource(); // Offset: 0x101a7c6a8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_UpdateCategoryValue(struct FName ID, float Value, bool& bSuccess); // Offset: 0x101a7c5a4 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_RemoveCategory(struct FName ID, bool& bSuccess); // Offset: 0x101a7c4dc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories
	// Flags: [Final|Native|Public|BlueprintCallable]
	void BP_RemoveAllCategories(); // Offset: 0x101a7c4c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddCategoryWithId(struct FName ID, struct FText Name, bool& bSuccess); // Offset: 0x101a7c370 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_AddCategory(struct FText Name, struct FName& CatId); // Offset: 0x101a7c258 // Return & Params: Num(2) Size(0x20)
};

