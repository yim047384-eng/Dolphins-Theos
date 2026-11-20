#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Offset: 0x104ba6e20 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Offset: 0x104ba6da4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Offset: 0x104ba6d30 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack); // Offset: 0x104ba6b90 // Return & Params: Num(6) Size(0x22)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Offset: 0x104ba6b1c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetClippingPlanes(float Near, float Far); // Offset: 0x104ba6a70 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options); // Offset: 0x104ba69c0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsSpectatorScreenModeControllable(); // Offset: 0x104ba698c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsInLowPersistenceMode(); // Offset: 0x104ba6974 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsHeadMountedDisplayEnabled(); // Offset: 0x104ba6940 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsHeadMountedDisplayConnected(); // Offset: 0x104ba690c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool HasValidTrackingPosition(); // Offset: 0x104ba68d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	float GetWorldToMetersScale(struct UObject* WorldContext); // Offset: 0x104ba685c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	void GetVRFocusState(bool& bUseFocus, bool& bHasFocus); // Offset: 0x104ba678c // Return & Params: Num(2) Size(0x2)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, IntProperty Index); // Offset: 0x104ba63f8 // Return & Params: Num(11) Size(0x3c)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Offset: 0x104ba63b4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	float GetScreenPercentage(); // Offset: 0x104ba6380 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // Offset: 0x104ba6124 // Return & Params: Num(7) Size(0x2c)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition); // Offset: 0x104ba605c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetNumOfTrackingSensors(); // Offset: 0x104ba6028 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	enum class EHMDWornState GetHMDWornState(); // Offset: 0x104ba5ff4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct FName GetHMDDeviceName(); // Offset: 0x104ba5fc0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void EnableLowPersistenceMode(bool bEnable); // Offset: 0x104ba5f54 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableHMD(bool bEnable); // Offset: 0x104ba5ed0 // Return & Params: Num(2) Size(0x2)
};

// Object Name: Class HeadMountedDisplay.MotionControllerComponent
// Size: 0xa30 // Inherited bytes: 0x9d0
struct UMotionControllerComponent : UPrimitiveComponent {
	// Fields
	IntProperty playerIndex; // Offset: 0x9c8 // Size: 0x04
	enum class EControllerHand Hand; // Offset: 0x9cc // Size: 0x01
	char bDisableLowLatencyUpdate : 1; // Offset: 0x9cd // Size: 0x01
	enum class ETrackingStatus CurrentTrackingStatus; // Offset: 0x9ce // Size: 0x01
	char pad_0x9D6_1 : 7; // Offset: 0x9d6 // Size: 0x01
	char pad_0x9D7[0x59]; // Offset: 0x9d7 // Size: 0x59

	// Functions

	// Object Name: Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsTracked(); // Offset: 0x104ba7990 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Offset: 0x104ba7fdc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsMotionTrackingEnabledForDevice(IntProperty playerIndex, enum class EControllerHand Hand); // Offset: 0x104ba7f24 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Offset: 0x104ba7ea8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Offset: 0x104ba7e74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetMotionTrackingEnabledControllerCount(); // Offset: 0x104ba7e40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetMaximumMotionTrackedControllerCount(); // Offset: 0x104ba7e0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableMotionTrackingOfDevice(IntProperty playerIndex, enum class EControllerHand Hand); // Offset: 0x104ba7d54 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Offset: 0x104ba7cd8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DisableMotionTrackingOfDevice(IntProperty playerIndex, enum class EControllerHand Hand); // Offset: 0x104ba7c28 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DisableMotionTrackingOfControllersForPlayer(IntProperty playerIndex); // Offset: 0x104ba7bb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DisableMotionTrackingOfAllControllers(); // Offset: 0x104ba7ba0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Offset: 0x104ba7b2c // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x208 // Inherited bytes: 0x178
struct UVRNotificationsComponent : UActorComponent {
	// Fields
	struct FScriptMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // Offset: 0x178 // Size: 0x10
	struct FScriptMulticastDelegate HMDTrackingInitializedDelegate; // Offset: 0x188 // Size: 0x10
	struct FScriptMulticastDelegate HMDRecenteredDelegate; // Offset: 0x198 // Size: 0x10
	struct FScriptMulticastDelegate HMDLostDelegate; // Offset: 0x1a8 // Size: 0x10
	struct FScriptMulticastDelegate HMDReconnectedDelegate; // Offset: 0x1b8 // Size: 0x10
	struct FScriptMulticastDelegate HMDConnectCanceledDelegate; // Offset: 0x1c8 // Size: 0x10
	struct FScriptMulticastDelegate HMDPutOnHeadDelegate; // Offset: 0x1d8 // Size: 0x10
	struct FScriptMulticastDelegate HMDRemovedFromHeadDelegate; // Offset: 0x1e8 // Size: 0x10
	struct FScriptMulticastDelegate VRControllerRecenteredDelegate; // Offset: 0x1f8 // Size: 0x10
};

