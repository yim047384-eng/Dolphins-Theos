#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class EZUMG.EnhancedButton
// Size: 0x208 // Inherited bytes: 0x118
struct UEnhancedButton : UContentWidget {
	// Fields
	struct FEnhancedButtonConfig Config; // Offset: 0x114 // Size: 0x10
	struct FScriptMulticastDelegate OnPressed; // Offset: 0x128 // Size: 0x10
	struct FScriptMulticastDelegate OnReleased; // Offset: 0x138 // Size: 0x10
	struct FScriptMulticastDelegate OnCancelled; // Offset: 0x148 // Size: 0x10
	struct FScriptMulticastDelegate OnDragStarted; // Offset: 0x158 // Size: 0x10
	struct FScriptMulticastDelegate OnDragMoved; // Offset: 0x168 // Size: 0x10
	struct FScriptMulticastDelegate OnDragEnded; // Offset: 0x178 // Size: 0x10
	struct FScriptMulticastDelegate OnSwipedUp; // Offset: 0x188 // Size: 0x10
	struct FScriptMulticastDelegate OnSwipedDown; // Offset: 0x198 // Size: 0x10
	struct FScriptMulticastDelegate OnSwipedLeft; // Offset: 0x1a8 // Size: 0x10
	struct FScriptMulticastDelegate OnSwipedRight; // Offset: 0x1b8 // Size: 0x10
	struct FScriptMulticastDelegate OnTapped; // Offset: 0x1c8 // Size: 0x10
	struct FScriptMulticastDelegate OnLongPressed; // Offset: 0x1d8 // Size: 0x10
	struct FScriptMulticastDelegate OnLongReleased; // Offset: 0x1e8 // Size: 0x10
	char pad_0x1F8[0x10]; // Offset: 0x1f8 // Size: 0x10

	// Functions

	// Object Name: Function EZUMG.EnhancedButton.GetCurrentHeldDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCurrentHeldDuration(); // Offset: 0x10219788c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EnhancedButton.ForceCancel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ForceCancel(); // Offset: 0x102197878 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function EZUMG.EnhancedButton.ApplyConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ApplyConfig(); // Offset: 0x102197864 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class EZUMG.EnhancedSlider
// Size: 0x4c0 // Inherited bytes: 0x498
struct UEnhancedSlider : USlider {
	// Fields
	bool bEnableSteppedSliding; // Offset: 0x498 // Size: 0x01
	bool bOnlyRespondToThumb; // Offset: 0x499 // Size: 0x01
	char pad_0x49A[0x2]; // Offset: 0x49a // Size: 0x02
	struct FLinearColor FilledBarColor; // Offset: 0x49c // Size: 0x10
	struct FLinearColor UnfilledBarColor; // Offset: 0x4ac // Size: 0x10
	char pad_0x4BC[0x4]; // Offset: 0x4bc // Size: 0x04

	// Functions

	// Object Name: Function EZUMG.EnhancedSlider.SetUnfilledBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetUnfilledBarColor(struct FLinearColor InValue); // Offset: 0x102197da4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function EZUMG.EnhancedSlider.SetOnlyRespondToThumb
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOnlyRespondToThumb(bool InValue); // Offset: 0x102197d20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.EnhancedSlider.SetFilledBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetFilledBarColor(struct FLinearColor InValue); // Offset: 0x102197ca4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function EZUMG.EnhancedSlider.SetEnableSteppedSliding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEnableSteppedSliding(bool InValue); // Offset: 0x102197c20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.EnhancedSlider.GetUnfilledBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetUnfilledBarColor(); // Offset: 0x102197be8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function EZUMG.EnhancedSlider.GetOnlyRespondToThumb
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetOnlyRespondToThumb(); // Offset: 0x102197bcc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.EnhancedSlider.GetFilledBarColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FLinearColor GetFilledBarColor(); // Offset: 0x102197b94 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function EZUMG.EnhancedSlider.GetEnableSteppedSliding
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetEnableSteppedSliding(); // Offset: 0x102197b78 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class EZUMG.EzAnimationLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UEzAnimationLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function EZUMG.EzAnimationLibrary.DuplicateAnimWithRemap
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UWidgetAnimation* DuplicateAnimWithRemap(struct UUserWidget* OwningWidget, struct UWidgetAnimation* Template, MapProperty& RemapTable); // Offset: 0x1021983c0 // Return & Params: Num(4) Size(0x68)

	// Object Name: Function EZUMG.EzAnimationLibrary.DuplicateAnimRebindTrack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UWidgetAnimation* DuplicateAnimRebindTrack(struct UUserWidget* OwningWidget, struct UWidgetAnimation* Template, struct UWidget* SourceWidget, struct UWidget* TargetWidget); // Offset: 0x102198298 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function EZUMG.EzAnimationLibrary.DuplicateAnimForWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UWidgetAnimation* DuplicateAnimForWidget(struct UUserWidget* OwningWidget, struct UWidgetAnimation* Template, struct UWidget* TargetWidget); // Offset: 0x1021981a8 // Return & Params: Num(4) Size(0x20)
};

// Object Name: Class EZUMG.EzFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UEzFactory : UInterface {
	// Functions

