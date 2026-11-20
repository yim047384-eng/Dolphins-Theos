#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ClusterReplication.EClusterEntityState
enum class EClusterEntityState : uint8 {
	STATE_Original = 0,
	STATE_WithData = 1,
	STATE_WithNoData = 2,
	STATE_MAX = 3
};

// Object Name: Enum ClusterReplication.EAOIEntityType
enum class EAOIEntityType : uint8 {
	Static = 0,
	Static_UGC = 1,
	Dynamic = 2,
	Dynamic_Custom = 3,
	EAOIEntityType_MAX = 4
};

