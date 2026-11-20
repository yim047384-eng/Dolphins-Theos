#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class AutoRobot.AutoRobotModule
// Size: 0x60 // Inherited bytes: 0x28
struct UAutoRobotModule : UObject {
	// Fields
	char pad_0x28[0x38]; // Offset: 0x28 // Size: 0x38
};

// Object Name: Class AutoRobot.AutoRobotSceneTool
// Size: 0x28 // Inherited bytes: 0x28
struct UAutoRobotSceneTool : UObject {
};

// Object Name: Class AutoRobot.AutoRunPlayerTestActor
// Size: 0x4d0 // Inherited bytes: 0x4b0
struct AAutoRunPlayerTestActor : AActor {
	// Fields
	float Interval; // Offset: 0x4ac // Size: 0x04
	struct TArray<struct FVector> PortalLoctions; // Offset: 0x4b0 // Size: 0x10
	char pad_0x4C4[0xc]; // Offset: 0x4c4 // Size: 0x0c
};

// Object Name: Class AutoRobot.AutoTestInterface
// Size: 0x1e0 // Inherited bytes: 0x178
struct UAutoTestInterface : UActorComponent {
	// Fields
	char pad_0x178[0x68]; // Offset: 0x178 // Size: 0x68

	// Functions

	// Object Name: Function AutoRobot.AutoTestInterface.StarJumpPlane
	// Flags: [Final|Native|Public]
	void StarJumpPlane(); // Offset: 0x101fc32d4 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class AutoRobot.AutoTestSubsystem
// Size: 0x68 // Inherited bytes: 0x30
struct UAutoTestSubsystem : UGameInstanceSubsystem {
	// Fields
	struct URemoteControlManager* RemoteControlManager; // Offset: 0x30 // Size: 0x08
	struct UAutoRobotModule* AutoModule; // Offset: 0x38 // Size: 0x08
	StrProperty AutoTestMissionType; // Offset: 0x40 // Size: 0x10
	StrProperty CustomLineStr; // Offset: 0x50 // Size: 0x10
	enum class EGamePlayMode GamePlayMode; // Offset: 0x60 // Size: 0x04
	char pad_0x64[0x4]; // Offset: 0x64 // Size: 0x04

	// Functions

	// Object Name: Function AutoRobot.AutoTestSubsystem.Swipe
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Swipe(StrProperty InPath, float Duringtime, IntProperty StartX, IntProperty StartY, IntProperty EndX, IntProperty EndY, IntProperty TouchIndex, IntProperty ControllerId, IntProperty ScreensizeX, IntProperty ScreensizeY); // Offset: 0x101fc7528 // Return & Params: Num(10) Size(0x34)

	// Object Name: Function AutoRobot.AutoTestSubsystem.StopRecordInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopRecordInput(); // Offset: 0x101fc7514 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.StopPlayInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StopPlayInput(); // Offset: 0x101fc7500 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.StartRemoteControl
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartRemoteControl(StrProperty Name, StrProperty Host, IntProperty Port); // Offset: 0x101fc73d4 // Return & Params: Num(3) Size(0x24)