	// Object Name: Function EZUMG.EzFactory.SetNum
	// Flags: [Native|Public|BlueprintCallable]
	void SetNum(IntProperty NumItems); // Offset: 0x10219877c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EzFactory.RemoveLastItem
	// Flags: [Native|Public|BlueprintCallable]
	bool RemoveLastItem(); // Offset: 0x102198740 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.EzFactory.GetFactoryItemCount
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetFactoryItemCount(); // Offset: 0x102198704 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EzFactory.AddItem
	// Flags: [Native|Public|BlueprintCallable]
	struct UWidget* AddItem(); // Offset: 0x1021986c8 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class EZUMG.EzSelectable
// Size: 0x28 // Inherited bytes: 0x28
struct UEzSelectable : UInterface {
	// Functions

	// Object Name: Function EZUMG.EzSelectable.OnStateRefresh
	// Flags: [Event|Public|BlueprintEvent]
	void OnStateRefresh(enum class EEzItemState NewState); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class EZUMG.EzSelectorSlot
// Size: 0x28 // Inherited bytes: 0x28
struct UEzSelectorSlot : UInterface {
};

// Object Name: Class EZUMG.EzSelector
// Size: 0x28 // Inherited bytes: 0x28
struct UEzSelector : UInterface {
	// Functions

	// Object Name: Function EZUMG.EzSelector.SetSelectedIndex
	// Flags: [Native|Public|BlueprintCallable]
	void SetSelectedIndex(IntProperty NewIndex); // Offset: 0x102199160 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EzSelector.SetItemState
	// Flags: [Native|Public|BlueprintCallable]
	void SetItemState(IntProperty ItemIndex, enum class EEzItemState NewState); // Offset: 0x1021990a0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function EZUMG.EzSelector.SetItemEnabled
	// Flags: [Native|Public|BlueprintCallable]
	void SetItemEnabled(IntProperty ItemIndex, bool bEnabled); // Offset: 0x102198fdc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function EZUMG.EzSelector.IsItemEnabled
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsItemEnabled(IntProperty ItemIndex); // Offset: 0x102198f48 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function EZUMG.EzSelector.GetSelectedIndex
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSelectedIndex(); // Offset: 0x102198f0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EzSelector.GetItemState
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EEzItemState GetItemState(IntProperty ItemIndex); // Offset: 0x102198e78 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function EZUMG.EzSelector.GetHoveredIndex
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetHoveredIndex(); // Offset: 0x102198e3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.EzSelector.GetFocusedIndex
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetFocusedIndex(); // Offset: 0x102198e00 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class EZUMG.HorizontalSelectorSlot
// Size: 0x78 // Inherited bytes: 0x68
struct UHorizontalSelectorSlot : UHorizontalBoxSlot {
	// Fields
	char pad_0x68[0x10]; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class EZUMG.HorizontalSelector
// Size: 0x188 // Inherited bytes: 0x128
struct UHorizontalSelector : UHorizontalBox {
	// Fields
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
	struct UWidget* itemType; // Offset: 0x138 // Size: 0x08
	struct UHorizontalSelectorSlot* DefaultSlotTemplate; // Offset: 0x140 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct UWidget>> FactoryCreatedItems; // Offset: 0x148 // Size: 0x10
	DelegateProperty OnItemSelected; // Offset: 0x158 // Size: 0x10
	struct FScriptMulticastDelegate OnItemStateChanged; // Offset: 0x168 // Size: 0x10
	char pad_0x178[0x10]; // Offset: 0x178 // Size: 0x10

	// Functions

	// Object Name: Function EZUMG.HorizontalSelector.GetChildIndexAtPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndexAtPosition(struct FVector2D& LocalPosition); // Offset: 0x102199758 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class EZUMG.RadialPanel
// Size: 0x130 // Inherited bytes: 0x118
struct URadialPanel : UPanelWidget {
	// Fields
	float AngleOffset; // Offset: 0x114 // Size: 0x04
	float SectorPadding; // Offset: 0x118 // Size: 0x04
	enum class ERadialArrangement Arrangement; // Offset: 0x11c // Size: 0x01
	char pad_0x121[0xf]; // Offset: 0x121 // Size: 0x0f

	// Functions

	// Object Name: Function EZUMG.RadialPanel.SetStartAngleOffset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetStartAngleOffset(float InStartAngleOffset); // Offset: 0x102199c18 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialPanel.SetSectorPadding
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSectorPadding(float InSectorPadding); // Offset: 0x102199b9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialPanel.SetArrangement
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetArrangement(enum class ERadialArrangement InArrangement); // Offset: 0x102199b20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.RadialPanel.GetAngleAtPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	float GetAngleAtPosition(struct FVector2D LocalPosition); // Offset: 0x102199a98 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class EZUMG.RadialSlot
// Size: 0x128 // Inherited bytes: 0x40
struct URadialSlot : UPanelSlot {
	// Fields
	enum class ESectorSizeRule SectorSizeRule; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0x3]; // Offset: 0x41 // Size: 0x03
	float SectorSizeValue; // Offset: 0x44 // Size: 0x04
	float InnerRadiusRatio; // Offset: 0x48 // Size: 0x04
	float OuterRadiusRatio; // Offset: 0x4c // Size: 0x04
	bool bAutoSize; // Offset: 0x50 // Size: 0x01
	char pad_0x51[0x7]; // Offset: 0x51 // Size: 0x07
	struct FSlateBrush SectorBrush; // Offset: 0x58 // Size: 0xb8
	struct FLinearColor SectorColorAndOpacity; // Offset: 0x110 // Size: 0x10
	char pad_0x120[0x8]; // Offset: 0x120 // Size: 0x08

