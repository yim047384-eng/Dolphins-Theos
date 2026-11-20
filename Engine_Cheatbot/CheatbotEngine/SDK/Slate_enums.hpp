#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Object Name: Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	AllowPerWordHyphenWrapping = 2,
	ETextWrappingPolicy_MAX = 3
};

// Object Name: Enum Slate.ETextVerticalJustify
enum class ETextVerticalJustify : uint8 {
	Top = 0,
	Middle = 1,
	Down = 2,
	ETextVerticalJustify_MAX = 3
};

// Object Name: Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Object Name: Enum Slate.EJoystickOperatingMode
enum class EJoystickOperatingMode : uint8 {
	JSNormal = 0,
	JSEightDirection = 1,
	JSEasyGoStraight = 2,
	EJoystickOperatingMode_MAX = 3
};

// Object Name: Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3
};

// Object Name: Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Object Name: Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Object Name: Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5
};

// Object Name: Enum Slate.EStretch
enum class EStretch : uint8 {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Object Name: Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Object Name: Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Object Name: Enum Slate.EJoystickIsInside
enum class EJoystickIsInside : uint8 {
	EJII_LeftAndVisualSize = 0,
	EJII_VisualSize = 1,
	EJII_DynamicSize = 2,
	EJII_MAX = 3
};

// Object Name: Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

