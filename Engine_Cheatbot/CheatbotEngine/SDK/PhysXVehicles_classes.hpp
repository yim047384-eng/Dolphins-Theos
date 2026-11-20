#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x368 // Inherited bytes: 0x1f8
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	// Fields
	char pad_0x1F8[0x8]; // Offset: 0x1f8 // Size: 0x08
	char bDeprecatedSpringOffsetMode : 1; // Offset: 0x200 // Size: 0x01
	char bRestorePhysicsState : 1; // Offset: 0x200 // Size: 0x01
	char pad_0x200_2 : 6; // Offset: 0x200 // Size: 0x01
	char pad_0x201[0x7]; // Offset: 0x201 // Size: 0x07
	struct TArray<struct FWheelSetup> WheelSetups; // Offset: 0x208 // Size: 0x10
	float Mass; // Offset: 0x218 // Size: 0x04
	float DragCoefficient; // Offset: 0x21c // Size: 0x04
	float ChassisWidth; // Offset: 0x220 // Size: 0x04
	float ChassisHeight; // Offset: 0x224 // Size: 0x04
	bool bReverseAsBrake; // Offset: 0x228 // Size: 0x01
	bool bClientSuspensionSweep; // Offset: 0x229 // Size: 0x01
	bool bServerSuspensionSweep; // Offset: 0x22a // Size: 0x01
	char pad_0x22B[0x1]; // Offset: 0x22b // Size: 0x01
	float DragArea; // Offset: 0x22c // Size: 0x04
	float EstimatedMaxEngineSpeed; // Offset: 0x230 // Size: 0x04
	float MaxEngineRPM; // Offset: 0x234 // Size: 0x04
	float DebugDragMagnitude; // Offset: 0x238 // Size: 0x04
	struct FVector InertiaTensorScale; // Offset: 0x23c // Size: 0x0c
	float MinNormalizedTireLoad; // Offset: 0x248 // Size: 0x04
	float MinNormalizedTireLoadFiltered; // Offset: 0x24c // Size: 0x04
	float MaxNormalizedTireLoad; // Offset: 0x250 // Size: 0x04
	float MaxNormalizedTireLoadFiltered; // Offset: 0x254 // Size: 0x04
	float ThresholdLongitudinalSpeed; // Offset: 0x258 // Size: 0x04
	IntProperty LowForwardSpeedSubStepCount; // Offset: 0x25c // Size: 0x04
	IntProperty HighForwardSpeedSubStepCount; // Offset: 0x260 // Size: 0x04
	char pad_0x264[0x4]; // Offset: 0x264 // Size: 0x04
	struct TArray<struct UVehicleWheel*> Wheels; // Offset: 0x268 // Size: 0x10
	char pad_0x278[0x18]; // Offset: 0x278 // Size: 0x18
	char bUseRVOAvoidance : 1; // Offset: 0x290 // Size: 0x01
	char pad_0x290_1 : 7; // Offset: 0x290 // Size: 0x01
	char pad_0x291[0x3]; // Offset: 0x291 // Size: 0x03
	float RVOAvoidanceRadius; // Offset: 0x294 // Size: 0x04
	float RVOAvoidanceHeight; // Offset: 0x298 // Size: 0x04
	float AvoidanceConsiderationRadius; // Offset: 0x29c // Size: 0x04
	float RVOSteeringStep; // Offset: 0x2a0 // Size: 0x04
	float RVOThrottleStep; // Offset: 0x2a4 // Size: 0x04
	IntProperty AvoidanceUID; // Offset: 0x2a8 // Size: 0x04
	struct FNavAvoidanceMask AvoidanceGroup; // Offset: 0x2ac // Size: 0x04
	struct FNavAvoidanceMask GroupsToAvoid; // Offset: 0x2b0 // Size: 0x04
	struct FNavAvoidanceMask GroupsToIgnore; // Offset: 0x2b4 // Size: 0x04
	float AvoidanceWeight; // Offset: 0x2b8 // Size: 0x04
	struct FVector PendingLaunchVelocity; // Offset: 0x2bc // Size: 0x0c
	char pad_0x2C8[0x10]; // Offset: 0x2c8 // Size: 0x10
	struct FReplicatedVehicleState ReplicatedState; // Offset: 0x2d8 // Size: 0x14
	char pad_0x2EC[0x4]; // Offset: 0x2ec // Size: 0x04
	float RawSteeringInput; // Offset: 0x2f0 // Size: 0x04
	float RawThrottleInput; // Offset: 0x2f4 // Size: 0x04
	float RawBrakeInput; // Offset: 0x2f8 // Size: 0x04
	char bRawHandbrakeInput : 1; // Offset: 0x2fc // Size: 0x01
	char bRawGearUpInput : 1; // Offset: 0x2fc // Size: 0x01
	char bRawGearDownInput : 1; // Offset: 0x2fc // Size: 0x01
	char pad_0x2FC_3 : 5; // Offset: 0x2fc // Size: 0x01
	char pad_0x2FD[0x3]; // Offset: 0x2fd // Size: 0x03
	float SteeringInput; // Offset: 0x300 // Size: 0x04
	float ThrottleInput; // Offset: 0x304 // Size: 0x04
	float BrakeInput; // Offset: 0x308 // Size: 0x04
	float HandBrakeInput; // Offset: 0x30c // Size: 0x04
	float IdleBrakeInput; // Offset: 0x310 // Size: 0x04
	float StopThreshold; // Offset: 0x314 // Size: 0x04
	float WrongDirectionThreshold; // Offset: 0x318 // Size: 0x04
	struct FVehicleInputRate ThrottleInputRate; // Offset: 0x31c // Size: 0x08
	struct FVehicleInputRate BrakeInputRate; // Offset: 0x324 // Size: 0x08
	struct FVehicleInputRate HandbrakeInputRate; // Offset: 0x32c // Size: 0x08
	struct FVehicleInputRate SteeringInputRate; // Offset: 0x334 // Size: 0x08
	char bWasAvoidanceUpdated : 1; // Offset: 0x33c // Size: 0x01
	char pad_0x33C_1 : 7; // Offset: 0x33c // Size: 0x01
	char pad_0x33D[0x2b]; // Offset: 0x33d // Size: 0x2b

	// Functions

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// Flags: [Native|Public|BlueprintCallable]
	void SetUseAutoGears(bool bUseAuto); // Offset: 0x101fe3fd8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// Flags: [Native|Public|BlueprintCallable]
	void SetThrottleInput(float Throttle); // Offset: 0x101fe3f54 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// Flags: [Native|Public|BlueprintCallable]
	void SetTargetGear(IntProperty GearNum, bool bImmediate); // Offset: 0x101fe3e90 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// Flags: [Native|Public|BlueprintCallable]
	void SetSteeringInput(float Steering); // Offset: 0x101fe3e0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetPhysActive
	// Flags: [Native|Public|BlueprintCallable]
	void SetPhysActive(bool bActive); // Offset: 0x101fe3d80 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// Flags: [Native|Public|BlueprintCallable]
	void SetHandbrakeInput(bool bNewHandbrake); // Offset: 0x101fe3cf4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Offset: 0x101fe3c6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGroupsToIgnore(IntProperty GroupFlags); // Offset: 0x101fe3bf0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Offset: 0x101fe3b68 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGroupsToAvoid(IntProperty GroupFlags); // Offset: 0x101fe3aec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGearUp(bool bNewGearUp); // Offset: 0x101fe3a68 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetGearDown(bool bNewGearDown); // Offset: 0x101fe39e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// Flags: [Native|Public|BlueprintCallable]
	void SetBrakeInput(float Brake); // Offset: 0x101fe3960 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Offset: 0x101fe38d8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAvoidanceGroup(IntProperty GroupFlags); // Offset: 0x101fe385c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetAvoidanceEnabled(bool bEnable); // Offset: 0x101fe37d8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandBrakeInput, IntProperty CurrentGear); // Offset: 0x101fe3668 // Return & Params: Num(5) Size(0x14)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.IsSuspensionSweep
	// Flags: [Native|Public|BlueprintCallable]
	bool IsSuspensionSweep(); // Offset: 0x101fe362c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetWheelShapeIndices
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetWheelShapeIndices(struct TArray<IntProperty>& OutWheelShapeIndices); // Offset: 0x101fe3584 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetUseAutoGears(); // Offset: 0x101fe3548 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetThrottleInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetThrottleInput(); // Offset: 0x101fe352c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTargetGear(); // Offset: 0x101fe34f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetSteeringInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSteeringInput(); // Offset: 0x101fe34d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetHandbrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool GetHandbrakeInput(); // Offset: 0x101fe34b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetForwardSpeed(); // Offset: 0x101fe3474 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetEngineRotationSpeed(); // Offset: 0x101fe3438 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetEngineMaxRotationSpeed(); // Offset: 0x101fe3404 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetCurrentGear(); // Offset: 0x101fe33c8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.GetBrakeInput
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetBrakeInput(); // Offset: 0x101fe33ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleWheel
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableVehicleWheel(IntProperty WheelIndex, bool InEnable); // Offset: 0x101fe32f0 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleSimulation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableVehicleSimulation(bool InEnable); // Offset: 0x101fe326c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.WheeledVehicleMovementComponent.ClearAllInput
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ClearAllInput(); // Offset: 0x101fe3258 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x368 // Inherited bytes: 0x368
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {
	// Functions

	// Object Name: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSteerAngle(float SteerAngle, IntProperty WheelIndex); // Offset: 0x101fe2374 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDriveTorque(float DriveTorque, IntProperty WheelIndex); // Offset: 0x101fe22bc // Return & Params: Num(2) Size(0x8)

	// Object Name: Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetBrakeTorque(float BrakeTorque, IntProperty WheelIndex); // Offset: 0x101fe2204 // Return & Params: Num(2) Size(0x8)
};

