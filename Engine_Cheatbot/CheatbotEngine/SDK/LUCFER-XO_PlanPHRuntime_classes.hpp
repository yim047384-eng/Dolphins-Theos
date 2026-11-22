#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlanPHRuntime.BinFileHelper
// 0x0000 (0x0028 - 0x0028)
class UBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanPHRuntime.MapBarrierWidget
// 0x0030 (0x0130 - 0x0100)
class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
		return pStaticClass;
	}


	void SetMapStructureData(TArray<struct FStructureData> InMapStructureData);
	void SetMapMidPoint(struct FVector2D* InMapMidPoint);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
};


// Class PlanPHRuntime.PlanPH_GameMode
// 0x0008 (0x2310 - 0x2308)
class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x2308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanPHRuntime.PlanPH_GameModeState_Active
// 0x0000 (0x00C8 - 0x00C8)
class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// 0x0000 (0x00D8 - 0x00D8)
class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
		return pStaticClass;
	}

};


// Class PlanPHRuntime.PlanPH_GameState
// 0x00B0 (0x16F0 - 0x1640)
class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             // 0x1640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_2;                                     // 0x1650(0x0028) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_3;                                     // 0x1678(0x0028) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_4;                                     // 0x16A0(0x0028) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_5;                                     // 0x16C8(0x0028) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
		return pStaticClass;
	}


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID, bool bIsWedding);
};


// Class PlanPHRuntime.PlanPH_PlayerState
// 0x0008 (0x1CE0 - 0x1CD8)
class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:
	int                                                LandId;                                                   // 0x1CD8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1CDC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
		return pStaticClass;
	}


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};


// Class PlanPHRuntime.PlanPHCustomStaticMeshComponent
// 0x0060 (0x0C40 - 0x0BE0)
class UPlanPHCustomStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0BE0(0x0050) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0C30(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHCustomStaticMeshComponent");
		return pStaticClass;
	}


	void BPPreSetStaticMesh(class UStaticMesh* NewMesh);
	void BPPostSetStaticMesh(class UStaticMesh* NewMesh);
};


// Class PlanPHRuntime.PlanPHDoor
// 0x0018 (0x0588 - 0x0570)
class APlanPHDoor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct FVector                                     TransformDirVector;                                       // 0x0578(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0584(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
		return pStaticClass;
	}


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};


// Class PlanPHRuntime.PlanPHGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime);
	void GetActorBound(class AActor* Actor, struct FVector* Size);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanPHRuntime.PlanPHHomeArea
// 0x0038 (0x05A8 - 0x0570)
class APlanPHHomeArea : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x0578(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MinGridIndexXYZ;                                          // 0x0584(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MaxGridIndexXYZ;                                          // 0x0590(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             // 0x05A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
		return pStaticClass;
	}


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};


// Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// 0x0010 (0x09E0 - 0x09D0)
class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
};


// Class PlanPHRuntime.PlanPHMapData
// 0x0020 (0x0170 - 0x0150)
class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0150(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x0160(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanPHRuntime.PlanPHProjectionComponent
// 0x00E0 (0x0258 - 0x0178)
class UPlanPHProjectionComponent : public UActorComponent
{
public:
	int                                                BuildState;                                               // 0x0178(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FString                                     LastError;                                                // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                OutputTriangleCount;                                      // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedStructureFallback;                                   // 0x0194(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	struct FString                                     StructureFallbackReason;                                  // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnableStructureFallback;                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          ProjectionMaterial;                                       // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionWidth;                                          // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionHeight;                                         // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionDepth;                                          // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxReceiverAngleDegrees;                                  // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReceiverExcludedActors;                                   // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMesh*>                         ReceiverExcludedMeshes;                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MinSourceProjectedArea;                                   // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxFragmentsPerSurface;                                   // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x01F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x01FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIgnoreOwnerRotation;                                     // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              SurfaceBias;                                              // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TranslucentSortPriority;                                  // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FName                                       IntensityParameter;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URuntimeMeshComponent*                       RenderMesh;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UStaticMesh*>                         SourceMeshes;                                             // 0x0230(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0240(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHProjectionComponent");
		return pStaticClass;
	}


	void SubmitProjection();
	bool SetReceiverMeshExcluded(class UStaticMesh* Mesh, bool bExcluded);
	bool SetReceiverActorExcluded(class AActor* Actor, bool bExcluded);
	void SetProjectionIntensity(float Intensity);
	void SetProjectionEnabled(bool bEnabled);
	static bool ResumeProjectionWorld(class UObject* WorldContextObject);
	void ReleaseProjection();
	static bool CleanupProjectionWorld(class UObject* WorldContextObject);
	bool BeginProjection(class UObject* BatchHelper);
	void AddReceiverActor(class AActor* Actor);
	void AddDecorationActor(class AActor* Actor);
};


// Class PlanPHRuntime.PlanPHSpectatorPawn
// 0x0070 (0x05A8 - 0x0538)
class APlanPHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0538(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0590(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x05A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


// Class PlanPHRuntime.PlanPHVisualGridComponent
// 0x0060 (0x0A30 - 0x09D0)
class UPlanPHVisualGridComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09D0(0x0004) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x09D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                XColor;                                                   // 0x09E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                YColor;                                                   // 0x09F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ZColor;                                                   // 0x0A00(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0A14(0x000C) MISSED OFFSET
	bool                                               bShouldShowGrids;                                         // 0x0A20(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0A21(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHVisualGridComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
	void RefreshGrids();
};


}

