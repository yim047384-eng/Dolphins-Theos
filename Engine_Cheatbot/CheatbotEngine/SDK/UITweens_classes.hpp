#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UITweens.TweenManager
// Size: 0x50 // Inherited bytes: 0x28
struct UTweenManager : UObject {
	// Fields
	char pad_0x28[0x28]; // Offset: 0x28 // Size: 0x28

	// Functions

	// Object Name: Function UITweens.TweenManager.TweenScale
	// Flags: [Final|Native|Public|HasDefaults]
	void TweenScale(struct UWidget* Widget, struct FVector2D From, struct FVector2D To, float Timespan, IntProperty Type); // Offset: 0x1023613f8 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function UITweens.TweenManager.TweenPosition
	// Flags: [Final|Native|Public|HasDefaults]
	void TweenPosition(struct UWidget* Widget, struct FVector2D From, struct FVector2D To, float Timespan, IntProperty Type); // Offset: 0x102361294 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function UITweens.TweenManager.TweenAlpha
	// Flags: [Final|Native|Public]
	void TweenAlpha(struct UWidget* Widget, float From, float To, float Timespan, IntProperty Type); // Offset: 0x10236112c // Return & Params: Num(5) Size(0x18)

	// Object Name: Function UITweens.TweenManager.Tick
	// Flags: [Final|Native|Public]
	void Tick(float DeltaTime); // Offset: 0x1023610a8 // Return & Params: Num(1) Size(0x4)
};

