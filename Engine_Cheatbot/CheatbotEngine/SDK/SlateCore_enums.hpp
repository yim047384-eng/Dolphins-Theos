#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Object Name: Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Object Name: Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Object Name: Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Object Name: Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Object Name: Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	HollowBox = 4,
	ESlateBrushDrawType_MAX = 5
};

// Object Name: Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Object Name: Enum SlateCore.EWidgetVisible
enum class EWidgetVisible : uint8 {
	Default = 0,
	ForceNotVisible = 1,
	ForceVisible = 2,
	MaxVisible = 2,
	EWidgetVisible_MAX = 3
};

// Object Name: Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	Invalid = 5,
	EUINavigationRule_MAX = 6
};

// Object Name: Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Object Name: Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Object Name: Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	PreciseTap = 1,
	EButtonTouchMethod_MAX = 2
};

// Object Name: Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Object Name: Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Object Name: Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Object Name: Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Object Name: Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Object Name: Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Object Name: Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Object Name: Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Object Name: Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Object Name: Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Object Name: Enum SlateCore.EHitTestAreaPolicyType
enum class EHitTestAreaPolicyType : uint8 {
	UnknowType = 0,
	CircularHitTestArea = 1,
	EHitTestAreaPolicyType_MAX = 2
};

// Object Name: Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Object Name: Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Object Name: Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Object Name: Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Object Name: Enum SlateCore.EBlurType
enum class EBlurType : uint8 {
	BlurType_None = 0,
	BlurType_Default = 1,
	BlurType_Directional = 2,
	BlurType_Radial = 3,
	BlurType_Rotate = 4,
	BlurType_AlphaOnly = 5,
	BlurType_MAX = 6
};

// Object Name: Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Object Name: Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_ComboBoxAbove = 13,
	MenuPlacement_MAX = 14
};

// Object Name: Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Object Name: Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Object Name: Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Object Name: Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Object Name: Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Object Name: Enum SlateCore.EFontFallback
enum class EFontFallback : uint8 {
	FF_NoFallback = 0,
	FF_LocalizedFallback = 1,
	FF_LastResortFallback = 2,
	FF_Max = 3
};

// Object Name: Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Object Name: Enum SlateCore.EWidgetPixelSnapping
enum class EWidgetPixelSnapping : uint8 {
	Inherit = 0,
	Disabled = 1,
	SnapToPixel = 2,
	EWidgetPixelSnapping_MAX = 3
};

