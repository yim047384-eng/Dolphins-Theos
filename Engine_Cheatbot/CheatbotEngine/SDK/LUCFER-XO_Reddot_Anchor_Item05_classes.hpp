#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Reddot_Anchor_Item05.Reddot_Anchor_Item05_C
// 0x000C (0x02D4 - 0x02C8)
class UReddot_Anchor_Item05_C : public ULuaUserWidget
{
public:
	class UImage*                                      Image_Breathing;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PosTemplate;                                              // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor_Item05.Reddot_Anchor_Item05_C");
		return pStaticClass;
	}

};


}

