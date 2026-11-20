#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_MAX = 5
};

