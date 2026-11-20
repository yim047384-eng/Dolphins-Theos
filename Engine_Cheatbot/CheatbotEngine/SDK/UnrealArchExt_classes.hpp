#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UnrealArchExt.UAEUserWidget
// Size: 0x418 // Inherited bytes: 0x260
struct UUAEUserWidget : UUserWidget {
	// Fields
	struct UFrontendHUD* OwningFrontendHUD; // Offset: 0x260 // Size: 0x08
	struct ULogicManagerBase* OwningLogicManager; // Offset: 0x268 // Size: 0x08
	struct UUAEWidgetContainer* OwningWidgetContainer; // Offset: 0x270 // Size: 0x08
	struct UUAEUserWidget* ParentWidget; // Offset: 0x278 // Size: 0x08
	char pad_0x280[0xa0]; // Offset: 0x280 // Size: 0xa0
	struct TArray<struct UProperty*> Params; // Offset: 0x320 // Size: 0x10
	char pad_0x330[0x10]; // Offset: 0x330 // Size: 0x10
	struct FScriptMulticastDelegate widgetSizeNofity; // Offset: 0x340 // Size: 0x10
	struct FUserWidgetState DefaultUserWidgetState; // Offset: 0x350 // Size: 0x28
	struct FUserWidgetState CurrentUserWidgetState; // Offset: 0x378 // Size: 0x28
	float TickRate; // Offset: 0x3a0 // Size: 0x04
	bool bReceiveOnClickedEvent; // Offset: 0x3a4 // Size: 0x01
	bool bReceiveOnRightClickedEvent; // Offset: 0x3a5 // Size: 0x01
	bool bReceiveOnDoubleClickedEvent; // Offset: 0x3a6 // Size: 0x01
	bool bAutoSetScreenPosOnMouseEnter; // Offset: 0x3a7 // Size: 0x01
	struct FVector2D ScreenPos; // Offset: 0x3a8 // Size: 0x08
	struct FVector2D LastMouseEventScreenPos; // Offset: 0x3b0 // Size: 0x08
	char pad_0x3B8[0x8]; // Offset: 0x3b8 // Size: 0x08
	enum class EUserWidgetFadingStatus FadingStatus; // Offset: 0x3c0 // Size: 0x01
	char pad_0x3C1[0x3]; // Offset: 0x3c1 // Size: 0x03
	float CurrentOpacity; // Offset: 0x3c4 // Size: 0x04
	float FadingInTime; // Offset: 0x3c8 // Size: 0x04
	float FadingOutTime; // Offset: 0x3cc // Size: 0x04
	bool bNoFadeIn; // Offset: 0x3d0 // Size: 0x01
	bool bNoFadeOut; // Offset: 0x3d1 // Size: 0x01
	bool bShouldCollapse; // Offset: 0x3d2 // Size: 0x01
	bool bRegistUIMsg; // Offset: 0x3d3 // Size: 0x01
	char pad_0x3D4[0x4]; // Offset: 0x3d4 // Size: 0x04
	StrProperty UIMsgPrefix; // Offset: 0x3d8 // Size: 0x10
	struct TArray<StrProperty> UIMsgFunctionList; // Offset: 0x3e8 // Size: 0x10
	bool bRegistedUIMsgToMoudle; // Offset: 0x3f8 // Size: 0x01
	char pad_0x3F9[0x7]; // Offset: 0x3f9 // Size: 0x07
	StrProperty MoudleToRegisted; // Offset: 0x400 // Size: 0x10
	char pad_0x410[0x8]; // Offset: 0x410 // Size: 0x08

	// Functions

