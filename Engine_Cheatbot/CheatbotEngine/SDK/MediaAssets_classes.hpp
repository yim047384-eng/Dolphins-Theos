#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MediaAssets.MediaSource
// Size: 0x30 // Inherited bytes: 0x28
struct UMediaSource : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function MediaAssets.MediaSource.Validate
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool Validate(); // Offset: 0x106361370 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaSource.GetUrl
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUrl(); // Offset: 0x106361304 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class MediaAssets.BaseMediaSource
// Size: 0x38 // Inherited bytes: 0x30
struct UBaseMediaSource : UMediaSource {
	// Fields
	struct FName PlayerName; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class MediaAssets.FileMediaSource
// Size: 0x50 // Inherited bytes: 0x38
struct UFileMediaSource : UBaseMediaSource {
	// Fields
	StrProperty FilePath; // Offset: 0x38 // Size: 0x10
	bool PrecacheFile; // Offset: 0x48 // Size: 0x01
	char pad_0x49[0x7]; // Offset: 0x49 // Size: 0x07

	// Functions

	// Object Name: Function MediaAssets.FileMediaSource.SetFilePath
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFilePath(StrProperty Path); // Offset: 0x10635c90c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, IntProperty filter); // Offset: 0x10635d000 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, IntProperty filter); // Offset: 0x10635cf1c // Return & Params: Num(2) Size(0x14)

	// Object Name: Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, IntProperty filter); // Offset: 0x10635ce38 // Return & Params: Num(2) Size(0x14)
};

// Object Name: Class MediaAssets.MediaPlayer
// Size: 0x138 // Inherited bytes: 0x28
struct UMediaPlayer : UObject {
	// Fields
	struct FScriptMulticastDelegate OnEndReached; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnMediaClosed; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnMediaOpened; // Offset: 0x48 // Size: 0x10
	struct FScriptMulticastDelegate OnMediaOpenFailed; // Offset: 0x58 // Size: 0x10
	struct FScriptMulticastDelegate OnPlaybackResumed; // Offset: 0x68 // Size: 0x10
	struct FScriptMulticastDelegate OnPlaybackSuspended; // Offset: 0x78 // Size: 0x10
	struct FScriptMulticastDelegate OnSeekCompleted; // Offset: 0x88 // Size: 0x10
	struct FScriptMulticastDelegate OnTracksChanged; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnMediaPlayFirstFrame; // Offset: 0xa8 // Size: 0x10
	struct FTimespan CacheAhead; // Offset: 0xb8 // Size: 0x08
	struct FTimespan CacheBehind; // Offset: 0xc0 // Size: 0x08
	struct FTimespan CacheBehindGame; // Offset: 0xc8 // Size: 0x08
	bool NativeAudioOut; // Offset: 0xd0 // Size: 0x01
	bool PlayOnOpen; // Offset: 0xd1 // Size: 0x01
	char Shuffle : 1; // Offset: 0xd2 // Size: 0x01
	char Loop : 1; // Offset: 0xd2 // Size: 0x01
	char pad_0xD2_2 : 6; // Offset: 0xd2 // Size: 0x01
	char pad_0xD3[0x5]; // Offset: 0xd3 // Size: 0x05
	struct UMediaPlaylist* Playlist; // Offset: 0xd8 // Size: 0x08
	IntProperty PlaylistIndex; // Offset: 0xe0 // Size: 0x04
	float HorizontalFieldOfView; // Offset: 0xe4 // Size: 0x04
	float VerticalFieldOfView; // Offset: 0xe8 // Size: 0x04
	struct FRotator ViewRotation; // Offset: 0xec // Size: 0x0c
	char pad_0xF8[0x28]; // Offset: 0xf8 // Size: 0x28
	struct FGuid PlayerGuid; // Offset: 0x120 // Size: 0x10
	char pad_0x130[0x8]; // Offset: 0x130 // Size: 0x08

	// Functions

	// Object Name: Function MediaAssets.MediaPlayer.SupportsSeeking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool SupportsSeeking(); // Offset: 0x10635f1d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.SupportsScrubbing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool SupportsScrubbing(); // Offset: 0x10635f1a0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.SupportsRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool SupportsRate(float Rate, bool Unthinned); // Offset: 0x10635f0d0 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function MediaAssets.MediaPlayer.SetViewRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Offset: 0x10635eff4 // Return & Params: Num(3) Size(0xe)

	// Object Name: Function MediaAssets.MediaPlayer.SetViewField
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Offset: 0x10635eeec // Return & Params: Num(4) Size(0xa)

	// Object Name: Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetVideoTrackFrameRate(IntProperty TrackIndex, IntProperty FormatIndex, float FrameRate); // Offset: 0x10635edec // Return & Params: Num(4) Size(0xd)