	// Object Name: Function AutoRobot.AutoTestSubsystem.StartRecordInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartRecordInput(StrProperty Command); // Offset: 0x101fc733c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.StartPlayInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void StartPlayInput(StrProperty Filename); // Offset: 0x101fc72a4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.SetCustomRouteLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCustomRouteLine(); // Offset: 0x101fc7290 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.RegisterInputProcessor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterInputProcessor(); // Offset: 0x101fc727c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.PVEAutoTestGetEnemyLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector PVEAutoTestGetEnemyLocation(); // Offset: 0x101fc7244 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.PubgmSimulateActionClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PubgmSimulateActionClientEx(IntProperty SimulateType); // Offset: 0x101fc71c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.ParsePoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector ParsePoint(StrProperty SrcStr); // Offset: 0x101fc7118 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function AutoRobot.AutoTestSubsystem.OpenDebugg
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OpenDebugg(); // Offset: 0x101fc7104 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.OnStopAutoTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnStopAutoTest(); // Offset: 0x101fc70f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.OnStartAutoTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnStartAutoTest(); // Offset: 0x101fc70dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.OnGameStart
	// Flags: [Final|Native|Public|Const]
	void OnGameStart(); // Offset: 0x101fc70c8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.OnGameEnd
	// Flags: [Final|Native|Public|Const]
	void OnGameEnd(); // Offset: 0x101fc70b4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsUIAutoTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsUIAutoTest(); // Offset: 0x101fc7080 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsSecAutoRunTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsSecAutoRunTest(); // Offset: 0x101fc704c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsGAutomatorTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsGAutomatorTest(); // Offset: 0x101fc7018 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVEProfile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAutoRunTestGamePVEProfile(); // Offset: 0x101fc6fe4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVE
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAutoRunTestGamePVE(); // Offset: 0x101fc6fb0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGameBindComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAutoRunTestGameBindComponent(); // Offset: 0x101fc6f7c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsAutoRunTestGame(); // Offset: 0x101fc6f48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetWidgetPathByPos
	// Flags: [Final|Native|Public|BlueprintCallable]
	void GetWidgetPathByPos(IntProperty StartX, IntProperty StartY, IntProperty ScreensizeX, IntProperty ScreensizeY); // Offset: 0x101fc6e20 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetRuntimeProfileData
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetRuntimeProfileData(); // Offset: 0x101fc6dbc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetAutoTestInterface
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UAutoTestInterface* GetAutoTestInterface(); // Offset: 0x101fc6d88 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetAutoRunTestServerIdx
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty GetAutoRunTestServerIdx(); // Offset: 0x101fc6d54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetAutoRunPassWD
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAutoRunPassWD(); // Offset: 0x101fc6cf0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetAutoRunLuaTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAutoRunLuaTest(); // Offset: 0x101fc6c8c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.GetAutoRunAccount
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetAutoRunAccount(); // Offset: 0x101fc6c28 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.CloseDebugg
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CloseDebugg(); // Offset: 0x101fc6c14 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.ClickButton
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClickButton(StrProperty InPath, float Duringtime, IntProperty StartX, IntProperty StartY, IntProperty EndX, IntProperty EndY, IntProperty TouchIndex, IntProperty ControllerId, IntProperty ScreensizeX, IntProperty ScreensizeY, StrProperty UsePos); // Offset: 0x101fc681c // Return & Params: Num(11) Size(0x48)

