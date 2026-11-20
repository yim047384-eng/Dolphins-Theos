#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Basic.EAttrOperator
enum class EAttrOperator : uint8 {
	Plus = 0,
	Multiply = 1,
	Set = 2,
	EAttrOperator_MAX = 3
};

// Object Name: Enum Basic.EAttrModifyRefType
enum class EAttrModifyRefType : uint8 {
	Val = 0,
	Rate = 1,
	Abs = 2,
	Set = 3,
	EAttrModifyRefType_MAX = 4
};

// Object Name: Enum Basic.EAttrVariableType
enum class EAttrVariableType : uint8 {
	Byte = 0,
	Int = 1,
	Float = 2,
	Num = 3,
	EAttrVariableType_MAX = 4
};

// Object Name: Enum Basic.EActorRegAttrTableType
enum class EActorRegAttrTableType : uint8 {
	EATY_NONE = 0,
	EATY_PLAYER = 1,
	EATY_ZOMBIE = 2,
	EATY_WEAPON = 3,
	EATY_VEHICLE = 4,
	EATY_MAX = 5
};

// Object Name: Enum Basic.EBattleItemDropReason
enum class EBattleItemDropReason : uint8 {
	Manually = 0,
	Associated = 1,
	AutoEquipAndDrop = 2,
	AutoEquipFailed = 3,
	CapacityExceeded = 4,
	UsedUp = 5,
	Force = 6,
	Replaced = 7,
	VehicleGroup = 8,
	Throwaway = 9,
	WeaponExchangeDropAttach = 10,
	EBattleItemDropReason_MAX = 11
};

// Object Name: Enum Basic.EBattleItemAdditionalDataType
enum class EBattleItemAdditionalDataType : uint8 {
	None = 0,
	TargetLogicSocket = 1,
	Weapon_Durability_Backpack = 2,
	Weapon_BulletNum_Backpack = 3,
	Weapon_UpgradeInfo_Backpack = 4,
	RemainingDuability = 5,
	EquipmentAvatar = 6,
	WeaponAvatar = 7,
	CustomColor = 8,
	CustomPattern = 9,
	CurElectricty = 10,
	AutoUse = 11,
	LimitPlayerKey = 12,
	MaxElectricty = 14,
	ConsumeSpeed = 15,
	ChipSlot1 = 16,
	ChipSlot2 = 17,
	ChipSlot3 = 18,
	CustomNum = 21,
	AUTO_EQUIP_ARMOE_ATTACHMENT = 22,
	AUTO_EQUIP_WEAPON_ATTACHMENT = 23,
	RollOnDead = 24,
	AutoEquipFromBackpack = 25,
	BUsing = 26,
	IsEquiping = 27,
	AvatarItem = 28,
	Affix = 29,
	VehicleHPRatio = 30,
	VehicleFuelRatio = 31,
	VehicleEnergyRatio = 32,
	ExtraData01 = 33,
	ExtraData02 = 34,
	OwnerInfo = 35,
	DropPlanInfo = 36,
	PveAffix = 37,
	ShapeInfo = 38,
	GunPoint = 100,
	Grip = 101,
	Magazine = 102,
	Gunstock = 103,
	OpticalSight = 104,
	MasterGun = 107,
	Ammo = 108,
	Pendant = 109,
	AngledOpticalSight = 110,
	ACCore = 111,
	Bezel = 112,
	GunLock = 113,
	TacticalAttach = 114,
	EBattleItemAdditionalDataType_MAX = 115
};

// Object Name: Enum Basic.EAnimLayerType
enum class EAnimLayerType : uint8 {
	EAnimLayer_Char = 0,
	EAnimLayer_Avatar = 10,
	EAnimLayer_AvatarAdditive = 11,
	EAnimLayer_AvatarSpecialMove = 12,
	EAnimLayer_Weapon = 20,
	EAnimLayer_WeaponAdditive = 21,
	EAnimLayer_WeaponAdditive2 = 22,
	EAnimLayer_WeaponDIYAvatar = 23,
	EAnimLayer_WeaponDIYAvatarAdditive = 24,
	EAnimLayer_Skill = 50,
	EAnimLayer_SkillAdditive = 51,
	EAnimLayer_Skill2 = 52,
	EAnimLayer_Max = 53
};

// Object Name: Enum Basic.EBattleItemUseReason
enum class EBattleItemUseReason : uint8 {
	Manually = 0,
	Associated = 1,
	AutoEquipAndDrop = 2,
	Swapped = 3,
	Initial = 4,
	EquipAndRecovery = 5,
	SwappedWithPackageWeapon = 6,
	EquipAndRecoveryToSafetyBox = 7,
	SkillUse = 8,
	EBattleItemUseReason_MAX = 9
};

