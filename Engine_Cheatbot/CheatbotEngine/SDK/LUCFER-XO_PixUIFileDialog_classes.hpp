#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUIFileDialog.PxFileDialogMgr
// 0x0000 (0x0028 - 0x0028)
class UPxFileDialogMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUIFileDialog.PxFileDialogMgr");
		return pStaticClass;
	}

};


}

