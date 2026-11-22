#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UnrealAgentRuntime.PCGSplineTubeMeshComponent
// 0x0050 (0x0AE0 - 0x0A90)
class UPCGSplineTubeMeshComponent : public UProceduralMeshComponent
{
public:
	EPCGCrossSectionType                               CrossSectionType;                                         // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              RoadWidth;                                                // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrossSectionHeight;                                       // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TubeSides;                                                // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           CustomProfilePoints;                                      // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCustomProfileClosed;                                     // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	float                                              SegmentLength;                                            // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldUp;                                                 // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCapEnds;                                                 // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0ABA(0x0002) MISSED OFFSET
	float                                              UVTilingLength;                                           // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVOffsetU;                                                // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipUVV;                                                 // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorU;                                                 // 0x0AC5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0AC6(0x0002) MISSED OFFSET
	class UMaterialInterface*                          RoadMaterial;                                             // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollision;                                       // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0AD1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealAgentRuntime.PCGSplineTubeMeshComponent");
		return pStaticClass;
	}


	class USplineComponent* ResolveSpline();
	void RefreshTubePhysicsCollision();
	void RebuildTubeMesh();
};


}

