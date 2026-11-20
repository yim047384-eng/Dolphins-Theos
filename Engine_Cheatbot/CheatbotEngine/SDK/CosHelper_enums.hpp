#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum CosHelper.ECosHelperFileInfoType
enum class ECosHelperFileInfoType : uint8 {
	None = 0,
	ContentLength = 1,
	ETag = 2,
	LastModifiedUtcTimestamp = 4,
	ECosHelperFileInfoType_MAX = 5
};

