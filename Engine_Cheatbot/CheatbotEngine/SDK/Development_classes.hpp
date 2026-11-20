#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Development.ActorClickPickerWidget
// Size: 0x430 // Inherited bytes: 0x418
struct UActorClickPickerWidget : UUAEUserWidget {
	// Fields
	struct TWeakObjectPtr<struct UActorInspectorTab> OwnerTab; // Offset: 0x418 // Size: 0x08
	bool bPickerEnabled; // Offset: 0x420 // Size: 0x01
	char pad_0x421[0x3]; // Offset: 0x421 // Size: 0x03
	float TraceDistance; // Offset: 0x424 // Size: 0x04
	bool bPrioritizePawns; // Offset: 0x428 // Size: 0x01
	char pad_0x429[0x7]; // Offset: 0x429 // Size: 0x07

	// Functions

	// Object Name: Function Development.ActorClickPickerWidget.SetPickerEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPickerEnabled(bool bEnable); // Offset: 0x1063af52c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ActorClickPickerWidget.SetOwnerTab
	// Flags: [Final|Native|Public]
	void SetOwnerTab(struct UActorInspectorTab* InOwnerTab); // Offset: 0x1063af4b0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ActorClickPickerWidget.IsPickerEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPickerEnabled(); // Offset: 0x1063af494 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Development.ImGuiTabBase
// Size: 0xc0 // Inherited bytes: 0x28
struct UImGuiTabBase : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty TabName; // Offset: 0x80 // Size: 0x10
	struct FName TabID; // Offset: 0x90 // Size: 0x08
	bool bIsVisible; // Offset: 0x98 // Size: 0x01
	bool bIsEnabled; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	IntProperty TabPriority; // Offset: 0x9c // Size: 0x04
	StrProperty LuaFilePath; // Offset: 0xa0 // Size: 0x10
	bool bIsLuaInitialized; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x3]; // Offset: 0xb1 // Size: 0x03
	struct TWeakObjectPtr<struct AImGuiWindowBase> OwnerWindow; // Offset: 0xb4 // Size: 0x08
	bool bIsActive; // Offset: 0xbc // Size: 0x01
	bool bIsInitialized; // Offset: 0xbd // Size: 0x01
	char pad_0xBE[0x2]; // Offset: 0xbe // Size: 0x02
};

// Object Name: Class Development.ActorInspectorTab
// Size: 0x930 // Inherited bytes: 0xc0
struct UActorInspectorTab : UImGuiTabBase {
	// Fields
	struct TWeakObjectPtr<struct UWorld> SelectedWorld; // Offset: 0xc0 // Size: 0x08
	char pad_0xC8[0x13c]; // Offset: 0xc8 // Size: 0x13c
	struct TWeakObjectPtr<struct UObject> SelectedObject; // Offset: 0x204 // Size: 0x08
	struct TWeakObjectPtr<struct AActor> SelectedActor; // Offset: 0x20c // Size: 0x08
	char pad_0x214[0x18]; // Offset: 0x214 // Size: 0x18
	struct TWeakObjectPtr<struct UActorComponent> SelectedComponent; // Offset: 0x22c // Size: 0x08
	char pad_0x234[0x6dc]; // Offset: 0x234 // Size: 0x6dc
	bool bClickListenerEnabled; // Offset: 0x910 // Size: 0x01
	char pad_0x911[0x1f]; // Offset: 0x911 // Size: 0x1f
};

// Object Name: Class Development.ActorPropertyMonitorWidget
// Size: 0x5a8 // Inherited bytes: 0x418
struct UActorPropertyMonitorWidget : UUAEUserWidget {
	// Fields
	float PropertyFontSize; // Offset: 0x418 // Size: 0x04
	bool bUpdatePropertyValueEveryFrame; // Offset: 0x41c // Size: 0x01
	char pad_0x41D[0x3]; // Offset: 0x41d // Size: 0x03
	struct UCanvasPanel* MainCanvasPanel; // Offset: 0x420 // Size: 0x08
	struct UScrollBox* PropertyScrollBox; // Offset: 0x428 // Size: 0x08
	struct UVerticalBox* PropertyContainer; // Offset: 0x430 // Size: 0x08
	struct USlider* OpacitySlider; // Offset: 0x438 // Size: 0x08
	struct USlider* ScaleSlider; // Offset: 0x440 // Size: 0x08
	struct UEditableTextBox* SearchTextBox; // Offset: 0x448 // Size: 0x08
	struct UButton* DragHandleButton; // Offset: 0x450 // Size: 0x08
	struct UComboBoxString* ComponentComboBox; // Offset: 0x458 // Size: 0x08
	struct UComboBoxString* AttachedActorComboBox; // Offset: 0x460 // Size: 0x08
	struct UButton* ClickListenerButton; // Offset: 0x468 // Size: 0x08
	struct UTextBlock* ClickListenerButtonText; // Offset: 0x470 // Size: 0x08
	struct UTextBlock* TargetActorName; // Offset: 0x478 // Size: 0x08
	struct UObject* TargetObject; // Offset: 0x480 // Size: 0x08
	struct AActor* TargetActor; // Offset: 0x488 // Size: 0x08
	struct TArray<StrProperty> PropertyNamesToDisplay; // Offset: 0x490 // Size: 0x10
	MapProperty PropertyItems; // Offset: 0x4a0 // Size: 0x50
	char pad_0x4F0[0x40]; // Offset: 0x4f0 // Size: 0x40
	struct UObject* CachedPropertyNamesObject; // Offset: 0x530 // Size: 0x08
	char pad_0x538[0x10]; // Offset: 0x538 // Size: 0x10
	struct UActorComponent* SelectedComponent; // Offset: 0x548 // Size: 0x08
	MapProperty AttachedActorsMap; // Offset: 0x550 // Size: 0x50
	char pad_0x5A0[0x8]; // Offset: 0x5a0 // Size: 0x08

	// Functions

	// Object Name: Function Development.ActorPropertyMonitorWidget.SetTargetObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTargetObject(struct UObject* InObject); // Offset: 0x1063b0288 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ActorPropertyMonitorWidget.SetTargetActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTargetActor(struct AActor* InActor); // Offset: 0x1063b020c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ActorPropertyMonitorWidget.SetPropertyNames
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetPropertyNames(struct TArray<StrProperty>& PropertyNames); // Offset: 0x1063b0164 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ActorPropertyMonitorWidget.SearchProperties
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SearchProperties(StrProperty SearchKeyword); // Offset: 0x1063b00cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ActorPropertyMonitorWidget.RefreshPropertyValues
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RefreshPropertyValues(); // Offset: 0x1063b00b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnSearchTextChanged
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnSearchTextChanged(struct FText& Text); // Offset: 0x1063b000c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnScaleChanged
	// Flags: [Final|Native|Protected]
	void OnScaleChanged(float Value); // Offset: 0x1063aff90 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnPropertyValueCommittedInternal
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnPropertyValueCommittedInternal(struct FText& Text, enum class ETextCommit CommitMethod); // Offset: 0x1063afe98 // Return & Params: Num(2) Size(0x19)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnPropertyValueCommitted
	// Flags: [Final|Native|Protected|HasOutParms]
	void OnPropertyValueCommitted(struct FText& Text, enum class ETextCommit CommitMethod, StrProperty PropertyName); // Offset: 0x1063afcfc // Return & Params: Num(3) Size(0x30)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnPropertyNameButtonClicked
	// Flags: [Final|Native|Protected]
	void OnPropertyNameButtonClicked(); // Offset: 0x1063afce8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnOpacityChanged
	// Flags: [Final|Native|Protected]
	void OnOpacityChanged(float Value); // Offset: 0x1063afc6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnDragButtonReleased
	// Flags: [Final|Native|Protected]
	void OnDragButtonReleased(); // Offset: 0x1063afc58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnDragButtonPressed
	// Flags: [Final|Native|Protected]
	void OnDragButtonPressed(); // Offset: 0x1063afc44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnComponentSelectionChanged
	// Flags: [Final|Native|Protected]
	void OnComponentSelectionChanged(StrProperty SelectedItem, enum class ESelectInfo SelectionType); // Offset: 0x1063afb20 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnClickListenerButtonClicked
	// Flags: [Final|Native|Protected]
	void OnClickListenerButtonClicked(); // Offset: 0x1063afb0c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ActorPropertyMonitorWidget.OnAttachedActorSelectionChanged
	// Flags: [Final|Native|Protected]
	void OnAttachedActorSelectionChanged(StrProperty SelectedItem, enum class ESelectInfo SelectionType); // Offset: 0x1063af9e8 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Development.BuffTableListPanel
// Size: 0x300 // Inherited bytes: 0xc0
struct UBuffTableListPanel : UImGuiTabBase {
	// Fields
	char pad_0xC0[0x240]; // Offset: 0xc0 // Size: 0x240
};

// Object Name: Class Development.ClientReportDataTab
// Size: 0x2c0 // Inherited bytes: 0xc0
struct UClientReportDataTab : UImGuiTabBase {
	// Fields
	char pad_0xC0[0x200]; // Offset: 0xc0 // Size: 0x200
};

// Object Name: Class Development.CloudGMHandle
// Size: 0x30 // Inherited bytes: 0x28
struct UCloudGMHandle : UObject {
	// Fields
	bool bEnableCloudGM; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07

	// Functions

	// Object Name: Function Development.CloudGMHandle.InitCloudGM
	// Flags: [Final|Native|Public|BlueprintCallable]
	void InitCloudGM(); // Offset: 0x1063b0a84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.CloudGMHandle.DestroyCloudGM
	// Flags: [Final|Native|Public]
	void DestroyCloudGM(); // Offset: 0x1063b0a70 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.ImGuiFeatureWidget
// Size: 0xc0 // Inherited bytes: 0x28
struct UImGuiFeatureWidget : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty FeatureName; // Offset: 0x80 // Size: 0x10
	struct FName FeatureID; // Offset: 0x90 // Size: 0x08
	bool bIsVisible; // Offset: 0x98 // Size: 0x01
	bool bIsEnabled; // Offset: 0x99 // Size: 0x01
	char pad_0x9A[0x2]; // Offset: 0x9a // Size: 0x02
	IntProperty FeaturePriority; // Offset: 0x9c // Size: 0x04
	StrProperty LuaFilePath; // Offset: 0xa0 // Size: 0x10
	bool bIsLuaInitialized; // Offset: 0xb0 // Size: 0x01
	char pad_0xB1[0x3]; // Offset: 0xb1 // Size: 0x03
	struct TWeakObjectPtr<struct UObject> Owner; // Offset: 0xb4 // Size: 0x08
	bool bIsInitialized; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03

	// Functions

	// Object Name: Function Development.ImGuiFeatureWidget.SetFeatureVisible
	// Flags: [Native|Public|BlueprintCallable]
	void SetFeatureVisible(bool bVisible); // Offset: 0x1063d34a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiFeatureWidget.SetFeatureEnabled
	// Flags: [Native|Public|BlueprintCallable]
	void SetFeatureEnabled(bool bEnabled); // Offset: 0x1063d341c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiFeatureWidget.IsFeatureVisible
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFeatureVisible(); // Offset: 0x1063d33e0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiFeatureWidget.IsFeatureEnabled
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFeatureEnabled(); // Offset: 0x1063d33a4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiFeatureWidget.GetOwnerWindow
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct AImGuiWindowBase* GetOwnerWindow(); // Offset: 0x1063d3370 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiFeatureWidget.GetOwnerTab
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct UImGuiTabBase* GetOwnerTab(); // Offset: 0x1063d333c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiFeatureWidget.GetOwner
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetOwner(); // Offset: 0x1063d3308 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiFeatureWidget.GetFeatureName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetFeatureName(); // Offset: 0x1063d329c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ImGuiFeatureWidget.GetFeatureID
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FName GetFeatureID(); // Offset: 0x1063d3260 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Development.DebugNameDisplayFeature
// Size: 0xd8 // Inherited bytes: 0xc0
struct UDebugNameDisplayFeature : UImGuiFeatureWidget {
	// Fields
	bool bShowAllCharacterName; // Offset: 0xbd // Size: 0x01
	bool bShowNearbyActorsName; // Offset: 0xbe // Size: 0x01
	float NearbyActorDistance; // Offset: 0xc0 // Size: 0x04
	float ShowDebugNameDuration; // Offset: 0xc4 // Size: 0x04
	struct TArray<struct AActor*> ExcludedActorClasses; // Offset: 0xc8 // Size: 0x10

	// Functions