	// Object Name: Function AutoRobot.AutoTestSubsystem.CheckStaticMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void CheckStaticMesh(float Radius, float DeformationDistance, bool CheckComplexCollisionQuery, StrProperty MapName); // Offset: 0x101fc6668 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestWaitForUIWithName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestWaitForUIWithName(StrProperty UIName); // Offset: 0x101fc65d0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestWaitForSecond
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestWaitForSecond(IntProperty sec); // Offset: 0x101fc6554 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestWaitForJumpPlane
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AutoTestWaitForJumpPlane(); // Offset: 0x101fc6520 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestVehicleDriverShoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestVehicleDriverShoot(); // Offset: 0x101fc650c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestVaultWall
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestVaultWall(); // Offset: 0x101fc64f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestUsePropSkillClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestUsePropSkillClientEx(); // Offset: 0x101fc64e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestUseItemClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestUseItemClientEx(IntProperty ItemId); // Offset: 0x101fc6468 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestUseItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestUseItem(IntProperty ItemId); // Offset: 0x101fc63ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestUpgradePropSkillClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestUpgradePropSkillClientEx(IntProperty ItemId); // Offset: 0x101fc6370 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestToggleVehicleSync
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestToggleVehicleSync(bool Val); // Offset: 0x101fc62ec // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoomOnlyClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestThrowBoomOnlyClientEx(IntProperty SkillID); // Offset: 0x101fc6270 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestThrowBoom(IntProperty SkillID); // Offset: 0x101fc61f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSwitchWeapon
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSwitchWeapon(IntProperty WeaponType); // Offset: 0x101fc6178 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSwitchMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSwitchMode(StrProperty FunName); // Offset: 0x101fc60e0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestStopRecordStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestStopRecordStats(); // Offset: 0x101fc60cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestStatsCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestStatsCommand(StrProperty Command); // Offset: 0x101fc6034 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestStartRecordStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestStartRecordStats(StrProperty FileStr); // Offset: 0x101fc5f9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestStartFireOnlyClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestStartFireOnlyClientEx(IntProperty InX, IntProperty InY, IntProperty InZ, IntProperty sec); // Offset: 0x101fc5e74 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestStartFire
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestStartFire(IntProperty InX, IntProperty InY, IntProperty InZ, IntProperty sec); // Offset: 0x101fc5d4c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSpecating
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSpecating(IntProperty LeftTeamCnt); // Offset: 0x101fc5cd0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSpawnVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSpawnVehicle(StrProperty ResPath); // Offset: 0x101fc5c38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSpawnAI
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSpawnAI(IntProperty ID, float PosiX, float PosiY, float PosiZ); // Offset: 0x101fc5b0c // Return & Params: Num(4) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetVehicleRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetVehicleRotation(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc5a1c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetRecordFrequency
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetRecordFrequency(IntProperty Frequency); // Offset: 0x101fc59a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetGamePaused
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetGamePaused(bool IsPause); // Offset: 0x101fc591c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetActorYaw
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetActorYaw(float InRate); // Offset: 0x101fc58a0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetActorRotation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetActorRotation(float InRate, float InSpeed); // Offset: 0x101fc57ec // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetActorPitch
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetActorPitch(float InRate); // Offset: 0x101fc5770 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetActorFacePointWithZ
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetActorFacePointWithZ(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc5680 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSetActorFacePoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestSetActorFacePoint(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc5590 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestSendBuffertoSvr
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AutoTestSendBuffertoSvr(struct TScriptInterface<Class>& ClientNetInterface); // Offset: 0x101fc5504 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestReplaceMatByActorName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestReplaceMatByActorName(StrProperty actorName, StrProperty NewMatName, IntProperty RComp, IntProperty GComp, IntProperty BComp); // Offset: 0x101fc52cc // Return & Params: Num(5) Size(0x2c)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestReloadOnlyClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestReloadOnlyClientEx(); // Offset: 0x101fc52b8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestPickupItemOnlyClientEx
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D AutoTestPickupItemOnlyClientEx(); // Offset: 0x101fc5284 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestPickupItem
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector2D AutoTestPickupItem(IntProperty ItemId); // Offset: 0x101fc51f8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestOpenTraceRPC
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestOpenTraceRPC(); // Offset: 0x101fc51e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestOpenScope
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestOpenScope(bool bOpenScope); // Offset: 0x101fc5160 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestOpenDoorOnlyClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestOpenDoorOnlyClientEx(IntProperty bOpen); // Offset: 0x101fc50e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestMustDie
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestMustDie(IntProperty LeftTeamCnt); // Offset: 0x101fc5068 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestMoveVehicleForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestMoveVehicleForward(float Speed, float Rate, float sec); // Offset: 0x101fc4f78 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestMoveToPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestMoveToPoint(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc4e88 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestJumpPlane
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestJumpPlane(IntProperty sec); // Offset: 0x101fc4e0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestJump
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestJump(); // Offset: 0x101fc4df8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestIsOnVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AutoTestIsOnVehicle(); // Offset: 0x101fc4dc4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestIsDriver
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AutoTestIsDriver(); // Offset: 0x101fc4d90 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestIsCurrentCommandFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AutoTestIsCurrentCommandFinished(); // Offset: 0x101fc4d5c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestInputMovement
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestInputMovement(float InRate); // Offset: 0x101fc4ce0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestInputKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestInputKey(StrProperty Key, enum class EInputEvent EventType, float AmountDepressed, bool bGamepad); // Offset: 0x101fc4b80 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGMVehicleMoveAndTowardClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGMVehicleMoveAndTowardClientEx(float InX, float InY, float InZ, float InX1, float InY1, float InZ1); // Offset: 0x101fc49e0 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGMGotoClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGMGotoClientEx(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc48f0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGMGoto
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGMGoto(IntProperty InX, IntProperty InY, IntProperty InZ); // Offset: 0x101fc4800 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGMCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGMCommand(StrProperty Command); // Offset: 0x101fc4768 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocationClientEx
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetVehicleLocationClientEx(); // Offset: 0x101fc4730 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetVehicleLocation(); // Offset: 0x101fc46f8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetRuntimeStats
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetRuntimeStats(); // Offset: 0x101fc46e4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetRenderTimeDetail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetRenderTimeDetail(); // Offset: 0x101fc46d0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetPrimitivesDetail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetPrimitivesDetail(); // Offset: 0x101fc46bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetOnVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetOnVehicle(IntProperty SeatType); // Offset: 0x101fc4640 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetOffVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetOffVehicle(); // Offset: 0x101fc462c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetNearVehiclePos
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetNearVehiclePos(); // Offset: 0x101fc45f4 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetMemoryDetail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetMemoryDetail(); // Offset: 0x101fc45e0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetMapName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty AutoTestGetMapName(); // Offset: 0x101fc457c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetLuaReturnValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetLuaReturnValue(StrProperty retval); // Offset: 0x101fc4498 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetGameModeState
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty AutoTestGetGameModeState(); // Offset: 0x101fc4434 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetFrameInfo
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetFrameInfo(); // Offset: 0x101fc43fc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetDrawCallDetail
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestGetDrawCallDetail(); // Offset: 0x101fc43e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetDis2D
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty AutoTestGetDis2D(IntProperty InX1, IntProperty InY1, IntProperty InZ1, IntProperty InX2, IntProperty InY2, IntProperty InZ2); // Offset: 0x101fc423c // Return & Params: Num(7) Size(0x1c)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetCircleLocationClientEx
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetCircleLocationClientEx(); // Offset: 0x101fc4204 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetAvailableDeadBoxItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<IntProperty> AutoTestGetAvailableDeadBoxItem(); // Offset: 0x101fc41a0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetAllActorNames
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<StrProperty> AutoTestGetAllActorNames(); // Offset: 0x101fc413c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetActorName
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty AutoTestGetActorName(); // Offset: 0x101fc40d8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocationListClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct TArray<struct FVector> AutoTestGetActorLocationListClientEx(IntProperty ActorType, float RangeRadius); // Offset: 0x101fc3fe8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	struct FVector AutoTestGetActorLocation(StrProperty PlayerName); // Offset: 0x101fc3f38 // Return & Params: Num(2) Size(0x1c)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestForceVehiclePosPullClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	float AutoTestForceVehiclePosPullClientEx(bool bNext); // Offset: 0x101fc3ea4 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestForceDeleteCmdAnim
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestForceDeleteCmdAnim(); // Offset: 0x101fc3e90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestEnableUITest
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestEnableUITest(); // Offset: 0x101fc3e7c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestEnableTickOrVisibilityByActorName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestEnableTickOrVisibilityByActorName(StrProperty actorName, bool bEnableTick, bool bShow); // Offset: 0x101fc3d00 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestEnableActorPrimitiveHighlight
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AutoTestEnableActorPrimitiveHighlight(StrProperty actorName, bool bEnable, bool bInCanBeOccluded, bool bOverrideColor, struct FLinearColor Color); // Offset: 0x101fc3af4 // Return & Params: Num(5) Size(0x24)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestDropItemClientEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestDropItemClientEx(IntProperty ItemId, IntProperty nCount); // Offset: 0x101fc3a40 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestDrawBox
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestDrawBox(float LocationX, float LocationY, float LocationZ, float ExtentX, float ExtentY, float ExtentZ); // Offset: 0x101fc38a0 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestContinuousMoveTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestContinuousMoveTo(float InX, float InY, float InZ); // Offset: 0x101fc37b0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestConsoleCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestConsoleCommand(StrProperty Command); // Offset: 0x101fc3718 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestCloseTraceRPC
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestCloseTraceRPC(); // Offset: 0x101fc3704 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestAutoMoveForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestAutoMoveForward(bool StartAutoMoveForward); // Offset: 0x101fc3680 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoTestAddItem
	// Flags: [Final|Native|Public|BlueprintCallable]
	void AutoTestAddItem(IntProperty ItemId, IntProperty nCount); // Offset: 0x101fc35cc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoMoveToTargetPosClientEx
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AutoMoveToTargetPosClientEx(struct FVector targetPos); // Offset: 0x101fc3550 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.AutoTestSubsystem.AutoMovePawnToTargetPosClientEx
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	void AutoMovePawnToTargetPosClientEx(struct FVector targetPos); // Offset: 0x101fc34d4 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class AutoRobot.PubgmAutoRun
// Size: 0x1a0 // Inherited bytes: 0x178
struct UPubgmAutoRun : UActorComponent {
	// Fields
	struct FScriptMulticastDelegate PubgmAutoRunSimulateAction; // Offset: 0x178 // Size: 0x10
	bool bRoutePointInited; // Offset: 0x188 // Size: 0x01
	char pad_0x189[0x7]; // Offset: 0x189 // Size: 0x07
	struct TArray<struct AXTPoint*> RoutePoints; // Offset: 0x190 // Size: 0x10

	// Functions

	// Object Name: Function AutoRobot.PubgmAutoRun.VehicleTowardTo
	// Flags: [Final|Native|Public]
	void VehicleTowardTo(float X, float Y, float Z); // Offset: 0x101fca2b8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.PubgmAutoRun.VehicleMoveTo
	// Flags: [Final|Native|Public]
	void VehicleMoveTo(float X, float Y, float Z); // Offset: 0x101fca1c8 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.PubgmAutoRun.VehicleMoveAndTowardTo
	// Flags: [Final|Native|Public]
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1); // Offset: 0x101fca028 // Return & Params: Num(6) Size(0x18)

	// Object Name: DelegateFunction AutoRobot.PubgmAutoRun.OnPubgmAutoRunSimulateAction__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void OnPubgmAutoRunSimulateAction__DelegateSignature(IntProperty SimActionType); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.PubgmAutoRun.NeedCmdAutoRun
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool NeedCmdAutoRun(); // Offset: 0x101fc9ff4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.PubgmAutoRun.NativeSimulateAction
	// Flags: [Final|Native|Public]
	void NativeSimulateAction(IntProperty SimActionType); // Offset: 0x101fc9f78 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function AutoRobot.PubgmAutoRun.InitRoutePoint
	// Flags: [Final|Native|Public]
	void InitRoutePoint(); // Offset: 0x101fc9f64 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.PubgmAutoRun.GMGotoPosition
	// Flags: [Final|Native|Public]
	void GMGotoPosition(IntProperty X, IntProperty Y, IntProperty Z); // Offset: 0x101fc9e74 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function AutoRobot.PubgmAutoRun.GetRangeActorsPostions
	// Flags: [Final|Native|Public|HasDefaults]
	struct TArray<struct FVector> GetRangeActorsPostions(IntProperty ActorType, struct FVector OriginPos, float RangeRadius); // Offset: 0x101fc9d48 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function AutoRobot.PubgmAutoRun.GetPoisonCircleLocation
	// Flags: [Final|Native|Public|HasDefaults]
	struct FVector GetPoisonCircleLocation(); // Offset: 0x101fc9d10 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function AutoRobot.PubgmAutoRun.GetPlayerSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetPlayerSpeed(IntProperty SpeedIdx); // Offset: 0x101fc9c8c // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.PubgmAutoRun.GetNearestXTPointToVehicle
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool GetNearestXTPointToVehicle(struct FTransform& FirstPoint, struct FTransform& SecendPoint, bool bNext); // Offset: 0x101fc9b2c // Return & Params: Num(4) Size(0x62)

	// Object Name: Function AutoRobot.PubgmAutoRun.ForceVehiclePosPull
	// Flags: [Final|Native|Public]
	float ForceVehiclePosPull(bool bNext); // Offset: 0x101fc9a98 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class AutoRobot.PVEAutoRunTest
// Size: 0x1c0 // Inherited bytes: 0x178
struct UPVEAutoRunTest : UActorComponent {
	// Fields
	struct TArray<struct FVector> DstPointArray; // Offset: 0x178 // Size: 0x10
	IntProperty MaxMoveTime; // Offset: 0x188 // Size: 0x04
	IntProperty MaxDstStayTime; // Offset: 0x18c // Size: 0x04
	IntProperty KillAllTime; // Offset: 0x190 // Size: 0x04
	IntProperty StatRecordTime; // Offset: 0x194 // Size: 0x04
	char pad_0x198[0x28]; // Offset: 0x198 // Size: 0x28
};

// Object Name: Class AutoRobot.RemoteControlHelper
// Size: 0x28 // Inherited bytes: 0x28
struct URemoteControlHelper : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function AutoRobot.RemoteControlHelper.GetRuntimeStats
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetRuntimeStats(); // Offset: 0x101fca9c4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.RemoteControlHelper.GetDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetDeviceName(); // Offset: 0x101fca960 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoRobot.RemoteControlHelper.AutoPickup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void AutoPickup(struct ASTExtraBaseCharacter* Player); // Offset: 0x101fca8ec // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class AutoRobot.RemoteControlManager
// Size: 0x28 // Inherited bytes: 0x28
struct URemoteControlManager : UObject {
	// Functions

	// Object Name: Function AutoRobot.RemoteControlManager.Tick
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Tick(float DeltaTime); // Offset: 0x101fcae24 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function AutoRobot.RemoteControlManager.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Stop(); // Offset: 0x101fcae10 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoRobot.RemoteControlManager.BeginWithFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool BeginWithFile(); // Offset: 0x101fcaddc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function AutoRobot.RemoteControlManager.Begin
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Begin(StrProperty Name, StrProperty Host, IntProperty Port); // Offset: 0x101fcac10 // Return & Params: Num(4) Size(0x25)
};

// Object Name: Class AutoRobot.ShootWeaponAutoTestHandle
// Size: 0x38 // Inherited bytes: 0x28
struct UShootWeaponAutoTestHandle : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function AutoRobot.ShootWeaponAutoTestHandle.OnWeaponShootBullet
	// Flags: [Final|Native|Public]
	void OnWeaponShootBullet(struct ASTExtraShootWeapon* ShootWeapon, struct ASTExtraShootWeaponBulletBase* Bullet); // Offset: 0x101fcb3e8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletImpact
	// Flags: [Final|Native|Public|HasOutParms]
	void OnBulletImpact(struct ASTExtraShootWeapon* ShootWeapon, struct ASTExtraShootWeaponBulletBase* Bullet, struct FHitResult& HitRet); // Offset: 0x101fcb2d8 // Return & Params: Num(3) Size(0x98)

	// Object Name: Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletDamage
	// Flags: [Final|Native|Public]
	void OnBulletDamage(IntProperty ShootID, float Damage); // Offset: 0x101fcb220 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function AutoRobot.ShootWeaponAutoTestHandle.GenerateBulletsImpactJsonStringAndClearData
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GenerateBulletsImpactJsonStringAndClearData(); // Offset: 0x101fcb1bc // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class AutoRobot.TestAIController
// Size: 0x1130 // Inherited bytes: 0x1120
struct ATestAIController : ABaseAIController {
	// Fields
	struct APickUpWrapperActor* EquipedWeaponClass; // Offset: 0x1120 // Size: 0x08
	struct ASTExtraBaseCharacter* CharacterClass; // Offset: 0x1128 // Size: 0x08
};

