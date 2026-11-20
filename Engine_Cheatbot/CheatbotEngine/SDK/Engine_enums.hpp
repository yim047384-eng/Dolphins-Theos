#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Object Name: Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Object Name: Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Object Name: Enum Engine.ETriggerAction
enum class ETriggerAction : uint8 {
	None = 0,
	Enter = 1,
	Exit = 2,
	ETriggerAction_MAX = 3
};

// Object Name: Enum Engine.EPhysicsContactState
enum class EPhysicsContactState : uint8 {
	None = 0,
	Found = 1,
	Persist = 2,
	Lost = 3,
	EPhysicsContactState_MAX = 4
};

// Object Name: Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Object Name: Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Object Name: Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Object Name: Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Object Name: Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORN_MAX = 5,
	ENetDormancy_MAX = 6
};

// Object Name: Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Object Name: Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Object Name: Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Object Name: Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Object Name: Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Object Name: Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Object Name: Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Object Name: Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_ViewTranslated = 4,
	RTS_MAX = 5
};

// Object Name: Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

// Object Name: Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Object Name: Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8 {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Object Name: Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	TriggerOnly = 4,
	QueryAndTrigger = 5,
	ECollisionEnabled_MAX = 6
};

// Object Name: Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Object Name: Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Object Name: Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Object Name: Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Object Name: Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10
};

// Object Name: Enum Engine.EDrawDyeingMode
enum class EDrawDyeingMode : uint8 {
	EDDM_STENCIL = 0,
	EDDM_WHOLE = 1,
	EDDM_OCCLUDED = 2,
	EDDM_MAX = 3
};

// Object Name: Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Object Name: Enum Engine.ERenderShadingRate
enum class ERenderShadingRate : uint8 {
	RSR_1x1 = 0,
	RSR_2x1 = 1,
	RSR_1x2 = 2,
	RSR_2x2 = 3,
	RSR_4x2 = 4,
	RSR_2x4 = 5,
	RSR_4x4 = 6,
	RSR_MAX = 7
};

// Object Name: Enum Engine.EPrimitiveShadingStrategy
enum class EPrimitiveShadingStrategy : uint8 {
	PSS_AutoShading = 0,
	PSS_FixShading = 1,
	PSS_FOVAdaptiveShading = 2,
	PSS_CollisionAdaptiveShading = 3,
	PSS_MAX = 4
};

// Object Name: Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Object Name: Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Object Name: Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Object Name: Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Object Name: Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Object Name: Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Object Name: Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Object Name: Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Object Name: Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Object Name: Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Object Name: Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Object Name: Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Object Name: Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Object Name: Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Object Name: Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Object Name: Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Object Name: Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Object Name: Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Object Name: Enum Engine.EDPCompareType
enum class EDPCompareType : uint8 {
	DP_Equal = 0,
	DP_Less = 1,
	DP_LessEqual = 2,
	DP_Greater = 3,
	DP_GreaterEqual = 4,
	DP_NotEqual = 5,
	DP_Regex = 6,
	DP_CMP_MAX = 7,
	DP_MAX = 8
};

// Object Name: Enum Engine.EDPSourceType
enum class EDPSourceType : uint8 {
	DP_PreviousRegexMatch = 0,
	DP_ProfileName = 1,
	DP_DeviceType = 2,
	DP_GpuFamily = 3,
	DP_GlVersion = 4,
	DP_OsVersion = 5,
	DP_DeviceMake = 6,
	DP_DeviceModel = 7,
	DP_VulkanVersion = 8,
	DP_MemorySizeInGB = 9,
	DP_QualityLevel = 10,
	DP_MaxQualityLevel = 11,
	DP_TCQualityGrade = 12,
	DP_ScreenPhysicSize = 13,
	DP_MainBroadInfo = 14,
	DP_GamePlayFlag = 15,
	DP_HDRSupport = 16,
	DP_SocName = 17,
	DP_SRC_MAX = 18
};

// Object Name: Enum Engine.EDrawStyleMode
enum class EDrawStyleMode : uint8 {
	DrS_None = 0,
	DrS_Dissolve = 1,
	DrS_Decal = 2,
	DrS_MAX = 3
};