	// Object Name: Function Development.DebugNameDisplayFeature.AddExcludedActorClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddExcludedActorClass(struct UObject* ActorClass); // Offset: 0x1063b0c44 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Development.DevConsole
// Size: 0x198 // Inherited bytes: 0x130
struct UDevConsole : UConsole {
	// Fields
	char pad_0x130[0x58]; // Offset: 0x130 // Size: 0x58
	struct TArray<StrProperty> LuaCommandList; // Offset: 0x188 // Size: 0x10
};

// Object Name: Class Development.GMCheatSystem
// Size: 0x80 // Inherited bytes: 0x28
struct UGMCheatSystem : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
};

// Object Name: Class Development.GMCheatAI
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatAI : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatAI.TeleportAIToLoc
	// Flags: [Final|Exec|Native|Public]
	void TeleportAIToLoc(float X, float Y, float Z); // Offset: 0x1063b1700 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatAI.SpawnAITeam
	// Flags: [Final|Exec|Native|Public]
	void SpawnAITeam(IntProperty Num, IntProperty AITeamID, char Difficulty); // Offset: 0x1063b1610 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function Development.GMCheatAI.SpawnAIPosi
	// Flags: [Final|Exec|Native|Public]
	void SpawnAIPosi(IntProperty ID, IntProperty AITeamID, float PosiX, float PosiY, float PosiZ); // Offset: 0x1063b14a8 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Development.GMCheatAI.SpawnAI
	// Flags: [Final|Exec|Native|Public]
	void SpawnAI(IntProperty Num, bool bSpawnAll); // Offset: 0x1063b13ec // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatAI.RecordReviveTowerInDSReplay
	// Flags: [Final|Exec|Native|Public]
	void RecordReviveTowerInDSReplay(); // Offset: 0x1063b13d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAI.MoveToAIWithClassName
	// Flags: [Final|Exec|Native|Public]
	void MoveToAIWithClassName(StrProperty AIClassName, float XOffset, float YOffset, float ZOffset); // Offset: 0x1063b1284 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Development.GMCheatAI.MoveToAIByDropItem
	// Flags: [Final|Exec|Native|Public]
	void MoveToAIByDropItem(IntProperty ItemId); // Offset: 0x1063b1208 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAI.MoveToAI
	// Flags: [Final|Exec|Native|Public]
	void MoveToAI(); // Offset: 0x1063b11f4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAI.MobAIIgnorePlayers
	// Flags: [Final|Exec|Native|Public]
	void MobAIIgnorePlayers(); // Offset: 0x1063b11e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAI.LogAIItemCount
	// Flags: [Final|Exec|Native|Public]
	void LogAIItemCount(IntProperty ItemId, float Distance); // Offset: 0x1063b1128 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAI.FindAIDropItem
	// Flags: [Final|Exec|Native|Public]
	void FindAIDropItem(IntProperty ItemId); // Offset: 0x1063b10ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAI.ChangeAIBehaviorTree
	// Flags: [Final|Exec|Native|Public]
	void ChangeAIBehaviorTree(IntProperty TreeIndex); // Offset: 0x1063b1030 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAI.AddAIItem
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AddAIItem(IntProperty ID, IntProperty Count, float Distance); // Offset: 0x1063b0f40 // Return & Params: Num(3) Size(0xc)
};

// Object Name: Class Development.GMCheatAnimation
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatAnimation : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatAnimation.TestAnimation
	// Flags: [Final|Exec|Native|Private]
	void TestAnimation(IntProperty Param1, bool Param2); // Offset: 0x1063b1ca4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatAnimation.DumpCharacterAnimBPVars
	// Flags: [Final|Exec|Native|Private|BlueprintCallable]
	void DumpCharacterAnimBPVars(); // Offset: 0x1063b1c90 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.GMCheatAvatar
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatAvatar : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatAvatar.UseLocalWeaponDIYData
	// Flags: [Final|Exec|Native|Public]
	void UseLocalWeaponDIYData(bool bFlag); // Offset: 0x1063b2f14 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.UseLocalVehicleAvatar
	// Flags: [Final|Exec|Native|Public]
	void UseLocalVehicleAvatar(); // Offset: 0x1063b2f00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.SetWeaponPendantShow
	// Flags: [Final|Exec|Native|Public]
	void SetWeaponPendantShow(bool bShow); // Offset: 0x1063b2e7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.SetVehicleAvatar
	// Flags: [Final|Exec|Native|Public]
	void SetVehicleAvatar(IntProperty VehicleShapeType, IntProperty VehicleSkin); // Offset: 0x1063b2dc8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.SetPlayerTeamBodyInstMask
	// Flags: [Final|Exec|Native|Public]
	void SetPlayerTeamBodyInstMask(IntProperty Mask); // Offset: 0x1063b2d4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.SetPlayerBodyInstMask
	// Flags: [Final|Exec|Native|Public]
	void SetPlayerBodyInstMask(IntProperty Mask); // Offset: 0x1063b2cd0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.SetGrenadeAvatar
	// Flags: [Final|Exec|Native|Public]
	void SetGrenadeAvatar(IntProperty SubType, IntProperty EquipmentSkin); // Offset: 0x1063b2c1c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.SetEquipmentAvatar
	// Flags: [Final|Exec|Native|Public]
	void SetEquipmentAvatar(IntProperty EquipmentAvatarType, IntProperty EquipmentSkin); // Offset: 0x1063b2b68 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.SetEnableWingAvatar
	// Flags: [Final|Exec|Native|Public]
	void SetEnableWingAvatar(bool Val); // Offset: 0x1063b2ae4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.SetDownloadInBattle
	// Flags: [Final|Exec|Native|Public]
	void SetDownloadInBattle(bool bEnable); // Offset: 0x1063b2a60 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.SetAvatarDownloadInBattle
	// Flags: [Final|Exec|Native|Public]
	void SetAvatarDownloadInBattle(bool bEnableDownload); // Offset: 0x1063b29dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.PrintMainCharAllAvatar
	// Flags: [Final|Exec|Native|Public]
	void PrintMainCharAllAvatar(); // Offset: 0x1063b29c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.PrintAllStaticBufferSize
	// Flags: [Final|Exec|Native|Public]
	void PrintAllStaticBufferSize(); // Offset: 0x1063b29b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar_Style
	// Flags: [Final|Exec|Native|Public]
	void DeleteVehicleAdvanceAvatar_Style(IntProperty VehicleSkin, IntProperty VehicleStyle); // Offset: 0x1063b2900 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar
	// Flags: [Final|Exec|Native|Public]
	void DeleteVehicleAdvanceAvatar(IntProperty VehicleSkin, IntProperty ModelID); // Offset: 0x1063b284c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.DebugWorldPlayerAvatarInfo
	// Flags: [Final|Exec|Native|Public]
	void DebugWorldPlayerAvatarInfo(); // Offset: 0x1063b2838 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.DebugChangeWearIndex
	// Flags: [Final|Exec|Native|Public]
	void DebugChangeWearIndex(IntProperty Index); // Offset: 0x1063b27bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.ClearItemPathNotExistlist
	// Flags: [Final|Exec|Native|Public]
	void ClearItemPathNotExistlist(); // Offset: 0x1063b27a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.ClearItemHandleNotExistlist
	// Flags: [Final|Exec|Native|Public]
	void ClearItemHandleNotExistlist(); // Offset: 0x1063b2794 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatAvatar.ClearCharacterAvatarHandlePool
	// Flags: [Final|Exec|Native|Public]
	void ClearCharacterAvatarHandlePool(bool bSelf); // Offset: 0x1063b2710 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatAvatar.ChangeBattleAvatar
	// Flags: [Final|Exec|Native|Public]
	void ChangeBattleAvatar(IntProperty HeadAvatarID, IntProperty HairAvatarID, IntProperty InGender, IntProperty PutOffAvatar); // Offset: 0x1063b25e8 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatAvatar.AddWeaponPendantItem
	// Flags: [Final|Exec|Native|Public]
	void AddWeaponPendantItem(IntProperty WeaponId, IntProperty pendantID); // Offset: 0x1063b2534 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.AddWeaponDIYPlan
	// Flags: [Final|Exec|Native|Public]
	void AddWeaponDIYPlan(IntProperty AvatarID, IntProperty DIYPlanID); // Offset: 0x1063b2480 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.AddWeaponAvatar
	// Flags: [Final|Exec|Native|Public]
	void AddWeaponAvatar(IntProperty WeaponSkin); // Offset: 0x1063b2404 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.AddWeaponAttachmentAvatarSimple
	// Flags: [Final|Exec|Native|Public]
	void AddWeaponAttachmentAvatarSimple(IntProperty WeaponId, IntProperty WeaponAttachmentSkin); // Offset: 0x1063b2350 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.AddWeaponAttachmentAvatar
	// Flags: [Final|Exec|Native|Public]
	void AddWeaponAttachmentAvatar(IntProperty WeaponId, IntProperty WeaponAttachmentSkin); // Offset: 0x1063b229c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.AddVehicleAvatar
	// Flags: [Final|Exec|Native|Public]
	void AddVehicleAvatar(IntProperty VehicleSkin); // Offset: 0x1063b2220 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar_Style
	// Flags: [Final|Exec|Native|Public]
	void AddVehicleAdvanceAvatar_Style(IntProperty VehicleSkin, IntProperty VehicleStyle); // Offset: 0x1063b216c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar
	// Flags: [Final|Exec|Native|Public]
	void AddVehicleAdvanceAvatar(IntProperty VehicleSkin, IntProperty ModelID, IntProperty ColorID, IntProperty PatternID, IntProperty ParticleID); // Offset: 0x1063b2008 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Development.GMCheatAvatar.AddItemPathNotExistlist
	// Flags: [Final|Exec|Native|Public]
	void AddItemPathNotExistlist(IntProperty ItemId); // Offset: 0x1063b1f8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatAvatar.AddItemHandleNotExistlist
	// Flags: [Final|Exec|Native|Public]
	void AddItemHandleNotExistlist(IntProperty ItemId); // Offset: 0x1063b1f10 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Development.GMCheatBackpack
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatBackpack : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatBackpack.UseItem
	// Flags: [Final|Exec|Native|Public]
	void UseItem(IntProperty ID); // Offset: 0x1063b40d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatBackpack.FlushItem
	// Flags: [Final|Exec|Native|Public]
	void FlushItem(IntProperty onlyStatic); // Offset: 0x1063b4058 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatBackpack.DropItemsWithType
	// Flags: [Final|Exec|Native|Public]
	void DropItemsWithType(IntProperty TypeItem); // Offset: 0x1063b3fdc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatBackpack.DropItem
	// Flags: [Final|Exec|Native|Public]
	void DropItem(IntProperty ID); // Offset: 0x1063b3f60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatBackpack.DropAllItem
	// Flags: [Final|Exec|Native|Public]
	void DropAllItem(); // Offset: 0x1063b3f4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatBackpack.DestroyPickUpActors
	// Flags: [Final|Exec|Native|Public]
	void DestroyPickUpActors(); // Offset: 0x1063b3f38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatBackpack.ClearBackpack
	// Flags: [Final|Exec|Native|Public]
	void ClearBackpack(); // Offset: 0x1063b3f24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatBackpack.BatchAddItemsString
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	void BatchAddItemsString(struct TArray<StrProperty>& ItemDetailArray, bool bClearBackpack); // Offset: 0x1063b3e28 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Development.GMCheatBackpack.BatchAddItemsFromFile
	// Flags: [Final|Exec|Native|Public]
	void BatchAddItemsFromFile(StrProperty Filename, bool bClearBackpack); // Offset: 0x1063b3d48 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Development.GMCheatBackpack.AddItemString
	// Flags: [Final|Exec|Native|Public]
	void AddItemString(StrProperty ItemDetail); // Offset: 0x1063b3cb0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatBackpack.AddItemNew
	// Flags: [Final|Exec|Native|Public]
	void AddItemNew(StrProperty ID, IntProperty Count, IntProperty PickupType); // Offset: 0x1063b3b50 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Development.GMCheatBackpack.AddItem
	// Flags: [Final|Exec|Native|Public]
	void AddItem(IntProperty ID, IntProperty Count, IntProperty PickupType); // Offset: 0x1063b3a60 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatBackpack.AddAvatarItem
	// Flags: [Final|Exec|Native|Public]
	void AddAvatarItem(IntProperty ID, IntProperty Color, IntProperty Pattern, IntProperty Num); // Offset: 0x1063b3938 // Return & Params: Num(4) Size(0x10)
};

