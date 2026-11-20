#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum UIParticle.EUIParticlePropertyType
enum class EUIParticlePropertyType : uint8 {
	Float = 0,
	FloatRange = 1,
	FloatCurve = 2,
	FloatCurveRange = 3,
	Vector2D = 4,
	Vector2DRange = 5,
	LinearColorCurve = 6,
	LinearColorCurveRange = 7,
	EUIParticlePropertyType_MAX = 8
};

// Object Name: Enum UIParticle.EParticleDrawEffect
enum class EParticleDrawEffect : uint8 {
	None = 0,
	NoBlending = 1,
	PreMultipliedAlpha = 2,
	NoGamma = 4,
	InvertAlpha = 8,
	NoPixelSnapping = 16,
	DisabledEffect = 32,
	IgnoreTextureAlpha = 64,
	ReverseGamma = 128,
	EParticleDrawEffect_MAX = 129
};

// Object Name: Enum UIParticle.EPositionType
enum class EPositionType : uint8 {
	FREE = 0,
	RELATIVE = 1,
	EPositionType_MAX = 2
};

// Object Name: Enum UIParticle.EEmitterType
enum class EEmitterType : uint8 {
	Gravity = 0,
	Radial = 1,
	Curve = 2,
	EEmitterType_MAX = 3
};

// Object Name: Enum UIParticle.ECurveType
enum class ECurveType : uint8 {
	ParticleLifePercent = 0,
	ParticleLifeTime = 1,
	EmitLifeTime = 2,
	ECurveType_MAX = 3
};