// Object Name: Enum Engine.EMeshVisibleLayer
enum class EMeshVisibleLayer : uint8 {
	VisibleLayer_NotVisible = 0,
	VisibleLayer_Default = 1,
	VisibleLayer_3 = 2,
	VisibleLayer_4 = 3,
	VisibleLayer_5 = 4,
	VisibleLayer_6 = 5,
	VisibleLayer_7 = 6,
	VisibleLayer_8 = 7,
	VisibleLayer_Visible = 255,
	VisibleLayer_MAX = 256
};

// Object Name: Enum Engine.EMeshCastShadowLayer
enum class EMeshCastShadowLayer : uint8 {
	CastShadowLayer_NotCastShadow = 0,
	CastShadowLayer_Default = 1,
	CastShadowLayer_3 = 2,
	CastShadowLayer_4 = 3,
	CastShadowLayer_5 = 4,
	CastShadowLayer_6 = 5,
	CastShadowLayer_7 = 6,
	CastShadowLayer_8 = 7,
	CastShadowLayer_CastShadow = 255,
	CastShadowLayer_MAX = 256
};

// Object Name: Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3
};

// Object Name: Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

// Object Name: Enum Engine.ETravelType
enum class ETravelType : uint8 {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Object Name: Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Object Name: Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Object Name: Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Object Name: Enum Engine.EShapeUsage
enum class EShapeUsage : uint8 {
	None = 0,
	Usage0 = 1,
	Usage1 = 2,
	Usage2 = 3,
	Usage3 = 4,
	Usage4 = 5,
	Usage5 = 6,
	NumUsages = 7,
	EShapeUsage_MAX = 8
};

// Object Name: Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Object Name: Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Object Name: Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_MAX = 2
};

// Object Name: Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Object Name: Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Object Name: Enum Engine.EClientSerializeStatus
enum class EClientSerializeStatus : uint8 {
	CSS_ArError = 0,
	CSS_AtEndClose = 1,
	CSS_AtEndNULL = 2,
	CSS_AtEndOnly = 3,
	CSS_ActorNullSuccess = 4,
	CSS_ActorNullFailed = 5,
	CSS_ActorNullArchetypeNULL = 6,
	CSS_ActorSuccess = 7,
	CSS_NotDynamicActorNULL = 8,
	CSS_UnKnown = 9,
	CSS_MAX = 10
};

// Object Name: Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_MAX = 8
};

// Object Name: Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Object Name: Enum Engine.ERegionSizeIndex
enum class ERegionSizeIndex : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	SuperLarge = 3,
	Max = 4
};

// Object Name: Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Object Name: Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Object Name: Enum Engine.EQueuedSpawnStage
enum class EQueuedSpawnStage : uint8 {
	PreCheck = 0,
	BeginSpawn = 1,
	ExecuteConstruction = 2,
	PostActorConstruction = 3,
	FinishSpawn = 4,
	Done = 5,
	EQueuedSpawnStage_MAX = 6
};

// Object Name: Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Object Name: Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Object Name: Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Object Name: Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Object Name: Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Object Name: Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Object Name: Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Object Name: Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Object Name: Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Object Name: Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Object Name: Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Object Name: Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Object Name: Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Object Name: Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Object Name: Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Object Name: Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Object Name: Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Object Name: Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Object Name: Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Object Name: Enum Engine.ECopyType
enum class ECopyType : uint8 {
	MemCopy = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	ECopyType_MAX = 4
};

// Object Name: Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Object Name: Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Object Name: Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Object Name: Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Object Name: Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_ACLDefault = 3,
	AKF_ACLCustom = 4,
	AKF_ACLSafetyFallback = 5,
	AKF_MAX = 6
};

// Object Name: Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Object Name: Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	TLT_StandardBlend = 0,
	TLT_Custom = 1,
	TLT_Inertialization = 2,
	TLT_MAX = 3
};