// Object Name: Class Development.GMCheatCharacter
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatCharacter : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatCharacter.ToggleUserCmdDeltaSendAck
	// Flags: [Final|Exec|Native|Public]
	void ToggleUserCmdDeltaSendAck(bool Val); // Offset: 0x1063b62d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.ToggleUserCmdDeltaFlag
	// Flags: [Final|Exec|Native|Public]
	void ToggleUserCmdDeltaFlag(bool Val); // Offset: 0x1063b6254 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.ToggleUserCmdDeltaCheckSum
	// Flags: [Final|Exec|Native|Public]
	void ToggleUserCmdDeltaCheckSum(bool Val); // Offset: 0x1063b61d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.ToggleUserCmdDelta
	// Flags: [Final|Exec|Native|Public]
	void ToggleUserCmdDelta(bool Val); // Offset: 0x1063b614c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.ToggleServerAcknowledgePossession
	// Flags: [Final|Exec|Native|Public]
	void ToggleServerAcknowledgePossession(bool Val); // Offset: 0x1063b60c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.ToggleCheatLocation
	// Flags: [Final|Exec|Native|Public]
	void ToggleCheatLocation(bool Val); // Offset: 0x1063b6044 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.TestLowProbCircle
	// Flags: [Final|Exec|Native|Public|Const]
	void TestLowProbCircle(bool UseLowProb, IntProperty LoopCount); // Offset: 0x1063b5f7c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatCharacter.TestLaunchFly
	// Flags: [Final|Exec|Native|Public]
	void TestLaunchFly(float Speed); // Offset: 0x1063b5f00 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.TestAutoMoveToShootingMachine
	// Flags: [Final|Exec|Native|Public]
	void TestAutoMoveToShootingMachine(); // Offset: 0x1063b5eec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.TestAutoMoveToLocation
	// Flags: [Final|Exec|Native|Public]
	void TestAutoMoveToLocation(float X, float Y, float Z); // Offset: 0x1063b5dfc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.TestAutoMoveToCharacter
	// Flags: [Final|Exec|Native|Public]
	void TestAutoMoveToCharacter(StrProperty TargetPlayerUID); // Offset: 0x1063b5d18 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.TeamNoAlwaysRelevant
	// Flags: [Final|Exec|Native|Public]
	void TeamNoAlwaysRelevant(); // Offset: 0x1063b5d04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.SwitchViewTarget
	// Flags: [Final|Exec|Native|Public]
	void SwitchViewTarget(); // Offset: 0x1063b5cf0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.StartAirDropSpecified
	// Flags: [Final|Exec|Native|Public]
	void StartAirDropSpecified(float X, float Y); // Offset: 0x1063b5c3c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatCharacter.StartAirDropBackupEnter
	// Flags: [Final|Exec|Native|Public]
	void StartAirDropBackupEnter(float X, float Y, IntProperty MaxPlaneNum); // Offset: 0x1063b5b4c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.StartAirDrop
	// Flags: [Final|Exec|Native|Public]
	void StartAirDrop(IntProperty Index); // Offset: 0x1063b5ad0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.StartAirAttackSpecified
	// Flags: [Final|Exec|Native|Public]
	void StartAirAttackSpecified(float X, float Y, float Radius); // Offset: 0x1063b59e0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.StartAirAttack
	// Flags: [Final|Exec|Native|Public]
	void StartAirAttack(IntProperty Index); // Offset: 0x1063b5964 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.ShowWeaponRecordInfo
	// Flags: [Final|Exec|Native|Public]
	void ShowWeaponRecordInfo(); // Offset: 0x1063b5950 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.ShowVaultEnable
	// Flags: [Final|Exec|Native|Public]
	void ShowVaultEnable(); // Offset: 0x1063b593c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.ShowResultWeaponRecordInfo
	// Flags: [Final|Exec|Native|Public]
	void ShowResultWeaponRecordInfo(); // Offset: 0x1063b5928 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.ShowAllRoles
	// Flags: [Final|Exec|Native|Public]
	void ShowAllRoles(); // Offset: 0x1063b5914 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.SetTimeSpeedFactor
	// Flags: [Final|Exec|Native|Public]
	void SetTimeSpeedFactor(float Val); // Offset: 0x1063b5898 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.SetTimeSpeedCheck
	// Flags: [Final|Exec|Native|Public]
	void SetTimeSpeedCheck(bool Val); // Offset: 0x1063b5814 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.SetSpeed
	// Flags: [Final|Exec|Native|Public]
	void SetSpeed(float Modifier); // Offset: 0x1063b5798 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.SetMaxHealth
	// Flags: [Final|Exec|Native|Public]
	void SetMaxHealth(float Hp); // Offset: 0x1063b571c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.SetLowProbCircle
	// Flags: [Final|Exec|Native|Public|Const]
	void SetLowProbCircle(float X, float Y, float R, float Prob); // Offset: 0x1063b55f4 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.SetCustomJumpPoint
	// Flags: [Final|Exec|Native|Public]
	void SetCustomJumpPoint(float JmpX, float JmpY, float JmpRadius); // Offset: 0x1063b5504 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.SetCircleCenter
	// Flags: [Final|Exec|Native|Public|Const]
	void SetCircleCenter(StrProperty PointString); // Offset: 0x1063b546c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.SetCirCenterFixed
	// Flags: [Final|Exec|Native|Public]
	void SetCirCenterFixed(bool Enable, float X, float Y); // Offset: 0x1063b536c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.SetAirDropEnable
	// Flags: [Final|Exec|Native|Public]
	void SetAirDropEnable(bool Enable); // Offset: 0x1063b52e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.SetAirAttackEnable
	// Flags: [Final|Exec|Native|Public]
	void SetAirAttackEnable(bool Enable); // Offset: 0x1063b5264 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatCharacter.Set2x2ForceCircleLastR
	// Flags: [Final|Exec|Native|Public|Const]
	void Set2x2ForceCircleLastR(float R); // Offset: 0x1063b51e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.Set2x2ForceCircle
	// Flags: [Final|Exec|Native|Public|Const]
	void Set2x2ForceCircle(float X, float Y, float R); // Offset: 0x1063b50f8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.Set2x2CircleCenter
	// Flags: [Final|Exec|Native|Public|Const]
	void Set2x2CircleCenter(IntProperty Index, float X, float Y); // Offset: 0x1063b5008 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.Set2x2Circle3Center
	// Flags: [Final|Exec|Native|Public|Const]
	void Set2x2Circle3Center(float X1, float Y1, float X2, float Y2, float x3, float y3); // Offset: 0x1063b4e68 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Development.GMCheatCharacter.PrintMovementLog
	// Flags: [Final|Exec|Native|Public]
	void PrintMovementLog(IntProperty PrintLog); // Offset: 0x1063b4dec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.PrintDownCollision
	// Flags: [Final|Exec|Native|Public]
	void PrintDownCollision(); // Offset: 0x1063b4dd8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.MoveToXY
	// Flags: [Final|Exec|Native|Public]
	void MoveToXY(float X, float Y); // Offset: 0x1063b4d24 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatCharacter.MoveToVehicle
	// Flags: [Final|Exec|Native|Public]
	void MoveToVehicle(IntProperty ItemId); // Offset: 0x1063b4ca8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.MoveToS
	// Flags: [Final|Exec|Native|Public|Const]
	void MoveToS(StrProperty VectorString); // Offset: 0x1063b4c10 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.MoveToNearestVehicle
	// Flags: [Final|Exec|Native|Public]
	void MoveToNearestVehicle(float IgnoreDistance); // Offset: 0x1063b4b94 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.MoveToItem
	// Flags: [Final|Exec|Native|Public]
	void MoveToItem(IntProperty ItemId); // Offset: 0x1063b4b18 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.MoveTo
	// Flags: [Final|Exec|Native|Public]
	void MoveTo(float X, float Y, float Z); // Offset: 0x1063b4a28 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.ModifyStreamingDistance
	// Flags: [Final|Exec|Native|Public]
	void ModifyStreamingDistance(IntProperty Distance); // Offset: 0x1063b49ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.KillSomeOne
	// Flags: [Final|Exec|Native|Public]
	void KillSomeOne(StrProperty InPlayerName); // Offset: 0x1063b4914 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.KillAll
	// Flags: [Final|Exec|Native|Public]
	void KillAll(); // Offset: 0x1063b4900 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.Kill
	// Flags: [Final|Exec|Native|Public]
	void Kill(IntProperty GivenNumber); // Offset: 0x1063b4884 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.GMSetPlayerLocationInvalid
	// Flags: [Final|Exec|Native|Public]
	void GMSetPlayerLocationInvalid(uint32_t InPlayerKey, IntProperty errorType, IntProperty Side); // Offset: 0x1063b4794 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatCharacter.GMSetCampId
	// Flags: [Final|Exec|Native|Public]
	void GMSetCampId(IntProperty CamID); // Offset: 0x1063b4718 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatCharacter.GetGameScreenSize
	// Flags: [Final|Exec|Native|Public]
	void GetGameScreenSize(); // Offset: 0x1063b4704 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.ExecFollowTeammate
	// Flags: [Final|Exec|Native|Public]
	void ExecFollowTeammate(StrProperty Name); // Offset: 0x1063b4620 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatCharacter.DebugSprint
	// Flags: [Final|Exec|Native|Public]
	void DebugSprint(); // Offset: 0x1063b460c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatCharacter.DebugPhysicsAsset
	// Flags: [Final|Exec|Native|Public]
	void DebugPhysicsAsset(); // Offset: 0x1063b45f8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.GMCheatDump
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatDump : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatDump.DumpWeaponsToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpWeaponsToFile(StrProperty Filename); // Offset: 0x1063b85a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpVehicleToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpVehicleToFile(StrProperty Filename); // Offset: 0x1063b84bc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpVehicleAnimInstanceToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpVehicleAnimInstanceToFile(StrProperty Filename); // Offset: 0x1063b83d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpVehicleAnimInstance
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpVehicleAnimInstance(); // Offset: 0x1063b83c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpVehicle
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpVehicle(); // Offset: 0x1063b83b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstanceToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpSimulatedCharacterAnimInstanceToFile(StrProperty Filename); // Offset: 0x1063b82cc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstance
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpSimulatedCharacterAnimInstance(); // Offset: 0x1063b82b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpReticleTargetActorToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpReticleTargetActorToFile(StrProperty Filename, bool bPrintFunc); // Offset: 0x1063b8184 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Development.GMCheatDump.DumpReticleTargetActor
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpReticleTargetActor(bool bPrintFunc); // Offset: 0x1063b8100 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatDump.DumpPlayerSkillInfo
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpPlayerSkillInfo(); // Offset: 0x1063b80ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpPlayerInfoToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpPlayerInfoToFile(StrProperty Filename); // Offset: 0x1063b8008 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpPlayerControllerToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpPlayerControllerToFile(StrProperty Filename); // Offset: 0x1063b7f24 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpPlayerController
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpPlayerController(); // Offset: 0x1063b7f10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpPlayerCameraManagerToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpPlayerCameraManagerToFile(StrProperty Filename); // Offset: 0x1063b7e2c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpObservingCharacterToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpObservingCharacterToFile(StrProperty Filename); // Offset: 0x1063b7d48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpObservingCharacter
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpObservingCharacter(); // Offset: 0x1063b7d34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpObjectPropertiesRecursive
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpObjectPropertiesRecursive(StrProperty ObjectName, IntProperty Depth, bool bPrintFunc); // Offset: 0x1063b7c18 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function Development.GMCheatDump.DumpObjectProperties
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpObjectProperties(StrProperty ObjectName); // Offset: 0x1063b7b80 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpCharacterToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpCharacterToFile(StrProperty Filename); // Offset: 0x1063b7a9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpCharacterAnimInstanceToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpCharacterAnimInstanceToFile(StrProperty Filename); // Offset: 0x1063b79b8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpCharacterAnimInstance
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpCharacterAnimInstance(); // Offset: 0x1063b79a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpCharacter
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpCharacter(); // Offset: 0x1063b7990 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpBatchManager
	// Flags: [Final|Exec|Native|Public]
	void DumpBatchManager(); // Offset: 0x1063b797c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpAllVehiclesToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllVehiclesToFile(StrProperty Filename); // Offset: 0x1063b7898 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpAllVehicles
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllVehicles(); // Offset: 0x1063b7884 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpAllSkillActorsInfoToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllSkillActorsInfoToFile(StrProperty Filename, IntProperty Depth); // Offset: 0x1063b7760 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Development.GMCheatDump.DumpAllSkillActorsInfo
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllSkillActorsInfo(IntProperty Depth); // Offset: 0x1063b76e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatDump.DumpAllPlayerControllerToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllPlayerControllerToFile(StrProperty Filename); // Offset: 0x1063b7600 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpAllPlayerController
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllPlayerController(); // Offset: 0x1063b75ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatDump.DumpAllCustomActorsInfoToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllCustomActorsInfoToFile(struct AActor* DesiredClass, StrProperty Filename); // Offset: 0x1063b74c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.GMCheatDump.DumpAllCustomActorsInfo
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllCustomActorsInfo(struct AActor* DesiredClass); // Offset: 0x1063b744c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.GMCheatDump.DumpAllCharactersToFile
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllCharactersToFile(StrProperty Filename); // Offset: 0x1063b7368 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatDump.DumpAllCharacters
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAllCharacters(); // Offset: 0x1063b7354 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.GMCheatGameFlow
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatGameFlow : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatGameFlow.StartReadyCountDown
	// Flags: [Final|Exec|Native|Public]
	void StartReadyCountDown(); // Offset: 0x1063b92bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatGameFlow.SetStateLeftTime
	// Flags: [Final|Exec|Native|Public]
	void SetStateLeftTime(IntProperty LeftTime); // Offset: 0x1063b9240 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatGameFlow.GotoFlying
	// Flags: [Final|Exec|Native|Public]
	void GotoFlying(); // Offset: 0x1063b922c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatGameFlow.GameModeGotoNextState
	// Flags: [Final|Exec|Native|Public]
	void GameModeGotoNextState(); // Offset: 0x1063b9218 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatGameFlow.GameModeGotoFightingState
	// Flags: [Final|Exec|Native|Public]
	void GameModeGotoFightingState(); // Offset: 0x1063b9204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatGameFlow.DsLuaGM
	// Flags: [Final|Exec|Native|Public]
	void DsLuaGM(StrProperty CmdString); // Offset: 0x1063b9120 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatGameFlow.DsLuaDoString
	// Flags: [Final|Exec|Native|Public]
	void DsLuaDoString(StrProperty LuaString); // Offset: 0x1063b9088 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class Development.GMCheatHiggs
// Size: 0x158 // Inherited bytes: 0x80
struct UGMCheatHiggs : UGMCheatSystem {
	// Fields
	char pad_0x80[0xd8]; // Offset: 0x80 // Size: 0xd8

	// Functions

	// Object Name: Function Development.GMCheatHiggs.TriggerActorChannelErrorDelegate
	// Flags: [Final|Exec|Native|Public]
	void TriggerActorChannelErrorDelegate(); // Offset: 0x1063bb024 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatHiggs.TestSpawnStaticmesh
	// Flags: [Final|Exec|Native|Public]
	void TestSpawnStaticmesh(IntProperty Count); // Offset: 0x1063bafa8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatHiggs.TestGMCheatHiggs
	// Flags: [Final|Exec|Native|Private]
	void TestGMCheatHiggs(IntProperty Param1, bool Param2); // Offset: 0x1063baeec // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatHiggs.TestGlueHia
	// Flags: [Final|Exec|Native|Public]
	void TestGlueHia(IntProperty GlueType, IntProperty GlueValue); // Offset: 0x1063bae38 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatHiggs.StatCPU
	// Flags: [Final|Exec|Native|Public]
	void StatCPU(IntProperty Enable); // Offset: 0x1063badbc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatHiggs.SetOpenSecurityAlert
	// Flags: [Exec|Event|Public|BlueprintEvent]
	void SetOpenSecurityAlert(bool bOpen); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatHiggs.OnFinishAsyncLoadResource
	// Flags: [Final|Native|Private|HasDefaults]
	void OnFinishAsyncLoadResource(struct FSoftObjectPath SoftObjectPath); // Offset: 0x1063bacf0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function Development.GMCheatHiggs.HiggsTestSyncLoad
	// Flags: [Final|Exec|Native|Public]
	void HiggsTestSyncLoad(StrProperty Path); // Offset: 0x1063bac58 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatHiggs.HiggsTestForbitMove
	// Flags: [Final|Exec|Native|Public]
	void HiggsTestForbitMove(); // Offset: 0x1063bac44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatHiggs.HiggsTestAsyncLoad
	// Flags: [Final|Exec|Native|Public]
	void HiggsTestAsyncLoad(StrProperty Path); // Offset: 0x1063babac // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatHiggs.DebugReplaySampleLocAndRot
	// Flags: [Final|Exec|Native|Public]
	void DebugReplaySampleLocAndRot(); // Offset: 0x1063bab98 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.GMCheatHUD
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatHUD : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatHUD.ResetHUDDebugFunction
	// Flags: [Final|Exec|Native|Public]
	void ResetHUDDebugFunction(); // Offset: 0x1063bb6b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatHUD.RemoveHUDDebugFunction
	// Flags: [Final|Exec|Native|Public]
	void RemoveHUDDebugFunction(StrProperty FuncName); // Offset: 0x1063bb61c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatHUD.EnableHUDDebug
	// Flags: [Final|Exec|Native|Public]
	void EnableHUDDebug(bool bEnable, StrProperty FuncName); // Offset: 0x1063bb538 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.GMCheatHUD.AddHUDDebugFunction
	// Flags: [Final|Exec|Native|Public]
	void AddHUDDebugFunction(StrProperty FuncName, bool bReset); // Offset: 0x1063bb458 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class Development.GMCheatLevel
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatLevel : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatLevel.SpawnActorWithPath
	// Flags: [Final|Exec|Native|Public]
	void SpawnActorWithPath(StrProperty Path, float X, float Y, float Z); // Offset: 0x1063bc16c // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Development.GMCheatLevel.ShutDownVehicleGenerate
	// Flags: [Final|Exec|Native|Public]
	void ShutDownVehicleGenerate(bool IsOpen); // Offset: 0x1063bc0e8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.ShutDownPickUpGenerate
	// Flags: [Final|Exec|Native|Public]
	void ShutDownPickUpGenerate(bool IsOpen); // Offset: 0x1063bc064 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.ShutDownItemGenerate
	// Flags: [Final|Exec|Native|Public]
	void ShutDownItemGenerate(bool IsOpen); // Offset: 0x1063bbfe0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.ShowNavOperator
	// Flags: [Final|Exec|Native|Public]
	void ShowNavOperator(); // Offset: 0x1063bbfcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.SetServerLevelLoadingMode
	// Flags: [Final|Exec|Native|Public]
	void SetServerLevelLoadingMode(bool bNewLoadAll); // Offset: 0x1063bbf48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.SetPlaneEnabled
	// Flags: [Final|Exec|Native|Public]
	void SetPlaneEnabled(bool InEnable); // Offset: 0x1063bbec4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.SetCustomFlightRoute
	// Flags: [Final|Exec|Native|Public]
	void SetCustomFlightRoute(float StartX, float StartY, float EndX, float EndY); // Offset: 0x1063bbd9c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatLevel.RemoveAllDoors
	// Flags: [Final|Exec|Native|Public]
	void RemoveAllDoors(); // Offset: 0x1063bbd88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.PrintAllPickupWarpper
	// Flags: [Final|Exec|Native|Public]
	void PrintAllPickupWarpper(); // Offset: 0x1063bbd74 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.LocalProfileFootprint
	// Flags: [Final|Exec|Native|Public]
	void LocalProfileFootprint(); // Offset: 0x1063bbd60 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.LoadAllLand
	// Flags: [Final|Exec|Native|Public]
	void LoadAllLand(bool bLoadAll); // Offset: 0x1063bbcdc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatLevel.GotoDoubleCircleEdge
	// Flags: [Final|Exec|Native|Public]
	void GotoDoubleCircleEdge(float Z); // Offset: 0x1063bbc60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatLevel.GMSetBoolPoisonCircle
	// Flags: [Final|Exec|Native|Public]
	void GMSetBoolPoisonCircle(); // Offset: 0x1063bbc4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMSetBoolAirDrop
	// Flags: [Final|Exec|Native|Public]
	void GMSetBoolAirDrop(); // Offset: 0x1063bbc38 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMSetBoolAirAttack
	// Flags: [Final|Exec|Native|Public]
	void GMSetBoolAirAttack(); // Offset: 0x1063bbc24 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMSetBoolAI
	// Flags: [Final|Exec|Native|Public]
	void GMSetBoolAI(); // Offset: 0x1063bbc10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMEnableRandom
	// Flags: [Final|Exec|Native|Public]
	void GMEnableRandom(); // Offset: 0x1063bbbfc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMEnableAllComponent
	// Flags: [Final|Exec|Native|Public]
	void GMEnableAllComponent(); // Offset: 0x1063bbbe8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMDisableRandom
	// Flags: [Final|Exec|Native|Public]
	void GMDisableRandom(); // Offset: 0x1063bbbd4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMDisableAllComponent
	// Flags: [Final|Exec|Native|Public]
	void GMDisableAllComponent(); // Offset: 0x1063bbbc0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.GMBeginCircle
	// Flags: [Final|Exec|Native|Public]
	void GMBeginCircle(IntProperty CurIndex, float PosX, float PosY); // Offset: 0x1063bbad0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatLevel.GetCurrentLevelOffset
	// Flags: [Final|Exec|Native|Public|HasDefaults]
	struct FVector GetCurrentLevelOffset(); // Offset: 0x1063bba98 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function Development.GMCheatLevel.EnableMyLandscapeDraw
	// Flags: [Final|Exec|Native|Public]
	void EnableMyLandscapeDraw(); // Offset: 0x1063bba84 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.DisableMyLandscapeDraw
	// Flags: [Final|Exec|Native|Public]
	void DisableMyLandscapeDraw(); // Offset: 0x1063bba70 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatLevel.DebugAirDropPickInfo
	// Flags: [Final|Exec|Native|Public]
	void DebugAirDropPickInfo(float DrawTime, float BoxDrawSize, float BoxDrawLineLength, float ListWrapperDrawSize, float ListWrapperDrawLineLength); // Offset: 0x1063bb90c // Return & Params: Num(5) Size(0x14)
};

