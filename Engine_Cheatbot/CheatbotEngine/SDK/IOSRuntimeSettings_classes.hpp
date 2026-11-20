#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class IOSRuntimeSettings.IOSRuntimeSettings
// Size: 0x1a0 // Inherited bytes: 0x28
struct UIOSRuntimeSettings : UObject {
	// Fields
	char bEnableGameCenterSupport : 1; // Offset: 0x28 // Size: 0x01
	char bEnableCloudKitSupport : 1; // Offset: 0x28 // Size: 0x01
	char bEnableRemoteNotificationsSupport : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_3 : 5; // Offset: 0x28 // Size: 0x01
	bool bSupportsMetal; // Offset: 0x29 // Size: 0x01
	bool bSupportsMetalMRT; // Offset: 0x2a // Size: 0x01
	bool bCookPVRTCTextures; // Offset: 0x2b // Size: 0x01
	bool bCookASTCTextures; // Offset: 0x2c // Size: 0x01
	bool bSupportsOpenGLES2; // Offset: 0x2d // Size: 0x01
	bool EnableRemoteShaderCompile; // Offset: 0x2e // Size: 0x01
	bool bGeneratedSYMFile; // Offset: 0x2f // Size: 0x01
	bool bGeneratedSYMBundle; // Offset: 0x30 // Size: 0x01
	bool bGenerateXCArchive; // Offset: 0x31 // Size: 0x01
	bool bDevForArmV7; // Offset: 0x32 // Size: 0x01
	bool bDevForArm64; // Offset: 0x33 // Size: 0x01
	bool bDevForArmV7S; // Offset: 0x34 // Size: 0x01
	bool bShipForArmV7; // Offset: 0x35 // Size: 0x01
	bool bShipForArm64; // Offset: 0x36 // Size: 0x01
	bool bShipForArmV7S; // Offset: 0x37 // Size: 0x01
	bool bShipForBitcode; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	StrProperty AdditionalLinkerFlags; // Offset: 0x40 // Size: 0x10
	StrProperty AdditionalShippingLinkerFlags; // Offset: 0x50 // Size: 0x10
	StrProperty RemoteServerName; // Offset: 0x60 // Size: 0x10
	bool bUseRSync; // Offset: 0x70 // Size: 0x01
	char pad_0x71[0x7]; // Offset: 0x71 // Size: 0x07
	StrProperty RSyncUsername; // Offset: 0x78 // Size: 0x10
	struct FIOSBuildResourceDirectory DeltaCopyInstallPath; // Offset: 0x88 // Size: 0x10
	StrProperty SSHPrivateKeyLocation; // Offset: 0x98 // Size: 0x10
	struct FIOSBuildResourceFilePath SSHPrivateKeyOverridePath; // Offset: 0xa8 // Size: 0x10
	bool bTreatRemoteAsSeparateController; // Offset: 0xb8 // Size: 0x01
	bool bAllowRemoteRotation; // Offset: 0xb9 // Size: 0x01
	bool bUseRemoteAsVirtualJoystick; // Offset: 0xba // Size: 0x01
	bool bUseRemoteAbsoluteDpadValues; // Offset: 0xbb // Size: 0x01
	char bSupportsPortraitOrientation : 1; // Offset: 0xbc // Size: 0x01
	char bSupportsUpsideDownOrientation : 1; // Offset: 0xbc // Size: 0x01
	char bSupportsLandscapeLeftOrientation : 1; // Offset: 0xbc // Size: 0x01
	char bSupportsLandscapeRightOrientation : 1; // Offset: 0xbc // Size: 0x01
	char pad_0xBC_4 : 4; // Offset: 0xbc // Size: 0x01
	char pad_0xBD[0x3]; // Offset: 0xbd // Size: 0x03
	StrProperty BundleDisplayName; // Offset: 0xc0 // Size: 0x10
	StrProperty BundleName; // Offset: 0xd0 // Size: 0x10
	StrProperty BundleIdentifier; // Offset: 0xe0 // Size: 0x10
	StrProperty VersionInfo; // Offset: 0xf0 // Size: 0x10
	enum class EPowerUsageFrameRateLock FrameRateLock; // Offset: 0x100 // Size: 0x01
	enum class EIOSVersion MinimumiOSVersion; // Offset: 0x101 // Size: 0x01
	char bSupportsIPad : 1; // Offset: 0x102 // Size: 0x01
	char bSupportsIPhone : 1; // Offset: 0x102 // Size: 0x01
	char pad_0x102_2 : 6; // Offset: 0x102 // Size: 0x01
	char pad_0x103[0x5]; // Offset: 0x103 // Size: 0x05
	StrProperty AdditionalPlistData; // Offset: 0x108 // Size: 0x10
	bool bEnableFacebookSupport; // Offset: 0x118 // Size: 0x01
	char pad_0x119[0x7]; // Offset: 0x119 // Size: 0x07
	StrProperty FacebookAppID; // Offset: 0x120 // Size: 0x10
	StrProperty MobileProvision; // Offset: 0x130 // Size: 0x10
	StrProperty SigningCertificate; // Offset: 0x140 // Size: 0x10
	bool bAutomaticSigning; // Offset: 0x150 // Size: 0x01
	char MaxShaderLanguageVersion; // Offset: 0x151 // Size: 0x01
	bool UseFastIntrinsics; // Offset: 0x152 // Size: 0x01
	bool EnableMathOptimisations; // Offset: 0x153 // Size: 0x01
	bool bUseIntegratedKeyboard; // Offset: 0x154 // Size: 0x01
	char pad_0x155[0x3]; // Offset: 0x155 // Size: 0x03
	IntProperty AudioSampleRate; // Offset: 0x158 // Size: 0x04
	IntProperty AudioCallbackBufferFrameSize; // Offset: 0x15c // Size: 0x04
	IntProperty AudioNumBuffersToEnqueue; // Offset: 0x160 // Size: 0x04
	IntProperty AudioMaxChannels; // Offset: 0x164 // Size: 0x04
	IntProperty AudioNumSourceWorkers; // Offset: 0x168 // Size: 0x04
	char pad_0x16C[0x4]; // Offset: 0x16c // Size: 0x04
	StrProperty SpatializationPlugin; // Offset: 0x170 // Size: 0x10
	StrProperty ReverbPlugin; // Offset: 0x180 // Size: 0x10
	StrProperty OcclusionPlugin; // Offset: 0x190 // Size: 0x10
};

