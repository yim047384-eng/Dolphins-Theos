#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x90 // Inherited bytes: 0x78
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	// Fields
	char pad_0x78[0x18]; // Offset: 0x78 // Size: 0x18
};

// Object Name: ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 // Inherited bytes: 0x00
struct FTireConfigMaterialFriction {
	// Fields
	struct UPhysicalMaterial* PhysicalMaterial; // Offset: 0x00 // Size: 0x08
	float FrictionScale; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x5e0 // Inherited bytes: 0x5d0
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy {
	// Fields
	char pad_0x5D0[0x10]; // Offset: 0x5d0 // Size: 0x10
};

// Object Name: ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x08 // Inherited bytes: 0x00
struct FVehicleInputRate {
	// Fields
	float RiseRate; // Offset: 0x00 // Size: 0x04
	float FallRate; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x14 // Inherited bytes: 0x00
struct FReplicatedVehicleState {
	// Fields
	float SteeringInput; // Offset: 0x00 // Size: 0x04
	float ThrottleInput; // Offset: 0x04 // Size: 0x04
	float BrakeInput; // Offset: 0x08 // Size: 0x04
	float HandBrakeInput; // Offset: 0x0c // Size: 0x04
	IntProperty CurrentGear; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 // Inherited bytes: 0x00
struct FWheelSetup {
	// Fields
	struct UVehicleWheel* WheelClass; // Offset: 0x00 // Size: 0x08
	struct FName BoneName; // Offset: 0x08 // Size: 0x08
	struct FVector AdditionalOffset; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 // Inherited bytes: 0x00
struct FVehicleTransmissionData {
	// Fields
	bool bUseGearAutoBox; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float GearSwitchTime; // Offset: 0x04 // Size: 0x04
	float GearAutoBoxLatency; // Offset: 0x08 // Size: 0x04
	float FinalRatio; // Offset: 0x0c // Size: 0x04
	struct TArray<struct FVehicleGearData> ForwardGears; // Offset: 0x10 // Size: 0x10
	float ReverseGearRatio; // Offset: 0x20 // Size: 0x04
	float NeutralGearUpRatio; // Offset: 0x24 // Size: 0x04
	float ClutchStrength; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0x0c // Inherited bytes: 0x00
struct FVehicleGearData {
	// Fields
	float Ratio; // Offset: 0x00 // Size: 0x04
	float DownRatio; // Offset: 0x04 // Size: 0x04
	float UpRatio; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0x90 // Inherited bytes: 0x00
struct FVehicleEngineData {
	// Fields
	struct FRuntimeFloatCurve TorqueCurve; // Offset: 0x00 // Size: 0x78
	float MaxRPM; // Offset: 0x78 // Size: 0x04
	float MOI; // Offset: 0x7c // Size: 0x04
	float DampingRateFullThrottle; // Offset: 0x80 // Size: 0x04
	float DampingRateZeroThrottleClutchEngaged; // Offset: 0x84 // Size: 0x04
	float DampingRateZeroThrottleClutchDisengaged; // Offset: 0x88 // Size: 0x04
	char pad_0x8C[0x4]; // Offset: 0x8c // Size: 0x04
};

// Object Name: ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1c // Inherited bytes: 0x00
struct FVehicleDifferential4WData {
	// Fields
	enum class EVehicleDifferential4W DifferentialType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FrontRearSplit; // Offset: 0x04 // Size: 0x04
	float FrontLeftRightSplit; // Offset: 0x08 // Size: 0x04
	float RearLeftRightSplit; // Offset: 0x0c // Size: 0x04
	float CentreBias; // Offset: 0x10 // Size: 0x04
	float FrontBias; // Offset: 0x14 // Size: 0x04
	float RearBias; // Offset: 0x18 // Size: 0x04
};

