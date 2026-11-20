#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class CustomLayout.CustomizePanel
// Size: 0x168 // Inherited bytes: 0x130
struct UCustomizePanel : UCanvasPanel {
	// Fields
	struct FScriptMulticastDelegate OnCustomLayoutChangeEvent; // Offset: 0x130 // Size: 0x10
	struct FMargin DetectMargin; // Offset: 0x140 // Size: 0x10
	struct FCustomLayoutBlueprintCode DefaultLayoutCode; // Offset: 0x150 // Size: 0x08
	IntProperty CustomType; // Offset: 0x158 // Size: 0x04
	float Opacity; // Offset: 0x15c // Size: 0x04
	bool bInvalid; // Offset: 0x160 // Size: 0x01
	bool bInterceptChildInput; // Offset: 0x161 // Size: 0x01
	bool bMovable; // Offset: 0x162 // Size: 0x01
	char pad_0x163[0x5]; // Offset: 0x163 // Size: 0x05

	// Functions

	// Object Name: Function CustomLayout.CustomizePanel.SetScale
	// Flags: [Native|Public|BlueprintCallable]
	void SetScale(float Scale); // Offset: 0x10213b154 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.SetPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetPosition(struct FVector2D& Position); // Offset: 0x10213b0cc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.SetOpacityWithClamp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetOpacityWithClamp(float InOpacity, float MinOpacity, float MaxOpacity); // Offset: 0x10213afdc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function CustomLayout.CustomizePanel.SetOpacity
	// Flags: [Native|Public|BlueprintCallable]
	void SetOpacity(float InOpacity); // Offset: 0x10213af58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.SetMovable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetMovable(bool bInMovable); // Offset: 0x10213aed4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.SetMaxScale
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void SetMaxScale(float Scale); // Offset: 0x10213ae58 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.SetInvalid
	// Flags: [Native|Public|BlueprintCallable]
	void SetInvalid(bool Invalid); // Offset: 0x10213adcc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.SetInterceptChildInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetInterceptChildInput(bool bInIntercept); // Offset: 0x10213ad48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.SetDrawMargin
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDrawMargin(bool bDraw); // Offset: 0x10213acc4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.SetDetectMargin
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetDetectMargin(struct FMargin& InMargin); // Offset: 0x10213ac38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CustomLayout.CustomizePanel.SetDesireScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDesireScale(float Scale); // Offset: 0x10213abbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.SetDesirePosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetDesirePosition(struct FVector2D& Position); // Offset: 0x10213ab34 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.SetDefaultLayoutCode
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetDefaultLayoutCode(struct FCustomLayoutBlueprintCode& InCode); // Offset: 0x10213aaa4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.SetDefaultLayoutByPositionAndAnchors
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetDefaultLayoutByPositionAndAnchors(struct FVector2D& InPosition, struct FAnchors& InAnchors); // Offset: 0x10213a9c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CustomLayout.CustomizePanel.SetCustomType
	// Flags: [Native|Public|BlueprintCallable]
	void SetCustomType(IntProperty NewType); // Offset: 0x10213a944 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.RestoreInBound
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void RestoreInBound(); // Offset: 0x10213a930 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomizePanel.ResetMaxScale
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void ResetMaxScale(); // Offset: 0x10213a91c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomizePanel.IsOutOfBound
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsOutOfBound(float InvisibleCheckOffset); // Offset: 0x10213a890 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function CustomLayout.CustomizePanel.InitDefaultLayoutData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitDefaultLayoutData(); // Offset: 0x10213a87c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomizePanel.GetScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetScale(); // Offset: 0x10213a848 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.GetPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D GetPosition(); // Offset: 0x10213a814 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.GetOpacity
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetOpacity(); // Offset: 0x10213a7d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.GetMovable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetMovable(); // Offset: 0x10213a7a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.GetMaxScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetMaxScale(); // Offset: 0x10213a770 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.GetLayoutData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FUIElemLayoutDetail GetLayoutData(); // Offset: 0x10213a720 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function CustomLayout.CustomizePanel.GetLayoutCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FCustomLayoutBlueprintCode GetLayoutCode(); // Offset: 0x10213a6ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.GetInvalid
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetInvalid(); // Offset: 0x10213a6b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomizePanel.GetDefaultLayoutData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FUIElemLayoutDetail GetDefaultLayoutData(); // Offset: 0x10213a660 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function CustomLayout.CustomizePanel.GetCustomType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCustomType(); // Offset: 0x10213a62c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomizePanel.ClampPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector2D ClampPosition(struct FVector2D& DesiredPos); // Offset: 0x10213a594 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.CustomizePanel.ApplyLayoutData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ApplyLayoutData(struct FUIElemLayoutDetail& LayoutDetail); // Offset: 0x10213a4f0 // Return & Params: Num(1) Size(0x28)

