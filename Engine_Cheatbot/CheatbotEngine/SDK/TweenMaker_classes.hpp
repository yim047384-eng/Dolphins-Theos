#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class TweenMaker.BaseTween
// Size: 0x98 // Inherited bytes: 0x28
struct UBaseTween : UObject {
	// Fields
	char pad_0x28[0x30]; // Offset: 0x28 // Size: 0x30
	struct UTweenContainer* mOwningTweenContainer; // Offset: 0x58 // Size: 0x08
	char pad_0x60[0x38]; // Offset: 0x60 // Size: 0x38

	// Functions

	// Object Name: Function TweenMaker.BaseTween.TogglePauseTween
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TogglePauseTween(bool SkipTween); // Offset: 0x101a423cc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TweenMaker.BaseTween.SetTweenName
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTweenName(struct FName TweenName); // Offset: 0x101a42350 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TweenMaker.BaseTween.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTimeScale(float NewTimeScale); // Offset: 0x101a422d4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.BaseTween.SetDelay
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetDelay(float NewDelay); // Offset: 0x101a42258 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.BaseTween.ResumeTween
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResumeTween(); // Offset: 0x101a42244 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TweenMaker.BaseTween.PauseTween
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PauseTween(bool SkipTween); // Offset: 0x101a421c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenWidgetOpacityTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenWidgetOpacityTo(struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a41ffc // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenWidgetAngleTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenWidgetAngleTo(struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a41e38 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenShearWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenShearWidgetTo(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a41c74 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenSceneComponentFollowSpline(struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4193c // Return & Params: Num(12) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenScaleWidgetTo(struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a41778 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleWidgetBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenScaleWidgetBy(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a415b4 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenScaleSceneComponentTo(struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4135c // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenScaleSceneComponentBy(struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a41104 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenScaleActorTo(struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a40eac // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenScaleActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenScaleActorBy(struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a40c54 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* JoinTweenRotateSceneComponentTo(struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a409fc // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* JoinTweenRotateSceneComponentBy(struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a407a4 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* JoinTweenRotateSceneComponentAroundPointByOffset(struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a404d4 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* JoinTweenRotateSceneComponentAroundPoint(struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a40188 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* JoinTweenRotateActorTo(struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3ff30 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* JoinTweenRotateActorBy(struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3fcd8 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* JoinTweenRotateActorAroundPointByOffset(struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3fa08 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenRotateActorAroundPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* JoinTweenRotateActorAroundPoint(struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3f6bc // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenMoveWidgetTo(struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3f4f8 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveWidgetBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenMoveWidgetBy(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3f334 // Return & Params: Num(7) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenMoveSceneComponentTo(struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3f0dc // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenMoveSceneComponentBy(struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3ee84 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenMoveActorTo(struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3ec2c // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMoveActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenMoveActorBy(struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3e9d4 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMaterialVectorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* JoinTweenMaterialVectorTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3e7d0 // Return & Params: Num(8) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMaterialVectorFromTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* JoinTweenMaterialVectorFromTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3e588 // Return & Params: Num(9) Size(0x48)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMaterialFloatTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenMaterialFloatTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3e388 // Return & Params: Num(8) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenMaterialFloatFromTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenMaterialFloatFromTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3e14c // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenCustomVector2D
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* JoinTweenCustomVector2D(struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3df50 // Return & Params: Num(8) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenCustomVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* JoinTweenCustomVector(struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3dd48 // Return & Params: Num(8) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenCustomFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenCustomFloat(struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a3db48 // Return & Params: Num(8) Size(0x28)

	// Object Name: Function TweenMaker.BaseTween.JoinTweenActorFollowSpline
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* JoinTweenActorFollowSpline(struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a3d810 // Return & Params: Num(12) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.IsTweenPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsTweenPaused(); // Offset: 0x101a3d7f4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TweenMaker.BaseTween.IsTweening
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsTweening(); // Offset: 0x101a3d7c0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TweenMaker.BaseTween.GetTweenTarget
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UObject* GetTweenTarget(); // Offset: 0x101a3d788 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TweenMaker.BaseTween.GetTweenName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct FName GetTweenName(); // Offset: 0x101a3d76c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TweenMaker.BaseTween.GetTweenElapsedTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetTweenElapsedTime(); // Offset: 0x101a3d750 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.BaseTween.GetTweenDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetTweenDuration(); // Offset: 0x101a3d734 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.BaseTween.GetTweenContainer
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	struct UTweenContainer* GetTweenContainer(); // Offset: 0x101a3d718 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TweenMaker.BaseTween.GetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetTimeScale(); // Offset: 0x101a3d6fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.BaseTween.DeleteTween
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteTween(); // Offset: 0x101a3d6e8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenWidgetOpacityTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenWidgetOpacityTo(struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3d4ac // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenWidgetAngleTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenWidgetAngleTo(struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3d270 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenShearWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenShearWidgetTo(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3d034 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenSceneComponentFollowSpline(struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3cc7c // Return & Params: Num(14) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenScaleWidgetTo(struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3ca40 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleWidgetBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenScaleWidgetBy(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3c804 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenScaleSceneComponentTo(struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3c534 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenScaleSceneComponentBy(struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3c264 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenScaleActorTo(struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3bf94 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenScaleActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenScaleActorBy(struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3bcc4 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* AppendTweenRotateSceneComponentTo(struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3b9f4 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* AppendTweenRotateSceneComponentBy(struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3b724 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* AppendTweenRotateSceneComponentAroundPointByOffset(struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3b3dc // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* AppendTweenRotateSceneComponentAroundPoint(struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3b018 // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* AppendTweenRotateActorTo(struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3ad48 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* AppendTweenRotateActorBy(struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3aa78 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* AppendTweenRotateActorAroundPointByOffset(struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3a730 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenRotateActorAroundPoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* AppendTweenRotateActorAroundPoint(struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a3a36c // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveWidgetTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenMoveWidgetTo(struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3a130 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveWidgetBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenMoveWidgetBy(struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a39ef4 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenMoveSceneComponentTo(struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a39c24 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveSceneComponentBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenMoveSceneComponentBy(struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a39954 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveActorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenMoveActorTo(struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a39684 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMoveActorBy
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenMoveActorBy(struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a393b4 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMaterialVectorTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* AppendTweenMaterialVectorTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a39138 // Return & Params: Num(10) Size(0x40)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMaterialVectorFromTo
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* AppendTweenMaterialVectorFromTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a38e78 // Return & Params: Num(11) Size(0x50)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMaterialFloatTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenMaterialFloatTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a38c00 // Return & Params: Num(10) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenMaterialFloatFromTo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenMaterialFloatFromTo(struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a3894c // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenCustomVector2D
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* AppendTweenCustomVector2D(struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a386d8 // Return & Params: Num(10) Size(0x38)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenCustomVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* AppendTweenCustomVector(struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a38458 // Return & Params: Num(10) Size(0x40)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenCustomFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenCustomFloat(struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty mNumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a381e0 // Return & Params: Num(10) Size(0x30)

	// Object Name: Function TweenMaker.BaseTween.AppendTweenActorFollowSpline
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* AppendTweenActorFollowSpline(struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType mLoopType, float Delay, float TimeScale); // Offset: 0x101a37e28 // Return & Params: Num(14) Size(0x38)
};

// Object Name: Class TweenMaker.TweenContainer
// Size: 0x68 // Inherited bytes: 0x28
struct UTweenContainer : UObject {
	// Fields
	struct UTweenManagerComponent* OwningTweenManager; // Offset: 0x28 // Size: 0x08
	struct TArray<struct FParallelTween> mSequences; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x28]; // Offset: 0x40 // Size: 0x28

	// Functions

	// Object Name: Function TweenMaker.TweenContainer.TogglePauseTweenContainer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void TogglePauseTweenContainer(); // Offset: 0x101a4454c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TweenMaker.TweenContainer.SetTimeScale
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetTimeScale(float NewTimeScale); // Offset: 0x101a444d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.TweenContainer.SetLoop
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetLoop(IntProperty NumLoops, enum class ETweenLoopType LoopType); // Offset: 0x101a44418 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function TweenMaker.TweenContainer.ResumeTweenContainer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ResumeTweenContainer(); // Offset: 0x101a44404 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TweenMaker.TweenContainer.PauseTweenContainer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void PauseTweenContainer(); // Offset: 0x101a443f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function TweenMaker.TweenContainer.IsPaused
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	bool IsPaused(); // Offset: 0x101a443bc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function TweenMaker.TweenContainer.IsObjectTweeningInContainer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool IsObjectTweeningInContainer(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType, struct UBaseTween*& TweenFound); // Offset: 0x101a44294 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function TweenMaker.TweenContainer.DeleteTweensInContainerByObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void DeleteTweensInContainerByObject(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType); // Offset: 0x101a441c0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function TweenMaker.TweenContainer.DeleteTweenContainer
	// Flags: [Final|Native|Public|BlueprintCallable]
	void DeleteTweenContainer(); // Offset: 0x101a441ac // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class TweenMaker.TweenFloat
// Size: 0x1e8 // Inherited bytes: 0x98
struct UTweenFloat : UBaseTween {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0xb8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorHit; // Offset: 0xc8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorBeginOverlap; // Offset: 0xd8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentHit; // Offset: 0xe8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentBeginOverlap; // Offset: 0xf8 // Size: 0x10
	char pad_0x108[0xe0]; // Offset: 0x108 // Size: 0xe0

	// Functions

	// Object Name: Function TweenMaker.TweenFloat.OnPrimitiveComponentHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult& pHitResult); // Offset: 0x101a45234 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function TweenMaker.TweenFloat.OnPrimitiveComponentBeginOverlap
	// Flags: [Final|Native|Private|HasOutParms]
	void OnPrimitiveComponentBeginOverlap(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, IntProperty pOtherBodyIndex, bool bFromSweep, struct FHitResult& pSweepResult); // Offset: 0x101a45060 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function TweenMaker.TweenFloat.OnActorHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnActorHit(struct AActor* pThisActor, struct AActor* pOtherActor, struct FVector pNormalImpulse, struct FHitResult& pHit); // Offset: 0x101a44f14 // Return & Params: Num(4) Size(0xa8)

	// Object Name: Function TweenMaker.TweenFloat.OnActorBeginOverlap
	// Flags: [Final|Native|Private]
	void OnActorBeginOverlap(struct AActor* pThisActor, struct AActor* pOtherActor); // Offset: 0x101a44e60 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function TweenMaker.TweenFloat.GetCurrentValue
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	float GetCurrentValue(); // Offset: 0x101a44e44 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class TweenMaker.TweenFloatLatentFactory
// Size: 0x58 // Inherited bytes: 0x28
struct UTweenFloatLatentFactory : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetOpacityTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a4ca24 // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenWidgetAngleTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a4c7c4 // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenSceneComponentFollowSpline(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4c3f4 // Return & Params: Num(14) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4c088 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenRotateSceneComponentAroundPoint(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4bca0 // Return & Params: Num(15) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4b934 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenRotateActorAroundPoint(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4b54c // Return & Params: Num(15) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a4b2b0 // Return & Params: Num(10) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenMaterialFloatFromTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a4afd8 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenCustomFloat(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a4ad3c // Return & Params: Num(10) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_JoinLatentTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_JoinLatentTweenActorFollowSpline(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a4a96c // Return & Params: Num(14) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetOpacityTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a4a65c // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenWidgetAngleTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a4a34c // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenSceneComponentFollowSpline(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a49ec0 // Return & Params: Num(17) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a49a9c // Return & Params: Num(16) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenRotateSceneComponentAroundPoint(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a49600 // Return & Params: Num(18) Size(0x68)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPointByOffset(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a491dc // Return & Params: Num(16) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenRotateActorAroundPoint(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a48d40 // Return & Params: Num(18) Size(0x68)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a489f4 // Return & Params: Num(13) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenMaterialFloatFromTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a4866c // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenCustomFloat(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a48320 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_CreateLatentTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_CreateLatentTweenActorFollowSpline(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenFloat*& OutTween, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a47e94 // Return & Params: Num(17) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetOpacityTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a47bbc // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenWidgetAngleTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a478e4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenSceneComponentFollowSpline(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a47494 // Return & Params: Num(16) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a470ac // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenRotateSceneComponentAroundPoint(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a46c4c // Return & Params: Num(17) Size(0x60)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a46864 // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenRotateActorAroundPoint(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a46404 // Return & Params: Num(17) Size(0x60)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a460f0 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenMaterialFloatFromTo(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a45da0 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenCustomFloat(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a45a8c // Return & Params: Num(12) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatLatentFactory.BP_AppendLatentTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloatLatentFactory* BP_AppendLatentTweenActorFollowSpline(struct UTweenContainer*& TweenContainer, struct UTweenFloat*& OutTween, struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a4563c // Return & Params: Num(16) Size(0x48)
};

// Object Name: Class TweenMaker.TweenFloatStandardFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UTweenFloatStandardFactory : UObject {
	// Functions

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenWidgetOpacityTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a55758 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenWidgetAngleTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a55510 // Return & Params: Num(9) Size(0x30)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenSceneComponentFollowSpline(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a55150 // Return & Params: Num(14) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a54dfc // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenRotateSceneComponentAroundPoint(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a54a2c // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenRotateActorAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a546d8 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenRotateActorAroundPoint(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a54308 // Return & Params: Num(15) Size(0x50)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenMaterialFloatTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a54084 // Return & Params: Num(10) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenMaterialFloatFromTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a53dc4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenCustomFloat(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a53b40 // Return & Params: Num(10) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_JoinTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_JoinTweenActorFollowSpline(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a53780 // Return & Params: Num(14) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenWidgetOpacityTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a53444 // Return & Params: Num(12) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenWidgetAngleTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a53108 // Return & Params: Num(12) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenSceneComponentFollowSpline(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a52c00 // Return & Params: Num(18) Size(0x49)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateSceneComponentAroundPointByOffset(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a52768 // Return & Params: Num(17) Size(0x51)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateSceneComponentAroundPoint(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a52254 // Return & Params: Num(19) Size(0x61)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateActorAroundPointByOffset(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a51dbc // Return & Params: Num(17) Size(0x51)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateActorAroundPoint(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a518a8 // Return & Params: Num(19) Size(0x61)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenMaterialFloatTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a5152c // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenMaterialFloatFromTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a51174 // Return & Params: Num(14) Size(0x4c)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenCustomFloat(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a50dfc // Return & Params: Num(13) Size(0x44)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_CreateTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenActorFollowSpline(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenFloat*& Tween, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a508f4 // Return & Params: Num(18) Size(0x49)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetOpacityTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenWidgetOpacityTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a50634 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenWidgetAngleTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenWidgetAngleTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a50374 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenSceneComponentFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenSceneComponentFollowSpline(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4ff34 // Return & Params: Num(16) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4fb64 // Return & Params: Num(15) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateSceneComponentAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenRotateSceneComponentAroundPoint(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4f71c // Return & Params: Num(17) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPointByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenRotateActorAroundPointByOffset(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector PivotPoint, float OffsetAngle, enum class ETweenReferenceAxis ReferenceAxis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4f34c // Return & Params: Num(15) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenRotateActorAroundPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenRotateActorAroundPoint(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector PivotPoint, float StartingAngle, float EndingAngle, float Radius, struct FVector Axis, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4ef04 // Return & Params: Num(17) Size(0x58)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenMaterialFloatTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4ec08 // Return & Params: Num(12) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenMaterialFloatFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenMaterialFloatFromTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4e8d0 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenCustomFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenCustomFloat(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, float From, float To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4e5d4 // Return & Params: Num(12) Size(0x40)

	// Object Name: Function TweenMaker.TweenFloatStandardFactory.BP_AppendTweenActorFollowSpline
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UTweenFloat* BP_AppendTweenActorFollowSpline(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct USplineComponent* Spline, float Duration, bool ApplyRotation, bool ApplyScale, bool UseConstantSpeed, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a4e194 // Return & Params: Num(16) Size(0x40)
};

// Object Name: Class TweenMaker.TweenLinearColor
// Size: 0x168 // Inherited bytes: 0x98
struct UTweenLinearColor : UBaseTween {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0xa0]; // Offset: 0xc8 // Size: 0xa0

	// Functions

	// Object Name: Function TweenMaker.TweenLinearColor.GetCurrentValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FLinearColor GetCurrentValue(); // Offset: 0x101a56648 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class TweenMaker.TweenLinearColorLatentFactory
// Size: 0x58 // Inherited bytes: 0x28
struct UTweenLinearColorLatentFactory : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorTo(struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a57820 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_JoinLatentTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_JoinLatentTweenMaterialVectorFromTo(struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a5753c // Return & Params: Num(11) Size(0x58)

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenLinearColor*& OutTween, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a571ec // Return & Params: Num(13) Size(0x58)

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_CreateLatentTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_CreateLatentTweenMaterialVectorFromTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenLinearColor*& OutTween, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a56e58 // Return & Params: Num(14) Size(0x68)

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorTo(struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a56b40 // Return & Params: Num(12) Size(0x50)

	// Object Name: Function TweenMaker.TweenLinearColorLatentFactory.BP_AppendLatentTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColorLatentFactory* BP_AppendLatentTweenMaterialVectorFromTo(struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& OutTween, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a567e4 // Return & Params: Num(13) Size(0x60)
};

// Object Name: Class TweenMaker.TweenLinearColorStandardFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UTweenLinearColorStandardFactory : UObject {
	// Functions

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* BP_JoinTweenMaterialVectorTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a59194 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_JoinTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* BP_JoinTweenMaterialVectorFromTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a58ec8 // Return & Params: Num(11) Size(0x58)

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMaterialVectorTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& Tween, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a58b48 // Return & Params: Num(13) Size(0x54)

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_CreateTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMaterialVectorFromTo(struct UTweenManagerComponent* TweenManager, struct UMaterialInstanceDynamic*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenLinearColor*& Tween, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a58784 // Return & Params: Num(14) Size(0x64)

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* BP_AppendTweenMaterialVectorTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a58484 // Return & Params: Num(12) Size(0x50)

	// Object Name: Function TweenMaker.TweenLinearColorStandardFactory.BP_AppendTweenMaterialVectorFromTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenLinearColor* BP_AppendTweenMaterialVectorFromTo(struct UTweenContainer*& TweenContainer, struct UMaterialInstanceDynamic*& TweenTarget, struct FName ParameterName, struct FLinearColor From, struct FLinearColor To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a58140 // Return & Params: Num(13) Size(0x60)
};

// Object Name: Class TweenMaker.TweenManagerActor
// Size: 0x4b0 // Inherited bytes: 0x4b0
struct ATweenManagerActor : AActor {
	// Functions

	// Object Name: Function TweenMaker.TweenManagerActor.IsObjectTweening
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool IsObjectTweening(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType, struct UBaseTween*& TweenFound); // Offset: 0x101a59ed8 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function TweenMaker.TweenManagerActor.FindTweenByName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool FindTweenByName(struct FName TweenName, enum class ETweenGenericType TweenType, struct UBaseTween*& TweenFound); // Offset: 0x101a59dd4 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function TweenMaker.TweenManagerActor.DeleteAllTweensByObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool DeleteAllTweensByObject(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType); // Offset: 0x101a59d00 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function TweenMaker.TweenManagerActor.DeleteAllTweens
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty DeleteAllTweens(); // Offset: 0x101a59ccc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.TweenManagerActor.BP_CreateTweenContainerStatic
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenContainerStatic(struct UTweenContainer*& TweenContainer, IntProperty NumLoops, enum class ETweenLoopType LoopType, float TimeScale); // Offset: 0x101a59b94 // Return & Params: Num(4) Size(0x14)
};

// Object Name: Class TweenMaker.TweenManagerComponent
// Size: 0x288 // Inherited bytes: 0x178
struct UTweenManagerComponent : UActorComponent {
	// Fields
	struct TArray<struct FDistSquaredToTickInterval> ConfigTickLODInfo; // Offset: 0x178 // Size: 0x10
	struct TArray<struct UTweenContainer*> mTweenContainers; // Offset: 0x188 // Size: 0x10
	char pad_0x198[0xf0]; // Offset: 0x198 // Size: 0xf0

	// Functions

	// Object Name: Function TweenMaker.TweenManagerComponent.UpdateNameMap
	// Flags: [Final|Native|Private|HasOutParms]
	void UpdateNameMap(struct UBaseTween* pTween, struct FName& pPreviousName, struct FName& pNewName); // Offset: 0x101a5a864 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function TweenMaker.TweenManagerComponent.TweenDestroyed
	// Flags: [Final|Native|Private]
	void TweenDestroyed(struct UBaseTween* pTween); // Offset: 0x101a5a7e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function TweenMaker.TweenManagerComponent.IsObjectTweening
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool IsObjectTweening(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType, struct UBaseTween*& TweenFound); // Offset: 0x101a5a6c0 // Return & Params: Num(4) Size(0x19)

	// Object Name: Function TweenMaker.TweenManagerComponent.FindTweenByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool FindTweenByName(struct FName TweenName, enum class ETweenGenericType TweenType, struct UBaseTween*& TweenFound); // Offset: 0x101a5a5ac // Return & Params: Num(4) Size(0x19)

	// Object Name: Function TweenMaker.TweenManagerComponent.DeleteAllTweensByObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool DeleteAllTweensByObject(struct UObject*& TweenTarget, enum class ETweenGenericType TweensType); // Offset: 0x101a5a4d0 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function TweenMaker.TweenManagerComponent.DeleteAllTweens
	// Flags: [Final|Native|Public|BlueprintCallable]
	IntProperty DeleteAllTweens(); // Offset: 0x101a5a49c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function TweenMaker.TweenManagerComponent.BP_CreateTweenContainer
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void BP_CreateTweenContainer(struct UTweenContainer*& TweenContainer, IntProperty NumLoops, enum class ETweenLoopType LoopType, float TimeScale); // Offset: 0x101a5a354 // Return & Params: Num(4) Size(0x14)
};

// Object Name: Class TweenMaker.TweenRotator
// Size: 0x200 // Inherited bytes: 0x98
struct UTweenRotator : UBaseTween {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0xb8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorHit; // Offset: 0xc8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorBeginOverlap; // Offset: 0xd8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentHit; // Offset: 0xe8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentBeginOverlap; // Offset: 0xf8 // Size: 0x10
	char pad_0x108[0xf8]; // Offset: 0x108 // Size: 0xf8

	// Functions

	// Object Name: Function TweenMaker.TweenRotator.OnPrimitiveComponentHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult& pHitResult); // Offset: 0x101a5b0b0 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function TweenMaker.TweenRotator.OnPrimitiveComponentBeginOverlap
	// Flags: [Final|Native|Private|HasOutParms]
	void OnPrimitiveComponentBeginOverlap(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, IntProperty pOtherBodyIndex, bool bFromSweep, struct FHitResult& pSweepResult); // Offset: 0x101a5aedc // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function TweenMaker.TweenRotator.OnActorHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnActorHit(struct AActor* pThisActor, struct AActor* pOtherActor, struct FVector pNormalImpulse, struct FHitResult& pHit); // Offset: 0x101a5ad90 // Return & Params: Num(4) Size(0xa8)

	// Object Name: Function TweenMaker.TweenRotator.OnActorBeginOverlap
	// Flags: [Final|Native|Private]
	void OnActorBeginOverlap(struct AActor* pThisActor, struct AActor* pOtherActor); // Offset: 0x101a5acdc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function TweenMaker.TweenRotator.GetCurrentValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FRotator GetCurrentValue(); // Offset: 0x101a5aca0 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class TweenMaker.TweenRotatorLatentFactory
// Size: 0x58 // Inherited bytes: 0x28
struct UTweenRotatorLatentFactory : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a5d9e0 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a5d6ec // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorTo(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a5d3f8 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_JoinLatentTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_JoinLatentTweenRotateActorBy(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a5d104 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenRotator*& OutTween, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5cd5c // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenRotator*& OutTween, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5c9b4 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenRotator*& OutTween, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5c60c // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_CreateLatentTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_CreateLatentTweenRotateActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenRotator*& OutTween, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5c264 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5bef8 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5bb8c // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorTo(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5b820 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenRotatorLatentFactory.BP_AppendLatentTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotatorLatentFactory* BP_AppendLatentTweenRotateActorBy(struct UTweenContainer*& TweenContainer, struct UTweenRotator*& OutTween, struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a5b4b4 // Return & Params: Num(13) Size(0x48)
};

// Object Name: Class TweenMaker.TweenRotatorStandardFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UTweenRotatorStandardFactory : UObject {
	// Functions

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_JoinTweenRotateSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a608a8 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_JoinTweenRotateSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a605cc // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_JoinTweenRotateActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a602f0 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_JoinTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_JoinTweenRotateActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a60014 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenRotator*& Tween, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a5fbf4 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenRotator*& Tween, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a5f7d4 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenRotator*& Tween, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a5f3b4 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_CreateTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenRotateActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenRotator*& Tween, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a5ef94 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_AppendTweenRotateSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a5ec40 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_AppendTweenRotateSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a5e8ec // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_AppendTweenRotateActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FRotator To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a5e598 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenRotatorStandardFactory.BP_AppendTweenRotateActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenRotator* BP_AppendTweenRotateActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FRotator bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a5e244 // Return & Params: Num(13) Size(0x40)
};

// Object Name: Class TweenMaker.TweenVector
// Size: 0x1c0 // Inherited bytes: 0x98
struct UTweenVector : UBaseTween {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0xb8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorHit; // Offset: 0xc8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenActorBeginOverlap; // Offset: 0xd8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentHit; // Offset: 0xe8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenPrimitiveComponentBeginOverlap; // Offset: 0xf8 // Size: 0x10
	char pad_0x108[0xb8]; // Offset: 0x108 // Size: 0xb8

	// Functions

	// Object Name: Function TweenMaker.TweenVector.OnPrimitiveComponentHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnPrimitiveComponentHit(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, struct FVector pNormalImpulse, struct FHitResult& pHitResult); // Offset: 0x101a61c5c // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function TweenMaker.TweenVector.OnPrimitiveComponentBeginOverlap
	// Flags: [Final|Native|Private|HasOutParms]
	void OnPrimitiveComponentBeginOverlap(struct UPrimitiveComponent* pThisComponent, struct AActor* pOtherActor, struct UPrimitiveComponent* pOtherComp, IntProperty pOtherBodyIndex, bool bFromSweep, struct FHitResult& pSweepResult); // Offset: 0x101a61a88 // Return & Params: Num(6) Size(0xa8)

	// Object Name: Function TweenMaker.TweenVector.OnActorHit
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void OnActorHit(struct AActor* pThisActor, struct AActor* pOtherActor, struct FVector pNormalImpulse, struct FHitResult& pHit); // Offset: 0x101a6193c // Return & Params: Num(4) Size(0xa8)

	// Object Name: Function TweenMaker.TweenVector.OnActorBeginOverlap
	// Flags: [Final|Native|Private]
	void OnActorBeginOverlap(struct AActor* pThisActor, struct AActor* pOtherActor); // Offset: 0x101a61888 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function TweenMaker.TweenVector.GetCurrentValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector GetCurrentValue(); // Offset: 0x101a61864 // Return & Params: Num(1) Size(0xc)
};

// Object Name: Class TweenMaker.TweenVector2D
// Size: 0x128 // Inherited bytes: 0x98
struct UTweenVector2D : UBaseTween {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x98 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0xa8 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0xb8 // Size: 0x10
	char pad_0xC8[0x60]; // Offset: 0xc8 // Size: 0x60

	// Functions

	// Object Name: Function TweenMaker.TweenVector2D.GetCurrentValue
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetCurrentValue(); // Offset: 0x101a62064 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class TweenMaker.TweenVector2DLatentFactory
// Size: 0x58 // Inherited bytes: 0x28
struct UTweenVector2DLatentFactory : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenShearWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a651dc // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a64f7c // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenScaleWidgetBy(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a64d1c // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a64abc // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenMoveWidgetBy(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a6485c // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_JoinLatentTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_JoinLatentTweenCustomVector2D(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a645c4 // Return & Params: Num(10) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenShearWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a642b4 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a63fa4 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenScaleWidgetBy(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a63c94 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a63984 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenMoveWidgetBy(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a63674 // Return & Params: Num(12) Size(0x48)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_CreateLatentTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_CreateLatentTweenCustomVector2D(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector2D*& OutTween, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6332c // Return & Params: Num(13) Size(0x50)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenShearWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a63054 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a62d7c // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenScaleWidgetBy(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a62aa4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetTo(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a627cc // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenMoveWidgetBy(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a624f4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DLatentFactory.BP_AppendLatentTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2DLatentFactory* BP_AppendLatentTweenCustomVector2D(struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& OutTween, struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a621e4 // Return & Params: Num(12) Size(0x48)
};

// Object Name: Class TweenMaker.TweenVector2DStandardFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UTweenVector2DStandardFactory : UObject {
	// Functions

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenShearWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a68a1c // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenScaleWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a687d4 // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenScaleWidgetBy(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6858c // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenMoveWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a68344 // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenMoveWidgetBy(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a680fc // Return & Params: Num(9) Size(0x38)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_JoinTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_JoinTweenCustomVector2D(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a67e7c // Return & Params: Num(10) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenShearWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a67b40 // Return & Params: Num(12) Size(0x44)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a67804 // Return & Params: Num(12) Size(0x44)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleWidgetBy(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a674c8 // Return & Params: Num(12) Size(0x44)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveWidgetTo(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6718c // Return & Params: Num(12) Size(0x44)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveWidgetBy(struct UTweenManagerComponent* TweenManager, struct UWidget*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a66e50 // Return & Params: Num(12) Size(0x44)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_CreateTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenCustomVector2D(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector2D*& Tween, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a66adc // Return & Params: Num(13) Size(0x4c)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenShearWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenShearWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6681c // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenScaleWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6655c // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenScaleWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenScaleWidgetBy(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6629c // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenMoveWidgetTo(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a65fdc // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenMoveWidgetBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenMoveWidgetBy(struct UTweenContainer*& TweenContainer, struct UWidget*& TweenTarget, struct FVector2D bY, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a65d1c // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVector2DStandardFactory.BP_AppendTweenCustomVector2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector2D* BP_AppendTweenCustomVector2D(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, struct FVector2D From, struct FVector2D To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a65a24 // Return & Params: Num(12) Size(0x48)
};

// Object Name: Class TweenMaker.TweenVectorLatentFactory
// Size: 0x58 // Inherited bytes: 0x28
struct UTweenVectorLatentFactory : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnTweenStart; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenUpdate; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate OnTweenEnd; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6e8a0 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenScaleSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6e5ac // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6e2b8 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenScaleActorBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6dfc4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6dcd0 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenMoveSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6d9dc // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6d6e8 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenMoveActorBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale); // Offset: 0x101a6d3f4 // Return & Params: Num(11) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_JoinLatentTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_JoinLatentTweenCustomVector(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale); // Offset: 0x101a6d150 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6cda8 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenScaleSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6ca00 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6c658 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenScaleActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6c2b0 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6bf08 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenMoveSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6bb60 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6b7b8 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenMoveActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6b410 // Return & Params: Num(14) Size(0x50)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_CreateLatentTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_CreateLatentTweenCustomVector(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& OutTweenContainer, struct UTweenVector*& OutTween, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6b0bc // Return & Params: Num(13) Size(0x58)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6ad50 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenScaleSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6a9e4 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6a678 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenScaleActorBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6a30c // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a69fa0 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenMoveSceneComponentBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a69c34 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorTo(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a698c8 // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenMoveActorBy(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a6955c // Return & Params: Num(13) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorLatentFactory.BP_AppendLatentTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVectorLatentFactory* BP_AppendLatentTweenCustomVector(struct UTweenContainer*& TweenContainer, struct UTweenVector*& OutTween, struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale); // Offset: 0x101a69240 // Return & Params: Num(12) Size(0x50)
};

// Object Name: Class TweenMaker.TweenVectorStandardFactory
// Size: 0x28 // Inherited bytes: 0x28
struct UTweenVectorStandardFactory : UObject {
	// Functions

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenScaleSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a753c8 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenScaleSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a750ec // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenScaleActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a74e10 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenScaleActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a74b34 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenMoveSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a74858 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenMoveSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a7457c // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenMoveActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a742a0 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenMoveActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a73fc4 // Return & Params: Num(11) Size(0x38)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_JoinTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_JoinTweenCustomVector(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a73d38 // Return & Params: Num(10) Size(0x48)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a73918 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a734f8 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a730d8 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenScaleActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a72cb8 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveSceneComponentTo(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a72898 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveSceneComponentBy(struct UTweenManagerComponent* TweenManager, struct USceneComponent*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a72478 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveActorTo(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a72058 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenMoveActorBy(struct UTweenManagerComponent* TweenManager, struct AActor*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex, bool EnableTickLOD); // Offset: 0x101a71c38 // Return & Params: Num(15) Size(0x49)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_CreateTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void BP_CreateTweenCustomVector(struct UTweenManagerComponent* TweenManager, struct UObject*& TweenTarget, struct UTweenContainer*& TweenContainer, struct UTweenVector*& Tween, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a718b8 // Return & Params: Num(13) Size(0x54)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenScaleSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a71564 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenScaleSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a71210 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenScaleActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a70ebc // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenScaleActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenScaleActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a70b68 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenMoveSceneComponentTo(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a70814 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveSceneComponentBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenMoveSceneComponentBy(struct UTweenContainer*& TweenContainer, struct USceneComponent*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a704c0 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenMoveActorTo(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector To, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a7016c // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenMoveActorBy
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenMoveActorBy(struct UTweenContainer*& TweenContainer, struct AActor*& TweenTarget, struct FVector bY, float Duration, enum class ETweenEaseType EaseType, bool DeleteTweenOnHit, bool DeleteTweenOnOverlap, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6fe18 // Return & Params: Num(13) Size(0x40)

	// Object Name: Function TweenMaker.TweenVectorStandardFactory.BP_AppendTweenCustomVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct UTweenVector* BP_AppendTweenCustomVector(struct UTweenContainer*& TweenContainer, struct UObject*& TweenTarget, struct FVector From, struct FVector To, float Duration, enum class ETweenEaseType EaseType, IntProperty NumLoops, enum class ETweenLoopType LoopType, float Delay, float TimeScale, IntProperty SequenceIndex); // Offset: 0x101a6fb14 // Return & Params: Num(12) Size(0x50)
};

