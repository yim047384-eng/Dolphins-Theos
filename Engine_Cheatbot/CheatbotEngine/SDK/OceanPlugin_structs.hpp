#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct OceanPlugin.StructBoneOverride
// Size: 0x10 // Inherited bytes: 0x00
struct FStructBoneOverride {
	// Fields
	struct FName BoneName; // Offset: 0x00 // Size: 0x08
	float Density; // Offset: 0x08 // Size: 0x04
	float TestRadius; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct OceanPlugin.ForceTriangle
// Size: 0x6c // Inherited bytes: 0x00
struct FForceTriangle {
	// Fields
	char pad_0x0[0x6c]; // Offset: 0x00 // Size: 0x6c
};

// Object Name: ScriptStruct OceanPlugin.BuoyancyVertex
// Size: 0x10 // Inherited bytes: 0x00
struct FBuoyancyVertex {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct OceanPlugin.WaveSetParameters
// Size: 0xa0 // Inherited bytes: 0x00
struct FWaveSetParameters {
	// Fields
	struct FWaveParameter Wave01; // Offset: 0x00 // Size: 0x14
	struct FWaveParameter Wave02; // Offset: 0x14 // Size: 0x14
	struct FWaveParameter Wave03; // Offset: 0x28 // Size: 0x14
	struct FWaveParameter Wave04; // Offset: 0x3c // Size: 0x14
	struct FWaveParameter Wave05; // Offset: 0x50 // Size: 0x14
	struct FWaveParameter Wave06; // Offset: 0x64 // Size: 0x14
	struct FWaveParameter Wave07; // Offset: 0x78 // Size: 0x14
	struct FWaveParameter Wave08; // Offset: 0x8c // Size: 0x14
};

// Object Name: ScriptStruct OceanPlugin.WaveParameter
// Size: 0x14 // Inherited bytes: 0x00
struct FWaveParameter {
	// Fields
	float Rotation; // Offset: 0x00 // Size: 0x04
	float Length; // Offset: 0x04 // Size: 0x04
	float Amplitude; // Offset: 0x08 // Size: 0x04
	float Steepness; // Offset: 0x0c // Size: 0x04
	float TimeScale; // Offset: 0x10 // Size: 0x04
};

// Object Name: ScriptStruct OceanPlugin.SegmentWaterBox
// Size: 0x90 // Inherited bytes: 0x00
struct FSegmentWaterBox {
	// Fields
	struct FBox WaterBox; // Offset: 0x00 // Size: 0x1c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FTransform WaterTransform; // Offset: 0x20 // Size: 0x30
	struct FVector WaterBoxExtend; // Offset: 0x50 // Size: 0x0c
	float WaterBoxAcceptZValue; // Offset: 0x5c // Size: 0x04
	struct FVector2D Direction; // Offset: 0x60 // Size: 0x08
	float SpeedValue; // Offset: 0x68 // Size: 0x04
	bool UseSplineZ; // Offset: 0x6c // Size: 0x01
	char pad_0x6D[0x3]; // Offset: 0x6d // Size: 0x03
	float WaveForceMultiplier; // Offset: 0x70 // Size: 0x04
	char pad_0x74[0x4]; // Offset: 0x74 // Size: 0x04
	struct TArray<struct FTrippleWaveParameter> WaveClusters; // Offset: 0x78 // Size: 0x10
	struct USplineComponent* DirectionSpline; // Offset: 0x88 // Size: 0x08
};

// Object Name: ScriptStruct OceanPlugin.TrippleWaveParameter
// Size: 0x54 // Inherited bytes: 0x00
struct FTrippleWaveParameter {
	// Fields
	struct FWaveParameter WaveCluster0; // Offset: 0x00 // Size: 0x14
	struct FWaveAdjust WaveAdjust0; // Offset: 0x14 // Size: 0x08
	struct FWaveParameter WaveCluster1; // Offset: 0x1c // Size: 0x14
	struct FWaveAdjust WaveAdjust1; // Offset: 0x30 // Size: 0x08
	struct FWaveParameter WaveCluster2; // Offset: 0x38 // Size: 0x14
	struct FWaveAdjust WaveAdjust2; // Offset: 0x4c // Size: 0x08
};

// Object Name: ScriptStruct OceanPlugin.WaveAdjust
// Size: 0x08 // Inherited bytes: 0x00
struct FWaveAdjust {
	// Fields
	float TimeScaleOffset; // Offset: 0x00 // Size: 0x04
	float Offset; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct OceanPlugin.TimeDate
// Size: 0x1c // Inherited bytes: 0x00
struct FTimeDate {
	// Fields
	IntProperty Millisecond; // Offset: 0x00 // Size: 0x04
	IntProperty Second; // Offset: 0x04 // Size: 0x04
	IntProperty Minute; // Offset: 0x08 // Size: 0x04
	IntProperty Hour; // Offset: 0x0c // Size: 0x04
	IntProperty Day; // Offset: 0x10 // Size: 0x04
	IntProperty Month; // Offset: 0x14 // Size: 0x04
	IntProperty Year; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct OceanPlugin.WaterBoxCell
// Size: 0x20 // Inherited bytes: 0x00
struct FWaterBoxCell {
	// Fields
	struct FVector WaveDirection; // Offset: 0x00 // Size: 0x0c
	float WaveZ; // Offset: 0x0c // Size: 0x04
	struct FVector PushForceDirection; // Offset: 0x10 // Size: 0x0c
	float Speed; // Offset: 0x1c // Size: 0x04
};

