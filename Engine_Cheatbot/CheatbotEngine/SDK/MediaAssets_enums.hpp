#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9
};

// Object Name: Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9
};

// Object Name: Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9
};

// Object Name: Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7
};

// Object Name: Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3
};