	// Object Name: Function MediaAssets.MediaPlayer.SetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635ecec // Return & Params: Num(4) Size(0xd)

	// Object Name: Function MediaAssets.MediaPlayer.SetRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetRate(float Rate); // Offset: 0x10635ec60 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MediaAssets.MediaPlayer.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetLooping(bool Looping); // Offset: 0x10635ebcc // Return & Params: Num(2) Size(0x2)

	// Object Name: Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDesiredPlayerName(struct FName PlayerName); // Offset: 0x10635eb50 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.SetCancelPending
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetCancelPending(bool flag); // Offset: 0x10635eacc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.SelectTrack
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex); // Offset: 0x10635ea04 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlayer.Seek
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool Seek(struct FTimespan& Time); // Offset: 0x10635e96c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlayer.Rewind
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Rewind(); // Offset: 0x10635e938 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.Reopen
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Reopen(); // Offset: 0x10635e904 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.Previous
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Previous(); // Offset: 0x10635e8d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Play(); // Offset: 0x10635e89c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.Pause
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Pause(); // Offset: 0x10635e868 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.OpenUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenUrl(StrProperty URL); // Offset: 0x10635e7c0 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlayer.OpenSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenSource(struct UMediaSource* MediaSource); // Offset: 0x10635e734 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, IntProperty Index); // Offset: 0x10635e66c // Return & Params: Num(3) Size(0xd)

	// Object Name: Function MediaAssets.MediaPlayer.OpenPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Offset: 0x10635e5e0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlayer.OpenFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenFile(StrProperty FilePath); // Offset: 0x10635e538 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlayer.Next
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Next(); // Offset: 0x10635e504 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsReady(); // Offset: 0x10635e4d0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsPreparing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPreparing(); // Offset: 0x10635e49c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPlaying(); // Offset: 0x10635e468 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsPaused(); // Offset: 0x10635e434 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsLooping(); // Offset: 0x10635e400 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsConnecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsConnecting(); // Offset: 0x10635e3cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.IsBuffering
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsBuffering(); // Offset: 0x10635e398 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.HasError
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool HasError(); // Offset: 0x10635e364 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function MediaAssets.MediaPlayer.GetViewRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetViewRotation(); // Offset: 0x10635e32c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetVideoTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetVideoTrackType(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635e240 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FFloatRange GetVideoTrackFrameRates(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635e15c // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetVideoTrackFrameRate(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635e098 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FIntPoint GetVideoTrackDimensions(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635dfd4 // Return & Params: Num(3) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetVideoTrackAspectRatio(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635df10 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetVerticalFieldOfView(); // Offset: 0x10635dedc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaPlayer.GetUrl
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetUrl(); // Offset: 0x10635dea4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlayer.GetTrackLanguage
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetTrackLanguage(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex); // Offset: 0x10635ddb4 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MediaAssets.MediaPlayer.GetTrackFormat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetTrackFormat(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex); // Offset: 0x10635dcec // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetTrackDisplayName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex); // Offset: 0x10635dbfc // Return & Params: Num(3) Size(0x20)

	// Object Name: Function MediaAssets.MediaPlayer.GetTime
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FTimespan GetTime(); // Offset: 0x10635dbc8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetSupportedRates
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Offset: 0x10635dacc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlayer.GetSelectedTrack
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Offset: 0x10635da40 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetRate(); // Offset: 0x10635da0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaPlayer.GetPlaylistIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetPlaylistIndex(); // Offset: 0x10635d9f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaPlayer.GetPlaylist
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UMediaPlaylist* GetPlaylist(); // Offset: 0x10635d9d4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FName GetPlayerName(); // Offset: 0x10635d9a0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetNumTracks
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumTracks(enum class EMediaPlayerTrack TrackType); // Offset: 0x10635d914 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetNumTrackFormats
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, IntProperty TrackIndex); // Offset: 0x10635d84c // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetMediaName
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FText GetMediaName(); // Offset: 0x10635d7e0 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetHorizontalFieldOfView(); // Offset: 0x10635d7ac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaPlayer.GetDuration
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FTimespan GetDuration(); // Offset: 0x10635d778 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct FName GetDesiredPlayerName(); // Offset: 0x10635d744 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function MediaAssets.MediaPlayer.GetAudioTrackType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetAudioTrackType(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635d658 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetAudioTrackSampleRate(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635d594 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetAudioTrackChannels(IntProperty TrackIndex, IntProperty FormatIndex); // Offset: 0x10635d4d0 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlayer.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Close(); // Offset: 0x10635d4bc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function MediaAssets.MediaPlayer.CanPlayUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CanPlayUrl(StrProperty URL); // Offset: 0x10635d414 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlayer.CanPlaySource
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool CanPlaySource(struct UMediaSource* MediaSource); // Offset: 0x10635d388 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlayer.CanPause
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool CanPause(); // Offset: 0x10635d354 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class MediaAssets.MediaPlaylist
// Size: 0x40 // Inherited bytes: 0x28
struct UMediaPlaylist : UObject {
	// Fields
	char Loop : 1; // Offset: 0x28 // Size: 0x01
	char pad_0x28_1 : 7; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<struct UMediaSource*> Items; // Offset: 0x30 // Size: 0x10

