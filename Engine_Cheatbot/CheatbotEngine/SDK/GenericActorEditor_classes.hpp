#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class GenericActorEditor.ActorEditorActorComponent
// Size: 0x230 // Inherited bytes: 0x178
struct UActorEditorActorComponent : UActorComponent {
	// Fields
	char pad_0x178[0x58]; // Offset: 0x178 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x1d0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x220 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorAnimInstanceBase
// Size: 0x3f0 // Inherited bytes: 0x3f0
struct UActorEditorAnimInstanceBase : UAnimInstance {
	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences
	// Flags: [Native|Public|BlueprintCallable]
	void ClearAnimReferences(); // Offset: 0x101cf000c // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GenericActorEditor.ActorEditorBoxComponent
// Size: 0xac0 // Inherited bytes: 0x9f0
struct UActorEditorBoxComponent : UBoxComponent {
	// Fields
	char pad_0x9F0[0x68]; // Offset: 0x9f0 // Size: 0x68
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa58 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xaa8 // Size: 0x10
	char pad_0xAB8[0x8]; // Offset: 0xab8 // Size: 0x08
};

// Object Name: Class GenericActorEditor.ActorEditorCameraComponent
// Size: 0xa60 // Inherited bytes: 0x9a0
struct UActorEditorCameraComponent : UCameraComponent {
	// Fields
	char pad_0x9A0[0x60]; // Offset: 0x9a0 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa00 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xa50 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorCapsuleComponent
// Size: 0xad0 // Inherited bytes: 0xa10
struct UActorEditorCapsuleComponent : UCapsuleComponent {
	// Fields
	char pad_0xA10[0x60]; // Offset: 0xa10 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa70 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xac0 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorCharacter
// Size: 0x9a0 // Inherited bytes: 0x9a0
struct AActorEditorCharacter : ALuaCharacter {
};

// Object Name: Class GenericActorEditor.ActorEditorCharacterMovementComponent
// Size: 0x910 // Inherited bytes: 0x810
struct UActorEditorCharacterMovementComponent : UCharacterMovementComponent {
	// Fields
	char pad_0x810[0x50]; // Offset: 0x810 // Size: 0x50
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x860 // Size: 0x50
	struct FActorEditorCharacterMovementSyncData CharacterMovementSyncData; // Offset: 0x8b0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x900 // Size: 0x10

	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData
	// Flags: [Final|Native|Protected]
	void OnRep_CharacterMovementSyncData(); // Offset: 0x101cf0678 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class GenericActorEditor.ActorEditorComponentBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UActorEditorComponentBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnregisterComponent(struct UActorComponent* InComponent); // Offset: 0x101cf1464 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWidgetOpacityFromTexture(struct UWidgetComponent* InComp, float Opacity); // Offset: 0x101cf13b4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetWidgetDrawAtDesiredSize(struct UWidgetComponent* InComp, bool bDrawAtDesiredSize); // Offset: 0x101cf12fc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetParticleSystemAutoDestroy(struct UParticleSystemComponent* InComp, bool bAutoDestroy); // Offset: 0x101cf1244 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetMobility(struct USceneComponent* InSceneComp, enum class EComponentMobility NewMobility); // Offset: 0x101cf1194 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void SetComponentAutoActivate(struct UActorComponent* InComponent, bool bAutoActivate); // Offset: 0x101cf10dc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool SetActorRootComponent(struct AActor* InActor, struct USceneComponent* NewRootComponent); // Offset: 0x101cf1028 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void ReregisterComponent(struct UActorComponent* InComponent); // Offset: 0x101cf0fb4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RegisterComponent(struct UActorComponent* InComponent); // Offset: 0x101cf0f40 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsSimulatingPhysics(struct UPrimitiveComponent* InComp); // Offset: 0x101cf0ec4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool IsComponentRegistered(struct UActorComponent* InComponent); // Offset: 0x101cf0e48 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetParticleSystemAutoDestroy(struct UParticleSystemComponent* InComp); // Offset: 0x101cf0dcc // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetFloatParameter(struct UParticleSystemComponent* InComp, struct FName InName); // Offset: 0x101cf0d18 // Return & Params: Num(3) Size(0x14)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void GetComponentBounds(struct USceneComponent* InSceneComp, struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // Offset: 0x101cf0bc0 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	enum class ECollisionTraceFlag GetCollisionTraceFlag(struct UPrimitiveComponent* InComp); // Offset: 0x101cf0b44 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	struct FTransform GetBoneTransform(struct USkinnedMeshComponent* InComp, IntProperty BoneIdx, struct FTransform& LocalToWorld); // Offset: 0x101cf0a18 // Return & Params: Num(4) Size(0x70)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	struct FVector GetBoneLocation(struct USkinnedMeshComponent* InComp, struct FName BoneName, enum class EBoneSpaces Space); // Offset: 0x101cf0924 // Return & Params: Num(4) Size(0x20)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct USceneComponent* GetActorRootComponent(struct AActor* InActor); // Offset: 0x101cf08a8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ChangeRootComponent(struct AActor* InActor, struct USceneComponent* NewRootComponent); // Offset: 0x101cf07f4 // Return & Params: Num(3) Size(0x11)
};

// Object Name: Class GenericActorEditor.ActorEditorDecoratorActor
// Size: 0x660 // Inherited bytes: 0x660
struct AActorEditorDecoratorActor : ADecoratorActor {
};

// Object Name: Class GenericActorEditor.ActorEditorDisableTransformReplicationInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UActorEditorDisableTransformReplicationInterface : UInterface {
	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication
	// Flags: [Native|Public|BlueprintCallable]
	void SetDisableTransformReplication(bool bInDisable); // Offset: 0x101cf1c64 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class GenericActorEditor.ActorEditorMovementComponent
// Size: 0x270 // Inherited bytes: 0x1b8
struct UActorEditorMovementComponent : UMovementComponent {
	// Fields
	char pad_0x1B8[0x58]; // Offset: 0x1b8 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x210 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x260 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorParticleSystemComponent
// Size: 0xdd0 // Inherited bytes: 0xd00
struct UActorEditorParticleSystemComponent : UParticleSystemComponent {
	// Fields
	char pad_0xD00[0x68]; // Offset: 0xd00 // Size: 0x68
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xd68 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xdb8 // Size: 0x10
	char pad_0xDC8[0x8]; // Offset: 0xdc8 // Size: 0x08

	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetEmitterInstanceNum(); // Offset: 0x101cf1f60 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class GenericActorEditor.ActorEditorPawn
// Size: 0x5c8 // Inherited bytes: 0x5c8
struct AActorEditorPawn : ALuaPawn {
};

// Object Name: Class GenericActorEditor.ActorEditorSceneComponent
// Size: 0x460 // Inherited bytes: 0x3a0
struct UActorEditorSceneComponent : USceneComponent {
	// Fields
	char pad_0x3A0[0x58]; // Offset: 0x3a0 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x3f8 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x448 // Size: 0x10
	char pad_0x458[0x8]; // Offset: 0x458 // Size: 0x08
};

// Object Name: Class GenericActorEditor.ActorEditorSkeletalMeshComponent
// Size: 0x1410 // Inherited bytes: 0x1350
struct UActorEditorSkeletalMeshComponent : USkeletalMeshComponent {
	// Fields
	char pad_0x1350[0x60]; // Offset: 0x1350 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x13b0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x1400 // Size: 0x10

	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset
	// Flags: [Native|Public|BlueprintCallable]
	void SetSkeletalModelPreset(StrProperty ModePresetIDStr); // Offset: 0x101cf2380 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset
	// Flags: [Native|Public|BlueprintCallable]
	void PlaySkeletalAnimationPreset(StrProperty AnimationPresetIDStr); // Offset: 0x101cf22e0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class GenericActorEditor.ActorEditorSphereComponent
// Size: 0xab0 // Inherited bytes: 0x9f0
struct UActorEditorSphereComponent : USphereComponent {
	// Fields
	char pad_0x9F0[0x60]; // Offset: 0x9f0 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xa50 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xaa0 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorSplineComponent
// Size: 0xb80 // Inherited bytes: 0xab0
struct UActorEditorSplineComponent : USplineComponent {
	// Fields
	char pad_0xAB0[0x68]; // Offset: 0xab0 // Size: 0x68
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xb18 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xb68 // Size: 0x10
	char pad_0xB78[0x8]; // Offset: 0xb78 // Size: 0x08
};

// Object Name: Class GenericActorEditor.ActorEditorSpringArmComponent
// Size: 0x510 // Inherited bytes: 0x450
struct UActorEditorSpringArmComponent : USpringArmComponent {
	// Fields
	char pad_0x450[0x60]; // Offset: 0x450 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x4b0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x500 // Size: 0x10
};

// Object Name: Class GenericActorEditor.ActorEditorStaticMeshComponent
// Size: 0xca0 // Inherited bytes: 0xbd0
struct UActorEditorStaticMeshComponent : UStaticMeshComponent {
	// Fields
	char pad_0xBD0[0x60]; // Offset: 0xbd0 // Size: 0x60
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xc30 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xc80 // Size: 0x10
	StrProperty StaticMeshPath; // Offset: 0xc90 // Size: 0x10

	// Functions

	// Object Name: Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool SetStaticMeshPath(StrProperty InMeshPath); // Offset: 0x101cf2968 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath
	// Flags: [Final|Native|Private]
	void OnRep_StaticMeshPath(StrProperty OldPath); // Offset: 0x101cf28d0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class GenericActorEditor.ActorEditorWidgetComponent
// Size: 0xc60 // Inherited bytes: 0xb90
struct UActorEditorWidgetComponent : UWidgetComponent {
	// Fields
	char pad_0xB90[0x68]; // Offset: 0xb90 // Size: 0x68
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xbf8 // Size: 0x50
	bool bFaceCamera; // Offset: 0xc48 // Size: 0x01
	char pad_0xC49[0x7]; // Offset: 0xc49 // Size: 0x07
	StrProperty LuaFilePath; // Offset: 0xc50 // Size: 0x10
};

