#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : uint8 {
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5
};

// Object Name: Enum ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : uint8 {
	ACLVF_Vector3_97 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2
};

// Object Name: Enum ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : uint8 {
	ACLRF_Quat_129 = 0,
	ACLRF_QuatDropW_97 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3
};

