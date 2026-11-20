#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class PhotonBlast.PhotonDestructibleMeshActor
// Size: 0x4c0 // Inherited bytes: 0x4b0
struct APhotonDestructibleMeshActor : AActor {
	// Fields
	struct UPhotonDestructibleMeshComponent* PhotonDestructibleMeshComponent; // Offset: 0x4b0 // Size: 0x08
	char DestructibleMeshActorReplication : 1; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B8_1 : 7; // Offset: 0x4b8 // Size: 0x01
	char pad_0x4B9[0x7]; // Offset: 0x4b9 // Size: 0x07
};

// Object Name: Class PhotonBlast.PhotonReplicationStaticMeshComponent
// Size: 0xcb0 // Inherited bytes: 0xbd0
struct UPhotonReplicationStaticMeshComponent : UStaticMeshComponent {
	// Fields
	char pad_0xBD0[0x58]; // Offset: 0xbd0 // Size: 0x58
	IntProperty ClusterUniqueID; // Offset: 0xc28 // Size: 0x04
	bool bCanMove; // Offset: 0xc2c // Size: 0x01
	enum class EAOIEntityType AOIEntityType; // Offset: 0xc2d // Size: 0x01
	enum class EClusterEntityState AOIEntityState; // Offset: 0xc2e // Size: 0x01
	char ClusterReplicationOpen : 1; // Offset: 0xc2f // Size: 0x01
	char pad_0xC2F_1 : 7; // Offset: 0xc2f // Size: 0x01
	struct UDestructionSubsystem* SubsystemPtr; // Offset: 0xc30 // Size: 0x08
	char pad_0xC38[0x8]; // Offset: 0xc38 // Size: 0x08
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xc40 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xc90 // Size: 0x10
	char pad_0xCA0[0x10]; // Offset: 0xca0 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101f28f30 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterFromCluster(); // Offset: 0x101f28f1c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable
	// Flags: [Native|Public|BlueprintCallable]
	void SetMoveable(bool Value); // Offset: 0x101f28e90 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterUniqueID(IntProperty InClusterID); // Offset: 0x101f28e0c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterEntityState(enum class EClusterEntityState EntityState); // Offset: 0x101f28d94 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101f28d18 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterToCluster(); // Offset: 0x101f28d04 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkPropDirty(IntProperty PropIndex); // Offset: 0x101f28c88 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PhotonBlast.PhotonDestructibleMeshComponent
// Size: 0xf40 // Inherited bytes: 0xcb0
struct UPhotonDestructibleMeshComponent : UPhotonReplicationStaticMeshComponent {
	// Fields
	char EnableImpactDamage : 1; // Offset: 0xcb0 // Size: 0x01
	char pad_0xCB0_1 : 7; // Offset: 0xcb0 // Size: 0x01
	char pad_0xCB1[0x3]; // Offset: 0xcb1 // Size: 0x03
	struct FPhotonDestructibleImpactParam ImpactParam; // Offset: 0xcb4 // Size: 0x08
	char SynchronizeChunkData : 1; // Offset: 0xcbc // Size: 0x01
	char pad_0xCBC_1 : 7; // Offset: 0xcbc // Size: 0x01
	char pad_0xCBD[0x3]; // Offset: 0xcbd // Size: 0x03
	struct UPhotonDestructibleMesh* PhotonDestructibleMesh; // Offset: 0xcc0 // Size: 0x08
	enum class ECollisionEnabled FragmentsCollisionEnabled; // Offset: 0xcc8 // Size: 0x01
	char pad_0xCC9[0x7]; // Offset: 0xcc9 // Size: 0x07
	struct FName FragmentsCollisionProfileName; // Offset: 0xcd0 // Size: 0x08
	char InitialVisible : 1; // Offset: 0xcd8 // Size: 0x01
	char pad_0xCD8_1 : 7; // Offset: 0xcd8 // Size: 0x01
	char pad_0xCD9[0x7]; // Offset: 0xcd9 // Size: 0x07
	struct FPhotonHideReplicationData HideReplicationData; // Offset: 0xce0 // Size: 0x30
	struct FPhotonDetachReplicationData DetachReplicationData; // Offset: 0xd10 // Size: 0x30
	struct FPhotonSlideReplicationData SlideReplicationData; // Offset: 0xd40 // Size: 0x28
	float FragmentsMaxHp; // Offset: 0xd68 // Size: 0x04
	char EnableCheckedSupportedFloor : 1; // Offset: 0xd6c // Size: 0x01
	char EnableSeverImpactPoint : 1; // Offset: 0xd6c // Size: 0x01
	char pad_0xD6C_2 : 6; // Offset: 0xd6c // Size: 0x01
	char pad_0xD6D[0x1d3]; // Offset: 0xd6d // Size: 0x1d3

