#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class MoviePlayer.MoviePlayerSettings
// Size: 0x50 // Inherited bytes: 0x28
struct UMoviePlayerSettings : UObject {
	// Fields
	bool bWaitForMoviesToComplete; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x7]; // Offset: 0x29 // Size: 0x07
	struct TArray<StrProperty> bMoviesAreSkippable; // Offset: 0x30 // Size: 0x10
	struct TArray<StrProperty> StartupMovies; // Offset: 0x40 // Size: 0x10
};

