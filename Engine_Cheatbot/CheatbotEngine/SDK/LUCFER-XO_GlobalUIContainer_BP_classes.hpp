#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C
// 0x0008 (0x0438 - 0x0430)
class UGlobalUIContainer_BP_C : public UUAEWidgetContainer
{
public:
	class UCanvasPanel*                                CanvasContainer;                                          // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C");
		return pStaticClass;
	}

};


}

