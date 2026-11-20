#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct UIParticle.EasyParticleChildEmitterArray
// Size: 0x38 // Inherited bytes: 0x00
struct FEasyParticleChildEmitterArray {
	// Fields
	struct UUIParticleEmitterAsset* ChildrenAsset; // Offset: 0x00 // Size: 0x08
	struct FDateTime EmitterStartTime; // Offset: 0x08 // Size: 0x08
	char pad_0x10[0x28]; // Offset: 0x10 // Size: 0x28
};

// Object Name: ScriptStruct UIParticle.UIParticleEmitterInfo
// Size: 0x18 // Inherited bytes: 0x00
struct FUIParticleEmitterInfo {
	// Fields
	bool Disable; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float ActiveDelay; // Offset: 0x04 // Size: 0x04
	IntProperty ZOrder; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UUIParticleEmitterAsset* Asset; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct UIParticle.ScalarParamCurve
// Size: 0x700 // Inherited bytes: 0x00
struct FScalarParamCurve {
	// Fields
	struct FName ScalarParamName; // Offset: 0x00 // Size: 0x08
	struct FUIParticleProperty Value; // Offset: 0x08 // Size: 0x6f8
};

// Object Name: ScriptStruct UIParticle.UIParticleProperty
// Size: 0x6f8 // Inherited bytes: 0x00
struct FUIParticleProperty {
	// Fields
	enum class EUIParticlePropertyType Type; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x3]; // Offset: 0x01 // Size: 0x03
	float FloatValue; // Offset: 0x04 // Size: 0x04
	struct FRange_Float FloatRangeValue; // Offset: 0x08 // Size: 0x08
	struct FUIParticleFloatCurve FloatCurveValue; // Offset: 0x10 // Size: 0x78
	struct FRange_FloatCurve FloatCurveRangeValue; // Offset: 0x88 // Size: 0xf0
	struct FVector2D Vector2DValue; // Offset: 0x178 // Size: 0x08
	struct FRange_Vector2D Vector2DRangeValue; // Offset: 0x180 // Size: 0x14
	char pad_0x194[0x4]; // Offset: 0x194 // Size: 0x04
	struct FUIParticleLinearColorCurve LinearColorCurveValue; // Offset: 0x198 // Size: 0x1c8
	struct FRange_LinearColorCurve LinearColorCurveRangeValue; // Offset: 0x360 // Size: 0x398
};

// Object Name: ScriptStruct UIParticle.Range_LinearColorCurve
// Size: 0x398 // Inherited bytes: 0x00
struct FRange_LinearColorCurve {
	// Fields
	struct FUIParticleLinearColorCurve Min; // Offset: 0x00 // Size: 0x1c8
	struct FUIParticleLinearColorCurve Max; // Offset: 0x1c8 // Size: 0x1c8
	bool RandomKey_R_G; // Offset: 0x390 // Size: 0x01
	bool RandomKey_R_B; // Offset: 0x391 // Size: 0x01
	bool RandomKey_R_A; // Offset: 0x392 // Size: 0x01
	bool RandomKey_G_B; // Offset: 0x393 // Size: 0x01
	bool RandomKey_G_A; // Offset: 0x394 // Size: 0x01
	bool RandomKey_B_A; // Offset: 0x395 // Size: 0x01
	char pad_0x396[0x2]; // Offset: 0x396 // Size: 0x02
};

// Object Name: ScriptStruct UIParticle.UIParticleLinearColorCurve
// Size: 0x1c8 // Inherited bytes: 0x00
struct FUIParticleLinearColorCurve {
	// Fields
	struct FRichCurve ColorCurves[0x4]; // Offset: 0x00 // Size: 0x1c0
	enum class ECurveType CurveType; // Offset: 0x1c0 // Size: 0x01
	bool Loop; // Offset: 0x1c1 // Size: 0x01
	char pad_0x1C2[0x6]; // Offset: 0x1c2 // Size: 0x06
};