	// Functions

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetupFragmentsMaxHp(float Hp); // Offset: 0x101f203cc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate
	// Flags: [Final|Native|Public]
	void SetServerDamagedDelegate(DelegateProperty InDelegate); // Offset: 0x101f20348 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFracturedMesh(struct UPhotonDestructibleMesh* InFracturedMesh, bool Force); // Offset: 0x101f20288 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void Server_OnComponentHitAction(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x101f20100 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool Server_DamageFragmentsByRadius(struct FVector4& WorldImpactVelocityAndRotateStrength, struct FVector4& WorldImpactPointAndSpreadStrength, float Hp, float Radius, bool Attenuation); // Offset: 0x101f1ff48 // Return & Params: Num(6) Size(0x2a)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool Server_DamageFragmentsByHp(struct TArray<IntProperty>& FragmentsIndex, struct TArray<float>& Hp, struct FVector4& WorldImpactPointAndSpreadStrength, struct FVector4& WorldImpactVelocityAndRotateSpeed); // Offset: 0x101f1fd68 // Return & Params: Num(5) Size(0x41)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_SlideData
	// Flags: [Final|Native|Public]
	void OnRep_SlideData(); // Offset: 0x101f1fd54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData
	// Flags: [Final|Native|Public]
	void OnRep_ImpactData(); // Offset: 0x101f1fd40 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState
	// Flags: [Final|Native|Public]
	void OnRep_FragmentsState(); // Offset: 0x101f1fd2c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFragmentCanDestroy(IntProperty FragmentItemIndex); // Offset: 0x101f1fc98 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFragmentCanBeDamaged(IntProperty FragmentItemIndex); // Offset: 0x101f1fbec // Return & Params: Num(2) Size(0x5)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonDestructibleMesh* GetPhotonDestructibleMesh(); // Offset: 0x101f1fbd0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetFragmentTransform(IntProperty FragmentIndex, struct FTransform& OutTransform, bool WorldSpace); // Offset: 0x101f1fa9c // Return & Params: Num(4) Size(0x42)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetFragmentsWorldPosition(IntProperty FragmentIndex, struct FVector& FragmentPosition); // Offset: 0x101f1f9c8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsNotDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetFragmentsNotDamaged(struct TArray<IntProperty>& Fragments, bool IsReturnNotDestroyedFragments); // Offset: 0x101f1f8c4 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetFragmentsDamaged(struct TArray<IntProperty>& Fragments); // Offset: 0x101f1f80c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetFragmentsByRadius(struct FVector& HitPoint, float Radius, struct TArray<IntProperty>& FragmentsIndex, struct TArray<float>& ImpactDistance, IntProperty DamageType); // Offset: 0x101f1f610 // Return & Params: Num(6) Size(0x35)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetFragmentItemCount(); // Offset: 0x101f1f5f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetFragmentBounds(IntProperty FragmentIndex, struct FBox& OutBox, bool WorldSpace); // Offset: 0x101f1f4dc // Return & Params: Num(4) Size(0x22)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonFracturedMesh* GetFracturedMesh(); // Offset: 0x101f1f4b8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.ClientGetFragmentsNotDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ClientGetFragmentsNotDamaged(struct TArray<IntProperty>& Fragments, bool IsReturnNotDestroyedFragments); // Offset: 0x101f1f3b4 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.ClientGetFragmentsDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ClientGetFragmentsDamaged(struct TArray<IntProperty>& Fragments); // Offset: 0x101f1f2fc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function PhotonBlast.PhotonDestructibleMeshComponent.ClientDamageAndInitalFragments
	// Flags: [Native|Public|HasOutParms]
	void ClientDamageAndInitalFragments(struct TArray<IntProperty>& DamagedFragmentItemIndex, struct TArray<IntProperty>& InitialFragmentItemIndex); // Offset: 0x101f1f1dc // Return & Params: Num(2) Size(0x20)
};

// Object Name: Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent
// Size: 0xe00 // Inherited bytes: 0xd20
struct UPhotonReplicationInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	// Fields
	char pad_0xD20[0x58]; // Offset: 0xd20 // Size: 0x58
	IntProperty ClusterUniqueID; // Offset: 0xd78 // Size: 0x04
	bool bCanMove; // Offset: 0xd7c // Size: 0x01
	enum class EAOIEntityType AOIEntityType; // Offset: 0xd7d // Size: 0x01
	enum class EClusterEntityState AOIEntityState; // Offset: 0xd7e // Size: 0x01
	char ClusterReplicationOpen : 1; // Offset: 0xd7f // Size: 0x01
	char pad_0xD7F_1 : 7; // Offset: 0xd7f // Size: 0x01
	struct UDestructionSubsystem* SubsystemPtr; // Offset: 0xd80 // Size: 0x08
	char pad_0xD88[0x8]; // Offset: 0xd88 // Size: 0x08
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0xd90 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0xde0 // Size: 0x10
	char pad_0xDF0[0x10]; // Offset: 0xdf0 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101f2832c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterFromCluster(); // Offset: 0x101f28318 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable
	// Flags: [Native|Public|BlueprintCallable]
	void SetMoveable(bool Value); // Offset: 0x101f2828c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterUniqueID(IntProperty InClusterID); // Offset: 0x101f28208 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterEntityState(enum class EClusterEntityState EntityState); // Offset: 0x101f28190 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101f28114 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterToCluster(); // Offset: 0x101f28100 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkPropDirty(IntProperty PropIndex); // Offset: 0x101f28084 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PhotonBlast.PhotonInstancedDestructibleMeshComponent
// Size: 0xfd0 // Inherited bytes: 0xe00
struct UPhotonInstancedDestructibleMeshComponent : UPhotonReplicationInstancedStaticMeshComponent {
	// Fields
	char EnableImpactDamage : 1; // Offset: 0xe00 // Size: 0x01
	char pad_0xE00_1 : 7; // Offset: 0xe00 // Size: 0x01
	char pad_0xE01[0x3]; // Offset: 0xe01 // Size: 0x03
	struct FPhotonDestructibleImpactParam ImpactParam; // Offset: 0xe04 // Size: 0x08
	char pad_0xE0C[0x4]; // Offset: 0xe0c // Size: 0x04
	struct UPhotonDestructibleMesh* PhotonDestructibleMesh; // Offset: 0xe10 // Size: 0x08
	enum class ECollisionEnabled FragmentsCollisionEnabled; // Offset: 0xe18 // Size: 0x01
	char pad_0xE19[0x7]; // Offset: 0xe19 // Size: 0x07
	struct FName FragmentsCollisionProfileName; // Offset: 0xe20 // Size: 0x08
	struct TArray<struct FPhotonDestructibleFragmentStateData> HideInstanceReplicationData; // Offset: 0xe28 // Size: 0x10
	struct TArray<struct FPhotonDestructibleImpactData> DetachInstanceReplicationData; // Offset: 0xe38 // Size: 0x10
	float FragmentsMaxHp; // Offset: 0xe48 // Size: 0x04
	char EnableCheckedSupportedFloor : 1; // Offset: 0xe4c // Size: 0x01
	char EnableSeverImpactPoint : 1; // Offset: 0xe4c // Size: 0x01
	char pad_0xE4C_2 : 6; // Offset: 0xe4c // Size: 0x01
	char pad_0xE4D[0x183]; // Offset: 0xe4d // Size: 0x183

