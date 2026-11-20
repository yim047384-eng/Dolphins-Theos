#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class EngineSettings.ConsoleSettings
// Size: 0x70 // Inherited bytes: 0x28
struct UConsoleSettings : UObject {
	// Fields
	IntProperty MaxScrollbackSize; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // Offset: 0x30 // Size: 0x10
	struct TArray<StrProperty> AutoCompleteMapPaths; // Offset: 0x40 // Size: 0x10
	float BackgroundOpacityPercentage; // Offset: 0x50 // Size: 0x04
	bool bOrderTopToBottom; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	struct FColor InputColor; // Offset: 0x58 // Size: 0x04
	struct FColor HistoryColor; // Offset: 0x5c // Size: 0x04
	struct FColor AutoCompleteCommandColor; // Offset: 0x60 // Size: 0x04
	struct FColor AutoCompleteCVarColor; // Offset: 0x64 // Size: 0x04
	struct FColor AutoCompleteFadedColor; // Offset: 0x68 // Size: 0x04
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class EngineSettings.GameMapsSettings
// Size: 0x108 // Inherited bytes: 0x28
struct UGameMapsSettings : UObject {
	// Fields
	struct FSoftObjectPath EditorStartupMap; // Offset: 0x28 // Size: 0x18
	StrProperty LocalMapOptions; // Offset: 0x40 // Size: 0x10
	struct FSoftObjectPath TransitionMap; // Offset: 0x50 // Size: 0x18
	bool bUseSplitscreen; // Offset: 0x68 // Size: 0x01
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // Offset: 0x69 // Size: 0x01
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // Offset: 0x6a // Size: 0x01
	bool bOffsetPlayerGamepadIds; // Offset: 0x6b // Size: 0x01
	char pad_0x6C[0x4]; // Offset: 0x6c // Size: 0x04
	struct FSoftClassPath GameInstanceClass; // Offset: 0x70 // Size: 0x18
	struct FSoftObjectPath GameDefaultMap; // Offset: 0x88 // Size: 0x18
	struct FSoftObjectPath ServerDefaultMap; // Offset: 0xa0 // Size: 0x18
	struct FSoftClassPath GlobalDefaultGameMode; // Offset: 0xb8 // Size: 0x18
	struct FSoftClassPath GlobalDefaultServerGameMode; // Offset: 0xd0 // Size: 0x18
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // Offset: 0xe8 // Size: 0x10
	struct TArray<struct FGameModeName> GameModeClassAliases; // Offset: 0xf8 // Size: 0x10
};

// Object Name: Class EngineSettings.GameNetworkManagerSettings
// Size: 0x58 // Inherited bytes: 0x28
struct UGameNetworkManagerSettings : UObject {
	// Fields
	IntProperty MinDynamicBandwidth; // Offset: 0x28 // Size: 0x04
	IntProperty MaxDynamicBandwidth; // Offset: 0x2c // Size: 0x04
	IntProperty TotalNetBandwidth; // Offset: 0x30 // Size: 0x04
	IntProperty BadPingThreshold; // Offset: 0x34 // Size: 0x04
	char bIsStandbyCheckingEnabled : 1; // Offset: 0x38 // Size: 0x01
	char pad_0x38_1 : 7; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x3]; // Offset: 0x39 // Size: 0x03
	float StandbyRxCheatTime; // Offset: 0x3c // Size: 0x04
	float StandbyTxCheatTime; // Offset: 0x40 // Size: 0x04
	float PercentMissingForRxStandby; // Offset: 0x44 // Size: 0x04
	float PercentMissingForTxStandby; // Offset: 0x48 // Size: 0x04
	float PercentForBadPing; // Offset: 0x4c // Size: 0x04
	float JoinInProgressStandbyWaitTime; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
};

// Object Name: Class EngineSettings.GameSessionSettings
// Size: 0x38 // Inherited bytes: 0x28
struct UGameSessionSettings : UObject {
	// Fields
	IntProperty MaxSpectators; // Offset: 0x28 // Size: 0x04
	IntProperty MaxPlayers; // Offset: 0x2c // Size: 0x04
	char bRequiresPushToTalk : 1; // Offset: 0x30 // Size: 0x01
	char pad_0x30_1 : 7; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
};

// Object Name: Class EngineSettings.GeneralEngineSettings
// Size: 0x28 // Inherited bytes: 0x28
struct UGeneralEngineSettings : UObject {
};

// Object Name: Class EngineSettings.GeneralProjectSettings
// Size: 0x120 // Inherited bytes: 0x28
struct UGeneralProjectSettings : UObject {
	// Fields
	StrProperty CompanyName; // Offset: 0x28 // Size: 0x10
	StrProperty CompanyDistinguishedName; // Offset: 0x38 // Size: 0x10
	StrProperty CopyrightNotice; // Offset: 0x48 // Size: 0x10
	StrProperty Description; // Offset: 0x58 // Size: 0x10
	StrProperty Homepage; // Offset: 0x68 // Size: 0x10
	StrProperty LicensingTerms; // Offset: 0x78 // Size: 0x10
	StrProperty PrivacyPolicy; // Offset: 0x88 // Size: 0x10
	struct FGuid ProjectID; // Offset: 0x98 // Size: 0x10
	StrProperty ProjectName; // Offset: 0xa8 // Size: 0x10
	StrProperty ProjectVersion; // Offset: 0xb8 // Size: 0x10
	StrProperty ProjectBranch; // Offset: 0xc8 // Size: 0x10
	StrProperty SupportContact; // Offset: 0xd8 // Size: 0x10
	struct FText ProjectDisplayedTitle; // Offset: 0xe8 // Size: 0x18
	struct FText ProjectDebugTitleInfo; // Offset: 0x100 // Size: 0x18
	bool bShouldWindowPreserveAspectRatio; // Offset: 0x118 // Size: 0x01
	bool bUseBorderlessWindow; // Offset: 0x119 // Size: 0x01
	bool bStartInVR; // Offset: 0x11a // Size: 0x01
	bool bStartInAR; // Offset: 0x11b // Size: 0x01
	bool bAllowWindowResize; // Offset: 0x11c // Size: 0x01
	bool bAllowClose; // Offset: 0x11d // Size: 0x01
	bool bAllowMaximize; // Offset: 0x11e // Size: 0x01
	bool bAllowMinimize; // Offset: 0x11f // Size: 0x01
};

// Object Name: Class EngineSettings.HudSettings
// Size: 0x40 // Inherited bytes: 0x28
struct UHudSettings : UObject {
	// Fields
	char bShowHUD : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<struct FName> DebugDisplay; // Offset: 0x30 // Size: 0x10
};