// Object Name: Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Object Name: Enum Engine.EAnimNotifyLimit
enum class EAnimNotifyLimit : uint8 {
	EANL_None = 0,
	EANL_LocalControl = 1,
	EANL_NonLocalControl = 2,
	EANL_LocalControlOrView = 3,
	EANL_NonLocalControlOrView = 4,
	EANL_MAX = 5
};

// Object Name: Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Object Name: Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Object Name: Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	MaxWeight = 0,
	NormalizeByWeight = 1,
	BlendByWeight = 2,
	ECurveBlendOption_MAX = 3
};

// Object Name: Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Object Name: Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Object Name: Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Object Name: Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Object Name: Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Object Name: Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Object Name: Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	AlwaysCook = 3,
	EPrimaryAssetCookRule_MAX = 4
};

// Object Name: Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Object Name: Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Object Name: Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Object Name: Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_AfterUI = 4,
	BL_MAX = 5
};

// Object Name: Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Object Name: Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Object Name: Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Object Name: Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Object Name: Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Object Name: Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Object Name: Enum Engine.EDynamicActorScene
enum class EDynamicActorScene : uint8 {
	Default = 0,
	UseSyncScene = 1,
	UseAsyncScene = 2,
	EDynamicActorScene_MAX = 3
};

// Object Name: Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8 {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Object Name: Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Object Name: Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Object Name: Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Object Name: Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Object Name: Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Object Name: Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Object Name: Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Object Name: Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Object Name: Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8 {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Object Name: Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Object Name: Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Object Name: Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Object Name: Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Object Name: Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Object Name: Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Object Name: Enum Engine.EDSPVSConfigCategory
enum class EDSPVSConfigCategory : uint8 {
	CTY_LeastAggressive = 0,
	CTY_ModeratelyAggressive = 1,
	CTY_MostAggressive = 2,
	CTY_Max = 3
};

// Object Name: Enum Engine.EDSPVSCategory
enum class EDSPVSCategory : uint8 {
	CATEGORY_Loose = 0,
	CATEGORY_Strict = 1,
	CATEGORY_Null = 2,
	CATEGORY_Max = 3
};

// Object Name: Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Object Name: Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Object Name: Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Object Name: Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Object Name: Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Object Name: Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Object Name: Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Object Name: Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Object Name: Enum Engine.EConsoleType
enum class EConsoleType : uint8 {
	CONSOLE_Any = 0,
	CONSOLE_Mobile = 1,
	CONSOLE_MAX = 2
};

// Object Name: Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	TT_None = 0,
	TT_Paused = 1,
	TT_Loading = 2,
	TT_Saving = 3,
	TT_Connecting = 4,
	TT_Precaching = 5,
	TT_WaitingToConnect = 6,
	TT_MAX = 7
};

// Object Name: Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Object Name: Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PhysicMaterialColoration = 27,
	VMI_Max = 28,
	VMI_Unknown = 255
};

// Object Name: Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	EDemoPlayFailure_MAX = 4
};

// Object Name: Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Object Name: Enum Engine.ECustomTickIntervel
enum class ECustomTickIntervel : uint8 {
	Intervel_60FPS = 0,
	Intervel_30FPS = 1,
	Intervel_15FPS = 2,
	Intervel_10FPS = 3,
	Intervel_5FPS = 4,
	Intervel_1FPS = 5,
	Intervel_MAX = 6
};

// Object Name: Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	EMouseLockMode_MAX = 3
};

// Object Name: Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Object Name: Enum Engine.EDepthTestMethod
enum class EDepthTestMethod : uint8 {
	EDTM_DepthNearOrEqual = 0,
	EDTM_DepthNear = 1,
	EDTM_DepthFartherOrEqual = 2,
	EDTM_DepthFarther = 3,
	EDTM_Never = 4,
	EDTM_Equal = 5,
	EDTM_NotEqual = 6,
	EDTM_MAX = 7
};

// Object Name: Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Object Name: Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Object Name: Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8 {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Object Name: Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Object Name: Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Object Name: Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Object Name: Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Object Name: Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Object Name: Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8 {
	ICO_ConsumeAll = 0,
	ICO_ConsumeBoundKeys = 1,
	ICO_ConsumeNone = 2,
	ICO_MAX = 3
};