	// Functions

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetupFragmentsMaxHp(float Hp); // Offset: 0x101f275f4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate
	// Flags: [Final|Native|Public]
	void SetServerDamagedDelegate(DelegateProperty InDelegate); // Offset: 0x101f27570 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetPhysMaterialOverride
	// Flags: [Native|Public|BlueprintCallable]
	void SetPhysMaterialOverride(struct UPhysicalMaterial* NewPhysMaterial); // Offset: 0x101f274ec // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFracturedMesh(struct UPhotonDestructibleMesh* InFracturedMesh, bool Force); // Offset: 0x101f2742c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	void Server_OnComponentHitAction(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Offset: 0x101f272a4 // Return & Params: Num(5) Size(0xb0)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool Server_DamageFragmentsByRadius(struct FVector4& WorldImpactVelocity, struct FVector4& WorldHitPointAndSpreadSpeed, float Hp, float Radius, bool Attenuation); // Offset: 0x101f270ec // Return & Params: Num(6) Size(0x2a)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<IntProperty> ReplaceAllInstances(struct TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices); // Offset: 0x101f26fb8 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData
	// Flags: [Final|Native|Public]
	void OnRep_ImpactData(); // Offset: 0x101f26fa4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState
	// Flags: [Final|Native|Public]
	void OnRep_FragmentsState(); // Offset: 0x101f26f90 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	bool IsFragmentCanDestroy(IntProperty InstanceIndex, IntProperty FragmentItemIndex); // Offset: 0x101f26ec4 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonDestructibleMesh* GetPhotonDestructibleMesh(); // Offset: 0x101f26ea8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstancesOverlappingSphere
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct TArray<IntProperty> GetInstancesOverlappingSphere(struct FVector& Center, float Radius, bool bSphereInWorldSpace); // Offset: 0x101f26d5c // Return & Params: Num(4) Size(0x28)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetInstanceItemCount(); // Offset: 0x101f26d40 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	bool GetFragmentTransform(IntProperty InstanceIndex, IntProperty FragmentIndex, struct FTransform& OutTransform, bool WorldSpace); // Offset: 0x101f26bd4 // Return & Params: Num(5) Size(0x42)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetFragmentsWorldPosition(IntProperty InstanceIndex, IntProperty FragmentIndex, struct FVector& FragmentPosition); // Offset: 0x101f26ac8 // Return & Params: Num(4) Size(0x15)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsNotDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetFragmentsNotDamaged(IntProperty InstanceIndex, struct TArray<IntProperty>& FragmentsNoDamaged, bool IsReturnNotDestroyedFragments); // Offset: 0x101f26988 // Return & Params: Num(4) Size(0x1a)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool GetFragmentsDamaged(IntProperty InstanceIndex, struct TArray<IntProperty>& FragmentsDamaged); // Offset: 0x101f26894 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetFragmentItemCount(); // Offset: 0x101f2686c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentBounds
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool GetFragmentBounds(IntProperty InstanceIndex, IntProperty FragmentIndex, struct FBox& OutBox, bool WorldSpace); // Offset: 0x101f26718 // Return & Params: Num(5) Size(0x26)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonFracturedMesh* GetFracturedMesh(); // Offset: 0x101f266f4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddInstanceWorldSpace(struct FTransform& WorldTransform); // Offset: 0x101f26640 // Return & Params: Num(2) Size(0x34)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	struct TArray<IntProperty> AddInstances(struct TArray<struct FTransform>& InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty); // Offset: 0x101f264bc // Return & Params: Num(4) Size(0x28)

