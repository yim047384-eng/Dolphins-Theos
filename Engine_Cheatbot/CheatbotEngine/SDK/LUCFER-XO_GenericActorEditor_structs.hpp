#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GenericActorEditor.ActorEditorLargeDataContentSegment
// 0x0018
struct FActorEditorLargeDataContentSegment
{
	unsigned char                                      Index;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<unsigned char>                              SegmentContent;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GenericActorEditor.ActorEditorLargeDataContent
// 0x0080
struct FActorEditorLargeDataContent
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FActorEditorLargeDataContentSegment> ContentSegments;                                          // 0x0008(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              OutContent;                                               // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint32_t                                           LastNotifiedVersion;                                      // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x54];                                      // 0x002C(0x0054) MISSED OFFSET
};

// ScriptStruct GenericActorEditor.ActorEditorAISightConfig
// 0x001C
struct FActorEditorAISightConfig
{
	bool                                               bEnableSight;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SightRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectEnemies;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectFriendlies;                                        // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectNeutrals;                                          // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct GenericActorEditor.ActorEditorAIHearingConfig
// 0x0018
struct FActorEditorAIHearingConfig
{
	bool                                               bEnableHearing;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HearingRange;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLoSHearing;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              LoSHearingRange;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectEnemies;                                           // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectFriendlies;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDetectNeutrals;                                          // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
};

// ScriptStruct GenericActorEditor.ActorEditorAIPerceptionSetup
// 0x0040
struct FActorEditorAIPerceptionSetup
{
	struct FActorEditorAISightConfig                   Sight;                                                    // 0x0000(0x001C) (Edit, BlueprintVisible)
	struct FActorEditorAIHearingConfig                 Hearing;                                                  // 0x001C(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UClass*                                      DominantSense;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GenericActorEditor.ActorEditorCharacterMovementSyncData
// 0x0050
struct FActorEditorCharacterMovementSyncData
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingFriction;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeed;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouched;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSwimSpeed;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCustomMovementSpeed;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocity;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AirControl;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FallingLateralFriction;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationWalking;                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFalling;                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFlying;                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationSwimming;                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GroundFriction;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOrientRotationToMovement;                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseControllerDesiredRotation;                            // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FRotator                                    RotationRate;                                             // 0x0044(0x000C) (IsPlainOldData)
};

}