// Object Name: Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Object Name: Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8 {
	PST_Sync = 0,
	PST_Cloth = 1,
	PST_Async = 2,
	PST_MAX = 3
};

// Object Name: Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Object Name: Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8 {
	TSA_X_Axis = 0,
	TSA_Y_Axis = 1,
	TSA_Z_Axis = 2,
	TSA_MAX = 3
};

// Object Name: Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8 {
	TRISORT_None = 0,
	TRISORT_CenterRadialDistance = 1,
	TRISORT_Random = 2,
	TRISORT_MergeContiguous = 3,
	TRISORT_Custom = 4,
	TRISORT_CustomLeftRight = 5,
	TRISORT_MAX = 6
};

// Object Name: Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Object Name: Enum Engine.EMaterialTexturePrecision
enum class EMaterialTexturePrecision : uint8 {
	PRECISIONTYPE_Float = 0,
	PRECISIONTYPE_Half = 1,
	PRECISIONTYPE_Fixed = 2,
	PRECISIONTYPE_MAX = 3
};

// Object Name: Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_External = 8,
	SAMPLERTYPE_MAX = 9
};

// Object Name: Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3
};

// Object Name: Enum Engine.ESimpleVertexNormalSituation
enum class ESimpleVertexNormalSituation : uint8 {
	SVNS_None = 0,
	SVNS_UsedInFullyRough = 1,
	SVNS_UsedInNonMetalAndFullyRough = 2,
	SVNS_Always = 3,
	SVNS_MAX = 4
};

// Object Name: Enum Engine.EMaterialShadowOverride
enum class EMaterialShadowOverride : uint8 {
	MSO_Default = 0,
	MSO_NoShadow = 1,
	MSO_NoFilter = 2,
	MSO_PCF1x1 = 3,
	MSO_MAX = 4
};

// Object Name: Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_IdeaLit = 10,
	MSM_IdeaLitS3 = 11,
	MSM_IdeaLitS2 = 12,
	MSM_IdeaLitS1 = 13,
	MSM_IdeaLitS1D = 14,
	MSM_Water = 15,
	MSM_Toon = 16,
	MSM_MAX = 17
};

// Object Name: Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Object Name: Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Object Name: Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Object Name: Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_NewComposite = 3,
	SCCM_MAX = 4
};

// Object Name: Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FastColorLDR = 8,
	SCS_FinalColorHDR = 9,
	SCS_MAX = 10
};

// Object Name: Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Object Name: Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2
};

// Object Name: Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Object Name: Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Object Name: Enum Engine.EOITBlendMode
enum class EOITBlendMode : uint8 {
	OIT_None = 0,
	OIT_McGuire = 1,
	OIT_McGuireWithDepth = 2,
	OIT_MAX = 3
};

// Object Name: Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_MAX = 6
};

// Object Name: Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Object Name: Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Object Name: Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8 {
	METRICS_VERTS = 0,
	METRICS_TRIS = 1,
	METRICS_SECTIONS = 2,
	METRICS_MAX = 3
};

// Object Name: Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Object Name: Enum Engine.EFeatureSetType
enum class EFeatureSetType : uint8 {
	DedicateServer = 0,
	Autonomous = 1,
	Simulate_Team = 2,
	Simulate_NonTeam = 3,
	DedicateServer_AI = 4,
	DedicateServer_MLAI = 5,
	Simulate_AI = 6,
	Standalone = 7,
	Standalone_AI = 8,
	Max = 9
};

// Object Name: Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Object Name: Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Object Name: Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Object Name: Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Object Name: Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Object Name: Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Object Name: Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Object Name: Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Object Name: Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Object Name: Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Object Name: Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Object Name: Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Object Name: Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Object Name: Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Object Name: Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Object Name: Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Object Name: Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Object Name: Enum Engine.ELevelDisableReason
enum class ELevelDisableReason : uint8 {
	GameLogic = 0,
	Performance = 1,
	ELevelDisableReason_MAX = 2
};

// Object Name: Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Object Name: Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Object Name: Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX = 12
};

// Object Name: Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Object Name: Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Object Name: Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Object Name: Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4
};

