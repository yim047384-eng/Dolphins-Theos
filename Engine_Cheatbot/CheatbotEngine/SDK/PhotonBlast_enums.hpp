#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum PhotonBlast.EDestructionDamageType
enum class EDestructionDamageType : uint8 {
	EDestructionDamage_ShootWeapon = 0,
	EDestructionDamage_Projectile = 1,
	EDestructionDamage_Melee = 2,
	EDestructionDamage_Grenade = 3,
	EDestructionDamage_Vehicle = 4,
	EDestructionDamage_VehicleTrigger = 5,
	EDestructionDamage_VehicleExplosion = 6,
	EDestructionDamage_DropActor = 7,
	EDestructionDamage_GasLineExplosion = 8,
	EDestructionDamage_Other = 9,
	EDestructionDamage_Max = 15
};

// Object Name: Enum PhotonBlast.EEffectType
enum class EEffectType : uint8 {
	None_Type = 0,
	BrokenEffect = 1,
	SimulationEffect = 2,
	AnimationEffect = 3,
	EEffectType_MAX = 4
};

// Object Name: Enum PhotonBlast.EPhotonFracturedMeshFragmentState
enum class EPhotonFracturedMeshFragmentState : uint8 {
	PhotonFracturedMesh_Initial = 0,
	PhotonFracturedMesh_UnderDestruction = 1,
	PhotonFracturedMesh_Damaged = 2,
	PhotonFractureMesh_DamagedByCollapse = 3,
	EPhotonFracturedMeshFragmentState_MAX = 4
};

// Object Name: Enum PhotonBlast.EPhotonDestructibleKey
enum class EPhotonDestructibleKey : uint8 {
	Reset = 0,
	Trigger = 1,
	EPhotonDestructibleKey_MAX = 2
};

// Object Name: Enum PhotonBlast.ESlicedAxis
enum class ESlicedAxis : uint8 {
	SlicedAxis_X = 0,
	SlicedAxis_Y = 1,
	SlicedAxis_Z = 2,
	SlicedAxis_NX = 3,
	SlicedAxis_NY = 4,
	SlicedAxis_NZ = 5,
	SlicedAxis_MAX = 6
};

// Object Name: Enum PhotonBlast.EPhotonCollisionType
enum class EPhotonCollisionType : uint8 {
	PhotonCollisionType_Simple = 0,
	PhotonCollisionType_Complex = 1,
	PhotonCollisionType_MAX = 2
};

// Object Name: Enum PhotonBlast.EPhotonDestructibleAction
enum class EPhotonDestructibleAction : uint8 {
	PhotonDestructibleAction_Hide = 0,
	PhotonDestructibleAction_Detach = 1,
	PhotonDestructibleAction_Slide = 2,
	PhotonDestructibleAction_MAX = 3
};

// Object Name: Enum PhotonBlast.EPhotonDestructibleState
enum class EPhotonDestructibleState : uint8 {
	PhotonPDState_UnBroken = 0,
	PhotonPDState_Broken = 1,
	PhotonPDState_AllHidden = 2,
	PhotonPDState_Collapse = 3,
	PhotonPDState_Recovery = 4,
	PhotonPDState_Invalid = 5,
	PhotonPDState_MAX = 6
};

// Object Name: Enum PhotonBlast.EPhotonMeshFragmentType
enum class EPhotonMeshFragmentType : uint8 {
	Indestructible = 0,
	Disappear = 1,
	Collapse = 2,
	EPhotonMeshFragmentType_MAX = 3
};

// Object Name: Enum PhotonBlast.EPhotonMeshDestructionTriggerMode
enum class EPhotonMeshDestructionTriggerMode : uint8 {
	Disabled = 0,
	TriggerEveryActivation = 1,
	EPhotonMeshDestructionTriggerMode_MAX = 2
};