// Object Name: Class Development.GMCheatManager
// Size: 0x128 // Inherited bytes: 0x78
struct UGMCheatManager : UCheatManager {
	// Fields
	char pad_0x78[0x58]; // Offset: 0x78 // Size: 0x58
	struct TArray<struct UGMCheatSystem*> GMCheatSystems; // Offset: 0xd0 // Size: 0x10
	struct AActor* PVETestMonster; // Offset: 0xe0 // Size: 0x08
	char pad_0xE8[0x30]; // Offset: 0xe8 // Size: 0x30
	struct TArray<struct ASkeletalMeshActor*> SkeletalMeshActorPool; // Offset: 0x118 // Size: 0x10

	// Functions

	// Object Name: Function Development.GMCheatManager.WatchReport
	// Flags: [Final|Exec|Native|Public]
	void WatchReport(); // Offset: 0x1063c74d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.VehicleTowardTo
	// Flags: [Final|Exec|Native|Public|Const]
	void VehicleTowardTo(float X, float Y, float Z); // Offset: 0x1063c73e8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.VehicleSpotLog
	// Flags: [Final|Exec|Native|Public]
	void VehicleSpotLog(); // Offset: 0x1063c73d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.VehicleMoveTo
	// Flags: [Final|Exec|Native|Public|Const]
	void VehicleMoveTo(float X, float Y, float Z); // Offset: 0x1063c72e4 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.VehicleMoveAndTowardTo
	// Flags: [Final|Exec|Native|Public|Const]
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1); // Offset: 0x1063c7144 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Development.GMCheatManager.UpdateTrainingRank
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void UpdateTrainingRank(IntProperty TrainingType, IntProperty Level, IntProperty Top1wScore, IntProperty Score); // Offset: 0x1063c701c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.ToggleSpringMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ToggleSpringMode(); // Offset: 0x1063c7008 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ToggleSpringDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ToggleSpringDebug(); // Offset: 0x1063c6ff4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TogglePawnInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void TogglePawnInfo(); // Offset: 0x1063c6fe0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TestStringSHA1
	// Flags: [Final|Exec|Native|Public]
	void TestStringSHA1(StrProperty InStr); // Offset: 0x1063c6f48 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.TestReplayStreamerLastError
	// Flags: [Final|Exec|Native|Public]
	void TestReplayStreamerLastError(); // Offset: 0x1063c6f34 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TestPlayerLostEvent
	// Flags: [Final|Exec|Native|Public]
	void TestPlayerLostEvent(IntProperty LostEvent); // Offset: 0x1063c6eb8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.TestPlayerBattleResult
	// Flags: [Final|Exec|Native|Public|Const]
	void TestPlayerBattleResult(); // Offset: 0x1063c6ea4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TestNetworkLost
	// Flags: [Final|Exec|Native|Public]
	void TestNetworkLost(); // Offset: 0x1063c6e90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TestLineTrace
	// Flags: [Final|Exec|Native|Public]
	void TestLineTrace(float X, float Y, float Z); // Offset: 0x1063c6da0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.TestKillInfoPanel
	// Flags: [Final|Exec|Native|Public|Const]
	void TestKillInfoPanel(IntProperty WeaponId, IntProperty Relationship, IntProperty WeaponAvatarID, IntProperty ClothID); // Offset: 0x1063c6c78 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.TestGameplayDataRecord
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void TestGameplayDataRecord(IntProperty UID, IntProperty RecordType); // Offset: 0x1063c6bc4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.TestEnableRegionsLongDistanceSleep
	// Flags: [Final|Exec|Native|Public|Const]
	void TestEnableRegionsLongDistanceSleep(bool bEnable); // Offset: 0x1063c6b40 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.TestDeactivate
	// Flags: [Final|Exec|Native|Public]
	void TestDeactivate(); // Offset: 0x1063c6b2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TestCrash
	// Flags: [Final|Exec|Native|Public]
	void TestCrash(); // Offset: 0x1063c6b18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.TeleportToVehicleAI
	// Flags: [Final|Exec|Native|Public|Const]
	void TeleportToVehicleAI(IntProperty InIndex); // Offset: 0x1063c6a9c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.TeleportToPVEMonster
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void TeleportToPVEMonster(IntProperty ChapterID, IntProperty LevelID, IntProperty WaveID); // Offset: 0x1063c69ac // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.TeleportTo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void TeleportTo(float X, float Y, float Z); // Offset: 0x1063c68bc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.TeleportNearestVehicleAIToPercentOfPath
	// Flags: [Final|Exec|Native|Public|Const]
	void TeleportNearestVehicleAIToPercentOfPath(float InPercent); // Offset: 0x1063c6840 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SwitchSocialIsland
	// Flags: [Final|Exec|Native|Public]
	void SwitchSocialIsland(IntProperty LandId, float Delay); // Offset: 0x1063c6788 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.SwitchShowUI
	// Flags: [Final|Exec|Native|Public]
	void SwitchShowUI(); // Offset: 0x1063c6774 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.SuperGMKillDS
	// Flags: [Final|Exec|Native|Public]
	void SuperGMKillDS(); // Offset: 0x1063c6760 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.StopAllMonsterDSAnim
	// Flags: [Final|Exec|Native|Public]
	void StopAllMonsterDSAnim(bool bStop); // Offset: 0x1063c66dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.StatVehicle
	// Flags: [Final|Exec|Native|Public]
	void StatVehicle(); // Offset: 0x1063c66c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.StarTPerforPlatTag
	// Flags: [Final|Exec|Native|Public]
	void StarTPerforPlatTag(StrProperty TagName); // Offset: 0x1063c65e4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.SpawnVehicleWithPathAtPoint
	// Flags: [Final|Exec|Native|Public|Const]
	void SpawnVehicleWithPathAtPoint(StrProperty Path, bool AroundMe, float X, float Y, float Z, IntProperty Num); // Offset: 0x1063c6400 // Return & Params: Num(6) Size(0x24)

	// Object Name: Function Development.GMCheatManager.SpawnTrainingAIAroundMe
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SpawnTrainingAIAroundMe(IntProperty Num, IntProperty Range); // Offset: 0x1063c634c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.SpawnMonsterAround
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SpawnMonsterAround(IntProperty MonsterID, float Radius, IntProperty Num, bool bStopAI); // Offset: 0x1063c6218 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Development.GMCheatManager.SpawnItemBySpotDefaultTag
	// Flags: [Final|Exec|Native|Public]
	void SpawnItemBySpotDefaultTag(StrProperty DefaultTag); // Offset: 0x1063c6134 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.SpawnGameFeatureActor
	// Flags: [Final|Exec|Native|Public]
	void SpawnGameFeatureActor(StrProperty Path); // Offset: 0x1063c609c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.SpawnFakePlayer
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SpawnFakePlayer(IntProperty Num, bool bWithPet, bool bStopAI); // Offset: 0x1063c5f90 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function Development.GMCheatManager.SpawnDecal
	// Flags: [Final|Exec|Native|Public]
	void SpawnDecal(); // Offset: 0x1063c5f7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.SpawnBotForTest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SpawnBotForTest(IntProperty Num); // Offset: 0x1063c5f00 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SpawnAIAroundMe
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SpawnAIAroundMe(IntProperty Num, float Range, bool HasWeapon, bool HasAvator, bool HasBackpack); // Offset: 0x1063c5d74 // Return & Params: Num(5) Size(0xb)

	// Object Name: Function Development.GMCheatManager.ShowScrollMsg
	// Flags: [Final|Exec|Native|Public|Const]
	void ShowScrollMsg(uint32_t MsgID, StrProperty Param1, StrProperty Param2); // Offset: 0x1063c5bb8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Development.GMCheatManager.ShowPet
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ShowPet(bool Enable); // Offset: 0x1063c5b34 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.ShowOBMultiKillTips
	// Flags: [Final|Exec|Native|Public|Const]
	void ShowOBMultiKillTips(StrProperty PlayerName, IntProperty TeamID, IntProperty PlayerKillNum, IntProperty TeamKillNum); // Offset: 0x1063c5994 // Return & Params: Num(4) Size(0x1c)

	// Object Name: Function Development.GMCheatManager.ShowHideGuide
	// Flags: [Final|Exec|Native|Public]
	void ShowHideGuide(IntProperty GuideID, bool bShow); // Offset: 0x1063c58d8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatManager.ShowAllPlayersMarkIncludeAI
	// Flags: [Final|Exec|Native|Public|Const]
	void ShowAllPlayersMarkIncludeAI(float VisDistance); // Offset: 0x1063c585c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ShowAKComponentPosition
	// Flags: [Final|Exec|Native|Public]
	void ShowAKComponentPosition(bool _IsShow); // Offset: 0x1063c57d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetWeatherPlaySpeed
	// Flags: [Final|Exec|Native|Public]
	void SetWeatherPlaySpeed(float FSpeed); // Offset: 0x1063c575c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetViewFPP
	// Flags: [Final|Exec|Native|Public|Const]
	void SetViewFPP(bool IsFPP); // Offset: 0x1063c56d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetTouchMoveLog
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetTouchMoveLog(bool Enable); // Offset: 0x1063c5654 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetTouchMoveDelay
	// Flags: [Final|Exec|Native|Public]
	void SetTouchMoveDelay(IntProperty DelayFrame); // Offset: 0x1063c55d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetSpringArm
	// Flags: [Final|Exec|Native|Public]
	void SetSpringArm(char armFlag); // Offset: 0x1063c555c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetSkillDup
	// Flags: [Final|Exec|Native|Public|Const]
	void SetSkillDup(IntProperty Count); // Offset: 0x1063c54e0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetRateScore
	// Flags: [Final|Exec|Native|Public]
	void SetRateScore(float RankScore); // Offset: 0x1063c5464 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNetSpeed
	// Flags: [Final|Exec|Native|Public]
	void SetNetSpeed(IntProperty NewSpeed); // Offset: 0x1063c53e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNeckUp
	// Flags: [Final|Exec|Native|Public]
	void SetNeckUp(float UpAngle); // Offset: 0x1063c536c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNeckSpeed
	// Flags: [Final|Exec|Native|Public]
	void SetNeckSpeed(float Speed); // Offset: 0x1063c52f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNeckRight
	// Flags: [Final|Exec|Native|Public]
	void SetNeckRight(float RightAngle); // Offset: 0x1063c5274 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNeckMax
	// Flags: [Final|Exec|Native|Public]
	void SetNeckMax(float MaxAngle); // Offset: 0x1063c51f8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetNeckLeft
	// Flags: [Final|Exec|Native|Public]
	void SetNeckLeft(float LeftAngle); // Offset: 0x1063c517c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetMonsterNumMultiple
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetMonsterNumMultiple(IntProperty ChapterID, IntProperty LevelID, IntProperty DiffcultPerc); // Offset: 0x1063c508c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.SetMonsterNB
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetMonsterNB(bool MonsterNB); // Offset: 0x1063c5008 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetMonsterHatred
	// Flags: [Final|Exec|Native|Public]
	void SetMonsterHatred(float Hatred); // Offset: 0x1063c4f8c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetMaxFpsFromDevice
	// Flags: [Final|Exec|Native|Public]
	void SetMaxFpsFromDevice(); // Offset: 0x1063c4f78 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.SetIsRender
	// Flags: [Final|Exec|Native|Public]
	void SetIsRender(bool IsRender); // Offset: 0x1063c4ef4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetInactiveClearEnable
	// Flags: [Final|Exec|Native|Public|Const]
	void SetInactiveClearEnable(bool bNewActive); // Offset: 0x1063c4e70 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetHignPerformance
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetHignPerformance(bool SetOpen); // Offset: 0x1063c4dec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetGVMemberID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetGVMemberID(IntProperty memberID); // Offset: 0x1063c4d70 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetFestivalAirDrop
	// Flags: [Final|Exec|Native|Public|Const]
	void SetFestivalAirDrop(bool bFestival, StrProperty BoxMesh); // Offset: 0x1063c4c40 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.GMCheatManager.SetFestivaGrenade
	// Flags: [Final|Exec|Native|Public]
	void SetFestivaGrenade(bool bFestival); // Offset: 0x1063c4bbc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetDynamicWeather
	// Flags: [Final|Exec|Native|Public|Const]
	void SetDynamicWeather(IntProperty WeatherType, IntProperty EventType); // Offset: 0x1063c4b08 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.SetDsSwitch
	// Flags: [Final|Exec|Native|Public]
	void SetDsSwitch(IntProperty InKey, StrProperty InValue); // Offset: 0x1063c49e4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.GMCheatManager.SetDeliver
	// Flags: [Final|Exec|Native|Public]
	void SetDeliver(); // Offset: 0x1063c49d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.SetDearDeathReduce
	// Flags: [Final|Exec|Native|Public]
	void SetDearDeathReduce(IntProperty Index, float ReduceFactor); // Offset: 0x1063c4918 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.SetClearIslandEnable
	// Flags: [Final|Exec|Native|Public|Const]
	void SetClearIslandEnable(bool bNewActive); // Offset: 0x1063c4894 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetCameraLagEnable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetCameraLagEnable(bool Enable); // Offset: 0x1063c4810 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetCacheInputNum
	// Flags: [Final|Exec|Native|Public]
	void SetCacheInputNum(IntProperty CacheNum); // Offset: 0x1063c4794 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.SetAnimEnable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetAnimEnable(bool Enable); // Offset: 0x1063c4710 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetAnimDebugInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetAnimDebugInfo(bool debugAnimInfo); // Offset: 0x1063c468c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetAnimDebugGroup
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetAnimDebugGroup(bool debugAnimGroup); // Offset: 0x1063c4608 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.SetAllMonsterHp
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void SetAllMonsterHp(IntProperty Hp); // Offset: 0x1063c458c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ServerCMD
	// Flags: [Final|Exec|Native|Public]
	void ServerCMD(StrProperty Cmd); // Offset: 0x1063c44f4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.ResumeAllLevelSequenceActors
	// Flags: [Final|Exec|Native|Public|Const]
	void ResumeAllLevelSequenceActors(); // Offset: 0x1063c44e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ReplayRecoverReconnect
	// Flags: [Final|Exec|Native|Public]
	void ReplayRecoverReconnect(StrProperty IP, StrProperty Port); // Offset: 0x1063c43f4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Development.GMCheatManager.ReplayRecoverGenerateDSCheckpoint
	// Flags: [Final|Exec|Native|Public]
	void ReplayRecoverGenerateDSCheckpoint(StrProperty InReplayName); // Offset: 0x1063c435c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.RenderTargetCompressTest
	// Flags: [Final|Exec|Native|Public|HasDefaults|BlueprintCallable]
	void RenderTargetCompressTest(struct UTexture* pTexture, struct FVector Posoffset); // Offset: 0x1063c42a4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Development.GMCheatManager.RemoveTimeSwitch
	// Flags: [Final|Exec|Native|Public]
	void RemoveTimeSwitch(IntProperty TimeID); // Offset: 0x1063c4228 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.RefreshReconnectUI
	// Flags: [Final|Exec|Native|Public]
	void RefreshReconnectUI(); // Offset: 0x1063c4214 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PVESpawnMonsterByPos
	// Flags: [Final|Exec|Native|Public]
	void PVESpawnMonsterByPos(IntProperty MonsterID, IntProperty Num, float Radius, float PosX, float PosY, float PosZ); // Offset: 0x1063c4074 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Development.GMCheatManager.PVESpawnMonsterByDistance
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PVESpawnMonsterByDistance(IntProperty MonsterID, IntProperty Num, float Radius, float FrontDist); // Offset: 0x1063c3f4c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.PVESpawnMonster
	// Flags: [Final|Exec|Native|Public]
	void PVESpawnMonster(IntProperty MonsterID, bool StopAI); // Offset: 0x1063c3e90 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatManager.PVESetTestMonster
	// Flags: [Final|Exec|Native|Public]
	void PVESetTestMonster(struct AActor* InMonster); // Offset: 0x1063c3e14 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.GMCheatManager.PVEResetMonsterTable
	// Flags: [Final|Exec|Native|Public]
	void PVEResetMonsterTable(); // Offset: 0x1063c3e00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PVEPrintMonsterCount
	// Flags: [Final|Exec|Native|Public]
	void PVEPrintMonsterCount(); // Offset: 0x1063c3dec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PVEPrintAllAnim
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PVEPrintAllAnim(bool bPrintAll); // Offset: 0x1063c3d68 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.PVEPlayerTriggerSkill
	// Flags: [Final|Exec|Native|Public]
	void PVEPlayerTriggerSkill(IntProperty SkillID, IntProperty EventType); // Offset: 0x1063c3cb4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.PVEPlayerStopSkill
	// Flags: [Final|Exec|Native|Public]
	void PVEPlayerStopSkill(IntProperty SkillID, IntProperty StopReason); // Offset: 0x1063c3c00 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.PVEMonsterTriggerSkill
	// Flags: [Final|Exec|Native|Public]
	void PVEMonsterTriggerSkill(IntProperty SkillID, IntProperty EventType); // Offset: 0x1063c3b4c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.PVEMonsterStopSkill
	// Flags: [Final|Exec|Native|Public]
	void PVEMonsterStopSkill(IntProperty SkillID, IntProperty StopReason); // Offset: 0x1063c3a98 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.PVEMonsterRemoveBuffByID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PVEMonsterRemoveBuffByID(IntProperty BuffID, IntProperty LayerCount, IntProperty CauserSkillID, bool CauseByPlayer); // Offset: 0x1063c3968 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Development.GMCheatManager.PVEMonsterAddBuffByID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PVEMonsterAddBuffByID(IntProperty BuffID, IntProperty LayerCount, IntProperty CauserSkillID, bool CauseByPlayer); // Offset: 0x1063c3838 // Return & Params: Num(4) Size(0xd)

	// Object Name: Function Development.GMCheatManager.PVECloseMonsterLimit
	// Flags: [Final|Exec|Native|Public]
	void PVECloseMonsterLimit(bool bCloseMonsterLimit); // Offset: 0x1063c37b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.PVEClearTestMonster
	// Flags: [Final|Exec|Native|Public]
	void PVEClearTestMonster(); // Offset: 0x1063c37a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PrintScreenDebug
	// Flags: [Final|Exec|Native|Public]
	void PrintScreenDebug(IntProperty Key, float TimeToDisplay, StrProperty DebugMessage); // Offset: 0x1063c3690 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function Development.GMCheatManager.PrintRegionObjectList
	// Flags: [Final|Exec|Native|Public|Const]
	void PrintRegionObjectList(); // Offset: 0x1063c367c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PrintPool
	// Flags: [Final|Exec|Native|Public]
	void PrintPool(); // Offset: 0x1063c3668 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PrintHP
	// Flags: [Final|Exec|Native|Public]
	void PrintHP(); // Offset: 0x1063c3654 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PrintAllAnim
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PrintAllAnim(); // Offset: 0x1063c3640 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PrintAllActorLocationByClassName
	// Flags: [Final|Exec|Native|Public|Const]
	void PrintAllActorLocationByClassName(StrProperty InClassName); // Offset: 0x1063c35a8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.PlayBornIslandSequence
	// Flags: [Final|Exec|Native|Public|Const]
	void PlayBornIslandSequence(bool bPlay); // Offset: 0x1063c3524 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.PauseAnim
	// Flags: [Final|Exec|Native|Public|Const]
	void PauseAnim(bool bPause); // Offset: 0x1063c34a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.PauseAllLevelSequenceActors
	// Flags: [Final|Exec|Native|Public]
	void PauseAllLevelSequenceActors(); // Offset: 0x1063c348c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.PacketSimulationLag
	// Flags: [Final|Exec|Native|Public|Const]
	void PacketSimulationLag(IntProperty InSimulationLag); // Offset: 0x1063c3410 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.OpenHitTest
	// Flags: [Final|Exec|Native|Public]
	void OpenHitTest(); // Offset: 0x1063c33fc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.OpenFixationFreeFallVelocity
	// Flags: [Final|Exec|Native|Public]
	void OpenFixationFreeFallVelocity(float X, float Y, float Z); // Offset: 0x1063c330c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.OpenAllCharacterHitBodyCollison
	// Flags: [Final|Exec|Native|Public]
	void OpenAllCharacterHitBodyCollison(float Time); // Offset: 0x1063c3290 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.NotifyGameModeParamsChanged
	// Flags: [Final|Exec|Native|Public|Const]
	void NotifyGameModeParamsChanged(IntProperty NewDuration); // Offset: 0x1063c3214 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.NativeSimulateAction
	// Flags: [Final|Exec|Native|Public|Const]
	void NativeSimulateAction(IntProperty SimActionType); // Offset: 0x1063c3198 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.MoveSnake
	// Flags: [Final|Exec|Native|Public]
	void MoveSnake(bool bEnable, float moveInternal, float ForwardRate, float RightRate); // Offset: 0x1063c305c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.ModifyVehicleSyncServerData
	// Flags: [Final|Exec|Native|Public|Const]
	void ModifyVehicleSyncServerData(float MinCorrectionInterval, float AllowMaxDiatanceSqAtServer); // Offset: 0x1063c2fa8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.ModifyVehicleSyncClientData
	// Flags: [Final|Exec|Native|Public|Const]
	void ModifyVehicleSyncClientData(); // Offset: 0x1063c2f94 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ModifyVehicleBuoyancy
	// Flags: [Final|Exec|Native|Public]
	void ModifyVehicleBuoyancy(float MeshDensity, IntProperty Index); // Offset: 0x1063c2edc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.MaxSimulationIterations
	// Flags: [Final|Exec|Native|Public]
	void MaxSimulationIterations(IntProperty V); // Offset: 0x1063c2e60 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.MarkAPMLevelFinish
	// Flags: [Final|Exec|Native|Public]
	void MarkAPMLevelFinish(); // Offset: 0x1063c2e4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.MainCityConnectToDS
	// Flags: [Final|Exec|Native|Public]
	void MainCityConnectToDS(StrProperty IP, StrProperty Port); // Offset: 0x1063c2d60 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Development.GMCheatManager.LogNetWorkParams
	// Flags: [Final|Exec|Native|Public|Const]
	void LogNetWorkParams(); // Offset: 0x1063c2d4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.LogicAreaTest
	// Flags: [Final|Exec|Native|Public|Const]
	void LogicAreaTest(IntProperty AreaType, StrProperty str); // Offset: 0x1063c2c78 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.GMCheatManager.LogAllBuffInfo
	// Flags: [Final|Exec|Native|Public]
	void LogAllBuffInfo(); // Offset: 0x1063c2c64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.LogAllActors
	// Flags: [Final|Exec|Native|Public|Const]
	void LogAllActors(); // Offset: 0x1063c2c50 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.LocalConnectToLobbySrv
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void LocalConnectToLobbySrv(StrProperty URL); // Offset: 0x1063c2b6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.KillAllPVEBot
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void KillAllPVEBot(); // Offset: 0x1063c2b58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.KillAllPlayers
	// Flags: [Final|Exec|Native|Public|Const]
	void KillAllPlayers(); // Offset: 0x1063c2b44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.JankOpt_Spawn20AIBlockVolume
	// Flags: [Final|Exec|Native|Public]
	void JankOpt_Spawn20AIBlockVolume(float X, float Y, float Z); // Offset: 0x1063c2a54 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.ItemSpotLog
	// Flags: [Final|Exec|Native|Public|Const]
	void ItemSpotLog(); // Offset: 0x1063c2a40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.InGameAndroidBack
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void InGameAndroidBack(); // Offset: 0x1063c2a2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GotoSpectatingDirectly
	// Flags: [Final|Exec|Native|Public]
	void GotoSpectatingDirectly(); // Offset: 0x1063c2a18 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GotoSpectating
	// Flags: [Final|Exec|Native|Public]
	void GotoSpectating(); // Offset: 0x1063c2a04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GotoSpecificWeather
	// Flags: [Final|Exec|Native|Public|Const]
	void GotoSpecificWeather(IntProperty WeatherIdx); // Offset: 0x1063c2988 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMWayPointEvent
	// Flags: [Final|Exec|Native|Public]
	void GMWayPointEvent(IntProperty EventID); // Offset: 0x1063c290c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMUseGunCollision
	// Flags: [Final|Exec|Native|Public]
	void GMUseGunCollision(bool bIsUse); // Offset: 0x1063c2888 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSuicideCurVehicle
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSuicideCurVehicle(); // Offset: 0x1063c2874 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSuicide
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSuicide(); // Offset: 0x1063c2860 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMStopAI
	// Flags: [Final|Exec|Native|Public|Const]
	void GMStopAI(bool bStop, uint32_t InPlayerKey); // Offset: 0x1063c2798 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GMSpawnSociallandSubVehicle01
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnSociallandSubVehicle01(); // Offset: 0x1063c2784 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPointWithAvatarList
	// Flags: [Final|Exec|Native|Public|HasOutParms|Const]
	void GMSpawnSocialLandPlayerAIAroundPointWithAvatarList(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, StrProperty& AvatarList, bool bWithWeapon); // Offset: 0x1063c2408 // Return & Params: Num(12) Size(0x31)

	// Object Name: Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPoint
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnSocialLandPlayerAIAroundPoint(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon); // Offset: 0x1063c2108 // Return & Params: Num(11) Size(0x1d)

	// Object Name: Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMeWithAvatar
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	void GMSpawnSocialLandPlayerAIAroundMeWithAvatar(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, StrProperty& AvatarList, bool bWithWeapon); // Offset: 0x1063c1e74 // Return & Params: Num(8) Size(0x21)

	// Object Name: Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMe
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnSocialLandPlayerAIAroundMe(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon); // Offset: 0x1063c1c58 // Return & Params: Num(7) Size(0xd)

	// Object Name: Function Development.GMCheatManager.GMSpawnSmartBearerTestPlane
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnSmartBearerTestPlane(); // Offset: 0x1063c1c44 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSpawnSingleSocialLandPlayerAI
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnSingleSocialLandPlayerAI(uint32_t DataOffset, float X, float Y, float Z, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui); // Offset: 0x1063c19f8 // Return & Params: Num(8) Size(0x14)

	// Object Name: Function Development.GMCheatManager.GMSpawnPlayerAIAroundPointDownloadable
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnPlayerAIAroundPointDownloadable(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet); // Offset: 0x1063c17c0 // Return & Params: Num(8) Size(0x17)

	// Object Name: Function Development.GMCheatManager.GMSpawnPlayerAIAroundPoint
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnPlayerAIAroundPoint(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet); // Offset: 0x1063c1588 // Return & Params: Num(8) Size(0x17)

	// Object Name: Function Development.GMCheatManager.GMSpawnPlayerAIAroundMeDownloadable
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnPlayerAIAroundMeDownloadable(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet); // Offset: 0x1063c13fc // Return & Params: Num(5) Size(0xb)

	// Object Name: Function Development.GMCheatManager.GMSpawnPlayerAIAroundMe
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnPlayerAIAroundMe(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet); // Offset: 0x1063c1270 // Return & Params: Num(5) Size(0xb)

	// Object Name: Function Development.GMCheatManager.GMSpawnPickup
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnPickup(IntProperty SpawnNum, IntProperty PickupTypes, IntProperty Direction, float SpawnDistance); // Offset: 0x1063c1144 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.GMSpawnParticle
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnParticle(StrProperty AssetPath, float X, float Y, float Z, float Scale); // Offset: 0x1063c0f68 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Development.GMCheatManager.GMSpawnAutoTestAI
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnAutoTestAI(IntProperty NameExtraID); // Offset: 0x1063c0eec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSpawnAIWithIDAndLoc
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	struct AActor* GMSpawnAIWithIDAndLoc(IntProperty AIID, float SpawnLocX, float SpawnLocY, float SpawnLocZ, float Radius, IntProperty TeamID, IntProperty ItemID1, IntProperty ItemNum1, IntProperty ItemID2, IntProperty ItemNum2, IntProperty ItemID3, IntProperty ItemNum3); // Offset: 0x1063c0bdc // Return & Params: Num(13) Size(0x38)

	// Object Name: Function Development.GMCheatManager.GMSpawnAIOnAIPoint3
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSpawnAIOnAIPoint3(); // Offset: 0x1063c0bc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSpawnAIOnAIPoint2
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnAIOnAIPoint2(); // Offset: 0x1063c0bb4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSpawnAIOnAIPoint1
	// Flags: [Final|Exec|Native|Public]
	void GMSpawnAIOnAIPoint1(); // Offset: 0x1063c0ba0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSocialSetRotation
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSocialSetRotation(float X, float Y, float Z); // Offset: 0x1063c0ab0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.GMSociallandPlayerMoveToTestPoint
	// Flags: [Final|Exec|Native|Public]
	void GMSociallandPlayerMoveToTestPoint(); // Offset: 0x1063c0a9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSociallandPlayerMoveToAISpawnPoint1
	// Flags: [Final|Exec|Native|Public]
	void GMSociallandPlayerMoveToAISpawnPoint1(); // Offset: 0x1063c0a88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMSociallandChangeItemFromStr
	// Flags: [Final|Exec|Native|Public]
	void GMSociallandChangeItemFromStr(StrProperty ItemString, StrProperty EquimentItemString); // Offset: 0x1063c090c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Development.GMCheatManager.GMShowHitFeedback
	// Flags: [Final|Exec|Native|Public|Const]
	void GMShowHitFeedback(bool bCombatHitFeedbackEnable); // Offset: 0x1063c0888 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSetSpeed
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetSpeed(float WalkSpeed); // Offset: 0x1063c080c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSetServerLevelLoadingMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetServerLevelLoadingMode(bool bNewLoadAll); // Offset: 0x1063c0788 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSetPawnNull
	// Flags: [Final|Exec|Native|Public]
	void GMSetPawnNull(bool bIsNull); // Offset: 0x1063c0704 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSetMLAIModifyDamage
	// Flags: [Final|Exec|Native|Public]
	void GMSetMLAIModifyDamage(IntProperty InIsModify); // Offset: 0x1063c0688 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSetMaxAINum
	// Flags: [Final|Exec|Native|Public|Const]
	void GMSetMaxAINum(IntProperty Num); // Offset: 0x1063c060c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSetJoystickEightDirection
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetJoystickEightDirection(bool IsNeedEightDirection); // Offset: 0x1063c0588 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSetJoystickActivatedRange
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetJoystickActivatedRange(bool IsNeedActivatedRange, float ActivatedRange); // Offset: 0x1063c04c0 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GMSetHealth
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetHealth(float Val); // Offset: 0x1063c0444 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSetDeliveryToMLAI
	// Flags: [Final|Exec|Native|Public]
	void GMSetDeliveryToMLAI(IntProperty InIsDeliveryToMLAI); // Offset: 0x1063c03c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMSetCullDistance
	// Flags: [Final|Exec|Native|Public]
	void GMSetCullDistance(bool bCullDistance); // Offset: 0x1063c0344 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMSetCircleTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMSetCircleTime(float cdTime, float LastTime); // Offset: 0x1063c0290 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GMSelectorWayPoint
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	void GMSelectorWayPoint(struct FName& NameOfAIWayPointSelector, IntProperty GMPathIndex); // Offset: 0x1063c01c0 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function Development.GMCheatManager.GMRevivePlayer
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMRevivePlayer(); // Offset: 0x1063c01ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMRainCount
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMRainCount(float Count); // Offset: 0x1063c0130 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMIOSFrameRateLock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMIOSFrameRateLock(IntProperty FrameRateLock); // Offset: 0x1063c00b4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMInvincible
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMInvincible(bool bInvincible); // Offset: 0x1063c0030 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.GMIncreaseHealth
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMIncreaseHealth(); // Offset: 0x1063c001c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMGatherAllPlayerAIAroundMe
	// Flags: [Final|Exec|Native|Public]
	void GMGatherAllPlayerAIAroundMe(float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet); // Offset: 0x1063bfecc // Return & Params: Num(4) Size(0x7)

	// Object Name: Function Development.GMCheatManager.GMForceSuicide
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMForceSuicide(); // Offset: 0x1063bfeb8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMForceNullNetwork
	// Flags: [Final|Exec|Native|Public|Const]
	void GMForceNullNetwork(IntProperty bForce); // Offset: 0x1063bfe3c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GMDrawLine
	// Flags: [Final|Exec|Native|Public]
	void GMDrawLine(float X1, float Y1, float Z1, float X2, float Y2, float Z2, float LifeTime); // Offset: 0x1063bfc64 // Return & Params: Num(7) Size(0x1c)

	// Object Name: Function Development.GMCheatManager.GMDrawDirLine
	// Flags: [Final|Exec|Native|Public]
	void GMDrawDirLine(float StartX, float StartY, float StartZ, float DirX, float DirY, float DirZ, float Length, float LifeTime); // Offset: 0x1063bfa50 // Return & Params: Num(8) Size(0x20)

	// Object Name: Function Development.GMCheatManager.GMDrawDebugSphere2
	// Flags: [Final|Exec|Native|Public]
	void GMDrawDebugSphere2(float X, float Y, float Z, float Radius, IntProperty Segments, float LifeTime); // Offset: 0x1063bf8ac // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Development.GMCheatManager.GMDrawDebugSphere
	// Flags: [Final|Exec|Native|Public]
	void GMDrawDebugSphere(float Radius, IntProperty Segments, float LifeTime); // Offset: 0x1063bf7b8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.GMDrawCone
	// Flags: [Final|Exec|Native|Public]
	void GMDrawCone(float Degrees, float LifeTime, IntProperty LineNum); // Offset: 0x1063bf6c8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.GMDecreaseHealth
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GMDecreaseHealth(); // Offset: 0x1063bf6b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMChangeAIAype
	// Flags: [Final|Exec|Native|Public]
	void GMChangeAIAype(IntProperty Type, uint32_t InPlayerKey); // Offset: 0x1063bf600 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GMAutoTestChangeItem
	// Flags: [Final|Exec|Native|Public|Const]
	void GMAutoTestChangeItem(uint32_t PlayerKey, StrProperty ItemString, StrProperty EquimentItemString); // Offset: 0x1063bf444 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Development.GMCheatManager.GMAIFire
	// Flags: [Final|Exec|Native|Public]
	void GMAIFire(); // Offset: 0x1063bf430 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GMAddItemForAI
	// Flags: [Final|Exec|Native|Public]
	void GMAddItemForAI(IntProperty ItemId, IntProperty Count, uint32_t InPlayerKey); // Offset: 0x1063bf340 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.GMActiveRenderDynamicStyle
	// Flags: [Final|Exec|Native|Public|Const]
	void GMActiveRenderDynamicStyle(bool bSet, IntProperty Type); // Offset: 0x1063bf278 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GMActiveAI
	// Flags: [Final|Exec|Native|Public|Const]
	void GMActiveAI(); // Offset: 0x1063bf264 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GetObjectRef
	// Flags: [Final|Exec|Native|Public]
	void GetObjectRef(uint64 ObjectAddr); // Offset: 0x1063bf1e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.GMCheatManager.GetGVMemberID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GetGVMemberID(IntProperty memberID); // Offset: 0x1063bf16c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.GetGold
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GetGold(); // Offset: 0x1063bf158 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.GenerateMonsterWave
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void GenerateMonsterWave(IntProperty ChapterID, IntProperty LevelID, IntProperty WaveID); // Offset: 0x1063bf068 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatManager.ForceStopDynamicWeatherChange
	// Flags: [Final|Exec|Native|Public|Const]
	void ForceStopDynamicWeatherChange(); // Offset: 0x1063bf054 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ForceStartNextDynamicWeatherChange
	// Flags: [Final|Exec|Native|Public|Const]
	void ForceStartNextDynamicWeatherChange(); // Offset: 0x1063bf040 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ForceKickoutAllPlayers
	// Flags: [Final|Exec|Native|Public]
	void ForceKickoutAllPlayers(IntProperty LandId); // Offset: 0x1063befc4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ForceGC
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ForceGC(); // Offset: 0x1063befb0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ForceEndInputForAppWillDeactivate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ForceEndInputForAppWillDeactivate(); // Offset: 0x1063bef9c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.FireSpawnAirplane
	// Flags: [Final|Exec|Native|Public|Const]
	void FireSpawnAirplane(); // Offset: 0x1063bef88 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.FireReviveTeammate
	// Flags: [Final|Exec|Native|Public|Const]
	void FireReviveTeammate(IntProperty RespawnStartID, bool bJump); // Offset: 0x1063beecc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatManager.FallKill
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void FallKill(IntProperty FallType); // Offset: 0x1063bee50 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.EquipHelmetAndBodyArmor
	// Flags: [Final|Exec|Native|Public]
	void EquipHelmetAndBodyArmor(IntProperty Lev); // Offset: 0x1063bedd4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.EnterPVELevel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void EnterPVELevel(IntProperty ChapterID, IntProperty LevelID); // Offset: 0x1063bed20 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.EnterPawnState
	// Flags: [Final|Exec|Native|Public]
	void EnterPawnState(enum class EPawnState InState, bool IsEnter); // Offset: 0x1063bec60 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function Development.GMCheatManager.EndAPMTag
	// Flags: [Final|Exec|Native|Public]
	void EndAPMTag(); // Offset: 0x1063bec4c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.EnablePool
	// Flags: [Final|Exec|Native|Public]
	void EnablePool(bool bEnable); // Offset: 0x1063bebc8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.EnableHitBox
	// Flags: [Final|Exec|Native|Public|Const]
	void EnableHitBox(bool bEnable); // Offset: 0x1063beb44 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.EnableFuzzyInformation
	// Flags: [Final|Exec|Native|Public|Const]
	void EnableFuzzyInformation(); // Offset: 0x1063beb30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.EnableDSAnim
	// Flags: [Final|Exec|Native|Public]
	void EnableDSAnim(StrProperty MonsterName, bool bEnable); // Offset: 0x1063bea50 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function Development.GMCheatManager.DumpSmartBearerManager
	// Flags: [Final|Exec|Native|Public]
	void DumpSmartBearerManager(); // Offset: 0x1063bea3c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpPlayerStart
	// Flags: [Final|Exec|Native|Public]
	void DumpPlayerStart(); // Offset: 0x1063bea28 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpObjectNetProperties
	// Flags: [Final|Exec|Native|Public]
	void DumpObjectNetProperties(struct UObject* InObj); // Offset: 0x1063be9ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.GMCheatManager.DumpMoveLog
	// Flags: [Final|Exec|Native|Public]
	void DumpMoveLog(bool bDump); // Offset: 0x1063be928 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.DumpLevels
	// Flags: [Final|Exec|Native|Public]
	void DumpLevels(); // Offset: 0x1063be914 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpLegacyObjectPoolInfo
	// Flags: [Final|Exec|Native|Public]
	void DumpLegacyObjectPoolInfo(); // Offset: 0x1063be900 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpDSNetConsiderList
	// Flags: [Final|Exec|Native|Public]
	void DumpDSNetConsiderList(); // Offset: 0x1063be8ec // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpCharacterRelevant
	// Flags: [Final|Exec|Native|Public]
	void DumpCharacterRelevant(); // Offset: 0x1063be8d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpAnimLayer
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAnimLayer(); // Offset: 0x1063be8c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DumpAIOcclusion
	// Flags: [Final|Exec|Native|Public|Const]
	void DumpAIOcclusion(); // Offset: 0x1063be8b0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DSReconnectEvent
	// Flags: [Final|Exec|Native|Public]
	void DSReconnectEvent(); // Offset: 0x1063be89c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DSConnectLostEvent
	// Flags: [Final|Exec|Native|Public]
	void DSConnectLostEvent(); // Offset: 0x1063be888 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DismissIsland
	// Flags: [Final|Exec|Native|Public]
	void DismissIsland(); // Offset: 0x1063be874 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DetectUnderGround
	// Flags: [Final|Exec|Native|Public]
	void DetectUnderGround(float X1, float Y1, float Z1, float X2, float Y2, float Z2); // Offset: 0x1063be6d4 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function Development.GMCheatManager.DestroyVehicleWithPath
	// Flags: [Final|Exec|Native|Public|Const]
	void DestroyVehicleWithPath(StrProperty Path); // Offset: 0x1063be63c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.DebugUnderWaterEffect
	// Flags: [Final|Exec|Native|Public]
	void DebugUnderWaterEffect(); // Offset: 0x1063be628 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugStopEMote
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugStopEMote(IntProperty Index); // Offset: 0x1063be5ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.DebugStopCapture
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void DebugStopCapture(); // Offset: 0x1063be598 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugStartEMote
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugStartEMote(IntProperty Index); // Offset: 0x1063be51c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.DebugSpringArm
	// Flags: [Final|Exec|Native|Public]
	void DebugSpringArm(bool bDebug); // Offset: 0x1063be498 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.DebugSpeed
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugSpeed(); // Offset: 0x1063be484 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugSetChangeWearCoolDownTime
	// Flags: [Final|Exec|Native|Public]
	void DebugSetChangeWearCoolDownTime(float Time); // Offset: 0x1063be408 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.DebugRoomCustomParams
	// Flags: [Final|Exec|Native|Public]
	void DebugRoomCustomParams(IntProperty FirstCircleDelayTime, IntProperty FirstCircleAppearTime, IntProperty FirstWhiteCircleRadiusMultiplicator, IntProperty BlueCircleDamageMultiplicator); // Offset: 0x1063be2e0 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatManager.DebugPoseState
	// Flags: [Final|Exec|Native|Public]
	void DebugPoseState(bool bEnable); // Offset: 0x1063be25c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.DebugMove
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugMove(); // Offset: 0x1063be248 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugLocation
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugLocation(); // Offset: 0x1063be234 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugLevelsInfo
	// Flags: [Final|Exec|Native|Public]
	void DebugLevelsInfo(); // Offset: 0x1063be220 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugFixedParams
	// Flags: [Final|Exec|Native|Public]
	void DebugFixedParams(); // Offset: 0x1063be20c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugFindFloorResult
	// Flags: [Final|Exec|Native|Public]
	void DebugFindFloorResult(); // Offset: 0x1063be1f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugCamera
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugCamera(); // Offset: 0x1063be1e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugAttach
	// Flags: [Final|Exec|Native|Public|Const]
	void DebugAttach(); // Offset: 0x1063be1d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.DebugAnimList
	// Flags: [Final|Exec|Native|Public]
	void DebugAnimList(); // Offset: 0x1063be1bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ClientSetSpeed
	// Flags: [Final|Exec|Native|Public|Const]
	void ClientSetSpeed(float Times, bool bGMSetSpeed); // Offset: 0x1063be0fc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatManager.ClearTestMesh
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ClearTestMesh(); // Offset: 0x1063be0e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ClearScreenDebug
	// Flags: [Final|Exec|Native|Public]
	void ClearScreenDebug(); // Offset: 0x1063be0d4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ClearNoDriverVehicle
	// Flags: [Final|Exec|Native|Public]
	void ClearNoDriverVehicle(); // Offset: 0x1063be0c0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ClearAnimLayer
	// Flags: [Final|Exec|Native|Public|Const]
	void ClearAnimLayer(IntProperty AnimLayer); // Offset: 0x1063be044 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ClearAllTlog
	// Flags: [Final|Exec|Native|Public]
	void ClearAllTlog(); // Offset: 0x1063be030 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.CheatBeginPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	void CheatBeginPlay(); // Offset: 0x1063be014 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ChatTest
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	void ChatTest(StrProperty& Content); // Offset: 0x1063bdf6c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.ChangeViewTarget
	// Flags: [Final|Exec|Native|Public|Const]
	void ChangeViewTarget(); // Offset: 0x1063bdf58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ChangeMonsterWalkMode
	// Flags: [Final|Exec|Native|Public]
	void ChangeMonsterWalkMode(IntProperty Mode); // Offset: 0x1063bdedc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ChangeAllTimeDuration
	// Flags: [Final|Exec|Native|Public]
	void ChangeAllTimeDuration(IntProperty NewEndStateTime, IntProperty NewStartShowLifeTime, IntProperty NewMinimumAliveTime, IntProperty NewMinimumPlayerNum, IntProperty NewSpecialLifeTime); // Offset: 0x1063bdd78 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Development.GMCheatManager.ChangeAIDamageRate
	// Flags: [Final|Exec|Native|Public]
	void ChangeAIDamageRate(float InRate); // Offset: 0x1063bdcfc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.ChangeAIAttackPlayerDamageRate
	// Flags: [Final|Exec|Native|Public]
	void ChangeAIAttackPlayerDamageRate(float InRate); // Offset: 0x1063bdc80 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.CastUIMsg
	// Flags: [Final|Exec|Native|Public]
	void CastUIMsg(StrProperty Msg, StrProperty module); // Offset: 0x1063bdb94 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Development.GMCheatManager.CallOnReconnect
	// Flags: [Final|Exec|Native|Public]
	void CallOnReconnect(); // Offset: 0x1063bdb80 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.CallLuaTableFunction
	// Flags: [Final|Exec|Native|Public]
	void CallLuaTableFunction(StrProperty tableName, StrProperty FunctionName); // Offset: 0x1063bda94 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function Development.GMCheatManager.CallGMLua
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void CallGMLua(StrProperty FunctionName); // Offset: 0x1063bd9b0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.CallGameModeLuaOverrideFunction
	// Flags: [Final|Exec|Native|Public|HasOutParms|Const]
	void CallGameModeLuaOverrideFunction(StrProperty& FunctionName); // Offset: 0x1063bd908 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.CallGameModeLuaFunction
	// Flags: [Final|Exec|Native|Public|HasOutParms|Const]
	void CallGameModeLuaFunction(StrProperty& FunctionName); // Offset: 0x1063bd860 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.BuildingCollide
	// Flags: [Final|Exec|Native|Public]
	void BuildingCollide(bool InCollide); // Offset: 0x1063bd7dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.AutoShoveling
	// Flags: [Final|Exec|Native|Public]
	void AutoShoveling(bool bEnable, float AutoShvelingSeconds); // Offset: 0x1063bd714 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatManager.AutoSetPlayerLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AutoSetPlayerLocation(bool bEnable); // Offset: 0x1063bd690 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.AnimDebugUseSkipMapForDistanceFactor
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugUseSkipMapForDistanceFactor(bool bFlag); // Offset: 0x1063bd60c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.AnimDebugUseLodMap
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugUseLodMap(bool bUseLodMap); // Offset: 0x1063bd588 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.AnimDebugUpdateFlag
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugUpdateFlag(IntProperty Type); // Offset: 0x1063bd50c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AnimDebugNonRenderedRate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugNonRenderedRate(IntProperty UpdateRate); // Offset: 0x1063bd490 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AnimDebugNonRenderedMinDist
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugNonRenderedMinDist(float minDist); // Offset: 0x1063bd414 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AnimDebugNonRenderedMaxDist
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugNonRenderedMaxDist(float MaxDist); // Offset: 0x1063bd398 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AnimDebugLodSkipMap
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugLodSkipMap(MapProperty SkipMap); // Offset: 0x1063bd2d8 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function Development.GMCheatManager.AnimDebugEnable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugEnable(bool bEnable); // Offset: 0x1063bd254 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatManager.AnimDebugBaseDistFactor
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void AnimDebugBaseDistFactor(struct TArray<float> BaseDistFactor); // Offset: 0x1063bd170 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatManager.AirDropByClassPath
	// Flags: [Final|Exec|Native|Public]
	void AirDropByClassPath(float X, float Y, float Z, StrProperty ClassPath); // Offset: 0x1063bcfc0 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function Development.GMCheatManager.AILog
	// Flags: [Final|Exec|Native|Public]
	void AILog(); // Offset: 0x1063bcfac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.AddWonderfulPeriod
	// Flags: [Final|Exec|Native|Public]
	void AddWonderfulPeriod(IntProperty Type, float StartTime, float EndTime, IntProperty AdditionalData, IntProperty Index); // Offset: 0x1063bce48 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function Development.GMCheatManager.AddTimeSwitch
	// Flags: [Final|Exec|Native|Public]
	void AddTimeSwitch(IntProperty TimeID); // Offset: 0x1063bcdcc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AddTestTouchInput
	// Flags: [Final|Exec|Native|Public|Const]
	void AddTestTouchInput(IntProperty FingerIndex, float X, float Y, float Force, bool bIsStart); // Offset: 0x1063bcc5c // Return & Params: Num(5) Size(0x11)

	// Object Name: Function Development.GMCheatManager.AddScore
	// Flags: [Final|Exec|Native|Public|Const]
	void AddScore(IntProperty Score); // Offset: 0x1063bcbe0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatManager.AddAllTestRes
	// Flags: [Final|Exec|Native|Public]
	void AddAllTestRes(); // Offset: 0x1063bcbcc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatManager.ActiveCurCamera
	// Flags: [Final|Exec|Native|Public]
	void ActiveCurCamera(bool bActive); // Offset: 0x1063bcb48 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class Development.GMCheatMod
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatMod : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatMod.TriggerHunterRevival
	// Flags: [Final|Exec|Native|Public]
	void TriggerHunterRevival(); // Offset: 0x1063ce210 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatMod.SetUAETriggerEnable
	// Flags: [Final|Exec|Native|Public]
	void SetUAETriggerEnable(bool IsEnbale); // Offset: 0x1063ce18c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatMod.SetInfectResetPlayerInterTime
	// Flags: [Final|Exec|Native|Public]
	void SetInfectResetPlayerInterTime(float InterTime); // Offset: 0x1063ce110 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatMod.OnBuyRevivalTeammate
	// Flags: [Final|Exec|Native|Public]
	void OnBuyRevivalTeammate(IntProperty TeammateIndex); // Offset: 0x1063ce094 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatMod.OnBuyRevivalSign
	// Flags: [Final|Exec|Native|Public]
	void OnBuyRevivalSign(); // Offset: 0x1063ce080 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatMod.InfectionEndRound
	// Flags: [Final|Exec|Native|Public]
	void InfectionEndRound(); // Offset: 0x1063ce06c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatMod.GetGameResult
	// Flags: [Final|Exec|Native|Public]
	void GetGameResult(); // Offset: 0x1063ce058 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatMod.DebugEnableFerrisWheelTick
	// Flags: [Final|Exec|Native|Public]
	void DebugEnableFerrisWheelTick(bool bEnable); // Offset: 0x1063cdfd4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatMod.ClearBossBornPoint
	// Flags: [Final|Exec|Native|Public]
	void ClearBossBornPoint(); // Offset: 0x1063cdfc0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatMod.ChangePVELevel
	// Flags: [Final|Exec|Native|Public]
	void ChangePVELevel(IntProperty Lv); // Offset: 0x1063cdf44 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatMod.CallZombieFlowAirDrop
	// Flags: [Final|Exec|Native|Public]
	void CallZombieFlowAirDrop(IntProperty ZombieID); // Offset: 0x1063cdec8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatMod.CallZombieAirDrop
	// Flags: [Final|Exec|Native|Public]
	void CallZombieAirDrop(IntProperty ZombieID); // Offset: 0x1063cde4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatMod.AddBossBornPoint
	// Flags: [Final|Exec|Native|Public]
	void AddBossBornPoint(float BornX, float BornY); // Offset: 0x1063cdd98 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class Development.GMCheatOther
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatOther : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatOther.UnLoadAllCollision
	// Flags: [Final|Exec|Native|Public]
	void UnLoadAllCollision(bool Unload); // Offset: 0x1063cefa4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.ShutDownBroadcastFatalDamage
	// Flags: [Final|Exec|Native|Public]
	void ShutDownBroadcastFatalDamage(bool IsOpen); // Offset: 0x1063cef20 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.ShowHideLandscapeComponent
	// Flags: [Final|Exec|Native|Public]
	void ShowHideLandscapeComponent(bool bShow); // Offset: 0x1063cee9c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.SetSingleThreadUpdateAnim
	// Flags: [Final|Exec|Native|Public]
	void SetSingleThreadUpdateAnim(bool InIsSingleThread); // Offset: 0x1063cee18 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.SetIsShowBlood
	// Flags: [Final|Exec|Native|Public]
	void SetIsShowBlood(bool InIsShowBlood); // Offset: 0x1063ced94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.RetrievePlayerBattleResultData
	// Flags: [Final|Exec|Native|Public]
	void RetrievePlayerBattleResultData(); // Offset: 0x1063ced80 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.RemoveDSOptimGrayPublishFlags
	// Flags: [Final|Exec|Native|Public]
	void RemoveDSOptimGrayPublishFlags(IntProperty InFlagIndex); // Offset: 0x1063ced04 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatOther.RecoverStatusAfterReconnecting
	// Flags: [Final|Exec|Native|Public]
	void RecoverStatusAfterReconnecting(); // Offset: 0x1063cecf0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.ObserveWhoKilledMe
	// Flags: [Final|Exec|Native|Public]
	void ObserveWhoKilledMe(); // Offset: 0x1063cecdc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.GMTestSpectateRPC
	// Flags: [Final|Exec|Native|Public]
	void GMTestSpectateRPC(); // Offset: 0x1063cecc8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.GMTestSpectateException
	// Flags: [Final|Exec|Native|Public]
	void GMTestSpectateException(IntProperty Type); // Offset: 0x1063cec4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatOther.GMTestExternalData
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	void GMTestExternalData(struct TArray<char>& InData); // Offset: 0x1063ceba4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatOther.GMTeleport
	// Flags: [Final|Exec|Native|Public]
	void GMTeleport(struct FName Teleporter); // Offset: 0x1063ceb28 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.GMCheatOther.GMSetScalarParam
	// Flags: [Final|Exec|Native|Public]
	void GMSetScalarParam(StrProperty Name, StrProperty ShaderName, float Value); // Offset: 0x1063ce96c // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Development.GMCheatOther.GMSendDailyTaskReport
	// Flags: [Final|Exec|Native|Public]
	void GMSendDailyTaskReport(); // Offset: 0x1063ce958 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.GMBroastSyncTaskInfo
	// Flags: [Final|Exec|Native|Public]
	void GMBroastSyncTaskInfo(); // Offset: 0x1063ce944 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.EmptyLandscapeActor
	// Flags: [Final|Exec|Native|Public]
	void EmptyLandscapeActor(); // Offset: 0x1063ce930 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.DumpGUIDCache
	// Flags: [Final|Exec|Native|Public]
	void DumpGUIDCache(IntProperty DriverIndex); // Offset: 0x1063ce8b4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatOther.DumpActiveObject
	// Flags: [Final|Exec|Native|Public]
	void DumpActiveObject(); // Offset: 0x1063ce8a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.DebugEnableDrawSearchLine
	// Flags: [Final|Exec|Native|Public]
	void DebugEnableDrawSearchLine(IntProperty bEnabled); // Offset: 0x1063ce824 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatOther.CanSeeAllUI
	// Flags: [Final|Exec|Native|Public]
	void CanSeeAllUI(bool bUIVisibility); // Offset: 0x1063ce7a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatOther.AutoSelectTeammateToView
	// Flags: [Final|Exec|Native|Public]
	void AutoSelectTeammateToView(); // Offset: 0x1063ce78c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatOther.AddDSOptimGrayPublishFlags
	// Flags: [Final|Exec|Native|Public]
	void AddDSOptimGrayPublishFlags(IntProperty InFlagIndex); // Offset: 0x1063ce710 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Development.GMCheatSkill
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatSkill : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatSkill.TryDeleteOneSkill
	// Flags: [Final|Exec|Native|Public]
	void TryDeleteOneSkill(IntProperty SkillID, bool bImmediately); // Offset: 0x1063d0594 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatSkill.TryAddOneSkill
	// Flags: [Final|Exec|Native|Public]
	void TryAddOneSkill(IntProperty SkillID, bool bActive, IntProperty ButtonSlot); // Offset: 0x1063d0490 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatSkill.TriggerSkillWithID
	// Flags: [Final|Exec|Native|Public]
	void TriggerSkillWithID(IntProperty SkillID, bool bEnable); // Offset: 0x1063d03d4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatSkill.StartSkill
	// Flags: [Final|Exec|Native|Public]
	void StartSkill(IntProperty SkillID); // Offset: 0x1063d0358 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.StartMainSkill
	// Flags: [Final|Exec|Native|Public]
	void StartMainSkill(); // Offset: 0x1063d0344 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatSkill.SetSkillSkinID
	// Flags: [Final|Exec|Native|Public]
	void SetSkillSkinID(IntProperty SkillID, IntProperty SkillSkinID); // Offset: 0x1063d0290 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatSkill.SetSkillLevel
	// Flags: [Final|Exec|Native|Public]
	void SetSkillLevel(IntProperty SkillID, IntProperty SkillLevel); // Offset: 0x1063d01dc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatSkill.SetSkillCDTimeScale
	// Flags: [Final|Exec|Native|Public]
	void SetSkillCDTimeScale(IntProperty SkillID, float Scale, IntProperty ScaleType); // Offset: 0x1063d00e8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatSkill.SetSkillCDIndexTimeScale
	// Flags: [Final|Exec|Native|Public]
	void SetSkillCDIndexTimeScale(IntProperty SkillID, IntProperty SkillCDIndex, float Scale, IntProperty ScaleType); // Offset: 0x1063cffbc // Return & Params: Num(4) Size(0x10)

	// Object Name: Function Development.GMCheatSkill.SetAllSkillCDTimeScale
	// Flags: [Final|Exec|Native|Public]
	void SetAllSkillCDTimeScale(float Scale); // Offset: 0x1063cff40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.RemoveVehicleBuffBySkill
	// Flags: [Final|Exec|Native|Public]
	void RemoveVehicleBuffBySkill(IntProperty SkillID); // Offset: 0x1063cfec4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.RemoveVehicleBuff
	// Flags: [Final|Exec|Native|Public]
	void RemoveVehicleBuff(IntProperty BuffID); // Offset: 0x1063cfe48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.RemoveBuffBySkill
	// Flags: [Final|Exec|Native|Public]
	void RemoveBuffBySkill(IntProperty SkillID, IntProperty IsPlayer, IntProperty LayerCount); // Offset: 0x1063cfd58 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatSkill.RemoveBuff
	// Flags: [Final|Exec|Native|Public]
	void RemoveBuff(IntProperty BuffID, IntProperty IsPlayer, IntProperty BuffLayer); // Offset: 0x1063cfc68 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatSkill.ReloadPVETable
	// Flags: [Final|Exec|Native|Public]
	void ReloadPVETable(); // Offset: 0x1063cfc54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatSkill.EnableSkillCD
	// Flags: [Final|Exec|Native|Public]
	void EnableSkillCD(bool bEnable); // Offset: 0x1063cfbd0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatSkill.DynamicRemoveSkill
	// Flags: [Final|Exec|Native|Public]
	void DynamicRemoveSkill(IntProperty SkillID); // Offset: 0x1063cfb54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.DynamicAddSkill
	// Flags: [Final|Exec|Native|Public]
	void DynamicAddSkill(IntProperty SkillID); // Offset: 0x1063cfad8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.DumpSkills
	// Flags: [Final|Exec|Native|Public]
	void DumpSkills(); // Offset: 0x1063cfac4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatSkill.AddVehicleBuffBySkill
	// Flags: [Final|Exec|Native|Public]
	void AddVehicleBuffBySkill(IntProperty SkillID); // Offset: 0x1063cfa48 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.AddVehicleBuff
	// Flags: [Final|Exec|Native|Public]
	void AddVehicleBuff(IntProperty BuffID); // Offset: 0x1063cf9cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatSkill.AddSkillToken
	// Flags: [Final|Exec|Native|Public]
	void AddSkillToken(IntProperty SkillID, bool bAdd); // Offset: 0x1063cf910 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatSkill.AddBuffBySkill
	// Flags: [Final|Exec|Native|Public]
	void AddBuffBySkill(IntProperty SkillID, IntProperty IsPlayer); // Offset: 0x1063cf85c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatSkill.AddBuff
	// Flags: [Final|Exec|Native|Public]
	void AddBuff(IntProperty BuffID, IntProperty IsPlayer); // Offset: 0x1063cf7a8 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class Development.GMCheatVehicle
