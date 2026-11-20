#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Creative.ECreativeUIEasingStyle
enum class ECreativeUIEasingStyle : uint8 {
	None = 99,
	Linear = 0,
	Sine = 1,
	Quad = 2,
	Cubic = 3,
	Quart = 4,
	Quint = 5,
	Exponential = 6,
	Circular = 7,
	Back = 8,
	Bounce = 9,
	ECreativeUIEasingStyle_MAX = 100
};

// Object Name: Enum Creative.ECreativeUIEasingDirection
enum class ECreativeUIEasingDirection : uint8 {
	In = 0,
	Out = 1,
	InOut = 2,
	ECreativeUIEasingDirection_MAX = 3
};

// Object Name: Enum Creative.ECreativeModeActorState
enum class ECreativeModeActorState : uint8 {
	CreativeModeActorState_Unknown = 0,
	CreativeModeActorState_Prefab = 1,
	CreativeModeActorState_Instance = 2,
	CreativeModeActorState_MAX = 3
};

// Object Name: Enum Creative.ECreativeModePlayState
enum class ECreativeModePlayState : uint8 {
	CreativeModePlayState_None = 0,
	CreativeModePlayState_Ready = 1,
	CreativeModePlayState_Fighting = 2,
	CreativeModePlayState_Finish = 3,
	CreativeModePlayState_Max = 4
};

// Object Name: Enum Creative.ECreativeTriggerSourceType
enum class ECreativeTriggerSourceType : uint8 {
	None = 0,
	Player = 1,
	Robot = 2,
	Monster = 3,
	Vehicle = 4,
	BankProduct = 5,
	ECreativeTriggerSourceType_MAX = 6
};

// Object Name: Enum Creative.ETaskStatus
enum class ETaskStatus : uint8 {
	None = 0,
	Pending = 1,
	InProgress = 2,
	PendingAcclaim = 3,
	Success = 4,
	Fail = 5,
	ETaskStatus_MAX = 6
};

// Object Name: Enum Creative.ESpecType
enum class ESpecType : uint8 {
	Invalid = 0,
	HumanBot = 1,
	AIPlayer = 2,
	Monster = 3,
	Tower = 4,
	ESpecType_MAX = 5
};

// Object Name: Enum Creative.ECreativeModeActorStreamingType
enum class ECreativeModeActorStreamingType : uint8 {
	CreativeModeActorStreamingType_AlwaysLoad = 0,
	CreativeModeActorStreamingType_Grid = 1,
	CreativeModeActorStreamingType_MAX = 2
};

// Object Name: Enum Creative.ECreativeDestructibleState
enum class ECreativeDestructibleState : uint8 {
	CreativeDestructibleState_NoParam = 0,
	CreativeDestructibleState_Enable = 1,
	CreativeDestructibleState_Disable = 2,
	CreativeDestructibleState_MAX = 3
};

// Object Name: Enum Creative.ECreativeModeLoadType
enum class ECreativeModeLoadType : uint8 {
	CreativeModeLoadType_Auto = 0,
	CreativeModeLoadType_Manual = 1,
	CreativeModeLoadType_MAX = 2
};

// Object Name: Enum Creative.ECreativeModeGameType
enum class ECreativeModeGameType : uint8 {
	CreativeModeGameType_None = 0,
	CreativeModeGameType_Editor = 1,
	CreativeModeGameType_Game = 2,
	CreativeModeGameType_Max = 3
};

// Object Name: Enum Creative.ESCWOWActiveType
enum class ESCWOWActiveType : uint8 {
	SAT_Active = 0,
	SAT_PandingKickOut = 1,
	SAT_kickedOut = 2,
	SAT_MAX = 3
};

// Object Name: Enum Creative.EMountStatus
enum class EMountStatus : uint8 {
	Mounting = 0,
	Mounted = 1,
	Unmounted = 2,
	MountFailed = 3,
	EMountStatus_MAX = 4
};

// Object Name: Enum Creative.ETransferStatus
enum class ETransferStatus : uint8 {
	Pending = 0,
	Transferring = 1,
	Completed = 2,
	Failed = 3,
	ETransferStatus_MAX = 4
};

// Object Name: Enum Creative.EPaintOpType
enum class EPaintOpType : uint8 {
	Add = 0,
	Remove = 1,
	Reset = 2,
	EPaintOpType_MAX = 3
};

