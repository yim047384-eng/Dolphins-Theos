#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class BuildSystem.BuildingActorBase
// Size: 0x770 // Inherited bytes: 0x570
struct ABuildingActorBase : ALuaActor {
	// Fields
	char pad_0x570[0x1c]; // Offset: 0x570 // Size: 0x1c
	float LastQuadTraceDeviation; // Offset: 0x58c // Size: 0x04
	struct FScriptMulticastDelegate LastQuadTraceDeviationDelegate; // Offset: 0x590 // Size: 0x10
	bool bCustomBlockingChannels; // Offset: 0x5a0 // Size: 0x01
	char pad_0x5A1[0x7]; // Offset: 0x5a1 // Size: 0x07
	struct TArray<enum class ECollisionChannel> CustomBlockingChannels; // Offset: 0x5a8 // Size: 0x10
	bool bCheckVisibilitySkipTypes; // Offset: 0x5b8 // Size: 0x01
	bool bSkipCheckOwnerCollision; // Offset: 0x5b9 // Size: 0x01
	char pad_0x5BA[0x6]; // Offset: 0x5ba // Size: 0x06
	struct TArray<struct UObject*> VisibilitySkipTypes; // Offset: 0x5c0 // Size: 0x10
	struct FBuildingActorWorldSnapSetup WorldSnapSetup; // Offset: 0x5d0 // Size: 0x24
	float DebugHealthDistance; // Offset: 0x5f4 // Size: 0x04
	struct FVector DebugHealthOffset; // Offset: 0x5f8 // Size: 0x0c
	char pad_0x604[0x4]; // Offset: 0x604 // Size: 0x04
	struct TArray<struct UObject*> ProhibitedActorTemplateList; // Offset: 0x608 // Size: 0x10
	struct TArray<struct UObject*> EnableBuildingList; // Offset: 0x618 // Size: 0x10
	struct FSoftObjectPath PreBuildingEffectPath; // Offset: 0x628 // Size: 0x18
	struct FVector PreBuildingEffectScale; // Offset: 0x640 // Size: 0x0c
	struct FVector PreBuildingEffectOffset; // Offset: 0x64c // Size: 0x0c
	struct FRotator PreBuildingEffectRotation; // Offset: 0x658 // Size: 0x0c
	bool CanBuildUnderWater; // Offset: 0x664 // Size: 0x01
	bool bShouldSnapToWorldGrid; // Offset: 0x665 // Size: 0x01
	char pad_0x666[0x2]; // Offset: 0x666 // Size: 0x02
	float UnderWaterMaxBuildDepth; // Offset: 0x668 // Size: 0x04
	char pad_0x66C[0x4]; // Offset: 0x66c // Size: 0x04
	struct FTransform DestroyedParticleTransformOffset; // Offset: 0x670 // Size: 0x30
	struct FSoftObjectPath DestroyBuildingEffectPath; // Offset: 0x6a0 // Size: 0x18
	bool bUseExtraCenterOffset; // Offset: 0x6b8 // Size: 0x01
	bool bUseExtraCenterRotation; // Offset: 0x6b9 // Size: 0x01
	char pad_0x6BA[0x2]; // Offset: 0x6ba // Size: 0x02
	struct FVector ActorCollisionBoxExtern; // Offset: 0x6bc // Size: 0x0c
	struct FVector ActorCollisionBoxCenter; // Offset: 0x6c8 // Size: 0x0c
	struct FRotator ActorCollisionBoxRotator; // Offset: 0x6d4 // Size: 0x0c
	struct FVector ViewLocationOffset; // Offset: 0x6e0 // Size: 0x0c
	float Health; // Offset: 0x6ec // Size: 0x04
	bool bDestroyWhenZeroHealth; // Offset: 0x6f0 // Size: 0x01
	char pad_0x6F1[0x7]; // Offset: 0x6f1 // Size: 0x07
	struct FScriptMulticastDelegate OnHealthChangeNotify; // Offset: 0x6f8 // Size: 0x10
	float MaxDeviation; // Offset: 0x708 // Size: 0x04
	float MaxTraceDepth; // Offset: 0x70c // Size: 0x04
	bool bDoQuadTrace; // Offset: 0x710 // Size: 0x01
	bool bUseQuadTraceDeviationForSpawnOffset; // Offset: 0x711 // Size: 0x01
	enum class EBuildingActorConstructingMode ConstructingMode; // Offset: 0x712 // Size: 0x01
	bool bEnableOverlayPlace; // Offset: 0x713 // Size: 0x01
	bool bEnablePitchRotatePlace; // Offset: 0x714 // Size: 0x01
	bool bAutoPickValidPlace; // Offset: 0x715 // Size: 0x01
	char pad_0x716[0x2]; // Offset: 0x716 // Size: 0x02
	float OverlayPlaceHeight; // Offset: 0x718 // Size: 0x04
	float OverlayMaxHeightFromGround; // Offset: 0x71c // Size: 0x04
	float DetectDeath; // Offset: 0x720 // Size: 0x04
	float MaxOffectHight; // Offset: 0x724 // Size: 0x04
	bool bUseCachedBuildLocation; // Offset: 0x728 // Size: 0x01
	bool bBuildOnlyOnLandscape; // Offset: 0x729 // Size: 0x01
	bool bBuildOnEdge; // Offset: 0x72a // Size: 0x01
	char pad_0x72B[0x1]; // Offset: 0x72b // Size: 0x01
	float BuildOnEdgeUpLength; // Offset: 0x72c // Size: 0x04
	float BuildOnEdgeFrontLength; // Offset: 0x730 // Size: 0x04
	char pad_0x734[0x4]; // Offset: 0x734 // Size: 0x04
	struct FBuildingActorDSBuildCheck DSBuildCheckCfg; // Offset: 0x738 // Size: 0x18
	IntProperty MaxCountLimit; // Offset: 0x750 // Size: 0x04
	bool bDoDensityCheck; // Offset: 0x754 // Size: 0x01
	char pad_0x755[0x3]; // Offset: 0x755 // Size: 0x03
	StrProperty LuaModPath; // Offset: 0x758 // Size: 0x10
	char pad_0x768[0x8]; // Offset: 0x768 // Size: 0x08