// Object Name: Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Object Name: Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_StaticBool = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_MAX = 10
};

// Object Name: Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Object Name: Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Object Name: Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModel = 22,
	PPI_AmbientOcclusion = 23,
	PPI_CustomStencil = 24,
	PPI_StoredBaseColor = 25,
	PPI_StoredSpecular = 26,
	PPI_MAX = 27
};

// Object Name: Enum Engine.EMaterialExpressionScreenPositionMapping
enum class EMaterialExpressionScreenPositionMapping : uint8 {
	MESP_SceneTextureUV = 0,
	MESP_ViewportUV = 1,
	MESP_Max = 2
};

// Object Name: Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Object Name: Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Object Name: Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Object Name: Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Object Name: Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Object Name: Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Object Name: Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Object Name: Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_BigWorldTranslated = 6,
	TRANSFORMPOSSOURCE_MAX = 7
};

// Object Name: Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Object Name: Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_MAX = 7
};

// Object Name: Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Object Name: Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Object Name: Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_InstancedSplineMeshes = 8,
	MATUSAGE_ColorInstancedStaticMeshes = 9,
	MATUSAGE_Clothing = 10,
	MATUSAGE_NiagaraSprites = 11,
	MATUSAGE_NiagaraRibbons = 12,
	MATUSAGE_NiagaraMeshParticles = 13,
	MATUSAGE_IBL = 14,
	MATUSAGE_GFur = 15,
	MATUSAGE_VertexPointLight = 16,
	MATUSAGE_DestructibleHide = 17,
	MATUSAGE_DestructibleDetach = 18,
	MATUSAGE_DestructibleSlide = 19,
	MATUSAGE_HeterogeneousVolumes = 20,
	MATUSAGE_MAX = 21
};

// Object Name: Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Object Name: Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8 {
	SG_MATERIAL_CHANNEL_AMBIENT = 0,
	SG_MATERIAL_CHANNEL_DIFFUSE = 1,
	SG_MATERIAL_CHANNEL_SPECULAR = 2,
	SG_MATERIAL_CHANNEL_OPACITY = 3,
	SG_MATERIAL_CHANNEL_EMISSIVE = 4,
	SG_MATERIAL_CHANNEL_NORMALS = 5,
	SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	SG_MATERIAL_CHANNEL_BASECOLOR = 7,
	SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
	SG_MATERIAL_CHANNEL_METALLIC = 9,
	SG_MATERIAL_CHANNEL_AO = 10,
	SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	SG_MATERIAL_CHANNEL_MAX = 13
};

// Object Name: Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8 {
	TextureResolution_65 = 0,
	TextureResolution_129 = 1,
	TextureResolution_257 = 2,
	TextureResolution_513 = 3,
	TextureResolution_1025 = 4,
	TextureResolution_2049 = 5,
	TextureResolution_4097 = 6,
	TextureResolution_8193 = 7,
	TextureResolution_MAX = 8
};

// Object Name: Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8 {
	RGBA = 0,
	RGB = 1,
	L = 2,
	ESimplygonColorChannels_MAX = 3
};

// Object Name: Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8 {
	Poor = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	ESimplygonTextureSamplingQuality_MAX = 4
};

// Object Name: Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8 {
	None = 0,
	Color = 1,
	Normals = 2,
	Opacity = 3,
	ESimplygonCasterType_MAX = 4
};

// Object Name: Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8 {
	None = 0,
	VerySmall = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	ESimplygonTextureStrech_MAX = 6
};

// Object Name: Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8 {
	Off = 0,
	BakeTexture = 1,
	BakeVertexColor = 2,
	Replace = 3,
	EMaterialLODType_MAX = 4
};

// Object Name: Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8 {
	Reduction = 0,
	Remeshing = 1,
	ESimplygonLODType_MAX = 2
};

// Object Name: Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8 {
	TrianglePercentage = 0,
	OnScreenSize = 1,
	MaxDeviation = 2,
	EOptimizationMetric_MAX = 3
};

// Object Name: Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8 {
	Poor = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EMaterialProxySmaplingQuality_MAX = 4
};