	// Object Name: Function CustomLayout.CustomizePanel.ApplyLayoutCode
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ApplyLayoutCode(struct FCustomLayoutBlueprintCode& InCode); // Offset: 0x10213a460 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomizePanel.ApplyDefaultLayout
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ApplyDefaultLayout(); // Offset: 0x10213a44c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class CustomLayout.CustomLayoutBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UCustomLayoutBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.MakeLayoutDetail
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FUIElemLayoutDetail MakeLayoutDetail(IntProperty Type, enum class EAnchorsType AnchorType, struct FVector2D Offset); // Offset: 0x10213c180 // Return & Params: Num(4) Size(0x38)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_TypeToAnchors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FAnchors Conv_TypeToAnchors(enum class EAnchorsType InType); // Offset: 0x10213c100 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_TouchStatInfoToLong
	// Flags: [Final|Native|Static|Public|HasOutParms]
	uint64 Conv_TouchStatInfoToLong(struct FTouchStatInfo& Info); // Offset: 0x10213c074 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_LongToTouchStatInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	struct FTouchStatInfo Conv_LongToTouchStatInfo(uint64& Num); // Offset: 0x10213bfe8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_LayoutDetailToCode
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FCustomLayoutBlueprintCode Conv_LayoutDetailToCode(struct FUIElemLayoutDetail& InDetail); // Offset: 0x10213bf44 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_CodeToLayoutDetail
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FUIElemLayoutDetail Conv_CodeToLayoutDetail(struct FCustomLayoutBlueprintCode& InCode, IntProperty Type); // Offset: 0x10213be5c // Return & Params: Num(3) Size(0x34)

	// Object Name: Function CustomLayout.CustomLayoutBlueprintLibrary.Conv_AnchorsToType
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	enum class EAnchorsType Conv_AnchorsToType(struct FAnchors& InAnchors); // Offset: 0x10213bdd0 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class CustomLayout.CustomLayoutSubsystem
// Size: 0xa8 // Inherited bytes: 0x30
struct UCustomLayoutSubsystem : UGameInstanceSubsystem {
	// Fields
	struct TArray<struct UCustomLayoutUserSetting*> UserSettingSlots; // Offset: 0x30 // Size: 0x10
	struct FScriptMulticastDelegate OnPanelTouchPreview; // Offset: 0x40 // Size: 0x10
	char pad_0x50[0x58]; // Offset: 0x50 // Size: 0x58

	// Functions

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.UnregisterCustomPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnregisterCustomPanel(struct UCustomPanel* InCustomizePanel); // Offset: 0x10213ccbc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.SetScreenPadding
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetScreenPadding(struct FMargin& InOffset); // Offset: 0x10213cc38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.SetEditMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEditMode(bool bEnable); // Offset: 0x10213cbb4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.RemoveUserSettingSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveUserSettingSlot(struct UCustomLayoutUserSetting* InUserSetting); // Offset: 0x10213cb38 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.RegisterCustomPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterCustomPanel(struct UCustomPanel* InCustomizePanel); // Offset: 0x10213cabc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.InsertUserSettingSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InsertUserSettingSlot(struct UCustomLayoutUserSetting* InUserSetting, IntProperty Index); // Offset: 0x10213ca04 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.GetUserSettingInSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCustomLayoutUserSetting* GetUserSettingInSlot(StrProperty Name); // Offset: 0x10213c95c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.GetRegisteredPanel
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCustomPanel* GetRegisteredPanel(IntProperty InCustomType); // Offset: 0x10213c8d0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.FlushRegisteredPanelMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FlushRegisteredPanelMap(); // Offset: 0x10213c8bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.FindLayoutDetail
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool FindLayoutDetail(IntProperty InCustomType, struct FUIElemLayoutDetail& OutDetail); // Offset: 0x10213c7d0 // Return & Params: Num(3) Size(0x2d)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.ClearUserSettingSlots
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearUserSettingSlots(); // Offset: 0x10213c7bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.ClearRegisteredPanelMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearRegisteredPanelMap(); // Offset: 0x10213c7a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.BroadcastCustomLayoutChange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BroadcastCustomLayoutChange(struct TArray<IntProperty>& InCustomTypeList); // Offset: 0x10213c700 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutSubsystem.AddUserSettingSlot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddUserSettingSlot(struct UCustomLayoutUserSetting* InUserSetting); // Offset: 0x10213c684 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class CustomLayout.CustomLayoutUserSetting
// Size: 0xa0 // Inherited bytes: 0x28
struct UCustomLayoutUserSetting : USaveGame {
	// Fields
	IntProperty CodecVersion; // Offset: 0x28 // Size: 0x04
	IntProperty ViewportWidth; // Offset: 0x2c // Size: 0x04
	IntProperty ViewportHeight; // Offset: 0x30 // Size: 0x04
	float ViewportScale; // Offset: 0x34 // Size: 0x04
	struct FDateTime TimeTag; // Offset: 0x38 // Size: 0x08
	StrProperty SaveSlotName; // Offset: 0x40 // Size: 0x10
	MapProperty LayoutCodeMap; // Offset: 0x50 // Size: 0x50

