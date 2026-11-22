#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUICanvas.PixCanvasMgr
// 0x0000 (0x0028 - 0x0028)
class UPixCanvasMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUICanvas.PixCanvasMgr");
		return pStaticClass;
	}

};


}

