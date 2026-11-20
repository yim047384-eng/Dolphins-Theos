#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass EntireMapUI_BP.EntireMapUI_BP_C
// Size: 0x218 // Inherited bytes: 0x190
struct UEntireMapUI_BP_C : UMapUIBase_BP_C {
	// Fields
	bool bHasSetAdaptation; // Offset: 0x190 // Size: 0x01
	char pad_0x191[0x7]; // Offset: 0x191 // Size: 0x07
	struct UEntireMapUIWidget_C* HoldEntireMapWidget; // Offset: 0x198 // Size: 0x08
	float AdaptationBottomOffset; // Offset: 0x1a0 // Size: 0x04
	struct FVector2D MapTopLeftOnScreen; // Offset: 0x1a4 // Size: 0x08
	struct FVector2D MapCenterOnScreen; // Offset: 0x1ac // Size: 0x08
	float MapWindowExtentC; // Offset: 0x1b4 // Size: 0x04
	struct FVector2D MapInitSize; // Offset: 0x1b8 // Size: 0x08
	bool bSelfCenterZoom; // Offset: 0x1c0 // Size: 0x01
	char pad_0x1C1[0x3]; // Offset: 0x1c1 // Size: 0x03
	float CurMapSize; // Offset: 0x1c4 // Size: 0x04
	struct FVector2D LocalPlayerMarkerAlig; // Offset: 0x1c8 // Size: 0x08
	bool bNeedDrawNaviGuideLine; // Offset: 0x1d0 // Size: 0x01
	char pad_0x1D1[0x3]; // Offset: 0x1d1 // Size: 0x03
	float AirLineScale; // Offset: 0x1d4 // Size: 0x04
	float MaxScaleValue; // Offset: 0x1d8 // Size: 0x04
	bool bCanZoonToFitBlueCircle; // Offset: 0x1dc // Size: 0x01
	bool bIsDrawMultiGuideLine; // Offset: 0x1dd // Size: 0x01
	char pad_0x1DE[0x2]; // Offset: 0x1de // Size: 0x02
	IntProperty MultiMarkMaxNum; // Offset: 0x1e0 // Size: 0x04
	bool bSelfMultiMarksChanged; // Offset: 0x1e4 // Size: 0x01
	char pad_0x1E5[0x3]; // Offset: 0x1e5 // Size: 0x03
	float ZoomToFitBlueCircleVar; // Offset: 0x1e8 // Size: 0x04
	char pad_0x1EC[0x4]; // Offset: 0x1ec // Size: 0x04
	struct ASTExtraVehicleBase* AutoDriveVehicle; // Offset: 0x1f0 // Size: 0x08
	IntProperty RouteStart; // Offset: 0x1f8 // Size: 0x04
	char pad_0x1FC[0x4]; // Offset: 0x1fc // Size: 0x04
	struct TArray<struct FVector> RouteList; // Offset: 0x200 // Size: 0x10
	struct USettingConfig_C* SavedSettingConfig; // Offset: 0x210 // Size: 0x08
};