	// Object Name: Function UnrealArchExt.UAEUserWidget.Visible
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Visible(); // Offset: 0x10613009c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistFromGameFrontendHUD(); // Offset: 0x106130088 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
	// Flags: [Event|Public|BlueprintEvent]
	void SynchronizeBlueprintProperties(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.Show
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Show(); // Offset: 0x106130074 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetParentWidgetRecursive
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetParentWidgetRecursive(struct UUAEUserWidget* InParentWidget); // Offset: 0x10612fff8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetParentWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetParentWidget(struct UUAEUserWidget* InParentWidget); // Offset: 0x10612ff7c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetOnWidgetShow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOnWidgetShow(DelegateProperty onShow); // Offset: 0x10612fef4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetOnWidgetHide
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOnWidgetHide(DelegateProperty OnHide); // Offset: 0x10612fe6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetOnClearUIStack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetOnClearUIStack(DelegateProperty onClear); // Offset: 0x10612fde4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.SetAdapation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAdapation(float Left, float Top, float Right, float Bottom); // Offset: 0x10612fcb8 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistToGameFrontendHUD(struct UFrontendHUD* GameFrontHUD); // Offset: 0x10612fc3c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.Register
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Register(struct ULogicManagerBase* LogicManager, bool bAddToViewport); // Offset: 0x10612fb7c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ReceiveShow
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveShow(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ReceiveHide
	// Flags: [Event|Protected|BlueprintEvent]
	void ReceiveHide(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ReceivedMountWidget
	// Flags: [Native|Event|Public|BlueprintEvent]
	void ReceivedMountWidget(); // Offset: 0x10612fb60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
	// Flags: [Event|Public|BlueprintEvent]
	void ReceivedInitWidget(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ReCachedUIMsgFunction
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReCachedUIMsgFunction(); // Offset: 0x10612fb4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.PushOpenedUIStack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void PushOpenedUIStack(StrProperty Name); // Offset: 0x10612fabc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.PopOpenedUIStack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void PopOpenedUIStack(StrProperty curOpen); // Offset: 0x10612fa2c // Return & Params: Num(1) Size(0x10)

	// Object Name: DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetShow__DelegateSignature
	// Flags: [Public|Delegate]
	void OnWidgetShow__DelegateSignature(StrProperty ClassName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: DelegateFunction UnrealArchExt.UAEUserWidget.OnWidgetHide__DelegateSignature
	// Flags: [Public|Delegate]
	void OnWidgetHide__DelegateSignature(StrProperty ClassName); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.OnRightClicked
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	void OnRightClicked(struct FVector2D TempScreenPos); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void OnFadeOutFinished(); // Offset: 0x10612fa10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void OnFadeInFinished(); // Offset: 0x10612f9f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	void OnDoubleClicked(struct FVector2D TempScreenPos); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.OnClicked
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	void OnClicked(struct FVector2D TempScreenPos); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction UnrealArchExt.UAEUserWidget.OnClearUIStack__DelegateSignature
	// Flags: [Public|Delegate]
	void OnClearUIStack__DelegateSignature(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.IntCompare
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IntCompare(IntProperty A, IntProperty B, enum class EWidgetCompareType CompareType); // Offset: 0x10612f8f4 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function UnrealArchExt.UAEUserWidget.InitWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitWidget(bool Recursive); // Offset: 0x10612f870 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.UAEUserWidget.InitCustomWidget
	// Flags: [Native|Public]
	void InitCustomWidget(struct AActor* OwnerActor, struct UWidgetComponent* WidgetComponent); // Offset: 0x10612f7b4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.Hide
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Hide(); // Offset: 0x10612f7a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HandleUIMessageBattle(StrProperty UIMessage); // Offset: 0x10612f708 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.HandleUIMessage
	// Flags: [Final|Native|Public]
	void HandleUIMessage(StrProperty UIMessage); // Offset: 0x10612f670 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetWidgetsByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UWidget* GetWidgetsByName(StrProperty WidgetName, StrProperty OuterName, bool bUseContains); // Offset: 0x10612f52c // Return & Params: Num(4) Size(0x30)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetWidgetContainsName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWidget* GetWidgetContainsName(StrProperty Name); // Offset: 0x10612f484 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetParentWidget
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEUserWidget* GetParentWidget(); // Offset: 0x10612f450 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct APlayerController* GetOwningPlayer(); // Offset: 0x10612f414 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct ULogicManagerBase* GetOwningLogicManager(); // Offset: 0x10612f3e0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetOwningFrontendHUD(); // Offset: 0x10612f3ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial
	// Flags: [Final|Native|Protected|BlueprintCallable]
	struct UMaterialInstanceDynamic* GetImgDynamicMaterial(struct UImage* ImageMat); // Offset: 0x10612f320 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetChildWidgetByEqualPolitics
	// Flags: [Final|BlueprintCosmetic|Native|Public|BlueprintCallable]
	struct UUserWidget* GetChildWidgetByEqualPolitics(StrProperty ChildName, enum class EUserWidgetNameEqualPolitics EqualPolitics, IntProperty RecursiveDepth); // Offset: 0x10612f1f8 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetChildWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUserWidget* GetChildWidget(StrProperty WName); // Offset: 0x10612f150 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.UAEUserWidget.GetAdapation
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct FMargin GetAdapation(); // Offset: 0x10612f118 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.FloatCompare
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool FloatCompare(float A, float B, enum class EWidgetCompareType CompareType); // Offset: 0x10612f018 // Return & Params: Num(4) Size(0xa)

	// Object Name: Function UnrealArchExt.UAEUserWidget.DynamicRegistUIMsgToCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DynamicRegistUIMsgToCache(struct UUAEUserWidget* Widget); // Offset: 0x10612ef9c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEUserWidget.DestroyWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DestroyWidget(); // Offset: 0x10612ef88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ClearOpenedUIStack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ClearOpenedUIStack(); // Offset: 0x10612ef74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ClearFunctionCacheByMsgName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearFunctionCacheByMsgName(StrProperty InUIMsg); // Offset: 0x10612eedc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ClearFunctionCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearFunctionCache(); // Offset: 0x10612eec8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.ClearClassWidgetTree
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearClassWidgetTree(); // Offset: 0x10612eeb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.UAEUserWidget.BindCustomUserEvent
	// Flags: [Native|Public]
	void BindCustomUserEvent(struct AActor* OwnerActor, struct UWidgetComponent* WidgetComponent); // Offset: 0x10612edf8 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UnrealArchExt.LuaUAEUserWidget
// Size: 0x488 // Inherited bytes: 0x418
struct ULuaUAEUserWidget : UUAEUserWidget {
	// Fields
	char pad_0x418[0x58]; // Offset: 0x418 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x470 // Size: 0x10
	bool bEnableBlueprintTick; // Offset: 0x480 // Size: 0x01
	char pad_0x481[0x7]; // Offset: 0x481 // Size: 0x07
};

// Object Name: Class UnrealArchExt.UAECanvasPanel
// Size: 0x130 // Inherited bytes: 0x130
struct UUAECanvasPanel : UCanvasPanel {
	// Functions

	// Object Name: Function UnrealArchExt.UAECanvasPanel.ReceiveInitCanvasPanel
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void ReceiveInitCanvasPanel(); // Offset: 0x10612d29c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UnrealArchExt.BackendUtils
// Size: 0x30 // Inherited bytes: 0x28
struct UBackendUtils : UObject {
	// Fields
	struct UBackendHUD* OwningBackendHUD; // Offset: 0x28 // Size: 0x08
};

// Object Name: Class UnrealArchExt.BackendHUD
// Size: 0xb0 // Inherited bytes: 0x28
struct UBackendHUD : UObject {
	// Fields
	struct UEngine* Engine; // Offset: 0x28 // Size: 0x08
	StrProperty BackendUtilsClassName; // Offset: 0x30 // Size: 0x10
	struct UBackendUtils* Utils; // Offset: 0x40 // Size: 0x08
	struct TArray<struct UFrontendHUD*> FrontendHUDList; // Offset: 0x48 // Size: 0x10
	MapProperty FrontendHUDMap; // Offset: 0x58 // Size: 0x50
	char pad_0xA8[0x8]; // Offset: 0xa8 // Size: 0x08

	// Functions

	// Object Name: Function UnrealArchExt.BackendHUD.GetFrontendHUDByGameInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetFrontendHUDByGameInstance(struct UGameInstance* GameInstance); // Offset: 0x1061280e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.BackendHUD.GetFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetFrontendHUD(IntProperty FrontendHUDIndex); // Offset: 0x10612805c // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class UnrealArchExt.LogicManagerBase
// Size: 0x108 // Inherited bytes: 0x28
struct ULogicManagerBase : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
	struct UFrontendHUD* OwningFrontendHUD; // Offset: 0x38 // Size: 0x08
	char pad_0x40[0x10]; // Offset: 0x40 // Size: 0x10
	bool bPersistentUI; // Offset: 0x50 // Size: 0x01
	bool bDynamicWidget; // Offset: 0x51 // Size: 0x01
	bool bKeepDynamicWidget; // Offset: 0x52 // Size: 0x01
	bool bUseNewHandleUIMessage; // Offset: 0x53 // Size: 0x01
	IntProperty iUIControlState; // Offset: 0x54 // Size: 0x04
	IntProperty DefaultSceneCameraIndex; // Offset: 0x58 // Size: 0x04
	char pad_0x5C[0x14]; // Offset: 0x5c // Size: 0x14
	struct TArray<struct FName> GameStatusList; // Offset: 0x70 // Size: 0x10
	struct TArray<StrProperty> InvalidWorldNameList; // Offset: 0x80 // Size: 0x10
	char pad_0x90[0x30]; // Offset: 0x90 // Size: 0x30
	struct TArray<struct UObject*> WidgetUClassList; // Offset: 0xc0 // Size: 0x10
	struct TArray<struct UUAEUserWidget*> WidgetList; // Offset: 0xd0 // Size: 0x10
	char pad_0xE0[0x18]; // Offset: 0xe0 // Size: 0x18
	struct TArray<struct UObject*> DelayMessage_Obj; // Offset: 0xf8 // Size: 0x10

	// Functions

	// Object Name: Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetEnableRemoveDynamicWidgets(bool bEnable); // Offset: 0x10612c420 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.LogicManagerBase.MarkWidgetClassPendingKill
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkWidgetClassPendingKill(struct UUAEUserWidget* Widget); // Offset: 0x10612c3a4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.LogicManagerBase.IsNeedClear
	// Flags: [Final|Native|Static|Public]
	bool IsNeedClear(float MaxLowLevelMemorySize, float MaxMiddleMemorySize, float MaxGCArrayObjectSize); // Offset: 0x10612c2b4 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsEnableRemoveDynamicWidgets(); // Offset: 0x10612c280 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.LogicManagerBase.GetWidgetList
	// Flags: [Final|Native|Public]
	struct TArray<struct UUAEUserWidget*> GetWidgetList(); // Offset: 0x10612c21c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.LogicManagerBase.GetWidgetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEUserWidget* GetWidgetByName(StrProperty InName); // Offset: 0x10612c174 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.LogicManagerBase.GetWidgetByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UUAEUserWidget* GetWidgetByClass(struct UObject* InClass); // Offset: 0x10612c0e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetOwningFrontendHUD(); // Offset: 0x10612c0b4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetDefaultSceneCamera(); // Offset: 0x10612c080 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DispatchUIMessage(StrProperty UIMessage, struct UObject* Source, struct UUAEUserWidget* Target); // Offset: 0x10612bf20 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class UnrealArchExt.FrontendHUD
// Size: 0x230 // Inherited bytes: 0x28
struct UFrontendHUD : UObject {
	// Fields
	char pad_0x28[0x18]; // Offset: 0x28 // Size: 0x18
	struct UGameInstance* GameInstance; // Offset: 0x40 // Size: 0x08
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08
	StrProperty FrontendUtilsClassName; // Offset: 0x50 // Size: 0x10
	struct UFrontendUtils* Utils; // Offset: 0x60 // Size: 0x08
	struct TArray<struct ULogicManagerBase*> LogicManagerList; // Offset: 0x68 // Size: 0x10
	MapProperty LogicManagerMap; // Offset: 0x78 // Size: 0x50
	char pad_0xC8[0x10]; // Offset: 0xc8 // Size: 0x10
	IntProperty UnusedWidgetMinCount; // Offset: 0xd8 // Size: 0x04
	IntProperty UnusedWidgetMaxCount; // Offset: 0xdc // Size: 0x04
	IntProperty UnusedWidgetKeepTime; // Offset: 0xe0 // Size: 0x04
	float MaxLowLevelMemoryLimit; // Offset: 0xe4 // Size: 0x04
	float MaxMiddleMemoryLimit; // Offset: 0xe8 // Size: 0x04
	float MaxGCArrayObjectSize; // Offset: 0xec // Size: 0x04
	StrProperty CurrentGameStatus; // Offset: 0xf0 // Size: 0x10
	StrProperty LastGameStatus; // Offset: 0x100 // Size: 0x10
	bool InComBatStatus; // Offset: 0x110 // Size: 0x01
	char pad_0x111[0x7]; // Offset: 0x111 // Size: 0x07
	StrProperty PendingGameStatus; // Offset: 0x118 // Size: 0x10
	StrProperty LatestGameStatusURL; // Offset: 0x128 // Size: 0x10
	struct FScriptMulticastDelegate OnPreSwitchLobbyEntry; // Offset: 0x138 // Size: 0x10
	struct FScriptMulticastDelegate OnPostSwitchLobbyEntry; // Offset: 0x148 // Size: 0x10
	struct FScriptMulticastDelegate OnPostSwitchGameStatusStartEvent; // Offset: 0x158 // Size: 0x10
	struct FScriptMulticastDelegate OnPostSwitchGameStatusEvent; // Offset: 0x168 // Size: 0x10
	struct FScriptMulticastDelegate OnPreSwitchGameStatusEvent; // Offset: 0x178 // Size: 0x10
	char pad_0x188[0x10]; // Offset: 0x188 // Size: 0x10
	struct FScriptMulticastDelegate OnGameStatusSwitchTerminate; // Offset: 0x198 // Size: 0x10
	struct FScriptMulticastDelegate OnPreSwitchGameStatusEndEvent; // Offset: 0x1a8 // Size: 0x10
	struct FScriptMulticastDelegate OnCreateLogicManagerListEvent; // Offset: 0x1b8 // Size: 0x10
	struct FScriptMulticastDelegate OnSetGameStatusEvent; // Offset: 0x1c8 // Size: 0x10
	struct FScriptMulticastDelegate OnAddLuaLogicManagerEvent; // Offset: 0x1d8 // Size: 0x10
	struct FScriptMulticastDelegate OnRemoveLuaLogicManagerEvent; // Offset: 0x1e8 // Size: 0x10
	struct FScriptMulticastDelegate OnRenderQualityChangedEvent; // Offset: 0x1f8 // Size: 0x10
	struct FScriptMulticastDelegate OnPostWorldCleanupEvent; // Offset: 0x208 // Size: 0x10
	struct UWorld* CurrentGameStatusWorld; // Offset: 0x218 // Size: 0x08
	char pad_0x220[0x10]; // Offset: 0x220 // Size: 0x10

	// Functions

	// Object Name: Function UnrealArchExt.FrontendHUD.SwitchUIStatus
	// Flags: [Native|Public]
	void SwitchUIStatus(StrProperty InUIStatus); // Offset: 0x106129640 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendHUD.SwitchGameStatus
	// Flags: [Native|Public|BlueprintCallable]
	void SwitchGameStatus(StrProperty GameStatus, StrProperty Options); // Offset: 0x106129500 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function UnrealArchExt.FrontendHUD.StandAloneSwitchGameStatus
	// Flags: [Native|Public|BlueprintCallable]
	void StandAloneSwitchGameStatus(StrProperty InGameStatus, StrProperty Options); // Offset: 0x1061293c0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function UnrealArchExt.FrontendHUD.OnRenderQualityChanged
	// Flags: [Final|Native|Public]
	void OnRenderQualityChanged(bool bLoadMap); // Offset: 0x10612933c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.FrontendHUD.OnPreLoadMap
	// Flags: [Native|Protected]
	void OnPreLoadMap(StrProperty MapName); // Offset: 0x10612929c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
	// Flags: [Native|Protected]
	void OnPostLoadMapWithWorld(struct UWorld* World); // Offset: 0x106129218 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
	// Flags: [Final|Native|Protected]
	void OnGameViewportClientCreated(); // Offset: 0x106129204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetWorld
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UWorld* GetWorld(); // Offset: 0x1061291c8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetUtils
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendUtils* GetUtils(); // Offset: 0x106129194 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetPlayerController
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct APlayerController* GetPlayerController(); // Offset: 0x106129160 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ULogicManagerBase* GetLogicManagerByName(StrProperty LogicManagerTagName); // Offset: 0x10612906c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetLogicManager
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ULogicManagerBase* GetLogicManager(IntProperty LogicManagerIndex); // Offset: 0x106128fe0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetGameViewportClient
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UGameViewportClient* GetGameViewportClient(); // Offset: 0x106128fac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetGameMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AGameMode* GetGameMode(); // Offset: 0x106128f78 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.GetGameInstance
	// Flags: [Final|Native|Public|Const]
	struct UGameInstance* GetGameInstance(); // Offset: 0x106128f44 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendHUD.FindRegistedUIFunctionList
	// Flags: [Final|Native|Public]
	struct TArray<struct TWeakObjectPtr<struct UObject>> FindRegistedUIFunctionList(StrProperty strMsg, StrProperty moduleMsg); // Offset: 0x106128e20 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function UnrealArchExt.FrontendHUD.EnableGuiTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableGuiTest(bool bEnable); // Offset: 0x106128d9c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.FrontendHUD.DynamicRegistUIMsgToCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DynamicRegistUIMsgToCache(struct UUAEUserWidget* Widget, StrProperty module); // Offset: 0x106128cc8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.FrontendHUD.ClearLogicManagerListByStatus
	// Flags: [Final|Native|Public]
	void ClearLogicManagerListByStatus(struct FName PendingStatus, bool bIsForceDelete); // Offset: 0x106128c08 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UnrealArchExt.FrontendHUD.ClearLogicManagerByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearLogicManagerByName(StrProperty managerName); // Offset: 0x106128b24 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendHUD.ClearInGameUI
	// Flags: [Final|Native|Public]
	void ClearInGameUI(); // Offset: 0x106128b10 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UnrealArchExt.FrontendUtils
// Size: 0x378 // Inherited bytes: 0x28
struct UFrontendUtils : UObject {
	// Fields
	struct UFrontendHUD* OwningFrontendHUD; // Offset: 0x28 // Size: 0x08
	struct FScriptMulticastDelegate SceneCameraSwitchedDelegate; // Offset: 0x30 // Size: 0x10
	struct FName CurrentSceneCameraName; // Offset: 0x40 // Size: 0x08
	struct TArray<struct ACameraActor*> SceneCameraList; // Offset: 0x48 // Size: 0x10
	MapProperty SceneCameraMap; // Offset: 0x58 // Size: 0x50
	struct TArray<struct ADirectionalLight*> SceneDirectionalLightList; // Offset: 0xa8 // Size: 0x10
	MapProperty SceneDirectionalLightMap; // Offset: 0xb8 // Size: 0x50
	struct TArray<struct APointLight*> ScenePointLightList; // Offset: 0x108 // Size: 0x10
	MapProperty ScenePointLightMap; // Offset: 0x118 // Size: 0x50
	MapProperty SceneSkyLightMap; // Offset: 0x168 // Size: 0x50
	char pad_0x1B8[0x68]; // Offset: 0x1b8 // Size: 0x68
	StrProperty GlobalUIContainerClassName; // Offset: 0x220 // Size: 0x10
	struct TArray<struct FName> GlobalUIContainerNames; // Offset: 0x230 // Size: 0x10
	MapProperty GlobalUIContainers; // Offset: 0x240 // Size: 0x50
	struct TArray<struct UUAEWidgetContainer*> GlobalPushUIContainers; // Offset: 0x290 // Size: 0x10
	MapProperty GlobalPushUIRelations; // Offset: 0x2a0 // Size: 0x50
	char pad_0x2F0[0x38]; // Offset: 0x2f0 // Size: 0x38
	MapProperty UIShowStatusMap; // Offset: 0x328 // Size: 0x50

	// Functions

	// Object Name: Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SwitchSceneCameraToTransform(struct FTransform targetTrans, enum class ECameraProjectionMode ProjectionMode, float FOV, float BlendTime, bool bForce, bool bAutoFixAspect); // Offset: 0x10612abdc // Return & Params: Num(6) Size(0x3e)

	// Object Name: Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SwitchSceneCamera(struct FName SceneCameraName, float BlendTime, bool bForce); // Offset: 0x10612aae0 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSceneSkyLightProperty(struct FName sceneLightName, struct FTransform targetTrans, float Intensity, struct FLinearColor Color); // Offset: 0x10612a988 // Return & Params: Num(4) Size(0x54)

	// Object Name: Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetScenePointLightProperty(struct FName sceneLightName, struct FTransform targetTrans, float Intensity, struct FLinearColor Color, IntProperty inverseSquareFalloff, float Radius); // Offset: 0x10612a7b8 // Return & Params: Num(6) Size(0x5c)

	// Object Name: Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void SetSceneDirectionalLightProperty(struct FName sceneLightName, struct FTransform targetTrans, float Intensity, struct FLinearColor Color, struct FLightingChannels Channel); // Offset: 0x10612a620 // Return & Params: Num(5) Size(0x55)

	// Object Name: Function UnrealArchExt.FrontendUtils.SetAutoFixFovByAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAutoFixFovByAspectRatio(struct ACameraActor* CameraActor, bool bInAutoFixFov); // Offset: 0x10612a560 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterSceneSkyLight(struct FName sceneLightName, struct ASkyLight* Light); // Offset: 0x10612a4ac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterScenePointLight(struct FName sceneLightName, struct APointLight* Light); // Offset: 0x10612a3f8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterSceneDirectionalLight(struct FName sceneLightName, struct ADirectionalLight* Light); // Offset: 0x10612a344 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterSceneCamera(struct FName SceneCameraName, struct ACameraActor* SceneCamera); // Offset: 0x10612a290 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.PopAllPushedUI
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PopAllPushedUI(); // Offset: 0x10612a27c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
	// Flags: [Native|Public|BlueprintCallable]
	void OnAllSceneCamerasRegistered(); // Offset: 0x10612a260 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function UnrealArchExt.FrontendUtils.IsPushedPanel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsPushedPanel(struct FName& managerName); // Offset: 0x10612a1c4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UnrealArchExt.FrontendUtils.IsNoRenderClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsNoRenderClient(); // Offset: 0x10612a190 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUIStackTopSrcTag(); // Offset: 0x10612a12c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUIStackTopDstTag(); // Offset: 0x10612a0c8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetUIStackTop
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUIStackTop(); // Offset: 0x10612a064 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetSceneCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UCameraComponent* GetSceneCameraComponent(); // Offset: 0x10612a030 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetSceneCamera
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct ACameraActor* GetSceneCamera(); // Offset: 0x106129ffc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UFrontendHUD* GetOwningFrontendHUD(); // Offset: 0x106129fc8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UUAEWidgetContainer* GetGlobalUIContainer(struct FName ContainerName); // Offset: 0x106129f3c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UnrealArchExt.FrontendUtils.GetAllActorsFromLevel
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void GetAllActorsFromLevel(struct ULevel* Level, struct TArray<struct AActor*>& OutActors); // Offset: 0x106129e58 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UnrealArchExt.FrontendUtils.EnableLobbyMainLight
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableLobbyMainLight(bool NewEnable); // Offset: 0x106129dd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function UnrealArchExt.FrontendUtils.ClearAllSceneCameras
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllSceneCameras(); // Offset: 0x106129dc0 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class UnrealArchExt.TableTraver
// Size: 0x28 // Inherited bytes: 0x28
struct UTableTraver : UObject {
};

// Object Name: Class UnrealArchExt.UAEDataTable
// Size: 0x120 // Inherited bytes: 0x88
struct UUAEDataTable : UDataTable {
	// Fields
	char pad_0x88[0x38]; // Offset: 0x88 // Size: 0x38
	MapProperty NameToProperty; // Offset: 0xc0 // Size: 0x50
	char pad_0x110[0x10]; // Offset: 0x110 // Size: 0x10

	// Functions

	// Object Name: Function UnrealArchExt.UAEDataTable.SetTableData_String
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTableData_String(StrProperty KeyValue, StrProperty TagName, StrProperty Value); // Offset: 0x10612dc40 // Return & Params: Num(4) Size(0x31)

	// Object Name: Function UnrealArchExt.UAEDataTable.SetTableData_Int32
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTableData_Int32(StrProperty KeyValue, StrProperty TagName, IntProperty Value); // Offset: 0x10612db04 // Return & Params: Num(4) Size(0x25)

	// Object Name: Function UnrealArchExt.UAEDataTable.SetTableData_Float
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTableData_Float(StrProperty KeyValue, StrProperty TagName, float Value); // Offset: 0x10612d9c8 // Return & Params: Num(4) Size(0x25)

	// Object Name: Function UnrealArchExt.UAEDataTable.GetTableName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetTableName(); // Offset: 0x10612d964 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UnrealArchExt.UAEDataTable.GetRealTableName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetRealTableName(StrProperty tableName); // Offset: 0x10612d894 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function UnrealArchExt.UAEDataTable.ConditionAddEmptyRow
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ConditionAddEmptyRow(struct FName& RowName); // Offset: 0x10612d7f8 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class UnrealArchExt.UAEDataTableInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUAEDataTableInterface : UInterface {
};

// Object Name: Class UnrealArchExt.UAEUserWidgetForDrag
// Size: 0x470 // Inherited bytes: 0x418
struct UUAEUserWidgetForDrag : UUAEUserWidget {
	// Fields
	struct FName WidgetName; // Offset: 0x418 // Size: 0x08
	struct UUserWidget* DefaultDragVisualClass; // Offset: 0x420 // Size: 0x08
	enum class EDragPivot Pivot; // Offset: 0x428 // Size: 0x01
	char pad_0x429[0x3]; // Offset: 0x429 // Size: 0x03
	struct FVector2D Offset; // Offset: 0x42c // Size: 0x08
	char pad_0x434[0x4]; // Offset: 0x434 // Size: 0x04
	struct UDragDropOperation* DragDropOperation; // Offset: 0x438 // Size: 0x08
	DelegateProperty OnOnDragDetectedDel; // Offset: 0x440 // Size: 0x10
	struct FScriptMulticastDelegate OnDragEnterDel; // Offset: 0x450 // Size: 0x10
	struct FScriptMulticastDelegate OnDragCancelledDel; // Offset: 0x460 // Size: 0x10

	// Functions

	// Object Name: Function UnrealArchExt.UAEUserWidgetForDrag.OnDragged
	// Flags: [Final|Native|Public]
	void OnDragged(struct UDragDropOperation* Operation); // Offset: 0x10613170c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UnrealArchExt.UAEWidgetContainer
// Size: 0x430 // Inherited bytes: 0x418
struct UUAEWidgetContainer : UUAEUserWidget {
	// Fields
	struct TArray<struct UWidget*> WidgetList; // Offset: 0x418 // Size: 0x10
	struct UCanvasPanel* ContainerCache; // Offset: 0x428 // Size: 0x08

	// Functions

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
	// Flags: [Final|Native|Protected]
	void RemoveWidgetInternal(struct UWidget* Widget); // Offset: 0x106131ffc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveWidget(struct UWidget* Widget); // Offset: 0x106131f80 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrderInternal
	// Flags: [Final|Native|Protected]
	void AddWidgetWithZOrderInternal(struct UWidget* Widget, IntProperty ZOrder); // Offset: 0x106131ec8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.AddWidgetWithZOrder
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddWidgetWithZOrder(struct UWidget* Widget, IntProperty ZOrder); // Offset: 0x106131e10 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
	// Flags: [Final|Native|Protected]
	void AddWidgetInternal(struct UWidget* Widget); // Offset: 0x106131d94 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function UnrealArchExt.UAEWidgetContainer.AddWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddWidget(struct UWidget* Widget); // Offset: 0x106131d18 // Return & Params: Num(1) Size(0x8)
};