// Size: 0x80 // Inherited bytes: 0x80
struct UGMCheatVehicle : UGMCheatSystem {
	// Functions

	// Object Name: Function Development.GMCheatVehicle.VW_Seat
	// Flags: [Final|Exec|Native|Public]
	void VW_Seat(IntProperty change); // Offset: 0x1063d192c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatVehicle.VehicleResetTo
	// Flags: [Final|Exec|Native|Public]
	void VehicleResetTo(float X, float Y, float Z); // Offset: 0x1063d183c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatVehicle.VehicleMoveTo
	// Flags: [Final|Exec|Native|Public]
	void VehicleMoveTo(float X, float Y, float Z); // Offset: 0x1063d174c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatVehicle.ToggleVehicleSync
	// Flags: [Final|Exec|Native|Public]
	void ToggleVehicleSync(bool Val); // Offset: 0x1063d16c8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatVehicle.TeleportAndEnterVehicleWithPath
	// Flags: [Final|Exec|Native|Public|Const]
	void TeleportAndEnterVehicleWithPath(StrProperty Path, IntProperty SeatID); // Offset: 0x1063d15f0 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Development.GMCheatVehicle.SpawnVehicleWithPathAndLoc
	// Flags: [Final|Exec|Native|Public]
	void SpawnVehicleWithPathAndLoc(StrProperty Path, float X, float Y, float Z, IntProperty Num); // Offset: 0x1063d145c // Return & Params: Num(5) Size(0x20)

