#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum UnrealArchExt.EWidgetCompareType
enum class EWidgetCompareType : uint8 {
	Equal = 0,
	NotEqual = 1,
	LessThan = 2,
	LargeThan = 3,
	EqualLessThan = 4,
	EqualLargeThan = 5,
	EWidgetCompareType_MAX = 6
};

// Object Name: Enum UnrealArchExt.EUserWidgetNameEqualPolitics
enum class EUserWidgetNameEqualPolitics : uint8 {
	Normal = 0,
	StartsWith = 1,
	Regex = 2,
	EUserWidgetNameEqualPolitics_MAX = 3
};

// Object Name: Enum UnrealArchExt.EUserWidgetFadingStatus
enum class EUserWidgetFadingStatus : uint8 {
	UserWidgetFadingStatus_None = 0,
	UserWidgetFadingStatus_FadingIn = 1,
	UserWidgetFadingStatus_FadingOut = 2,
	UserWidgetFadingStatus_MAX = 3
};

// Object Name: Enum UnrealArchExt.EUAEUIMsgCallType
enum class EUAEUIMsgCallType : uint8 {
	MCT_OnlySelf = 0,
	MCT_AllFunc = 1,
	MCT_MAX = 2
};