// Object Name: Enum Basic.EItemStoreArea
enum class EItemStoreArea : uint8 {
	InBag = 0,
	InSafetyBox = 1,
	EItemStoreArea_MAX = 2
};

// Object Name: Enum Basic.EBattleItemDisuseReason
enum class EBattleItemDisuseReason : uint8 {
	Manually = 0,
	Associated = 1,
	Excluded = 2,
	Swapped = 3,
	Dropped = 4,
	Force = 5,
	Replace = 6,
	VehicleGroup = 7,
	PutBack = 8,
	PutIntoSafetyBox = 9,
	ReplacedAndPutBack = 10,
	EBattleItemDisuseReason_MAX = 11
};

// Object Name: Enum Basic.EBattleItemPickupReason
enum class EBattleItemPickupReason : uint8 {
	Manually = 0,
	Associated = 1,
	AutoPickup = 2,
	Initial = 3,
	ForceIntoBackpack = 4,
	AutoPickupAttachment = 5,
	SplitStack = 6,
	StorageBoxToBag = 7,
	FromStore = 8,
	EBattleItemPickupReason_MAX = 9
};

// Object Name: Enum Basic.EAttrModifyRecordType
enum class EAttrModifyRecordType : int32 {
	Record_None = 0,
	SetValue_Respone = 100,
	SetValue_OnRepModSim = 101,
	SetValue_CaculateAttr1 = 111,
	SetValue_CaculateAttr2 = 112,
	SetValue_ClampAttr = 113,
	SetValue_InterfaceSet = 121,
	SetValue_Lua = 131,
	Remove_DisableAttr = 200,
	Remove_RemoveDynamic = 201,
	Remove_OnRepDynamic = 202,
	Modify_EnableAttrIndex = 301,
	Modify_AddDynamic = 302,
	EAttrModifyRecordType_MAX = 303
};

// Object Name: Enum Basic.EAttrModifyChannel
enum class EAttrModifyChannel : uint8 {
	SimulatedProxy = 1,
	AutonomousProxy = 2,
	Authority = 3,
	AllChannel = 10,
	EAttrModifyChannel_MAX = 11
};

// Object Name: Enum Basic.EBattleItemClientPickupType
enum class EBattleItemClientPickupType : uint8 {
	Defalut = 0,
	ForceIntoBackpack = 1,
	PickupIntoSafetyBox = 2,
	EBattleItemClientPickupType_MAX = 3
};

// Object Name: Enum Basic.EColdModeItemType
enum class EColdModeItemType : uint8 {
	firewood = 0,
	meat = 1,
	EColdModeItemType_MAX = 2
};

// Object Name: Enum Basic.EItemAttrs
enum class EItemAttrs : uint8 {
	ItemAttr_CannotManualDrop = 0,
	ItemAttr_RespawnNotDrop = 1,
	ItemAttr_TransformNotDrop = 2,
	ItemAttr_NotAddInTombBox = 3,
	ItemAttr_CanCarryInBattle = 4,
	ItemAttr_CannotMoveToVehicleBackpack = 5,
	ItemAttr_MAX = 6
};

// Object Name: Enum Basic.EBattleItemPickupRule
enum class EBattleItemPickupRule : uint8 {
	All = 0,
	Self = 1,
	Team = 2,
	Group = 3,
	AllCanSeeSelfCanPickUp = 4,
	None = 99,
	EBattleItemPickupRule_MAX = 100
};

// Object Name: Enum Basic.EBattleItemEquiptType
enum class EBattleItemEquiptType : int32 {
	Bag = 501,
	Helmet = 502,
	Armor = 503,
	EBattleItemEquiptType_MAX = 504
};

// Object Name: Enum Basic.EStackModifyValueType
enum class EStackModifyValueType : uint8 {
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Vector2D = 6,
	Vector = 7,
	Vector4 = 8,
	IntPoint = 9,
	IntVector = 10,
	Rotator = 11,
	Quat = 12,
	Transform = 13,
	LinearColor = 14,
	Color = 15,
	Name = 16,
	String = 17,
	Struct = 18,
	EStackModifyValueType_MAX = 19
};