	// Object Name: Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	IntProperty AddInstance(struct FTransform& InstanceTransform); // Offset: 0x101f26400 // Return & Params: Num(2) Size(0x34)
};

// Object Name: Class PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent
// Size: 0x10b0 // Inherited bytes: 0xfd0
struct UPhotonHierarchicalInstancedDestructibleMeshComponent : UPhotonInstancedDestructibleMeshComponent {
	// Fields
	char pad_0xFD0[0x10]; // Offset: 0xfd0 // Size: 0x10
	struct TArray<IntProperty> SortedInstances; // Offset: 0xfe0 // Size: 0x10
	IntProperty NumBuiltInstances; // Offset: 0xff0 // Size: 0x04
	char pad_0xFF4[0x4]; // Offset: 0xff4 // Size: 0x04
	struct FBox BuiltInstanceBounds; // Offset: 0xff8 // Size: 0x1c
	struct FBox UnbuiltInstanceBounds; // Offset: 0x1014 // Size: 0x1c
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; // Offset: 0x1030 // Size: 0x10
	struct TArray<IntProperty> UnbuiltInstanceIndexList; // Offset: 0x1040 // Size: 0x10
	char bEnableDensityScaling : 1; // Offset: 0x1050 // Size: 0x01
	char pad_0x1050_1 : 7; // Offset: 0x1050 // Size: 0x01
	char pad_0x1051[0x27]; // Offset: 0x1051 // Size: 0x27
	IntProperty OcclusionLayerNumNodes; // Offset: 0x1078 // Size: 0x04
	struct FBoxSphereBounds CacheMeshExtendedBounds; // Offset: 0x107c // Size: 0x1c
	char pad_0x1098[0x8]; // Offset: 0x1098 // Size: 0x08
	IntProperty MinInstancesToSplitNode; // Offset: 0x10a0 // Size: 0x04
	char pad_0x10A4[0xc]; // Offset: 0x10a4 // Size: 0x0c