// Object Name: Class PhysXVehicles.TireConfig
// Size: 0x50 // Inherited bytes: 0x30
struct UTireConfig : UDataAsset {
	// Fields
	float FrictionScale; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x8]; // Offset: 0x48 // Size: 0x08
};

// Object Name: Class PhysXVehicles.VehicleAnimInstance
// Size: 0x9f0 // Inherited bytes: 0x3f0
struct UVehicleAnimInstance : UAnimInstance {
	// Fields
	char pad_0x3F0[0x8]; // Offset: 0x3f0 // Size: 0x08
	float fWheelRotationSpeedPitch; // Offset: 0x3f8 // Size: 0x04
	float fWheelRotationSpeedYaw; // Offset: 0x3fc // Size: 0x04
	char pad_0x400[0x5e0]; // Offset: 0x400 // Size: 0x5e0
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // Offset: 0x9e0 // Size: 0x08
	char pad_0x9E8[0x8]; // Offset: 0x9e8 // Size: 0x08

	// Functions

	// Object Name: Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct AWheeledVehicle* GetVehicle(); // Offset: 0x101fe28ec // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class PhysXVehicles.VehicleWheel
// Size: 0xf0 // Inherited bytes: 0x28
struct UVehicleWheel : UObject {
	// Fields
	struct UStaticMesh* CollisionMesh; // Offset: 0x28 // Size: 0x08
	bool bDontCreateShape; // Offset: 0x30 // Size: 0x01
	bool bAutoAdjustCollisionSize; // Offset: 0x31 // Size: 0x01
	char pad_0x32[0x2]; // Offset: 0x32 // Size: 0x02
	struct FVector Offset; // Offset: 0x34 // Size: 0x0c
	float ShapeRadius; // Offset: 0x40 // Size: 0x04
	float ShapeWidth; // Offset: 0x44 // Size: 0x04
	float Mass; // Offset: 0x48 // Size: 0x04
	float DampingRate; // Offset: 0x4c // Size: 0x04
	float SteerAngle; // Offset: 0x50 // Size: 0x04
	bool bAffectedByHandbrake; // Offset: 0x54 // Size: 0x01
	char pad_0x55[0x3]; // Offset: 0x55 // Size: 0x03
	struct UTireType* TireType; // Offset: 0x58 // Size: 0x08
	struct UTireConfig* TireConfig; // Offset: 0x60 // Size: 0x08
	float LatStiffMaxLoad; // Offset: 0x68 // Size: 0x04
	float LatStiffValue; // Offset: 0x6c // Size: 0x04
	float LongStiffValue; // Offset: 0x70 // Size: 0x04
	float SuspensionForceOffset; // Offset: 0x74 // Size: 0x04
	float SuspensionMaxRaise; // Offset: 0x78 // Size: 0x04
	float SuspensionMaxDrop; // Offset: 0x7c // Size: 0x04
	float SuspensionNaturalFrequency; // Offset: 0x80 // Size: 0x04
	float SuspensionDampingRatio; // Offset: 0x84 // Size: 0x04
	enum class EWheelSweepType SweepType; // Offset: 0x88 // Size: 0x01
	char pad_0x89[0x3]; // Offset: 0x89 // Size: 0x03
	float MaxBrakeTorque; // Offset: 0x8c // Size: 0x04
	float MaxHandBrakeTorque; // Offset: 0x90 // Size: 0x04
	char pad_0x94[0x4]; // Offset: 0x94 // Size: 0x04
	struct UWheeledVehicleMovementComponent* VehicleSim; // Offset: 0x98 // Size: 0x08
	IntProperty WheelIndex; // Offset: 0xa0 // Size: 0x04
	float DebugLongSlip; // Offset: 0xa4 // Size: 0x04
	float DebugLatSlip; // Offset: 0xa8 // Size: 0x04
	float DebugNormalizedTireLoad; // Offset: 0xac // Size: 0x04
	char pad_0xB0[0x4]; // Offset: 0xb0 // Size: 0x04
	float DebugWheelTorque; // Offset: 0xb4 // Size: 0x04
	float DebugLongForce; // Offset: 0xb8 // Size: 0x04
	float DebugLatForce; // Offset: 0xbc // Size: 0x04
	struct FVector Location; // Offset: 0xc0 // Size: 0x0c
	struct FVector OldLocation; // Offset: 0xcc // Size: 0x0c
	struct FVector Velocity; // Offset: 0xd8 // Size: 0x0c
	char pad_0xE4[0xc]; // Offset: 0xe4 // Size: 0x0c