	// Functions

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.UpdateTimeTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateTimeTag(); // Offset: 0x10213d638 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.SetTimeTagFromUnixTimestamp
	// Flags: [Final|Native|Public]
	void SetTimeTagFromUnixTimestamp(int64_t InUnixTimestamp); // Offset: 0x10213d5bc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.SetDataByLayoutDetail
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetDataByLayoutDetail(IntProperty InCustomType, struct FUIElemLayoutDetail& InData); // Offset: 0x10213d4e0 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.RemoveData
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveData(IntProperty InCustomType); // Offset: 0x10213d464 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.GetTimeTagAsUnixTimestamp
	// Flags: [Final|Native|Public|Const]
	int64_t GetTimeTagAsUnixTimestamp(); // Offset: 0x10213d430 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.GetLayoutCodeCheckSum
	// Flags: [Final|Native|Public|Const]
	uint64 GetLayoutCodeCheckSum(); // Offset: 0x10213d3fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.GetDataAsLayoutDetail
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FUIElemLayoutDetail GetDataAsLayoutDetail(IntProperty InCustomType); // Offset: 0x10213d35c // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.GetCustomTypeList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetCustomTypeList(struct TArray<IntProperty>& OutKeys); // Offset: 0x10213d2b4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function CustomLayout.CustomLayoutUserSetting.Contains
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool Contains(IntProperty InCustomType); // Offset: 0x10213d228 // Return & Params: Num(2) Size(0x5)
};

// Object Name: Class CustomLayout.CustomPanel
// Size: 0x170 // Inherited bytes: 0x168
struct UCustomPanel : UCustomizePanel {
	// Fields
	char pad_0x168[0x8]; // Offset: 0x168 // Size: 0x08

	// Functions

	// Object Name: Function CustomLayout.CustomPanel.UpdateCustomLayout
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UpdateCustomLayout(); // Offset: 0x10213db3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.CustomPanel.SetEditable
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEditable(bool bEditable); // Offset: 0x10213dab8 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class CustomLayout.DynamicCustomIndexer
// Size: 0xd0 // Inherited bytes: 0x30
struct UDynamicCustomIndexer : UDataAsset {
	// Fields
	MapProperty InfoMap; // Offset: 0x30 // Size: 0x50
	MapProperty DefaultLayoutData; // Offset: 0x80 // Size: 0x50

	// Functions

	// Object Name: Function CustomLayout.DynamicCustomIndexer.GetIndexer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDynamicCustomIndexer* GetIndexer(StrProperty Path); // Offset: 0x10213e034 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CustomLayout.DynamicCustomIndexer.GetDefaultLayoutCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FCustomLayoutBlueprintCode GetDefaultLayoutCode(IntProperty CustomType); // Offset: 0x10213dfa8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.DynamicCustomIndexer.CreateDynamicCustomWidgets
	// Flags: [Final|Native|Public|HasOutParms]
	MapProperty CreateDynamicCustomWidgets(struct TArray<IntProperty>& InCustomTypeList, MapProperty& CustomPanelMap, struct UCanvasPanel* Container, bool bIgnoreDPIScale); // Offset: 0x10213ddc4 // Return & Params: Num(5) Size(0xc0)
};

// Object Name: Class CustomLayout.PinchDragWidget
// Size: 0x2a8 // Inherited bytes: 0x260
struct UPinchDragWidget : UUserWidget {
	// Fields
	DelegateProperty OnDrag; // Offset: 0x260 // Size: 0x10
	DelegateProperty OnPinch; // Offset: 0x270 // Size: 0x10
	DelegateProperty OnRelease; // Offset: 0x280 // Size: 0x10
	char pad_0x290[0x18]; // Offset: 0x290 // Size: 0x18