// Object Name: Enum Basic.EItemAssociationType
enum class EItemAssociationType : uint8 {
	None = 0,
	Parent = 1,
	ChipSlot1 = 2,
	ChipSlot2 = 3,
	ChipSlot3 = 4,
	AssociationName = 5,
	Pendant = 6,
	Weapon_Durability_Backpack = 7,
	EItemAssociationType_MAX = 8
};

// Object Name: Enum Basic.ESkillPropSubType
enum class ESkillPropSubType : int32 {
	ESkillPropSubType_None = 1200,
	ESkillPropSubType_1202 = 1201,
	ESkillPropSubType_MAX = 1202
};

// Object Name: Enum Basic.EBuffConditionFalseExecutePolicy
enum class EBuffConditionFalseExecutePolicy : uint8 {
	None = 0,
	EndAction = 2,
	EBuffConditionFalseExecutePolicy_MAX = 3
};

// Object Name: Enum Basic.EBuffSharedType
enum class EBuffSharedType : uint8 {
	None = 0,
	Target = 1,
	Boolean = 2,
	UInt8 = 3,
	Float = 4,
	Int32 = 5,
	Vector = 6,
	Rotator = 7,
	Name = 8,
	String = 9,
	EBuffSharedType_MAX = 10
};

// Object Name: Enum Basic.EBuffConditionEvalMode
enum class EBuffConditionEvalMode : uint8 {
	EveryTime = 0,
	OnChanged = 1,
	EBuffConditionEvalMode_MAX = 2
};

// Object Name: Enum Basic.EDeviceLevel
enum class EDeviceLevel : uint8 {
	DeviceLevel_Low = 0,
	DeviceLevel_Middle = 1,
	DeviceLevel_Hight = 2,
	DeviceLevel_MAX = 3
};

// Object Name: Enum Basic.EBuffEnabledRole
enum class EBuffEnabledRole : uint8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_Client = 4,
	Role_AutonomousAuthority = 5,
	Role_AuthoritySimulated = 6,
	EBuffEnabledRole_MAX = 7
};

// Object Name: Enum Basic.EBuffClientSyncType
enum class EBuffClientSyncType : uint8 {
	None = 0,
	All = 1,
	Autonomous = 2,
	EBuffClientSyncType_MAX = 3
};

// Object Name: Enum Basic.EBuffConditionAndOr
enum class EBuffConditionAndOr : uint8 {
	And = 0,
	Or = 1,
	EBuffConditionAndOr_MAX = 2
};

// Object Name: Enum Basic.EBuffConditionExecuteTimeType
enum class EBuffConditionExecuteTimeType : uint8 {
	FirstTime = 0,
	EveryTime = 1,
	EBuffConditionExecuteTimeType_MAX = 2
};

// Object Name: Enum Basic.EBuffConditionFalseExecuteTypeNew
enum class EBuffConditionFalseExecuteTypeNew : uint8 {
	None = 0,
	EndAction = 2,
	EBuffConditionFalseExecuteTypeNew_MAX = 3
};

// Object Name: Enum Basic.EBuffConditionFalseExecuteType
enum class EBuffConditionFalseExecuteType : uint8 {
	None = 0,
	Disabled = 1,
	DisabledEnd = 2,
	EBuffConditionFalseExecuteType_MAX = 3
};

// Object Name: Enum Basic.EBuffConditionTrueExecuteType
enum class EBuffConditionTrueExecuteType : uint8 {
	Enabled = 0,
	ReAction = 1,
	EBuffConditionTrueExecuteType_MAX = 2
};

// Object Name: Enum Basic.EBuffConditionInitializeType
enum class EBuffConditionInitializeType : uint8 {
	None = 0,
	Disabled = 1,
	DisabledWhenFalse = 2,
	EBuffConditionInitializeType_MAX = 3
};

// Object Name: Enum Basic.EBuffTargetSubType
enum class EBuffTargetSubType : uint8 {
	EBuffTargetSubType_Other = 0,
	EBuffTargetSubType_Rifle = 1,
	EBuffTargetSubType_SingleShotSniper = 2,
	EBuffTargetSubType_BurstShotSniper = 3,
	EBuffTargetSubType_Submachine = 4,
	EBuffTargetSubType_ShotGun = 5,
	EBuffTargetSubType_MachineGun = 6,
	EBuffTargetSubType_Pistol = 7,
	EBuffTargetSubType_Melee = 8,
	EBuffTargetSubType_Crossbow = 9,
	EBuffTargetSubType_All = 32,
	EBuffTargetSubType_MAX = 33
};

// Object Name: Enum Basic.EBuffShowInUIType
enum class EBuffShowInUIType : uint8 {
	None = 0,
	DurationTime = 1,
	CDTime = 2,
	EBuffShowInUIType_MAX = 3
};