	// Object Name: Function Development.GMCheatVehicle.SpawnVehicleWithPath
	// Flags: [Final|Exec|Native|Public]
	void SpawnVehicleWithPath(StrProperty Path, IntProperty Num); // Offset: 0x1063d1384 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Development.GMCheatVehicle.SpawnVehicle
	// Flags: [Final|Exec|Native|Public]
	void SpawnVehicle(); // Offset: 0x1063d1370 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatVehicle.SpawnAllVehicle
	// Flags: [Final|Exec|Native|Public]
	void SpawnAllVehicle(StrProperty Path); // Offset: 0x1063d12d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatVehicle.SetSnowBoradRotationInAir
	// Flags: [Final|Exec|Native|Public]
	void SetSnowBoradRotationInAir(float Pitch, float Yaw, float Roll); // Offset: 0x1063d11e8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function Development.GMCheatVehicle.SetFuelByPercent
	// Flags: [Final|Exec|Native|Public]
	void SetFuelByPercent(float percent); // Offset: 0x1063d116c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatVehicle.ResetVehicleEngine
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ResetVehicleEngine(); // Offset: 0x1063d1158 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatVehicle.ReqLeaveVehicle
	// Flags: [Final|Exec|Native|Public]
	void ReqLeaveVehicle(); // Offset: 0x1063d1144 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatVehicle.ReqExchangeVehicleCharacter
	// Flags: [Final|Exec|Native|Public]
	void ReqExchangeVehicleCharacter(IntProperty Param); // Offset: 0x1063d10c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatVehicle.ReqEnterVehicle
	// Flags: [Final|Exec|Native|Public]
	void ReqEnterVehicle(float dis); // Offset: 0x1063d104c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatVehicle.ReqEnterSnowBoard
	// Flags: [Final|Exec|Native|Public]
	void ReqEnterSnowBoard(); // Offset: 0x1063d1038 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatVehicle.ReplaceVehicleWithPath
	// Flags: [Final|Exec|Native|Public]
	void ReplaceVehicleWithPath(StrProperty Path); // Offset: 0x1063d0fa0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatVehicle.ReplaceVehicle
	// Flags: [Final|Exec|Native|Public]
	void ReplaceVehicle(); // Offset: 0x1063d0f8c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatVehicle.MakeVehicleFly
	// Flags: [Final|Exec|Native|Public]
	void MakeVehicleFly(IntProperty IsFly, bool bIsUp); // Offset: 0x1063d0ed0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Development.GMCheatVehicle.KillAllEnermyVehicle
	// Flags: [Final|Exec|Native|Public]
	void KillAllEnermyVehicle(); // Offset: 0x1063d0ebc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.GMCheatWeapon
// Size: 0x90 // Inherited bytes: 0x80
struct UGMCheatWeapon : UGMCheatSystem {
	// Fields
	char pad_0x80[0x10]; // Offset: 0x80 // Size: 0x10