	// Functions

	// Object Name: Function BuildSystem.BuildingActorBase.SpawnDestroyParticle
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	void SpawnDestroyParticle(bool bSpawnParticle, struct FTransform& Loc, struct FSoftObjectPath& DestroyBuildingEffectPath, struct UWorld* World); // Offset: 0x102160838 // Return & Params: Num(4) Size(0x60)

	// Object Name: Function BuildSystem.BuildingActorBase.SetLastQuadTraceDeviation
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLastQuadTraceDeviation(float InDeviation); // Offset: 0x1021607bc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorBase.PlayDestroyAnimation
	// Flags: [Native|Protected|BlueprintCallable]
	void PlayDestroyAnimation(bool bUseParticle); // Offset: 0x102160730 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorBase.OnTakeDamageFromVehicle
	// Flags: [Event|Protected|BlueprintEvent]
	void OnTakeDamageFromVehicle(struct UPrimitiveComponent* MyPrimitiveComp, float ForwardSpeed, float DamageAmount, struct AActor* DamageCauser, struct AController* EventInstigator); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function BuildSystem.BuildingActorBase.OnRep_Health
	// Flags: [Final|Native|Protected]
	void OnRep_Health(); // Offset: 0x10216071c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildingActorBase.OnPlayDestroyAnimation
	// Flags: [Event|Protected|BlueprintEvent]
	void OnPlayDestroyAnimation(bool bUseParticle); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorBase.OnBuildingActorDamaged
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void OnBuildingActorDamaged(float Health); // Offset: 0x102160698 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorBase.OnBornAnimationPlayEndInClient
	// Flags: [Event|Protected|BlueprintEvent]
	void OnBornAnimationPlayEndInClient(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildingActorBase.GetLastQuadTraceDeviation
	// Flags: [Final|Native|Public|Const]
	float GetLastQuadTraceDeviation(); // Offset: 0x10216067c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorBase.GetBuildID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	IntProperty GetBuildID(); // Offset: 0x102160660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorBase.BPOnOwnerChanged
	// Flags: [Event|Protected|BlueprintEvent]
	void BPOnOwnerChanged(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class BuildSystem.BuildingActorInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UBuildingActorInterface : UInterface {
	// Functions

	// Object Name: Function BuildSystem.BuildingActorInterface.UseQuadTraceDeviationForSpawnOffset
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool UseQuadTraceDeviationForSpawnOffset(struct FVector BuildLocation, float QuadTraceDeviation, struct FVector& OutLocation); // Offset: 0x102162610 // Return & Params: Num(4) Size(0x1d)

	// Object Name: Function BuildSystem.BuildingActorInterface.UseFixedLocation
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool UseFixedLocation(); // Offset: 0x1021625d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.UseCachedBuildLocation
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool UseCachedBuildLocation(); // Offset: 0x102162598 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldUseExtraRotation
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldUseExtraRotation(); // Offset: 0x10216255c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldUseExtraOffset
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldUseExtraOffset(); // Offset: 0x102162520 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldSnapToGrid
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldSnapToGrid(); // Offset: 0x1021624e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldSkipCheckOwnerCollision
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldSkipCheckOwnerCollision(); // Offset: 0x1021624a8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldCustomBlockingChannels
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldCustomBlockingChannels(); // Offset: 0x10216246c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldCheckVisibilityTypes
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldCheckVisibilityTypes(); // Offset: 0x102162430 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.ShouldAttachToMovementPlatform
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool ShouldAttachToMovementPlatform(); // Offset: 0x1021623f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.SetBuildingActorID
	// Flags: [Native|Event|Public|BlueprintEvent]
	void SetBuildingActorID(IntProperty BuildID); // Offset: 0x102162370 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.PrebuildCDOBodyInstance
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void PrebuildCDOBodyInstance(struct UWorld* World, struct FTransform& tranx); // Offset: 0x102162288 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function BuildSystem.BuildingActorInterface.NonCullingBeginPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	void NonCullingBeginPlay(); // Offset: 0x10216226c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildingActorInterface.MaxUnderWaterBuildDepth
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float MaxUnderWaterBuildDepth(); // Offset: 0x102162230 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.IsEnablePitchRotatePlace
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsEnablePitchRotatePlace(); // Offset: 0x1021621f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.IsEnableOverlayPlace
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsEnableOverlayPlace(); // Offset: 0x1021621b8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.IsBuildOnlyOnLandscape
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsBuildOnlyOnLandscape(); // Offset: 0x10216217c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.IsBuildOnEdge
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsBuildOnEdge(); // Offset: 0x102162140 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.IsAutoPickValidPlace
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsAutoPickValidPlace(); // Offset: 0x102162104 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.HandleBuildingDestroyed
	// Flags: [Native|Event|Public|BlueprintEvent]
	void HandleBuildingDestroyed(struct AController* InstigatedBy); // Offset: 0x102162080 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.BuildingActorInterface.HandleBuildingConstructed
	// Flags: [Native|Event|Public|BlueprintEvent]
	void HandleBuildingConstructed(struct AController* InstigatedBy); // Offset: 0x102161ffc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetWorldSnapSetup
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct FBuildingActorWorldSnapSetup GetWorldSnapSetup(); // Offset: 0x102161fa4 // Return & Params: Num(1) Size(0x24)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetVisibilitySkipTypes
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UObject*> GetVisibilitySkipTypes(); // Offset: 0x102161f38 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetViewLocationOffset
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetViewLocationOffset(); // Offset: 0x102161ef8 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetProhibitedActorTemplateList
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<struct UObject*> GetProhibitedActorTemplateList(); // Offset: 0x102161e8c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectScale
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetPreBuildingEffectScale(); // Offset: 0x102161e4c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectRotation
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FRotator GetPreBuildingEffectRotation(); // Offset: 0x102161e0c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectPath
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FSoftObjectPath GetPreBuildingEffectPath(); // Offset: 0x102161d9c // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectOffset
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetPreBuildingEffectOffset(); // Offset: 0x102161d5c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetOverlayPlaceHeight
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetOverlayPlaceHeight(); // Offset: 0x102161d20 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetOverlayMaxHeightFromGround
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetOverlayMaxHeightFromGround(); // Offset: 0x102161ce4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetMaxTraceDepth
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetMaxTraceDepth(); // Offset: 0x102161ca8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetMaxOffectHight
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetMaxOffectHight(); // Offset: 0x102161c6c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetMaxDeviation
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetMaxDeviation(); // Offset: 0x102161c30 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetDSBuildCheckConfig
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct FBuildingActorDSBuildCheck GetDSBuildCheckConfig(); // Offset: 0x102161bc4 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetDetectDeath
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetDetectDeath(); // Offset: 0x102161b88 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetDestroyedParticleTransformOffset
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FTransform GetDestroyedParticleTransformOffset(); // Offset: 0x102161b34 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetDensityParams
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	struct FBuildingActorDensityCheck GetDensityParams(struct FVector& Location); // Offset: 0x102161a68 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetCustomBlockingChannels
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	struct TArray<enum class ECollisionChannel> GetCustomBlockingChannels(); // Offset: 0x1021619fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetConstructingMode
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	enum class EBuildingActorConstructingMode GetConstructingMode(); // Offset: 0x1021619c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetBuildOnEdgeUpLength
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetBuildOnEdgeUpLength(); // Offset: 0x102161984 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetBuildOnEdgeFrontLength
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	float GetBuildOnEdgeFrontLength(); // Offset: 0x102161948 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetBuildingActorID
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	IntProperty GetBuildingActorID(); // Offset: 0x10216190c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxRotator
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FRotator GetActorCollisionBoxRotator(); // Offset: 0x1021618cc // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxExtern
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetActorCollisionBoxExtern(); // Offset: 0x10216188c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxCenter
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetActorCollisionBoxCenter(); // Offset: 0x10216184c // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.BuildingActorInterface.CustomizeLocationAndRotation
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void CustomizeLocationAndRotation(struct AActor* Builder, struct FVector& InLocation, struct FRotator& InRotation, struct FVector& OutLocation, struct FRotator& OutRotation); // Offset: 0x102161698 // Return & Params: Num(5) Size(0x38)

	// Object Name: Function BuildSystem.BuildingActorInterface.CanDoQuadTrace
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool CanDoQuadTrace(); // Offset: 0x10216165c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.CanCustomizeLocationAndRotation
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool CanCustomizeLocationAndRotation(); // Offset: 0x102161620 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.CanBuildUnderWater
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool CanBuildUnderWater(); // Offset: 0x1021615e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildingActorInterface.BPCheckPlacement
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	bool BPCheckPlacement(struct UWorld* World, struct FTransform& tranx, IntProperty checkType, IntProperty CurrentAvatarID, struct AActor* Builder); // Offset: 0x10216143c // Return & Params: Num(6) Size(0x51)

	// Object Name: Function BuildSystem.BuildingActorInterface.BP_DSFinalCheckPlacement
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	bool BP_DSFinalCheckPlacement(struct FTransform& Transform, struct AActor* Builder); // Offset: 0x102161344 // Return & Params: Num(3) Size(0x39)
};

// Object Name: Class BuildSystem.BuildingActorMgr
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct ABuildingActorMgr : AActor {
	// Fields
	struct TArray<struct FBuildingActorInfo> BuildingActorList; // Offset: 0x4b0 // Size: 0x10

	// Functions

	// Object Name: Function BuildSystem.BuildingActorMgr.OnBuildingActorSpawned
	// Flags: [Final|Native|Public]
	void OnBuildingActorSpawned(struct AActor* InOwnerActor, struct ABuildingActorBase* InBuildingActor); // Offset: 0x102165878 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildingActorMgr.OnBuildingActorDestroyed
	// Flags: [Final|Native|Public]
	void OnBuildingActorDestroyed(struct ABuildingActorBase* InBuildingActor); // Offset: 0x1021657fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.BuildingActorMgr.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ABuildingActorMgr* GetInstance(struct UObject* WorldContextObject); // Offset: 0x102165780 // Return & Params: Num(2) Size(0x10)
};

// Object Name: Class BuildSystem.BuildingGridComponent
// Size: 0xa10 // Inherited bytes: 0x9f0
struct UBuildingGridComponent : UBoxComponent {
	// Fields
	struct FName CollisionProfileName; // Offset: 0x9f0 // Size: 0x08
	struct FVector BuildCenterOffset; // Offset: 0x9f8 // Size: 0x0c
	char pad_0xA04[0xc]; // Offset: 0xa04 // Size: 0x0c
};

// Object Name: Class BuildSystem.BuildSystemComponent
// Size: 0x500 // Inherited bytes: 0x238
struct UBuildSystemComponent : ULuaActorComponent {
	// Fields
	bool UseFixedDistanceBuild; // Offset: 0x231 // Size: 0x01
	struct FScriptMulticastDelegate OnConstructionComplete; // Offset: 0x238 // Size: 0x10
	struct FScriptMulticastDelegate OnDoubleClickMode2Event; // Offset: 0x248 // Size: 0x10
	struct FScriptMulticastDelegate OnDoubleClickMode2PercentEvent; // Offset: 0x258 // Size: 0x10
	float MaxmumConstructingDistance; // Offset: 0x268 // Size: 0x04
	IntProperty CurrentAvatarID; // Offset: 0x26c // Size: 0x04
	bool bMLAIBuildResult; // Offset: 0x270 // Size: 0x01
	char pad_0x272[0x2]; // Offset: 0x272 // Size: 0x02
	float LastQuadTraceDeviation; // Offset: 0x274 // Size: 0x04
	char pad_0x278[0x80]; // Offset: 0x278 // Size: 0x80
	struct ASelectBuildActor* BuildingSelectorClass; // Offset: 0x2f8 // Size: 0x08
	struct ASelectBuildActor* SelectBuildMeshClass; // Offset: 0x300 // Size: 0x08
	float UpdateBuildEnableTimer; // Offset: 0x308 // Size: 0x04
	float MinBuildDist; // Offset: 0x30c // Size: 0x04
	float GridGroundThreshold; // Offset: 0x310 // Size: 0x04
	bool AIIsOpenAdsorb; // Offset: 0x314 // Size: 0x01
	bool AIIsOpenLeftAndRightTry; // Offset: 0x315 // Size: 0x01
	char pad_0x316[0x2]; // Offset: 0x316 // Size: 0x02
	float GridGroundCheckDepth; // Offset: 0x318 // Size: 0x04
	struct FWorldGridData WorldGridData; // Offset: 0x31c // Size: 0x0c
	bool bCanPlaceOnConstructableActor; // Offset: 0x328 // Size: 0x01
	char pad_0x329[0x3]; // Offset: 0x329 // Size: 0x03
	IntProperty bIsFastPlacementMode; // Offset: 0x32c // Size: 0x04
	IntProperty Mode2PressTouchBuildIndex; // Offset: 0x330 // Size: 0x04
	bool bIsStartPreBuildMode2; // Offset: 0x334 // Size: 0x01
	char pad_0x335[0x3]; // Offset: 0x335 // Size: 0x03
	struct FVector2D Mode2PreBuildPos; // Offset: 0x338 // Size: 0x08
	float CurrentDoubleClickDuration; // Offset: 0x340 // Size: 0x04
	float ValidDoubleClickDuration; // Offset: 0x344 // Size: 0x04
	float ValidDoubleClickInterval; // Offset: 0x348 // Size: 0x04
	float ValidDoubleClickDistance; // Offset: 0x34c // Size: 0x04
	bool bSouldSkipOwningPlayer; // Offset: 0x350 // Size: 0x01
	bool bNativeTouchActorBuildEnabled; // Offset: 0x351 // Size: 0x01
	bool bNativeDoubleCkickBuildEnabled; // Offset: 0x352 // Size: 0x01
	char pad_0x353[0x5]; // Offset: 0x353 // Size: 0x05
	MapProperty ActorSelectorMap; // Offset: 0x358 // Size: 0x50
	struct TArray<struct UObject*> SkippingObjects; // Offset: 0x3a8 // Size: 0x10
	bool bDebugDraw; // Offset: 0x3b8 // Size: 0x01
	bool bPickLocationDebugDraw; // Offset: 0x3b9 // Size: 0x01
	char pad_0x3BA[0x6]; // Offset: 0x3ba // Size: 0x06
	struct TArray<struct UObject*> FilterTemplates; // Offset: 0x3c0 // Size: 0x10
	struct TArray<struct UObject*> ActorsShouldSkipVisiblityCheck; // Offset: 0x3d0 // Size: 0x10
	enum class ECollisionChannel BuildingGridChannel; // Offset: 0x3e0 // Size: 0x01
	char pad_0x3E1[0x3]; // Offset: 0x3e1 // Size: 0x03
	float MaxCanAdsorbAngle; // Offset: 0x3e4 // Size: 0x04
	float SnappingDistance; // Offset: 0x3e8 // Size: 0x04
	float SnappingDetectRadius; // Offset: 0x3ec // Size: 0x04
	float AIMaxCanRotateAngle; // Offset: 0x3f0 // Size: 0x04
	bool bCheckPlaceActorPosSwitch; // Offset: 0x3f4 // Size: 0x01
	char pad_0x3F5[0x3]; // Offset: 0x3f5 // Size: 0x03
	float FloatErrorTolerance; // Offset: 0x3f8 // Size: 0x04
	bool bDSTraceCheck; // Offset: 0x3fc // Size: 0x01
	char pad_0x3FD[0x3]; // Offset: 0x3fd // Size: 0x03
	struct ASelectBuildActor* SelectBuildActor; // Offset: 0x400 // Size: 0x08
	enum class EBuildingViewType CurrentBuildViewType; // Offset: 0x408 // Size: 0x01
	char pad_0x409[0xb]; // Offset: 0x409 // Size: 0x0b
	bool bIsBuildOnEdge; // Offset: 0x414 // Size: 0x01
	char pad_0x415[0x3]; // Offset: 0x415 // Size: 0x03
	float EdgeUpLength; // Offset: 0x418 // Size: 0x04
	float EdgeFrontLength; // Offset: 0x41c // Size: 0x04
	char pad_0x420[0x14]; // Offset: 0x420 // Size: 0x14
	IntProperty CachedCDOIndex; // Offset: 0x434 // Size: 0x04
	struct AActor* CachedCDOActor; // Offset: 0x438 // Size: 0x08
	char pad_0x440[0xc0]; // Offset: 0x440 // Size: 0xc0

	// Functions

	// Object Name: Function BuildSystem.BuildSystemComponent.TryAttachToMoveablePlatform
	// Flags: [Event|Protected|HasDefaults|BlueprintEvent]
	void TryAttachToMoveablePlatform(struct AActor* SpawnedBuilding, struct FVector BuildLocation); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function BuildSystem.BuildSystemComponent.ToggleDebugDraw
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ToggleDebugDraw(); // Offset: 0x102168e00 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildSystemComponent.StopPlaceBuilding
	// Flags: [Native|Public|BlueprintCallable]
	void StopPlaceBuilding(); // Offset: 0x102168de4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildSystemComponent.StartPrePlaceBuilding
	// Flags: [Native|Public|BlueprintCallable]
	void StartPrePlaceBuilding(IntProperty InBuildID, IntProperty AvatarID, enum class EBuildingViewType viewType); // Offset: 0x102168cec // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BuildSystem.BuildSystemComponent.SkipCDTimeByBuildID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SkipCDTimeByBuildID(IntProperty InBuildID, float IncreaseRate); // Offset: 0x102168c34 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BuildSystem.BuildSystemComponent.ShouldEnableDoubleTouchMode
	// Flags: [Native|Event|Protected|BlueprintEvent]
	bool ShouldEnableDoubleTouchMode(); // Offset: 0x102168bf8 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildSystemComponent.SetPrebuildEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetPrebuildEnabled(bool CanBePlaced, bool IsVisible); // Offset: 0x102168b28 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BuildSystem.BuildSystemComponent.SetBuildingDataModeID
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	void SetBuildingDataModeID(IntProperty ModeID); // Offset: 0x102168aac // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildSystemComponent.SetBuildingData
	// Flags: [Native|Public|BlueprintCallable]
	void SetBuildingData(IntProperty Index, struct FBuildingData InData); // Offset: 0x1021689a4 // Return & Params: Num(2) Size(0x50)

	// Object Name: Function BuildSystem.BuildSystemComponent.ServerLineTraceCheck
	// Flags: [Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	bool ServerLineTraceCheck(struct UObject* BuildingClass, struct FVector& CheckLocation, struct FRotator& CheckRotation); // Offset: 0x102168880 // Return & Params: Num(4) Size(0x21)

	// Object Name: Function BuildSystem.BuildSystemComponent.ResetBuildngCDByBuildID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResetBuildngCDByBuildID(IntProperty InBuildID, float InNewCDTime); // Offset: 0x1021687c8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BuildSystem.BuildSystemComponent.ResetBuildList
	// Flags: [Native|Public|BlueprintCallable]
	void ResetBuildList(); // Offset: 0x1021687ac // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.BuildSystemComponent.ProccessNothingHitTraceOverlap
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool ProccessNothingHitTraceOverlap(struct FVector& DestLocation, struct FRotator& DestRotation, float MaxBuildDist, struct FVector& OutLocation, IntProperty buildIndex, struct FVector& ViewLocation); // Offset: 0x1048d7660 // Return & Params: Num(7) Size(0x39)

	// Object Name: Function BuildSystem.BuildSystemComponent.PlaceBuildingWithIndex
	// Flags: [Native|Public|BlueprintCallable]
	void PlaceBuildingWithIndex(IntProperty buildIndex, IntProperty AvatarID, bool bRelative); // Offset: 0x1021686ac // Return & Params: Num(3) Size(0x9)

	// Object Name: Function BuildSystem.BuildSystemComponent.PlaceBuildingAtLocation
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void PlaceBuildingAtLocation(IntProperty buildIndex, struct FVector& Loc, struct FRotator& Rot); // Offset: 0x102168590 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function BuildSystem.BuildSystemComponent.PlaceBuilding
	// Flags: [Native|Public|BlueprintCallable]
	void PlaceBuilding(IntProperty AvatarID, bool bRelative); // Offset: 0x1021684cc // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.PickLocationByBuildID
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool PickLocationByBuildID(IntProperty InBuildID, struct FVector& OutLocation, struct FRotator& OutRotation); // Offset: 0x1021683b0 // Return & Params: Num(4) Size(0x1d)

	// Object Name: Function BuildSystem.BuildSystemComponent.OverriveDeploymentTransform
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void OverriveDeploymentTransform(struct FRotator& rotIn, struct FVector& locIn, struct FRotator& rotOut, struct FVector& locOut); // Offset: 0x102168238 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function BuildSystem.BuildSystemComponent.OverrideBuildingMaxBuildDistance
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, IntProperty BuildingID); // Offset: 0x102168134 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBoxEnded
	// Flags: [Native|Public]
	void OnTouchedConstructableBoxEnded(enum class ETouchIndex FingerIndex, struct UPrimitiveComponent* TouchedComponent); // Offset: 0x102168074 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBox
	// Flags: [Native|Public]
	void OnTouchedConstructableBox(enum class ETouchIndex FingerIndex, struct UPrimitiveComponent* TouchedComponent); // Offset: 0x102167fb4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnTouchActorBuild
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	void OnTouchActorBuild(struct FVector2D& ScreenPosition, struct APlayerController* Controller); // Offset: 0x102167ee0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnAsyncLoadingMeshFinished
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingMeshFinished(struct UStaticMesh* MeshPtr, IntProperty buildIndex); // Offset: 0x102167da0 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnAsyncLoadingEffectFinished
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingEffectFinished(struct UParticleSystem* EffectPtr, IntProperty buildIndex); // Offset: 0x102167c60 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function BuildSystem.BuildSystemComponent.OnAsyncLoadingBuildingFinished
	// Flags: [Final|Native|Public]
	void OnAsyncLoadingBuildingFinished(struct UClass* AcotrPtr, IntProperty buildIndex); // Offset: 0x102167b20 // Return & Params: Num(2) Size(0x2c)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsValidAvatar
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsValidAvatar(IntProperty AvatarID); // Offset: 0x102167a8c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsParticlePreBuildingEffect
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsParticlePreBuildingEffect(IntProperty InBuildID); // Offset: 0x1021679f8 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsOverlayBuildHeightValid
	// Flags: [Event|Public|HasDefaults|BlueprintEvent]
	bool IsOverlayBuildHeightValid(struct FVector BuildLocation, float OverlayMaxHeightFromGround); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsInPreBuildingMode
	// Flags: [Final|Native|Public]
	bool IsInPreBuildingMode(); // Offset: 0x1021679d4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsCanPlaceBuildingBP
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool IsCanPlaceBuildingBP(IntProperty InBuildID); // Offset: 0x102167940 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsCanPlaceBuilding
	// Flags: [Native|Public|BlueprintCallable]
	bool IsCanPlaceBuilding(IntProperty InBuildID, enum class EBuildingActionType _TYPE); // Offset: 0x102167870 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function BuildSystem.BuildSystemComponent.IsActorProhibited
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool IsActorProhibited(struct AActor* Actor); // Offset: 0x1021677e4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectRotation
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FRotator GetPreBuildingEffectRotation(IntProperty InBuildID); // Offset: 0x10216774c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectPath
	// Flags: [Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FSoftObjectPath GetPreBuildingEffectPath(IntProperty InBuildID, IntProperty AvatarID); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectOffset
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	struct FVector GetPreBuildingEffectOffset(IntProperty InBuildID); // Offset: 0x1021676b4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetOwnerPlayerController
	// Flags: [Native|Protected]
	struct APlayerController* GetOwnerPlayerController(); // Offset: 0x102167678 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetMaxDistance
	// Flags: [Native|Event|Public|BlueprintEvent]
	float GetMaxDistance(); // Offset: 0x10216763c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetLastQuadTraceDeviation
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure|Const]
	float GetLastQuadTraceDeviation(); // Offset: 0x102167620 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetIsHasInitData
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	bool GetIsHasInitData(); // Offset: 0x1021675e4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetIndexByBuildingID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetIndexByBuildingID(IntProperty BuildID); // Offset: 0x102167558 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetCurrentBuildType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	enum class EBuildingType GetCurrentBuildType(); // Offset: 0x102167524 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetCDOByIndex
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	struct AActor* GetCDOByIndex(IntProperty Index); // Offset: 0x102167498 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetBuildingList
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct TArray<struct FBuildingData> GetBuildingList(); // Offset: 0x10216742c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function BuildSystem.BuildSystemComponent.GetBuildingDataModeID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetBuildingDataModeID(); // Offset: 0x102167408 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function BuildSystem.BuildSystemComponent.EnableBuildingByID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EnableBuildingByID(IntProperty BuildID, bool bEnable); // Offset: 0x10216734c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.DoSceenTouchBuild
	// Flags: [Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	void DoSceenTouchBuild(IntProperty buildIndex, struct FVector2D& ScreenPostion, IntProperty PointerIndex, enum class EBuildingActionType _TYPE, bool IsBegin, enum class EBuildingActionType CustomBuildEvent); // Offset: 0x102167180 // Return & Params: Num(6) Size(0x13)

	// Object Name: Function BuildSystem.BuildSystemComponent.DensityCheck
	// Flags: [Native|Event|Protected|HasOutParms|BlueprintEvent]
	bool DensityCheck(struct FBuildingActorDensityCheck& DensityCheckParmas); // Offset: 0x1021670ac // Return & Params: Num(2) Size(0x21)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckShouldSkipByVisibility
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool CheckShouldSkipByVisibility(struct UPrimitiveComponent* _comp, IntProperty buildIndex); // Offset: 0x102166fe4 // Return & Params: Num(3) Size(0xd)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckPlacementWithPitch
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool CheckPlacementWithPitch(struct FHitResult& Hit, struct FVector& OutLocation, struct FRotator& OutRotation, struct FVector& BoxExtent, struct FBuildingData& CurBuildData); // Offset: 0x1048d7660 // Return & Params: Num(6) Size(0xf9)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckPlacementOverlap
	// Flags: [Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	bool CheckPlacementOverlap(struct TArray<struct FHitResult>& HitArray, struct FVector& OutLocation, struct FVector& BoxExtent, struct FBuildingData& CurBuildData, struct FRotator& BuildRotation, struct FRotator& ControlRot, struct FVector& ViewLocation, bool& HasForbiddenObject); // Offset: 0x1048d7660 // Return & Params: Num(9) Size(0x96)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckPlaceBuildingWithIndex
	// Flags: [Native|Public|BlueprintCallable]
	bool CheckPlaceBuildingWithIndex(IntProperty buildIndex); // Offset: 0x102166f50 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckObjectIsOneOfTheTemplate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool CheckObjectIsOneOfTheTemplate(struct UObject* Obj, struct TArray<struct UObject*> _ActorFilterTemplates); // Offset: 0x102166e1c // Return & Params: Num(3) Size(0x19)

	// Object Name: Function BuildSystem.BuildSystemComponent.CheckCollisionNeedSkipOwner
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool CheckCollisionNeedSkipOwner(IntProperty buildIndex); // Offset: 0x102166d90 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function BuildSystem.BuildSystemComponent.BuildAtWorldLoc
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool BuildAtWorldLoc(IntProperty buildIndex, struct FTransform& tranx, struct FVector EndLocation, bool bUseTrace, enum class EBuildingActionType BuildType); // Offset: 0x102166bd4 // Return & Params: Num(6) Size(0x4f)

	// Object Name: Function BuildSystem.BuildSystemComponent.AddBuildingData
	// Flags: [Native|Public|BlueprintCallable]
	void AddBuildingData(struct FBuildingData InData); // Offset: 0x102166b0c // Return & Params: Num(1) Size(0x48)
};

// Object Name: Class BuildSystem.SelectBuildActor
// Size: 0x588 // Inherited bytes: 0x570
struct ASelectBuildActor : ALuaActor {
	// Fields
	struct UParticleSystemComponent* SelectBuildEffect; // Offset: 0x570 // Size: 0x08
	struct UStaticMeshComponent* SelectEffectMesh; // Offset: 0x578 // Size: 0x08
	char pad_0x580[0x8]; // Offset: 0x580 // Size: 0x08

