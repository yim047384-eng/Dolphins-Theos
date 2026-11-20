#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Object Name: Enum UMG.EButtonOnClickSound
enum class EButtonOnClickSound : uint8 {
	None = 0,
	Click = 1,
	Confirm = 2,
	Switch = 3,
	Object_Click = 4,
	Start = 5,
	Close = 6,
	Hall_click = 7,
	Menu_open = 8,
	Menu_close = 9,
	Item_get = 10,
	Page = 11,
	Set = 12,
	EButtonOnClickSound_MAX = 13
};

// Object Name: Enum UMG.EButtonClickGroupEnum
enum class EButtonClickGroupEnum : uint8 {
	None = 0,
	GlobalGroupOne = 1,
	GlobalGroupTwo = 2,
	GlobalGroupThere = 3,
	GlobalGroupFour = 4,
	GlobalGroupFive = 5,
	ModuleGroupOne = 6,
	ModuleGroupTwo = 7,
	ModuleGroupThere = 8,
	ModuleGroupFour = 9,
	ModuleGroupFive = 10,
	EButtonClickGroupEnum_MAX = 11
};

// Object Name: Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Object Name: Enum UMG.EAutoScrollType
enum class EAutoScrollType : uint8 {
	LeftRight = 0,
	PingPong = 1,
	EAutoScrollType_MAX = 2
};

// Object Name: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object Name: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Object Name: Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Object Name: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Object Name: Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	SimluateIphoneXNotch = 8,
	EWidgetDesignFlags_MAX = 9
};

// Object Name: Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Object Name: Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Object Name: Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Object Name: Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Object Name: Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Object Name: Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