	// Functions

	// Object Name: Function CustomLayout.PinchDragWidget.SetPinchEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPinchEnabled(bool bEnabled); // Offset: 0x10213e650 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.PinchDragWidget.SetDragEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDragEnabled(bool bEnabled); // Offset: 0x10213e5e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.PinchDragWidget.ScreenDeltaToParentLocal
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D ScreenDeltaToParentLocal(struct UWidget* Widget, struct FVector2D& ScreenDelta); // Offset: 0x10213e520 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function CustomLayout.PinchDragWidget.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Reset(); // Offset: 0x10213e50c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.PinchDragWidget.IsPinchEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPinchEnabled(); // Offset: 0x10213e4d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.PinchDragWidget.IsFirstPointIndex
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsFirstPointIndex(struct FPointerEvent& InPointerEvent); // Offset: 0x10213e3cc // Return & Params: Num(2) Size(0x79)

	// Object Name: Function CustomLayout.PinchDragWidget.IsDragEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsDragEnabled(); // Offset: 0x10213e394 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class CustomLayout.SettingCustomPanel
// Size: 0x1e0 // Inherited bytes: 0x168
struct USettingCustomPanel : UCustomizePanel {
	// Fields
	enum class ESCPDisplayState DisplayState; // Offset: 0x168 // Size: 0x01
	char pad_0x169[0x7]; // Offset: 0x169 // Size: 0x07
	struct UMaterialInterface* SelectedImageCircularFlashEffectMaterial; // Offset: 0x170 // Size: 0x08
	struct UMaterialInterface* SelectedImageSquareFlashEffectMaterial; // Offset: 0x178 // Size: 0x08
	char pad_0x180[0x10]; // Offset: 0x180 // Size: 0x10
	MapProperty WidgetPtrMap; // Offset: 0x190 // Size: 0x50

	// Functions

	// Object Name: Function CustomLayout.SettingCustomPanel.SetSelectedImageOriginEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSelectedImageOriginEffect(); // Offset: 0x10213f074 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.SettingCustomPanel.SetSelectedImageFlashEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSelectedImageFlashEffect(); // Offset: 0x10213f060 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.SettingCustomPanel.SetDisplayState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDisplayState(enum class ESCPDisplayState State); // Offset: 0x10213efe4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function CustomLayout.SettingCustomPanel.OnTouchPreview
	// Flags: [Event|Protected|BlueprintEvent]
	void OnTouchPreview(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function CustomLayout.SettingCustomPanel.IsSquareFlashEffectAssetName
	// Flags: [Event|Public|BlueprintEvent]
	bool IsSquareFlashEffectAssetName(StrProperty InAssetName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function CustomLayout.SettingCustomPanel.IsCircleFlashEffectAssetName
	// Flags: [Event|Public|BlueprintEvent]
	bool IsCircleFlashEffectAssetName(StrProperty InAssetName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetWidgetByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWidget* GetWidgetByType(struct UWidget* RootWidget, struct UWidget* WidgetType); // Offset: 0x10213ef20 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetSelectedImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImage* GetSelectedImage(); // Offset: 0x10213eeec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetParentWidget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetParentWidget(); // Offset: 0x10213eeb8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetNamedWidgetFromOwner
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWidget* GetNamedWidgetFromOwner(StrProperty Prefix); // Offset: 0x10213edc4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetInvalidImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImage* GetInvalidImage(); // Offset: 0x10213ed90 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function CustomLayout.SettingCustomPanel.GetCenterPositionInScreenSpace
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D GetCenterPositionInScreenSpace(struct UWidget* FullScreenWidget); // Offset: 0x10213ed04 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function CustomLayout.SettingCustomPanel.FlashHighlight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void FlashHighlight(float Seconds); // Offset: 0x10213ec88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function CustomLayout.SettingCustomPanel.ConvertCenterPositionFromScreenSpace
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FVector2D ConvertCenterPositionFromScreenSpace(struct UWidget* FullScreenWidget, struct FVector2D& SSPosition); // Offset: 0x10213ebb4 // Return & Params: Num(3) Size(0x18)
};