// Object Name: ScriptStruct UIParticle.Range_Vector2D
// Size: 0x14 // Inherited bytes: 0x00
struct FRange_Vector2D {
	// Fields
	struct FVector2D Min; // Offset: 0x00 // Size: 0x08
	struct FVector2D Max; // Offset: 0x08 // Size: 0x08
	bool RandomKey_X_Y; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
};

// Object Name: ScriptStruct UIParticle.Range_FloatCurve
// Size: 0xf0 // Inherited bytes: 0x00
struct FRange_FloatCurve {
	// Fields
	struct FUIParticleFloatCurve Min; // Offset: 0x00 // Size: 0x78
	struct FUIParticleFloatCurve Max; // Offset: 0x78 // Size: 0x78
};

// Object Name: ScriptStruct UIParticle.UIParticleFloatCurve
// Size: 0x78 // Inherited bytes: 0x00
struct FUIParticleFloatCurve {
	// Fields
	struct FRichCurve CurveData; // Offset: 0x00 // Size: 0x70
	enum class ECurveType CurveType; // Offset: 0x70 // Size: 0x01
	bool Loop; // Offset: 0x71 // Size: 0x01
	char pad_0x72[0x6]; // Offset: 0x72 // Size: 0x06
};

// Object Name: ScriptStruct UIParticle.Range_Float
// Size: 0x08 // Inherited bytes: 0x00
struct FRange_Float {
	// Fields
	float Min; // Offset: 0x00 // Size: 0x04
	float Max; // Offset: 0x04 // Size: 0x04
};

// Object Name: ScriptStruct UIParticle.Size_Vector2DCurve
// Size: 0xdf0 // Inherited bytes: 0x00
struct FSize_Vector2DCurve {
	// Fields
	struct FUIParticleProperty Min; // Offset: 0x00 // Size: 0x6f8
	struct FUIParticleProperty Max; // Offset: 0x6f8 // Size: 0x6f8
};

// Object Name: ScriptStruct UIParticle.Posotion_Vector2DCurve
// Size: 0xdf0 // Inherited bytes: 0x00
struct FPosotion_Vector2DCurve {
	// Fields
	struct FUIParticleProperty X; // Offset: 0x00 // Size: 0x6f8
	struct FUIParticleProperty Y; // Offset: 0x6f8 // Size: 0x6f8
};

// Object Name: ScriptStruct UIParticle.ScalarParamFloat
// Size: 0x10 // Inherited bytes: 0x00
struct FScalarParamFloat {
	// Fields
	struct FName ScalarParamName; // Offset: 0x00 // Size: 0x08
	struct FRange_Float Value; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct UIParticle.ChildEmitter
// Size: 0x18 // Inherited bytes: 0x00
struct FChildEmitter {
	// Fields
	float ActivityInParentLifeTime; // Offset: 0x00 // Size: 0x04
	bool FollowParentPosition; // Offset: 0x04 // Size: 0x01
	char pad_0x5[0x3]; // Offset: 0x05 // Size: 0x03
	float FollowParentSpeedPercent; // Offset: 0x08 // Size: 0x04
	IntProperty ZOrderOffset; // Offset: 0x0c // Size: 0x04
	struct UUIParticleEmitterAsset* ChildrenAsset; // Offset: 0x10 // Size: 0x08
};

// Object Name: ScriptStruct UIParticle.LerpKeyColor
// Size: 0x10 // Inherited bytes: 0x00
struct FLerpKeyColor {
	// Fields
	char pad_0x0[0x10]; // Offset: 0x00 // Size: 0x10
};

// Object Name: ScriptStruct UIParticle.LerpKeyVector2D
// Size: 0x08 // Inherited bytes: 0x00
struct FLerpKeyVector2D {
	// Fields
	char pad_0x0[0x8]; // Offset: 0x00 // Size: 0x08
};