	// Functions

	// Object Name: Function Development.GMCheatWeapon.ToggleShootVertify
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ToggleShootVertify(); // Offset: 0x1063d2ab0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.ShowWeaponDirection
	// Flags: [Final|Exec|Native|Public]
	void ShowWeaponDirection(IntProperty Time); // Offset: 0x1063d2a34 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.ShowBulletInfo
	// Flags: [Final|Exec|Native|Public]
	void ShowBulletInfo(); // Offset: 0x1063d2a20 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.SetWeaponAttrValue
	// Flags: [Final|Exec|Native|Public]
	void SetWeaponAttrValue(StrProperty AttrName, float Val); // Offset: 0x1063d28fc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function Development.GMCheatWeapon.SetWeaponAttrReloadTable
	// Flags: [Final|Exec|Native|Public]
	void SetWeaponAttrReloadTable(StrProperty tableName); // Offset: 0x1063d2818 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.GMCheatWeapon.SetShootPveVertify
	// Flags: [Final|Exec|Native|Public]
	void SetShootPveVertify(bool IsVertify); // Offset: 0x1063d2794 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatWeapon.SetShootPveDebug
	// Flags: [Final|Exec|Native|Public]
	void SetShootPveDebug(bool DebugShootPve); // Offset: 0x1063d2710 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatWeapon.SetBaseImpactDamageEntity
	// Flags: [Final|Exec|Native|Public]
	void SetBaseImpactDamageEntity(float Damage); // Offset: 0x1063d2694 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.ScopeOut
	// Flags: [Final|Exec|Native|Public]
	void ScopeOut(); // Offset: 0x1063d2680 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.ScopeIn
	// Flags: [Final|Exec|Native|Public]
	void ScopeIn(); // Offset: 0x1063d266c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.PrintWeaponAllState
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void PrintWeaponAllState(); // Offset: 0x1063d2658 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.GMSwitchWeaponSpeedScale
	// Flags: [Final|Exec|Native|Public]
	void GMSwitchWeaponSpeedScale(float SwitchScale); // Offset: 0x1063d25dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.GMSetReportWeaponNum
	// Flags: [Final|Exec|Native|Public]
	void GMSetReportWeaponNum(IntProperty Num); // Offset: 0x1063d2560 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.EnableCurrentWeaponInfiniteBullets
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void EnableCurrentWeaponInfiniteBullets(bool bEnable); // Offset: 0x1063d24dc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.GMCheatWeapon.DrawDebugWeaponCrossHair
	// Flags: [Final|Exec|Native|Public]
	void DrawDebugWeaponCrossHair(); // Offset: 0x1063d24c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.DestroyMyWeapons
	// Flags: [Final|Exec|Native|Public|Const]
	void DestroyMyWeapons(); // Offset: 0x1063d24b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.DebugEnableBulletImpact
	// Flags: [Final|Exec|Native|Public]
	void DebugEnableBulletImpact(IntProperty bEnabled); // Offset: 0x1063d2438 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.CreateAutoShootTimer
	// Flags: [Final|Native|Public]
	void CreateAutoShootTimer(float Interval); // Offset: 0x1063d23bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.CollectAllPlayerWeaponPosInfo
	// Flags: [Final|Exec|Native|Public]
	void CollectAllPlayerWeaponPosInfo(); // Offset: 0x1063d23a8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.GMCheatWeapon.ChangeWeaponFunction
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	void ChangeWeaponFunction(IntProperty NewWeaponFunction); // Offset: 0x1063d232c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.ChangeShootWeaponStrValue
	// Flags: [Final|Exec|Native|Public]
	void ChangeShootWeaponStrValue(StrProperty StrName, StrProperty KeyName, float Value); // Offset: 0x1063d2170 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function Development.GMCheatWeapon.AutoShootNearestEnemy
	// Flags: [Final|Exec|Native|Public]
	void AutoShootNearestEnemy(float Interval, float Duration); // Offset: 0x1063d20bc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function Development.GMCheatWeapon.AutoShoot
	// Flags: [Final|Native|Public]
	void AutoShoot(float Interval); // Offset: 0x1063d2040 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.GMCheatWeapon.AimForAutoShoot
	// Flags: [Final|Native|Public]
	void AimForAutoShoot(); // Offset: 0x1063d202c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.ImGuiWindowBase
// Size: 0x5c8 // Inherited bytes: 0x570
struct AImGuiWindowBase : ALuaActor {
	// Fields
	StrProperty WindowTitle; // Offset: 0x570 // Size: 0x10
	struct FVector2D WindowSize; // Offset: 0x580 // Size: 0x08
	IntProperty WindowFlags; // Offset: 0x588 // Size: 0x04
	enum class EImGuiWindowDisplayMode DisplayMode; // Offset: 0x58c // Size: 0x01
	bool bIsWindowVisible; // Offset: 0x58d // Size: 0x01
	char pad_0x58E[0x2]; // Offset: 0x58e // Size: 0x02
	float WindowAlpha; // Offset: 0x590 // Size: 0x04
	IntProperty ImGuiWindowIndex; // Offset: 0x594 // Size: 0x04
	struct TArray<struct UImGuiTabBase*> Tabs; // Offset: 0x598 // Size: 0x10
	IntProperty ActiveTabIndex; // Offset: 0x5a8 // Size: 0x04
	char pad_0x5AC[0x4]; // Offset: 0x5ac // Size: 0x04
	struct TArray<struct UImGuiFeatureWidget*> Features; // Offset: 0x5b0 // Size: 0x10
	char pad_0x5C0[0x8]; // Offset: 0x5c0 // Size: 0x08

