#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum CommonLib.DownloadResult
enum class DownloadResult : uint8 {
	SuccessDownloading = 0,
	DownloadFailed = 1,
	SaveFailed = 2,
	DirectoryCreationFailed = 3,
	DownloadResult_MAX = 4
};