// Object Name: Enum Engine.EUVStrech
enum class EUVStrech : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	VeryLarge = 3,
	EUVStrech_MAX = 4
};

// Object Name: Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Object Name: Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Object Name: Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_MAX = 6
};

// Object Name: Enum Engine.EPlaneDir
enum class EPlaneDir : uint8 {
	Top = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	EPlaneDir_MAX = 4
};

// Object Name: Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Object Name: Enum Engine.EUVStrategy
enum class EUVStrategy : uint8 {
	Default = 0,
	Conservative = 1,
	Aggressive = 2,
	MultiUV = 3,
	EUVStrategy_MAX = 4
};

// Object Name: Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Object Name: Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Object Name: Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Object Name: Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Object Name: Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8 {
	TextureSize = 0,
	SurfaceArea = 1,
	PixelDensity = 2,
	UVSize = 3,
	EChartAggregationMode_MAX = 4
};

// Object Name: Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Object Name: Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Object Name: Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Object Name: Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Object Name: Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Object Name: Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5
};

// Object Name: Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Object Name: Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Object Name: Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Object Name: Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Object Name: Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object Name: Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Object Name: Enum Engine.EObjectPoolFenceType
enum class EObjectPoolFenceType : uint8 {
	Spawning = 0,
	Ticking = 1,
	Recycling = 2,
	Max = 3
};

// Object Name: Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Object Name: Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Object Name: Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Object Name: Enum Engine.EParticleEngineVectorParamTags
enum class EParticleEngineVectorParamTags : uint8 {
	EngineVector_Position = 0,
	EngineVector_Velocity = 1,
	EngineVector_XAxis = 2,
	EngineVector_YAxis = 3,
	EngineVector_ZAxis = 4,
	EngineVector_Scale = 5,
	EngineVector_MAX = 6
};

// Object Name: Enum Engine.EParticleEngineFloatParamTags
enum class EParticleEngineFloatParamTags : uint8 {
	EngineFloat_VelocityMagnitude = 0,
	EngineFloat_DeltaTime = 1,
	EngineFloat_Time = 2,
	EngineFloat_RealTime = 3,
	EngineFloat_TimeSinceRendered = 4,
	EngineFloat_QualityLevel = 5,
	EngineFloat_MAX = 6
};

// Object Name: Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Object Name: Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Object Name: Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Object Name: Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Object Name: Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Object Name: Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Object Name: Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Object Name: Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Object Name: Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Object Name: Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Object Name: Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Object Name: Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Object Name: Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Object Name: Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Object Name: Enum Engine.EPrimitiveVelocityDirection
enum class EPrimitiveVelocityDirection : uint8 {
	PVD_None = 0,
	PVD_Outward = 1,
	PVD_Inward = 2,
	PVD_MAX = 3
};

// Object Name: Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Object Name: Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Object Name: Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Object Name: Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Object Name: Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Object Name: Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Object Name: Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Object Name: Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Object Name: Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Object Name: Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Object Name: Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Object Name: Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Object Name: Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Object Name: Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Object Name: Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Object Name: Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Object Name: Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Object Name: Enum Engine.ParticleSimulatedProxyTickMethod
enum class ParticleSimulatedProxyTickMethod : uint8 {
	Tick = 0,
	NoTickLowDevices = 1,
	NoTickMiddleDevices = 2,
	NoTickHighDevices = 3,
	ParticleSimulatedProxyTickMethod_MAX = 4
};

// Object Name: Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Object Name: Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Object Name: Enum Engine.EParticleCurveParamType
enum class EParticleCurveParamType : uint8 {
	PCPT_None = 0,
	PCPT_Float = 1,
	PCPT_Vector = 2,
	PCPT_LinearColor = 3,
	PCPT_Float_MT = 4,
	PCPT_Vector_MT = 5,
	PCPT_LinearColor_MT = 6,
	PCPT_MAX = 7
};

// Object Name: Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Object Name: Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Object Name: Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Object Name: Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Object Name: Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Object Name: Enum Engine.ERecastWithoutLayerCachePartitioning
enum class ERecastWithoutLayerCachePartitioning : uint8 {
	Watershed = 0,
	Monotone = 1,
	LayerRegion = 2,
	ERecastWithoutLayerCachePartitioning_MAX = 3
};