// Object Name: Enum Basic.EBuffTargetSocketType
enum class EBuffTargetSocketType : uint8 {
	Character = 0,
	Weapon = 1,
	World = 2,
	Vehicle = 3,
	EBuffTargetSocketType_MAX = 4
};

// Object Name: Enum Basic.EBuffTargetType
enum class EBuffTargetType : uint8 {
	Character = 0,
	Weapon = 1,
	Player = 2,
	Monster = 3,
	MonsterPlayer = 4,
	Vehicle = 5,
	AllWeapons = 6,
	EBuffTargetType_MAX = 7
};

// Object Name: Enum Basic.EBuffReActionType
enum class EBuffReActionType : uint8 {
	None = 0,
	OverWOrAddL = 1,
	ResetTime = 2,
	ResetLayer = 3,
	LayerChange = 4,
	InitWeapon = 5,
	EBuffReActionType_MAX = 6
};

// Object Name: Enum Basic.EBuffRefreshType
enum class EBuffRefreshType : uint8 {
	None = 0,
	ResetTime = 1,
	ResetTimeOnOverFlow = 2,
	ResetLayerOnOverFlow = 3,
	ResetAllOnOverFlow = 4,
	AppendTime = 5,
	EBuffRefreshType_MAX = 6
};

// Object Name: Enum Basic.EMultiSkillHandleType
enum class EMultiSkillHandleType : uint8 {
	UseNewer = 0,
	UseOlder = 1,
	StackEffect = 2,
	RefreshOlder = 4,
	EMultiSkillHandleType_MAX = 5
};

// Object Name: Enum Basic.EMultiCauserHandleType
enum class EMultiCauserHandleType : uint8 {
	UseNewer = 0,
	UseOlder = 1,
	StackEffect = 2,
	RefreshOlder = 4,
	EMultiCauserHandleType_MAX = 5
};

// Object Name: Enum Basic.EBuffTargetSourceType
enum class EBuffTargetSourceType : uint8 {
	Self = 0,
	PrevActionSet = 1,
	AreaOfTeammate = 2,
	AreaOfMonster = 3,
	Causer = 4,
	SelfAndAreaOfTeammate = 5,
	EBuffTargetSourceType_MAX = 6
};

// Object Name: Enum Basic.ESTExtraNetPriorityIssueID
enum class ESTExtraNetPriorityIssueID : uint8 {
	kNone = 0,
	kMove = 1,
	kStateChange = 2,
	ESTExtraNetPriorityIssueID_MAX = 3
};

// Object Name: Enum Basic.ESTExtraNetPriorityFlags
enum class ESTExtraNetPriorityFlags : uint8 {
	kPriority1 = 0,
	kPriority2 = 1,
	kPriority3 = 2,
	kPriority4 = 3,
	kMaxNum = 4,
	kPriorityNormal = 255,
	ESTExtraNetPriorityFlags_MAX = 256
};

// Object Name: Enum Basic.ETickOptimizationAnimUROMode
enum class ETickOptimizationAnimUROMode : uint8 {
	ScreenSize = 0,
	LOD = 1,
	MinLOD = 2,
	ETickOptimizationAnimUROMode_MAX = 3
};

// Object Name: Enum Basic.ETickOptimizationDistanceMode
enum class ETickOptimizationDistanceMode : uint8 {
	None = 0,
	Sphere = 1,
	ETickOptimizationDistanceMode_MAX = 2
};

// Object Name: Enum Basic.ELostConnectionToDSReason
enum class ELostConnectionToDSReason : uint8 {
	LostConnectionToDSReason_None = 0,
	LostConnectionToDSReason_TravelFailure_Default = 1,
	LostConnectionToDSReason_LocalConnectionLost = 2,
	LostConnectionToDSReason_LocalDetectedTimeout = 3,
	LostConnectionToDSReason_NMTFailure_Default = 4,
	LostConnectionToDSReason_MAX = 5
};

// Object Name: Enum Basic.ECommonCompare
enum class ECommonCompare : uint8 {
	Greater = 0,
	Equal = 1,
	Less = 2,
	GreaterOrEqual = 3,
	LessOrEqual = 4,
	ECommonCompare_MAX = 5
};

// Object Name: Enum Basic.EAngleRotationDirectionType
enum class EAngleRotationDirectionType : uint8 {
	EAutoMinAngle = 0,
	ERight = 1,
	ELeft = 2,
	EAngleRotationDirectionType_MAX = 3
};