	// Functions

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.ShowInstances
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	bool ShowInstances(struct TArray<IntProperty>& InstanceIndices, struct TArray<struct FTransform>& InstanceTransforms); // Offset: 0x101f216e0 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.RemoveInstances
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool RemoveInstances(struct TArray<IntProperty>& InstancesToRemove); // Offset: 0x101f21620 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class PhotonBlast.ClusterReplicationVolume
// Size: 0x530 // Inherited bytes: 0x4e0
struct AClusterReplicationVolume : AVolume {
	// Fields
	bool bForReplication; // Offset: 0x4e0 // Size: 0x01
	bool bForClusterDivide; // Offset: 0x4e1 // Size: 0x01
	char pad_0x4E2[0x6]; // Offset: 0x4e2 // Size: 0x06
	struct FClusterAOIConfig ClusterConfig; // Offset: 0x4e8 // Size: 0x38
	struct FClusterReplicationProxy ClusterReplication; // Offset: 0x520 // Size: 0x10
};

// Object Name: Class PhotonBlast.ClusterReplicationSelectVolume
// Size: 0x4e8 // Inherited bytes: 0x4e0
struct AClusterReplicationSelectVolume : AVolume {
	// Fields
	int16_t LevelGroup; // Offset: 0x4e0 // Size: 0x02
	char pad_0x4E2[0x6]; // Offset: 0x4e2 // Size: 0x06
};

// Object Name: Class PhotonBlast.MovieScenePhotonDestructibleSection
// Size: 0x2e0 // Inherited bytes: 0xb0
struct UMovieScenePhotonDestructibleSection : UMovieSceneSection {
	// Fields
	struct FIntegralCurve PhotonDestructibleKeys; // Offset: 0xb0 // Size: 0x70
	struct FRichCurve TimeSpeedCurve; // Offset: 0x120 // Size: 0x70
	struct FRichCurve SpreadSpeedCurve; // Offset: 0x190 // Size: 0x70
	struct FRichCurve VelocitySpeedCurve; // Offset: 0x200 // Size: 0x70
	struct FRichCurve RotationSpeedCurve; // Offset: 0x270 // Size: 0x70
};

// Object Name: Class PhotonBlast.MovieScenePhotonDestructibleTrack
// Size: 0x68 // Inherited bytes: 0x58
struct UMovieScenePhotonDestructibleTrack : UMovieSceneNameableTrack {
	// Fields
	struct TArray<struct UMovieSceneSection*> PhotonDestructibleSections; // Offset: 0x58 // Size: 0x10
};

// Object Name: Class PhotonBlast.PhotonDestructibleMesh
// Size: 0x3f0 // Inherited bytes: 0x270
struct UPhotonDestructibleMesh : UStaticMesh {
	// Fields
	struct UPhotonFracturedMesh* FracturedMesh; // Offset: 0x270 // Size: 0x08
	enum class EPhotonDestructibleAction DestructibleAction; // Offset: 0x278 // Size: 0x01
	char UseDefaultParameter : 1; // Offset: 0x279 // Size: 0x01
	char pad_0x279_1 : 7; // Offset: 0x279 // Size: 0x01
	enum class EPhotonCollisionType FragmentCollisonType; // Offset: 0x27a // Size: 0x01
	char pad_0x27B[0x5]; // Offset: 0x27b // Size: 0x05
	struct FPhotonDestructibleMeshPhysicsDetachData PhysicsDetachData; // Offset: 0x280 // Size: 0xc0
	char pad_0x340[0xb0]; // Offset: 0x340 // Size: 0xb0
};

// Object Name: Class PhotonBlast.DestructionSubsystem
// Size: 0x5b8 // Inherited bytes: 0x5b8
struct UDestructionSubsystem : UClusterReplicationSubsystem {
};

// Object Name: Class PhotonBlast.PhotonFracturedMesh
// Size: 0x100 // Inherited bytes: 0x28
struct UPhotonFracturedMesh : UObject {
	// Fields
	struct TArray<struct UPhotonFracturedFragmentInfo*> FracturedFragmentInfo; // Offset: 0x28 // Size: 0x10
	struct TArray<IntProperty> InsideMaterialIndex; // Offset: 0x38 // Size: 0x10
	MapProperty FragmentIndex2FragmentInfo; // Offset: 0x48 // Size: 0x50
	MapProperty FragmentName2FragmentInfo; // Offset: 0x98 // Size: 0x50
	struct FSupportGraph SupportGraph; // Offset: 0xe8 // Size: 0x18
};

// Object Name: Class PhotonBlast.PhotonFracturedMeshSettings
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonFracturedMeshSettings : UObject {
};

// Object Name: Class PhotonBlast.PhotonFEdgeData
// Size: 0x28 // Inherited bytes: 0x28
struct UPhotonFEdgeData : UObject {
};

// Object Name: Class PhotonBlast.PhotonFracturedFragmentInfo
// Size: 0x70 // Inherited bytes: 0x28
struct UPhotonFracturedFragmentInfo : UObject {
	// Fields
	IntProperty FragmentItemIndex; // Offset: 0x28 // Size: 0x04
	float MassOverride; // Offset: 0x2c // Size: 0x04
	struct FFragmentConvexElem ConvexElemForCollision; // Offset: 0x30 // Size: 0x10
	struct FVector CenterPoint; // Offset: 0x40 // Size: 0x0c
	struct FBox LocalBoundBox; // Offset: 0x4c // Size: 0x1c
	char CanDestroy : 1; // Offset: 0x68 // Size: 0x01
	char ConnectFloor : 1; // Offset: 0x68 // Size: 0x01
	char pad_0x68_2 : 6; // Offset: 0x68 // Size: 0x01
	char pad_0x69[0x3]; // Offset: 0x69 // Size: 0x03
	IntProperty ChunkIndex; // Offset: 0x6c // Size: 0x04
};

// Object Name: Class PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent
// Size: 0xf20 // Inherited bytes: 0xe10
struct UPhotonHierarchicalInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	// Fields
	struct UPhotonDestructibleMesh* PhotonDestructibleMesh; // Offset: 0xe08 // Size: 0x08
	struct UStaticMesh* EffectStaticMesh; // Offset: 0xe10 // Size: 0x08
	struct USkeletalMesh* EffectSkeleMesh; // Offset: 0xe18 // Size: 0x08
	struct UAnimInstance* AnimClass; // Offset: 0xe20 // Size: 0x08
	struct AActor* EffectActorClass; // Offset: 0xe28 // Size: 0x08
	struct TArray<struct FPhotonInstanceImpactData> InstanceImpactData; // Offset: 0xe30 // Size: 0x10
	float InstanceMaxHp; // Offset: 0xe40 // Size: 0x04
	enum class EEffectType EffectType; // Offset: 0xe44 // Size: 0x01
	float EffectDurationTime; // Offset: 0xe48 // Size: 0x04
	struct FName EffectCollisionProfileName; // Offset: 0xe50 // Size: 0x08
	char bCullEffect : 1; // Offset: 0xe58 // Size: 0x01
	char pad_0xE59_1 : 7; // Offset: 0xe59 // Size: 0x01
	char pad_0xE5A[0x2]; // Offset: 0xe5a // Size: 0x02
	float CullDistance; // Offset: 0xe5c // Size: 0x04
	char bUseExactVelocity : 1; // Offset: 0xe60 // Size: 0x01
	char pad_0xE60_1 : 7; // Offset: 0xe60 // Size: 0x01
	char pad_0xE61[0x3]; // Offset: 0xe61 // Size: 0x03
	float VelocityLength; // Offset: 0xe64 // Size: 0x04
	float MinVelocityExplosion; // Offset: 0xe68 // Size: 0x04
	float MaxVelocityExplosion; // Offset: 0xe6c // Size: 0x04
	struct UAkAudioEvent* HitSound; // Offset: 0xe70 // Size: 0x08
	SetProperty ExceptDamageTypes; // Offset: 0xe78 // Size: 0x50
	bool bVehicleHitUseClientPreShow; // Offset: 0xec8 // Size: 0x01
	char pad_0xEC9[0x3]; // Offset: 0xec9 // Size: 0x03
	float bVehicleHitScale; // Offset: 0xecc // Size: 0x04
	bool bUpdateSurrendActorPosition; // Offset: 0xed0 // Size: 0x01
	bool bForceNetUpdate; // Offset: 0xed1 // Size: 0x01
	char pad_0xED2[0x4e]; // Offset: 0xed2 // Size: 0x4e

