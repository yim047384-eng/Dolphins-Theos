#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GenericFeatures.EGenericInputEventType
enum class EGenericInputEventType : uint8_t
{
	EGenericInputEventType__Pressed = 0,
	EGenericInputEventType__Released = 1,
	EGenericInputEventType__EGenericInputEventType_MAX = 2
};


// Enum GenericFeatures.EHasAITagStateLogic
enum class EHasAITagStateLogic : uint8_t
{
	EHasAITagStateLogic__Any       = 0,
	EHasAITagStateLogic__All       = 1,
	EHasAITagStateLogic__None      = 2,
	EHasAITagStateLogic__EHasAITagStateLogic_MAX = 3
};


// Enum GenericFeatures.EGenericHitAnimationMode
enum class EGenericHitAnimationMode : uint8_t
{
	EGenericHitAnimationMode__BlendSpace = 0,
	EGenericHitAnimationMode__Montage = 1,
	EGenericHitAnimationMode__EGenericHitAnimationMode_MAX = 2
};


// Enum GenericFeatures.EGenericHitDirection
enum class EGenericHitDirection : uint8_t
{
	EGenericHitDirection__Default  = 0,
	EGenericHitDirection__Front    = 1,
	EGenericHitDirection__Back     = 2,
	EGenericHitDirection__Right    = 3,
	EGenericHitDirection__Left     = 4,
	EGenericHitDirection__EGenericHitDirection_MAX = 5
};


// Enum GenericFeatures.EGenericSearchEnemyRule
enum class EGenericSearchEnemyRule : uint8_t
{
	EGenericSearchEnemyRule__Nearest = 0,
	EGenericSearchEnemyRule__Farthest = 1,
	EGenericSearchEnemyRule__Random = 2,
	EGenericSearchEnemyRule__MostHP = 3,
	EGenericSearchEnemyRule__LeastHP = 4,
	EGenericSearchEnemyRule__LuaCustom = 5,
	EGenericSearchEnemyRule__ByBlackboardKey = 6,
	EGenericSearchEnemyRule__EGenericSearchEnemyRule_MAX = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GenericFeatures.GenericInputOverrideEntry
// 0x0020
struct FGenericInputOverrideEntry
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             Handler;                                                  // 0x0010(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct GenericFeatures.GenericMonsterSensingFilterConfig
// 0x000A
struct FGenericMonsterSensingFilterConfig
{
	bool                                               bEnableTargetAliveCheck;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableIgnoreTagCheck;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFactionCheck;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDistanceCheck;                                     // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAngleCheck;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableNearDeathCheck;                                    // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotAttackNearDeathEnemyFirst;                          // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWaterCheck;                                        // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableVisibilityCheck;                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLuaTargetOverride;                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GenericFeatures.GenericMonsterSensingConfig
// 0x0048
struct FGenericMonsterSensingConfig
{
	float                                              SensedRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SensedAngle;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRememberEnemyTime;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeLockTarget;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeWhenCannotSeeTarget;                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludePlayer;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeMonster;                                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGenericMonsterSensingFilterConfig          PlayerFilter;                                             // 0x001A(0x000A) (Edit, BlueprintVisible)
	struct FGenericMonsterSensingFilterConfig          MonsterFilter;                                            // 0x0024(0x000A) (Edit, BlueprintVisible)
	TEnumAsByte<ECollisionChannel>                     VisibilityTraceChannel;                                   // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	float                                              VisibilityTraceStartZ;                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisibilityTraceEndZ;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGenericSearchEnemyRule                            SearchRule;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       IgnoreTargetIfHasTag;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GenericFeatures.GenericSensingRuntimeState
// 0x000C
struct FGenericSensingRuntimeState
{
	float                                              CanNotSeeTargetElapsedTime;                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockTargetElapsedTime;                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RememberEnemyElapsedTime;                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GenericFeatures.GenericHitReactionEntry
// 0x0020
struct FGenericHitReactionEntry
{
	EGenericHitDirection                               Direction;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAvatarDamagePosition                              BodyPart;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FGameplayTag                                AnimationTag;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystem*                             HitEffect;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GenericFeatures.HitBoxTagInfo
// 0x0018
struct FHitBoxTagInfo
{
	struct FBodyTypeDef                                BodyTypeDef;                                              // 0x0000(0x0008) (Edit)
	struct FString                                     HitBoxTag;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GenericFeatures.StateRelationEntry
// 0x0048
struct FStateRelationEntry
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagContainer                       BlockedBy;                                                // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagContainer                       Cancel;                                                   // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

}

