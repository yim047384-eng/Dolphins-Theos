#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IOSDeviceProfileSelector.IOSDeviceProfileMatchingRules
// 0x0010 (0x0038 - 0x0028)
class UIOSDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FProfileMatch>                       IOSMatchProfile;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IOSDeviceProfileSelector.IOSDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


}

