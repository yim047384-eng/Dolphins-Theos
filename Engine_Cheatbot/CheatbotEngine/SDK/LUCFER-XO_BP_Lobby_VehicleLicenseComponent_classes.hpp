#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lobby_VehicleLicenseComponent.BP_Lobby_VehicleLicenseComponent_C
// 0x0000 (0x0368 - 0x0368)
class UBP_Lobby_VehicleLicenseComponent_C : public UVehicleLicenseNumberComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_VehicleLicenseComponent.BP_Lobby_VehicleLicenseComponent_C");
		return pStaticClass;
	}

};


}

