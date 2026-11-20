#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D
// Size: 0xa30 // Inherited bytes: 0xa10
struct UWidgetCaptureComponent2D : USceneCaptureComponent2D {
	// Fields
	struct ASceneCaptureCameraActor* OwnerCameraActor; // Offset: 0xa10 // Size: 0x08
	char pad_0xA18[0x18]; // Offset: 0xa18 // Size: 0x18
};

// Object Name: Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor
// Size: 0xa50 // Inherited bytes: 0xa40
struct ASceneCaptureCameraActor : ACameraActor {
	// Fields
	struct UWidgetCaptureComponent2D* SceneCaptureComponent; // Offset: 0xa40 // Size: 0x08
	char pad_0xA48[0x8]; // Offset: 0xa48 // Size: 0x08
};

// Object Name: Class SceneCaptureWidgetPlugin.SceneCaptureWidget
// Size: 0x1e0 // Inherited bytes: 0x100
struct USceneCaptureWidget : UWidget {
	// Fields
	struct FSlateBrush Brush; // Offset: 0x100 // Size: 0xb8
	struct ASceneCaptureCameraActor* SceneCaptureCameraActor; // Offset: 0x1b8 // Size: 0x08
	char pad_0x1C0[0x20]; // Offset: 0x1c0 // Size: 0x20

	// Functions

	// Object Name: Function SceneCaptureWidgetPlugin.SceneCaptureWidget.SetSceneCaptureCameraActor
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSceneCaptureCameraActor(struct ASceneCaptureCameraActor* InSceneCaptureCameraActor); // Offset: 0x101a1e3d0 // Return & Params: Num(1) Size(0x8)
};