	// Functions

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.UpdatePickupAndDeadBoxInRange
	// Flags: [Final|Native|Protected|HasDefaults|BlueprintCallable]
	void UpdatePickupAndDeadBoxInRange(struct FVector Location); // Offset: 0x101f22a74 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.SetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFracturedMesh(struct UPhotonDestructibleMesh* InPhotonDestructibleMesh); // Offset: 0x101f229fc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsNotDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ServerGetInstanceIndexsNotDamaged(struct TArray<IntProperty>& InstancesNoDamaged); // Offset: 0x101f22944 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsDamaged
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	bool ServerGetInstanceIndexsDamaged(struct TArray<IntProperty>& InstancesDamaged); // Offset: 0x101f2288c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceByHp
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool Server_InstanceByHp(struct TArray<IntProperty>& InstancedIndex, struct TArray<float>& DamagesHp, struct FVector& WorldImpactVelocity, enum class EDestructionDamageType DamageType); // Offset: 0x101f226d0 // Return & Params: Num(5) Size(0x2e)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceAndWorldVelocityByHp
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	bool Server_InstanceAndWorldVelocityByHp(struct TArray<IntProperty>& InstancedIndex, struct TArray<float>& DamagesHp, struct FVector& WorldImpactPoint, enum class EDestructionDamageType DamageType, float Strength); // Offset: 0x101f224d4 // Return & Params: Num(6) Size(0x35)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_DamageFragmentsByRadius
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	bool Server_DamageFragmentsByRadius(struct FVector& WorldImpactVelocity, struct FVector& WorldHitPointAndSpreadSpeed, float Hp, float Radius); // Offset: 0x101f22378 // Return & Params: Num(5) Size(0x21)

	// Object Name: DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerServerEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults]
	void OnTriggerServerEvent__DelegateSignature(struct ASTExtraVehicleBase* VehicleActor, struct UPrimitiveComponent* HitComp, struct UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, struct FVector& DesPos, IntProperty TriggerIndex); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggeredByComp
	// Flags: [Final|Native|Public|HasOutParms]
	void OnTriggeredByComp(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FTriggerEvent& TriggerEvent); // Offset: 0x101f2224c // Return & Params: Num(3) Size(0x58)