// Object Name: Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// Object Name: Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Object Name: Enum Engine.EAutoDormancyType
enum class EAutoDormancyType : uint8 {
	None = 0,
	ActorTickClient = 2,
	ComponentsTickClient = 4,
	ActorTickServer = 8,
	ComponentsTickServer = 16,
	Net = 32,
	EAutoDormancyType_MAX = 33
};

// Object Name: Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_MAX = 2
};

// Object Name: Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Object Name: Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Object Name: Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	EMobileMSAASampleCount_MAX = 9
};

// Object Name: Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Object Name: Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Object Name: Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Object Name: Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Object Name: Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Object Name: Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Object Name: Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Object Name: Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Object Name: Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Object Name: Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Object Name: Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Object Name: Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Object Name: Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Object Name: Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	ERootMotionSourceSettingsFlags_MAX = 3
};

// Object Name: Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Object Name: Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Object Name: Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4
};

// Object Name: Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Object Name: Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Normal = 9,
	MP_WorldPositionOffset = 10,
	MP_WorldDisplacement = 11,
	MP_TessellationMultiplier = 12,
	MP_SubsurfaceColor = 13,
	MP_CustomData0 = 14,
	MP_CustomData1 = 15,
	MP_AmbientOcclusion = 16,
	MP_Refraction = 17,
	MP_CustomizedUVs0 = 18,
	MP_CustomizedUVs1 = 19,
	MP_CustomizedUVs2 = 20,
	MP_CustomizedUVs3 = 21,
	MP_CustomizedUVs4 = 22,
	MP_CustomizedUVs5 = 23,
	MP_CustomizedUVs6 = 24,
	MP_CustomizedUVs7 = 25,
	MP_PixelDepthOffset = 26,
	MP_CustomizedVertexColor = 27,
	MP_PlanarReflectionOffsetScale = 28,
	MP_MaterialAttributes = 29,
	MP_CustomOutput = 30,
	MP_MAX = 31
};

// Object Name: Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Object Name: Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8 {
	Reduction = 0,
	Proxy = 1,
	ESkeletalMeshLODType_MAX = 2
};

// Object Name: Enum Engine.ELODDropResult
enum class ELODDropResult : uint8 {
	Success = 0,
	DisabledByCVar = 1,
	InvalidIndex = 2,
	AlreadyInRequestedState = 3,
	ProtectedLOD = 4,
	NoValidLODRemaining = 5,
	CPUDataUnavailable = 6,
	NotOnGameThread = 7,
	PendingStreamingLoad = 8,
	ELODDropResult_MAX = 9
};

// Object Name: Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Object Name: Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Object Name: Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_ScreenSize = 3,
	SMOT_MAX = 4
};

// Object Name: Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Object Name: Enum Engine.ESkeletaTickMode
enum class ESkeletaTickMode : uint8 {
	TICK_ALL = 0,
	TICK_ANI_NOT_LOD = 1,
	TICK_NONE = 2,
	TICK_LOD_NOT_ANI = 3,
	TICK_MAX = 4
};

// Object Name: Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Object Name: Enum Engine.ESkeletalMeshGroupRole
enum class ESkeletalMeshGroupRole : uint8 {
	None = 0,
	Group1_Leader = 1,
	Group1_Member = 2,
	Group2_Leader = 3,
	Group2_Member = 4,
	Group3_Leader = 5,
	Group3_Member = 6,
	Group4_Leader = 7,
	Group4_Member = 8,
	Group5_Leader = 9,
	Group5_Member = 10,
	Group6_Leader = 11,
	Group6_Member = 12,
	Group7_Leader = 13,
	Group7_Member = 14,
	Group8_Leader = 15,
	Group8_Member = 16,
	Group9_Leader = 17,
	Group9_Member = 18,
	Group10_Leader = 19,
	Group10_Member = 20,
	ESkeletalMeshGroupRole_MAX = 21
};