	// Functions

	// Object Name: Function PhysXVehicles.VehicleWheel.IsInAir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsInAir(); // Offset: 0x101fe2be8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSuspensionOffset(); // Offset: 0x101fe2bb4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.VehicleWheel.GetSteerAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetSteerAngle(); // Offset: 0x101fe2b80 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.VehicleWheel.GetRotationAngle
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetRotationAngle(); // Offset: 0x101fe2b4c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhysXVehicles.VehicleWheel.GetContactNormal
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetContactNormal(); // Offset: 0x101fe2b14 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class PhysXVehicles.WheeledVehicle
// Size: 0x520 // Inherited bytes: 0x510
struct AWheeledVehicle : APawn {
	// Fields
	struct USkeletalMeshComponent* Mesh; // Offset: 0x510 // Size: 0x08
	struct UWheeledVehicleMovementComponent* VehicleMovement; // Offset: 0x518 // Size: 0x08
};

// Object Name: Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x4c8 // Inherited bytes: 0x368
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	// Fields
	struct FVehicleEngineData EngineSetup; // Offset: 0x368 // Size: 0x90
	struct FVehicleDifferential4WData DifferentialSetup; // Offset: 0x3f8 // Size: 0x1c
	char pad_0x414[0x4]; // Offset: 0x414 // Size: 0x04
	struct FVehicleTransmissionData TransmissionSetup; // Offset: 0x418 // Size: 0x30
	struct FRuntimeFloatCurve SteeringCurve; // Offset: 0x448 // Size: 0x78
	float AckermannAccuracy; // Offset: 0x4c0 // Size: 0x04
	char pad_0x4C4[0x4]; // Offset: 0x4c4 // Size: 0x04
};