	// Object Name: DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerClientEvent__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults]
	void OnTriggerClientEvent__DelegateSignature(struct ASTExtraVehicleBase* VehicleActor, struct UPrimitiveComponent* HitComp, struct UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, struct FVector& DesPos, IntProperty TriggerIndex); // Offset: 0x1048d7660 // Return & Params: Num(5) Size(0x28)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnRep_ImpactData
	// Flags: [Final|Native|Public]
	void OnRep_ImpactData(); // Offset: 0x101f22238 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnLocalVehicleHit
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent]
	void OnLocalVehicleHit(struct TArray<IntProperty>& InstanceIndex, struct FVector4& WorldImpactPointAndSpreadSpeed, struct FVector4& WorldImpactVelocityAndRotateSpeed); // Offset: 0x101f220c8 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetPhotonDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonDestructibleMesh* GetPhotonDestructibleMesh(); // Offset: 0x101f220ac // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetInstanceByRadius
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	bool GetInstanceByRadius(struct FVector& HitPoint, float Radius, struct TArray<IntProperty>& InstancedIndex, enum class EDestructionDamageType DamageType); // Offset: 0x101f21f18 // Return & Params: Num(5) Size(0x22)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonFracturedMesh* GetFracturedMesh(); // Offset: 0x101f21ef4 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceWorldSpace
	// Flags: [Native|Public|HasOutParms]
	void GenerateEffectInstanceWorldSpace(struct TArray<IntProperty>& InstanceIndex, struct TArray<struct FVector>& WorldImpactVelocityAndRotateSpeed); // Offset: 0x101f21dd4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceLocalSpace
	// Flags: [Native|Public|HasOutParms]
	void GenerateEffectInstanceLocalSpace(struct TArray<IntProperty>& InstanceIndex, struct TArray<struct FVector>& LocalImpactVelocityAndRotateSpeed); // Offset: 0x101f21cb4 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ClientCorrectVehicleHit
	// Flags: [Native|Event|Public|HasOutParms|BlueprintEvent]
	void ClientCorrectVehicleHit(struct TArray<IntProperty>& InstanceIndex); // Offset: 0x101f21c04 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class PhotonBlast.PhotonParticleModuleTypeDataMesh
// Size: 0x180 // Inherited bytes: 0xe8
struct UPhotonParticleModuleTypeDataMesh : UParticleModuleTypeDataMesh {
	// Fields
	enum class EPhotonMeshDestructionTriggerMode DestructionTriggerMode; // Offset: 0xe5 // Size: 0x01
	float TriggerDelay; // Offset: 0xe8 // Size: 0x04
	float ImpactSpreadStrength; // Offset: 0xec // Size: 0x04
	float ImpactVelocityMagnitude; // Offset: 0xf0 // Size: 0x04
	struct FVector ImpactVelocityDirection; // Offset: 0xf4 // Size: 0x0c
	float ImpactRotationStrength; // Offset: 0x100 // Size: 0x04
	bool bOverrideDetachGravity; // Offset: 0x104 // Size: 0x01
	char pad_0x106[0x2]; // Offset: 0x106 // Size: 0x02
	struct FVector DetachGravity; // Offset: 0x108 // Size: 0x0c
	bool bOverrideDetachTimeSpeed; // Offset: 0x114 // Size: 0x01
	char pad_0x115[0x3]; // Offset: 0x115 // Size: 0x03
	float DetachTimeSpeed; // Offset: 0x118 // Size: 0x04
	char pad_0x11C[0x64]; // Offset: 0x11c // Size: 0x64
};

// Object Name: Class PhotonBlast.PhotonReplicationSkeletalMeshComponent
// Size: 0x1430 // Inherited bytes: 0x1350
struct UPhotonReplicationSkeletalMeshComponent : USkeletalMeshComponent {
	// Fields
	char pad_0x1350[0x58]; // Offset: 0x1350 // Size: 0x58
	IntProperty ClusterUniqueID; // Offset: 0x13a8 // Size: 0x04
	bool bCanMove; // Offset: 0x13ac // Size: 0x01
	enum class EAOIEntityType AOIEntityType; // Offset: 0x13ad // Size: 0x01
	enum class EClusterEntityState AOIEntityState; // Offset: 0x13ae // Size: 0x01
	char ClusterReplicationOpen : 1; // Offset: 0x13af // Size: 0x01
	char pad_0x13AF_1 : 7; // Offset: 0x13af // Size: 0x01
	struct UDestructionSubsystem* SubsystemPtr; // Offset: 0x13b0 // Size: 0x08
	char pad_0x13B8[0x8]; // Offset: 0x13b8 // Size: 0x08
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x13c0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x1410 // Size: 0x10
	char pad_0x1420[0x10]; // Offset: 0x1420 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101f2890c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegisterFromCluster(); // Offset: 0x101f288f8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable
	// Flags: [Native|Public|BlueprintCallable]
	void SetMoveable(bool Value); // Offset: 0x101f2886c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterUniqueID(IntProperty InClusterID); // Offset: 0x101f287e8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetClusterEntityState(enum class EClusterEntityState EntityState); // Offset: 0x101f2876c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101f286f0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegisterToCluster(); // Offset: 0x101f286dc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty
	// Flags: [Final|Native|Public|BlueprintCallable]
	void MarkPropDirty(IntProperty PropIndex); // Offset: 0x101f28660 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class PhotonBlast.PhotonStaticeMeshActor
// Size: 0x668 // Inherited bytes: 0x660
struct APhotonStaticeMeshActor : ADecoratorActor {
	// Fields
	char pad_0x660[0x8]; // Offset: 0x660 // Size: 0x08
};

// Object Name: Class PhotonBlast.ReusableStaticMeshActor
// Size: 0x4d0 // Inherited bytes: 0x4c0
struct AReusableStaticMeshActor : AStaticMeshActor {
	// Fields
	char pad_0x4C0[0x10]; // Offset: 0x4c0 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.ReusableStaticMeshActor.OnSpawn
	// Flags: [Native|Protected]
	void OnSpawn(); // Offset: 0x101f293c4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.ReusableStaticMeshActor.OnRecycle
	// Flags: [Native|Protected]
	void OnRecycle(); // Offset: 0x101f293a8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class PhotonBlast.ReusableSkeletalMeshActor
// Size: 0x548 // Inherited bytes: 0x538
struct AReusableSkeletalMeshActor : ASkeletalMeshActor {
	// Fields
	char pad_0x538[0x10]; // Offset: 0x538 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.ReusableSkeletalMeshActor.OnSpawn
	// Flags: [Native|Protected]
	void OnSpawn(); // Offset: 0x101f295a4 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.ReusableSkeletalMeshActor.OnRecycle
	// Flags: [Native|Protected]
	void OnRecycle(); // Offset: 0x101f29588 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class PhotonBlast.ReusableDestructibleMeshActor
// Size: 0x4d0 // Inherited bytes: 0x4c0
struct AReusableDestructibleMeshActor : APhotonDestructibleMeshActor {
	// Fields
	char pad_0x4C0[0x10]; // Offset: 0x4c0 // Size: 0x10