	// Functions

	// Object Name: Function Development.ImGuiWindowBase.ToggleWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleWindow(); // Offset: 0x1063d45d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ImGuiWindowBase.ToggleDisplayMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleDisplayMode(); // Offset: 0x1063d45bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ImGuiWindowBase.ShowWindowWithTabs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ShowWindowWithTabs(struct TArray<struct UImGuiTabBase*>& TabClasses); // Offset: 0x1063d4514 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.ShowWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowWindow(); // Offset: 0x1063d4500 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ImGuiWindowBase.SetWindowAlpha
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetWindowAlpha(float Alpha); // Offset: 0x1063d4484 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.ImGuiWindowBase.SetDisplayMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDisplayMode(enum class EImGuiWindowDisplayMode NewMode); // Offset: 0x1063d4408 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiWindowBase.RemoveTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveTab(struct FName TabID); // Offset: 0x1063d438c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowBase.RemoveFeature
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RemoveFeature(struct FName FeatureID); // Offset: 0x1063d4310 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowBase.IsWindowVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsWindowVisible(); // Offset: 0x1063d42f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiWindowBase.HideWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HideWindow(); // Offset: 0x1063d42e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ImGuiWindowBase.GetWindowAlpha
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetWindowAlpha(); // Offset: 0x1063d42c4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.ImGuiWindowBase.GetTabByID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UImGuiTabBase* GetTabByID(struct FName TabID); // Offset: 0x1063d4238 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.GetFeatureByID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UImGuiFeatureWidget* GetFeatureByID(struct FName FeatureID); // Offset: 0x1063d41ac // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.GetDisplayMode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EImGuiWindowDisplayMode GetDisplayMode(); // Offset: 0x1063d4190 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.ImGuiWindowBase.GetAllTabs
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct UImGuiTabBase*> GetAllTabs(); // Offset: 0x1063d4174 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.GetAllFeatures
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct UImGuiFeatureWidget*> GetAllFeatures(); // Offset: 0x1063d4158 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.GetActiveTab
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UImGuiTabBase* GetActiveTab(); // Offset: 0x1063d4124 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowBase.AddTabWithLuaPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiTabBase* AddTabWithLuaPath(struct UImGuiTabBase* TabClass, StrProperty InLuaFilePath); // Offset: 0x1063d4040 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Development.ImGuiWindowBase.AddTabInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddTabInstance(struct UImGuiTabBase* Tab, StrProperty InLuaFilePath); // Offset: 0x1063d3f6c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.ImGuiWindowBase.AddTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiTabBase* AddTab(struct UImGuiTabBase* TabClass); // Offset: 0x1063d3ee0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.AddLuaTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiTabBase* AddLuaTab(StrProperty InLuaFilePath); // Offset: 0x1063d3e38 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.ImGuiWindowBase.AddLuaFeature
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiFeatureWidget* AddLuaFeature(StrProperty InLuaFilePath); // Offset: 0x1063d3d90 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.ImGuiWindowBase.AddFeatureWithLuaPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiFeatureWidget* AddFeatureWithLuaPath(struct UImGuiFeatureWidget* FeatureClass, StrProperty InLuaFilePath); // Offset: 0x1063d3cac // Return & Params: Num(3) Size(0x20)

	// Object Name: Function Development.ImGuiWindowBase.AddFeatureInstance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AddFeatureInstance(struct UImGuiFeatureWidget* Feature, StrProperty InLuaFilePath); // Offset: 0x1063d3bd8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.ImGuiWindowBase.AddFeature
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UImGuiFeatureWidget* AddFeature(struct UImGuiFeatureWidget* FeatureClass); // Offset: 0x1063d3b4c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowBase.ActivateTab
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ActivateTab(struct FName TabID); // Offset: 0x1063d3ad0 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class Development.ImGuiWindowManager
// Size: 0x80 // Inherited bytes: 0x30
struct UImGuiWindowManager : UGameInstanceSubsystem {
	// Fields
	MapProperty WindowCache; // Offset: 0x30 // Size: 0x50

	// Functions

	// Object Name: Function Development.ImGuiWindowManager.ToggleWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d5288 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowManager.ShowWindowWithTabs
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ShowWindowWithTabs(struct AImGuiWindowBase* WindowClass, struct TArray<struct UImGuiTabBase*>& TabClasses); // Offset: 0x1063d51a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.ImGuiWindowManager.ShowWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ShowWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d5128 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowManager.HideWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HideWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d50ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.ImGuiWindowManager.HideAllWindows
	// Flags: [Final|Native|Public|BlueprintCallable]
	void HideAllWindows(); // Offset: 0x1063d5098 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function Development.ImGuiWindowManager.HasWindow
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d500c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function Development.ImGuiWindowManager.GetWindow
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct AImGuiWindowBase* GetWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d4f80 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowManager.GetOrCreateWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AImGuiWindowBase* GetOrCreateWindow(struct AImGuiWindowBase* WindowClass); // Offset: 0x1063d4ef4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowManager.GetAllWindows
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct AImGuiWindowBase*> GetAllWindows(); // Offset: 0x1063d4e90 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function Development.ImGuiWindowManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UImGuiWindowManager* Get(struct UObject* WorldContextObject); // Offset: 0x1063d4e14 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function Development.ImGuiWindowManager.DestroyAllWindows
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DestroyAllWindows(); // Offset: 0x1063d4e00 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.MemLeakTestGameMode
// Size: 0x540 // Inherited bytes: 0x540
struct AMemLeakTestGameMode : AGameModeBase {
	// Functions

	// Object Name: Function Development.MemLeakTestGameMode.ForceGC
	// Flags: [Final|Exec|Native|Private|BlueprintCallable]
	void ForceGC(); // Offset: 0x1063d571c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class Development.QPSBPLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UQPSBPLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function Development.QPSBPLibrary.SwitchUIWidgetShowFromUserWidget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SwitchUIWidgetShowFromUserWidget(struct FName ContainName, StrProperty UserWidgetName, StrProperty WidgetName); // Offset: 0x1063d5ac0 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function Development.QPSBPLibrary.SwitchUIWidgetShow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SwitchUIWidgetShow(struct FName ContainName, StrProperty WidgetName); // Offset: 0x1063d59a4 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function Development.QPSBPLibrary.SwitchUIContainsShow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SwitchUIContainsShow(struct FName Name); // Offset: 0x1063d5930 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function Development.QPSBPLibrary.IsPublishVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsPublishVersion(); // Offset: 0x1063d58fc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function Development.QPSBPLibrary.GetHZBValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetHZBValue(); // Offset: 0x1063d58c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function Development.QPSBPLibrary.GetDistanceCullingFactor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetDistanceCullingFactor(); // Offset: 0x1063d5894 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class Development.ReplayRecordersDataTab
// Size: 0x110 // Inherited bytes: 0xc0
struct UReplayRecordersDataTab : UImGuiTabBase {
	// Fields
	char pad_0xC0[0x50]; // Offset: 0xc0 // Size: 0x50
};