// Object Name: Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Object Name: Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Object Name: Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	EBoneTranslationRetargetingMode_MAX = 4
};

// Object Name: Enum Engine.EGlobalUROExcludeFlags
enum class EGlobalUROExcludeFlags : uint8 {
	URO_Exclude_None = 0,
	URO_Exclude_MinURO = 1,
	URO_Exclude_Bias = 2,
	URO_Exclude_All = 3,
	URO_Exclude_MAX = 4
};

// Object Name: Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8 {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EMeshComponentUpdateFlag_MAX = 4
};

// Object Name: Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Object Name: Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Object Name: Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Object Name: Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Object Name: Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Object Name: Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Object Name: Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Object Name: Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Object Name: Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Object Name: Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};

// Object Name: Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Object Name: Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Object Name: Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Object Name: Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Object Name: Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Object Name: Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Object Name: Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Object Name: Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8 {
	Reduction = 0,
	Proxy = 1,
	EStaticMeshLODType_MAX = 2
};

// Object Name: Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Object Name: Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Object Name: Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Object Name: Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_MAX = 3
};

// Object Name: Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Object Name: Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Object Name: Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Object Name: Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Object Name: Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Object Name: Enum Engine.ETextureBasisSetting
enum class ETextureBasisSetting : uint8 {
	TCS_BasisDefault = 0,
	TCS_EnableBasisCompression = 1,
	TCS_DisableBasisCompression = 2,
	TCS_MAX = 3
};

// Object Name: Enum Engine.ETextureCrunchSetting
enum class ETextureCrunchSetting : uint8 {
	TCS_Default = 0,
	TCS_EnableCrunchCompression = 1,
	TCS_DisableCrunchCompression = 2
};

// Object Name: Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Object Name: Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_MAX = 8
};

// Object Name: Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Object Name: Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Object Name: Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Object Name: Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Object Name: Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Object Name: Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_MAX = 12
};

// Object Name: Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Object Name: Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Object Name: Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_MAX = 20
};

// Object Name: Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_TerrainAlbedo = 30,
	TEXTUREGROUP_MaskedBillboard = 31,
	TEXTUREGROUP_CharacterHD = 32,
	TEXTUREGROUP_CharacterNormalMapHD = 33,
	TEXTUREGROUP_CharacterSpecularHD = 34,
	TEXTUREGROUP_WeaponHD = 35,
	TEXTUREGROUP_WeaponNormalMapHD = 36,
	TEXTUREGROUP_WeaponSpecularHD = 37,
	TEXTUREGROUP_WorldHD = 38,
	TEXTUREGROUP_WorldNormalMapHD = 39,
	TEXTUREGROUP_WorldSpecularHD = 40,
	TEXTUREGROUP_WorldAniso = 41,
	TEXTUREGROUP_GamePOI = 42,
	TEXTUREGROUP_MAX = 43
};

// Object Name: Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_R16f = 3,
	RTF_RG16f = 4,
	RTF_RGBA16f = 5,
	RTF_R32f = 6,
	RTF_RG32f = 7,
	RTF_RGBA32f = 8,
	RTF_MAX = 9
};

// Object Name: Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Object Name: Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Object Name: Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Object Name: Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Object Name: Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Object Name: Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Object Name: Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5
};

// Object Name: Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Object Name: Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Object Name: Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Object Name: Enum Engine.EIdeaBakingLayout
enum class EIdeaBakingLayout : uint8 {
	Sun3Sky = 0,
	Sun1SkyLocal1 = 1,
	Sun3SkyLocal3 = 2,
	Sun2SkyLocal1 = 3,
	Local3Sky = 4,
	Sun1PortalSkyLocal1 = 5,
	Sun1OccLocal1 = 6,
	Sun1SkyLocal1Occ = 7,
	Sun3SkyLocal3Occ = 8,
	EIdeaBakingLayout_MAX = 9
};

// Object Name: Enum Engine.EIdeaBakingMode
enum class EIdeaBakingMode : uint8 {
	BruteForce = 0,
	TwoPass = 1,
	EIdeaBakingMode_MAX = 2
};

// Object Name: Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Object Name: Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