	// Functions

	// Object Name: Function PhotonBlast.ReusableDestructibleMeshActor.OnSpawn
	// Flags: [Native|Protected]
	void OnSpawn(); // Offset: 0x101f29784 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PhotonBlast.ReusableDestructibleMeshActor.OnRecycle
	// Flags: [Native|Protected]
	void OnRecycle(); // Offset: 0x101f29768 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class PhotonBlast.PhotonStaticMeshComponent
// Size: 0xc00 // Inherited bytes: 0xbd0
struct UPhotonStaticMeshComponent : UStaticMeshComponent {
	// Fields
	struct UPhotonDestructibleMesh* PhotonDestructibleMesh; // Offset: 0xbc8 // Size: 0x08
	struct UStaticMesh* EffectStaticMesh; // Offset: 0xbd0 // Size: 0x08
	float InstanceMaxHp; // Offset: 0xbd8 // Size: 0x04
	enum class EEffectType EffectType; // Offset: 0xbdc // Size: 0x01
	float EffectDurationTime; // Offset: 0xbe0 // Size: 0x04
	struct FName EffectCollisionProfileName; // Offset: 0xbe8 // Size: 0x08
	bool bVehicleHitUseClientPreShow; // Offset: 0xbf0 // Size: 0x01
	char pad_0xBF2[0x2]; // Offset: 0xbf2 // Size: 0x02
	float bVehicleHitScale; // Offset: 0xbf4 // Size: 0x04
	char pad_0xBF8[0x8]; // Offset: 0xbf8 // Size: 0x08

	// Functions

	// Object Name: Function PhotonBlast.PhotonStaticMeshComponent.SetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	void SetFracturedMesh(struct UPhotonDestructibleMesh* InPhotonDestructibleMesh); // Offset: 0x101f29984 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonStaticMeshComponent.GetPhotonDestructibleMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonDestructibleMesh* GetPhotonDestructibleMesh(); // Offset: 0x101f29968 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PhotonBlast.PhotonStaticMeshComponent.GetFracturedMesh
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	struct UPhotonFracturedMesh* GetFracturedMesh(); // Offset: 0x101f29944 // Return & Params: Num(1) Size(0x8)
};

