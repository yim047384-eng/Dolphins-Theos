#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct KantanChartsUMG.SeriesStyleManualMapping
// Size: 0x28 // Inherited bytes: 0x00
struct FSeriesStyleManualMapping {
	// Fields
	struct FName SeriesId; // Offset: 0x00 // Size: 0x08
	struct FKantanSeriesStyle Style; // Offset: 0x08 // Size: 0x20
};

// Object Name: ScriptStruct KantanChartsUMG.CategoryStyleManualMapping
// Size: 0x20 // Inherited bytes: 0x00
struct FCategoryStyleManualMapping {
	// Fields
	struct FName CategoryId; // Offset: 0x00 // Size: 0x08
	struct FKantanCategoryStyle Style; // Offset: 0x08 // Size: 0x18
};

