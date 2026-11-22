#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleDIYComp.BP_VehicleDIYComp_C
// 0x0000 (0x0628 - 0x0628)
class UBP_VehicleDIYComp_C : public UVehicleAvatarDIYComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleDIYComp.BP_VehicleDIYComp_C");
		return pStaticClass;
	}

};


}

