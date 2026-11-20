#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : uint8 {
	LeftBottom = 0,
	RightTop = 1,
	Floating = 2,
	EChartAxisPosition_MAX = 3
};

// Object Name: Enum KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	EKantanDataPointSize_MAX = 3
};

// Object Name: Enum KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : uint8 {
	FixedValue = 0,
	FitToData = 1,
	FitToDataRounded = 2,
	ECartesianRangeBoundType_MAX = 3
};

// Object Name: Enum KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : uint8 {
	FixedScale = 0,
	FixedRange = 1,
	ECartesianScalingType_MAX = 2
};

// Object Name: Enum KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : uint8 {
	NoValueLines = 0,
	ZeroLineOnly = 1,
	ZeroAndMaxLines = 2,
	EKantanBarValueExtents_MAX = 3
};

// Object Name: Enum KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : uint8 {
	NoLabels = 0,
	Standard = 1,
	Overlaid = 2,
	EKantanBarLabelPosition_MAX = 3
};

// Object Name: Enum KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : uint8 {
	Vertical = 0,
	Horizontal = 1,
	EKantanBarChartOrientation_MAX = 2
};