	// Functions

	// Object Name: Function EZUMG.RadialSlot.SlotAsRadialSlot
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct URadialSlot* SlotAsRadialSlot(struct UWidget* Widget); // Offset: 0x10219a830 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function EZUMG.RadialSlot.SetSectorSizeValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSectorSizeValue(float Value); // Offset: 0x10219a7b4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialSlot.SetSectorSizeRule
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSectorSizeRule(enum class ESectorSizeRule InRule); // Offset: 0x10219a738 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.RadialSlot.SetSectorColorAndOpacity
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetSectorColorAndOpacity(struct FLinearColor& InTint); // Offset: 0x10219a6b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function EZUMG.RadialSlot.SetSectorBrush
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetSectorBrush(struct FSlateBrush& InBrush); // Offset: 0x10219a604 // Return & Params: Num(1) Size(0xb8)

	// Object Name: Function EZUMG.RadialSlot.SetOuterRadiusRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOuterRadiusRatio(float InOuterRadiusRatio); // Offset: 0x10219a588 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialSlot.SetInnerRadiusRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetInnerRadiusRatio(float InInnerRadiusRatio); // Offset: 0x10219a50c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialSlot.SetAutoSize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoSize(bool bInAutoSize); // Offset: 0x10219a488 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function EZUMG.RadialSlot.GetCenterRadiusRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCenterRadiusRatio(); // Offset: 0x10219a454 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialSlot.GetCenterAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetCenterAngle(); // Offset: 0x10219a420 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function EZUMG.RadialSlot.GetArcSize
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetArcSize(); // Offset: 0x10219a3ec // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class EZUMG.RadialSelectorSlot
// Size: 0x138 // Inherited bytes: 0x128
struct URadialSelectorSlot : URadialSlot {
	// Fields
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
};

// Object Name: Class EZUMG.RadialSelector
// Size: 0x180 // Inherited bytes: 0x130
struct URadialSelector : URadialPanel {
	// Fields
	char pad_0x130[0x10]; // Offset: 0x130 // Size: 0x10
	struct UWidget* itemType; // Offset: 0x140 // Size: 0x08
	struct URadialSelectorSlot* DefaultSlotTemplate; // Offset: 0x148 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct UWidget>> FactoryCreatedItems; // Offset: 0x150 // Size: 0x10
	DelegateProperty OnItemSelected; // Offset: 0x160 // Size: 0x10
	struct FScriptMulticastDelegate OnItemStateChanged; // Offset: 0x170 // Size: 0x10

	// Functions

	// Object Name: Function EZUMG.RadialSelector.GetChildIndexByVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndexByVector(struct FVector2D& CenterOffset, float DeadzoneLength); // Offset: 0x10219a134 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function EZUMG.RadialSelector.GetChildIndexByAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndexByAngle(float Angle); // Offset: 0x10219a0a8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function EZUMG.RadialSelector.GetChildIndexAtPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndexAtPosition(struct FVector2D& LocalPosition); // Offset: 0x10219a010 // Return & Params: Num(2) Size(0xc)
};

// Object Name: Class EZUMG.VerticalSelectorSlot
// Size: 0x78 // Inherited bytes: 0x68
struct UVerticalSelectorSlot : UVerticalBoxSlot {
	// Fields
	char pad_0x68[0x10]; // Offset: 0x68 // Size: 0x10
};

// Object Name: Class EZUMG.VerticalSelector
// Size: 0x188 // Inherited bytes: 0x128
struct UVerticalSelector : UVerticalBox {
	// Fields
	char pad_0x128[0x10]; // Offset: 0x128 // Size: 0x10
	struct UWidget* itemType; // Offset: 0x138 // Size: 0x08
	struct UVerticalSelectorSlot* DefaultSlotTemplate; // Offset: 0x140 // Size: 0x08
	struct TArray<struct TWeakObjectPtr<struct UWidget>> FactoryCreatedItems; // Offset: 0x148 // Size: 0x10
	DelegateProperty OnItemSelected; // Offset: 0x158 // Size: 0x10
	struct FScriptMulticastDelegate OnItemStateChanged; // Offset: 0x168 // Size: 0x10
	char pad_0x178[0x10]; // Offset: 0x178 // Size: 0x10

	// Functions

	// Object Name: Function EZUMG.VerticalSelector.GetChildIndexAtPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetChildIndexAtPosition(struct FVector2D& LocalPosition); // Offset: 0x10219ad98 // Return & Params: Num(2) Size(0xc)
};