	// Functions

	// Object Name: Function BuildSystem.SelectBuildActor.SetSelectActorTemplateScale
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetSelectActorTemplateScale(struct FVector& InScale); // Offset: 0x10216cab0 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function BuildSystem.SelectBuildActor.SetSelectActorTemplateOffsetAndRotation
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetSelectActorTemplateOffsetAndRotation(struct FVector& InOffset, struct FRotator& InRotation); // Offset: 0x10216c9d8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function BuildSystem.SelectBuildActor.SetSelectActorTemplate
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetSelectActorTemplate(struct UParticleSystem* Template); // Offset: 0x10216c95c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.SelectBuildActor.SetSelectActorPlacementEnable
	// Flags: [Native|Event|Public|BlueprintEvent]
	void SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible); // Offset: 0x10216c884 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function BuildSystem.SelectBuildActor.SetSelectActorMesh
	// Flags: [Native|Event|Public|BlueprintEvent]
	void SetSelectActorMesh(struct UStaticMesh* InMesh); // Offset: 0x10216c800 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function BuildSystem.SelectBuildActor.SetIsPlacementEnable
	// Flags: [Final|Native|Public]
	void SetIsPlacementEnable(bool Val); // Offset: 0x10216c780 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.SelectBuildActor.OnParticleLoaded
	// Flags: [Native|Event|Public|BlueprintEvent]
	void OnParticleLoaded(); // Offset: 0x10216c764 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function BuildSystem.SelectBuildActor.IsCurrentPlacementEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsCurrentPlacementEnable(); // Offset: 0x10216c748 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.SelectBuildActor.GetIsPlacementEnable
	// Flags: [Final|Native|Public|Const]
	bool GetIsPlacementEnable(); // Offset: 0x10216c72c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function BuildSystem.SelectBuildActor.GetIsParticleEffect
	// Flags: [Final|Native|Public|Const]
	bool GetIsParticleEffect(); // Offset: 0x10216c710 // Return & Params: Num(1) Size(0x1)
};