	// Functions

	// Object Name: Function MediaAssets.MediaPlaylist.Replace
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Replace(IntProperty Index, struct UMediaSource* Replacement); // Offset: 0x106360c18 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlaylist.RemoveAt
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool RemoveAt(IntProperty Index); // Offset: 0x106360b8c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function MediaAssets.MediaPlaylist.Remove
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Remove(struct UMediaSource* MediaSource); // Offset: 0x106360b00 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function MediaAssets.MediaPlaylist.Num
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty Num(); // Offset: 0x106360ae4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaPlaylist.Insert
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Insert(struct UMediaSource* MediaSource, IntProperty Index); // Offset: 0x106360a2c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function MediaAssets.MediaPlaylist.GetRandom
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UMediaSource* GetRandom(IntProperty& OutIndex); // Offset: 0x106360990 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlaylist.GetPrevious
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UMediaSource* GetPrevious(IntProperty& InOutIndex); // Offset: 0x1063608f4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlaylist.GetNext
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UMediaSource* GetNext(IntProperty& InOutIndex); // Offset: 0x106360858 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlaylist.Get
	// Flags: [Final|Native|Public|BlueprintCallable]
	struct UMediaSource* Get(IntProperty Index); // Offset: 0x1063607cc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function MediaAssets.MediaPlaylist.AddUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AddUrl(StrProperty URL); // Offset: 0x106360724 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlaylist.AddFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool AddFile(StrProperty FilePath); // Offset: 0x10636067c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function MediaAssets.MediaPlaylist.Add
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool Add(struct UMediaSource* MediaSource); // Offset: 0x1063605f0 // Return & Params: Num(2) Size(0x9)
};

// Object Name: Class MediaAssets.MediaSoundComponent
// Size: 0x750 // Inherited bytes: 0x6d0
struct UMediaSoundComponent : USynthComponent {
	// Fields
	enum class EMediaSoundChannels Channels; // Offset: 0x6d0 // Size: 0x04
	char pad_0x6D4[0x4]; // Offset: 0x6d4 // Size: 0x04
	struct UMediaPlayer* MediaPlayer; // Offset: 0x6d8 // Size: 0x08
	char pad_0x6E0[0x70]; // Offset: 0x6e0 // Size: 0x70
};

// Object Name: Class MediaAssets.MediaTexture
// Size: 0x158 // Inherited bytes: 0xe8
struct UMediaTexture : UTexture {
	// Fields
	enum class TextureAddress AddressX; // Offset: 0xe8 // Size: 0x01
	enum class TextureAddress AddressY; // Offset: 0xe9 // Size: 0x01
	bool AutoClear; // Offset: 0xea // Size: 0x01
	char pad_0xEB[0x1]; // Offset: 0xeb // Size: 0x01
	struct FLinearColor ClearColor; // Offset: 0xec // Size: 0x10
	char pad_0xFC[0x4]; // Offset: 0xfc // Size: 0x04
	struct UMediaPlayer* MediaPlayer; // Offset: 0x100 // Size: 0x08
	char pad_0x108[0x50]; // Offset: 0x108 // Size: 0x50

	// Functions

	// Object Name: Function MediaAssets.MediaTexture.GetWidth
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetWidth(); // Offset: 0x10636157c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaTexture.GetHeight
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetHeight(); // Offset: 0x106361548 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function MediaAssets.MediaTexture.GetAspectRatio
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	float GetAspectRatio(); // Offset: 0x106361514 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class MediaAssets.PlatformMediaSource
// Size: 0x38 // Inherited bytes: 0x30
struct UPlatformMediaSource : UMediaSource {
	// Fields
	struct UMediaSource* MediaSource; // Offset: 0x30 // Size: 0x08
};

// Object Name: Class MediaAssets.StreamMediaSource
// Size: 0x48 // Inherited bytes: 0x38
struct UStreamMediaSource : UBaseMediaSource {
	// Fields
	StrProperty StreamUrl; // Offset: 0x38 // Size: 0x10
};

