#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GEM.FpsReportActor
// 0x0000 (0x04B0 - 0x04B0)
class AFpsReportActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GEM.FpsReportActor");
		return pStaticClass;
	}

};


}

