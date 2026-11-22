#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C
// 0x0008 (0x0268 - 0x0260)
class ULobby_Mid_Banner_Dot_Item_C : public UUserWidget
{
public:
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C");
		return pStaticClass;
	}


	void SetData(bool bSelect);
};


}

