#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x18 // Inherited bytes: 0x00
struct FJoinabilitySettings {
	// Fields
	struct FName SessionName; // Offset: 0x00 // Size: 0x08
	bool bPublicSearchable; // Offset: 0x08 // Size: 0x01
	bool bAllowInvites; // Offset: 0x09 // Size: 0x01
	bool bJoinViaPresence; // Offset: 0x0a // Size: 0x01
	bool bJoinViaPresenceFriendsOnly; // Offset: 0x0b // Size: 0x01
	IntProperty MaxPlayers; // Offset: 0x0c // Size: 0x04
	IntProperty MaxPartySize; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x01 // Inherited bytes: 0x00
struct FUniqueNetIdWrapper {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct CoreUObject.Guid
// Size: 0x10 // Inherited bytes: 0x00
struct FGuid {
	// Fields
	IntProperty A; // Offset: 0x00 // Size: 0x04
	IntProperty B; // Offset: 0x04 // Size: 0x04
	IntProperty C; // Offset: 0x08 // Size: 0x04
	IntProperty D; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Vector
// Size: 0x0c // Inherited bytes: 0x00
struct FVector {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
	float Z; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Vector4
// Size: 0x10 // Inherited bytes: 0x00
struct FVector4 {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
	float Z; // Offset: 0x08 // Size: 0x04
	float W; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Vector2D
// Size: 0x08 // Inherited bytes: 0x00
struct FVector2D {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 // Inherited bytes: 0x00
struct FTwoVectors {
	// Fields
	struct FVector v1; // Offset: 0x00 // Size: 0x0c
	struct FVector v2; // Offset: 0x0c // Size: 0x0c
};

// Object Name: ScriptStruct CoreUObject.Plane
// Size: 0x10 // Inherited bytes: 0x0c
struct FPlane : FVector {
	// Fields
	float W; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Rotator
// Size: 0x0c // Inherited bytes: 0x00
struct FRotator {
	// Fields
	float Pitch; // Offset: 0x00 // Size: 0x04
	float Yaw; // Offset: 0x04 // Size: 0x04
	float Roll; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Quat
// Size: 0x10 // Inherited bytes: 0x00
struct FQuat {
	// Fields
	float X; // Offset: 0x00 // Size: 0x04
	float Y; // Offset: 0x04 // Size: 0x04
	float Z; // Offset: 0x08 // Size: 0x04
	float W; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.PackedNormal
// Size: 0x04 // Inherited bytes: 0x00
struct FPackedNormal {
	// Fields
	char X; // Offset: 0x00 // Size: 0x01
	char Y; // Offset: 0x01 // Size: 0x01
	char Z; // Offset: 0x02 // Size: 0x01
	char W; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x04 // Inherited bytes: 0x00
struct FPackedRGB10A2N {
	// Fields
	IntProperty Packed; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x08 // Inherited bytes: 0x00
struct FPackedRGBA16N {
	// Fields
	IntProperty XY; // Offset: 0x00 // Size: 0x04
	IntProperty ZW; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.IntPoint
// Size: 0x08 // Inherited bytes: 0x00
struct FIntPoint {
	// Fields
	IntProperty X; // Offset: 0x00 // Size: 0x04
	IntProperty Y; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.IntVector
// Size: 0x0c // Inherited bytes: 0x00
struct FIntVector {
	// Fields
	IntProperty X; // Offset: 0x00 // Size: 0x04
	IntProperty Y; // Offset: 0x04 // Size: 0x04
	IntProperty Z; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Color
// Size: 0x04 // Inherited bytes: 0x00
struct FColor {
	// Fields
	char B; // Offset: 0x00 // Size: 0x01
	char G; // Offset: 0x01 // Size: 0x01
	char R; // Offset: 0x02 // Size: 0x01
	char A; // Offset: 0x03 // Size: 0x01
};

// Object Name: ScriptStruct CoreUObject.LinearColor
// Size: 0x10 // Inherited bytes: 0x00
struct FLinearColor {
	// Fields
	float R; // Offset: 0x00 // Size: 0x04
	float G; // Offset: 0x04 // Size: 0x04
	float B; // Offset: 0x08 // Size: 0x04
	float A; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Box
// Size: 0x1c // Inherited bytes: 0x00
struct FBox {
	// Fields
	struct FVector Min; // Offset: 0x00 // Size: 0x0c
	struct FVector Max; // Offset: 0x0c // Size: 0x0c
	char IsValid; // Offset: 0x18 // Size: 0x01
	char pad_0x19[0x3]; // Offset: 0x19 // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.Box2D
// Size: 0x14 // Inherited bytes: 0x00
struct FBox2D {
	// Fields
	struct FVector2D Min; // Offset: 0x00 // Size: 0x08
	struct FVector2D Max; // Offset: 0x08 // Size: 0x08
	char bIsValid; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1c // Inherited bytes: 0x00
struct FBoxSphereBounds {
	// Fields
	struct FVector Origin; // Offset: 0x00 // Size: 0x0c
	struct FVector BoxExtent; // Offset: 0x0c // Size: 0x0c
	float SphereRadius; // Offset: 0x18 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.OrientedBox
// Size: 0x3c // Inherited bytes: 0x00
struct FOrientedBox {
	// Fields
	struct FVector Center; // Offset: 0x00 // Size: 0x0c
	struct FVector AxisX; // Offset: 0x0c // Size: 0x0c
	struct FVector AxisY; // Offset: 0x18 // Size: 0x0c
	struct FVector AxisZ; // Offset: 0x24 // Size: 0x0c
	float ExtentX; // Offset: 0x30 // Size: 0x04
	float ExtentY; // Offset: 0x34 // Size: 0x04
	float ExtentZ; // Offset: 0x38 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Matrix
// Size: 0x40 // Inherited bytes: 0x00
struct FMatrix {
	// Fields
	struct FPlane XPlane; // Offset: 0x00 // Size: 0x10
	struct FPlane YPlane; // Offset: 0x10 // Size: 0x10
	struct FPlane ZPlane; // Offset: 0x20 // Size: 0x10
	struct FPlane WPlane; // Offset: 0x30 // Size: 0x10
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 // Inherited bytes: 0x00
struct FInterpCurvePointFloat {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	float OutVal; // Offset: 0x04 // Size: 0x04
	float ArriveTangent; // Offset: 0x08 // Size: 0x04
	float LeaveTangent; // Offset: 0x0c // Size: 0x04
	enum class EInterpCurveMode InterpMode; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveFloat {
	// Fields
	struct TArray<struct FInterpCurvePointFloat> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 // Inherited bytes: 0x00
struct FInterpCurvePointVector2D {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	struct FVector2D OutVal; // Offset: 0x04 // Size: 0x08
	struct FVector2D ArriveTangent; // Offset: 0x0c // Size: 0x08
	struct FVector2D LeaveTangent; // Offset: 0x14 // Size: 0x08
	enum class EInterpCurveMode InterpMode; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveVector2D {
	// Fields
	struct TArray<struct FInterpCurvePointVector2D> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2c // Inherited bytes: 0x00
struct FInterpCurvePointVector {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	struct FVector OutVal; // Offset: 0x04 // Size: 0x0c
	struct FVector ArriveTangent; // Offset: 0x10 // Size: 0x0c
	struct FVector LeaveTangent; // Offset: 0x1c // Size: 0x0c
	enum class EInterpCurveMode InterpMode; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveVector {
	// Fields
	struct TArray<struct FInterpCurvePointVector> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 // Inherited bytes: 0x00
struct FInterpCurvePointQuat {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	char pad_0x4[0xc]; // Offset: 0x04 // Size: 0x0c
	struct FQuat OutVal; // Offset: 0x10 // Size: 0x10
	struct FQuat ArriveTangent; // Offset: 0x20 // Size: 0x10
	struct FQuat LeaveTangent; // Offset: 0x30 // Size: 0x10
	enum class EInterpCurveMode InterpMode; // Offset: 0x40 // Size: 0x01
	char pad_0x41[0xf]; // Offset: 0x41 // Size: 0x0f
};

// Object Name: ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveQuat {
	// Fields
	struct TArray<struct FInterpCurvePointQuat> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 // Inherited bytes: 0x00
struct FInterpCurvePointTwoVectors {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	struct FTwoVectors OutVal; // Offset: 0x04 // Size: 0x18
	struct FTwoVectors ArriveTangent; // Offset: 0x1c // Size: 0x18
	struct FTwoVectors LeaveTangent; // Offset: 0x34 // Size: 0x18
	enum class EInterpCurveMode InterpMode; // Offset: 0x4c // Size: 0x01
	char pad_0x4D[0x3]; // Offset: 0x4d // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveTwoVectors {
	// Fields
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 // Inherited bytes: 0x00
struct FInterpCurvePointLinearColor {
	// Fields
	float InVal; // Offset: 0x00 // Size: 0x04
	struct FLinearColor OutVal; // Offset: 0x04 // Size: 0x10
	struct FLinearColor ArriveTangent; // Offset: 0x14 // Size: 0x10
	struct FLinearColor LeaveTangent; // Offset: 0x24 // Size: 0x10
	enum class EInterpCurveMode InterpMode; // Offset: 0x34 // Size: 0x01
	char pad_0x35[0x3]; // Offset: 0x35 // Size: 0x03
};

// Object Name: ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 // Inherited bytes: 0x00
struct FInterpCurveLinearColor {
	// Fields
	struct TArray<struct FInterpCurvePointLinearColor> Points; // Offset: 0x00 // Size: 0x10
	bool bIsLooped; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	float LoopKeyOffset; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Transform
// Size: 0x30 // Inherited bytes: 0x00
struct FTransform {
	// Fields
	struct FQuat Rotation; // Offset: 0x00 // Size: 0x10
	struct FVector Translation; // Offset: 0x10 // Size: 0x0c
	char pad_0x1C[0x4]; // Offset: 0x1c // Size: 0x04
	struct FVector Scale3D; // Offset: 0x20 // Size: 0x0c
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.RandomStream
// Size: 0x08 // Inherited bytes: 0x00
struct FRandomStream {
	// Fields
	IntProperty InitialSeed; // Offset: 0x00 // Size: 0x04
	IntProperty Seed; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.DateTime
// Size: 0x08 // Inherited bytes: 0x00
struct FDateTime {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.Timespan
// Size: 0x08 // Inherited bytes: 0x00
struct FTimespan {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x18 // Inherited bytes: 0x00
struct FSoftObjectPath {
	// Fields
	struct FName AssetPathName; // Offset: 0x00 // Size: 0x08
	StrProperty SubPathString; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct CoreUObject.SoftClassPath
// Size: 0x18 // Inherited bytes: 0x18
struct FSoftClassPath : FSoftObjectPath {
};

// Object Name: ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x08 // Inherited bytes: 0x00
struct FPrimaryAssetType {
	// Fields
	struct FName Name; // Offset: 0x00 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10 // Inherited bytes: 0x00
struct FPrimaryAssetId {
	// Fields
	struct FPrimaryAssetType PrimaryAssetType; // Offset: 0x00 // Size: 0x08
	struct FName PrimaryAssetName; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.FallbackStruct
// Size: 0x01 // Inherited bytes: 0x00
struct FFallbackStruct {
	// Fields
	char pad_0x0[0x1]; // Offset: 0x00 // Size: 0x01
};

// Object Name: ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x08 // Inherited bytes: 0x00
struct FFloatRangeBound {
	// Fields
	enum class ERangeBoundTypes Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float Value; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.FloatRange
// Size: 0x10 // Inherited bytes: 0x00
struct FFloatRange {
	// Fields
	struct FFloatRangeBound LowerBound; // Offset: 0x00 // Size: 0x08
	struct FFloatRangeBound UpperBound; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x08 // Inherited bytes: 0x00
struct FInt32RangeBound {
	// Fields
	enum class ERangeBoundTypes Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	IntProperty Value; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Int32Range
// Size: 0x10 // Inherited bytes: 0x00
struct FInt32Range {
	// Fields
	struct FInt32RangeBound LowerBound; // Offset: 0x00 // Size: 0x08
	struct FInt32RangeBound UpperBound; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct CoreUObject.FloatInterval
// Size: 0x08 // Inherited bytes: 0x00
struct FFloatInterval {
	// Fields
	float Min; // Offset: 0x00 // Size: 0x04
	float Max; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.Int32Interval
// Size: 0x08 // Inherited bytes: 0x00
struct FInt32Interval {
	// Fields
	IntProperty Min; // Offset: 0x00 // Size: 0x04
	IntProperty Max; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct CoreUObject.AutomationEvent
// Size: 0x48 // Inherited bytes: 0x00
struct FAutomationEvent {
	// Fields
	enum class EAutomationEventType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Message; // Offset: 0x08 // Size: 0x10
	StrProperty Context; // Offset: 0x18 // Size: 0x10
	StrProperty Filename; // Offset: 0x28 // Size: 0x10
	IntProperty LineNumber; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
	struct FDateTime TimeStamp; // Offset: 0x40 // Size: 0x08
};

