#pragma once

// SDK GENERATE BY TELEGRAM ;- (@Manish8x) (4.7.0 -- 64Bit) DM TO BUY TOOL AVLABLE FOR SELL
// Telegram:- @Manish8x
// GEN ONWed Nov 18 07:25:38 2026
 
namespace SDK
{
//---------------------By Tg @Manish8x---------------------------
//Classes
//---------------------By Tg @Manish8x---------------------------

// Class LuaHotReload.LuaHotReloadHelper
// 0x0010 (0x0038 - 0x0028)
class ULuaHotReloadHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScriptChangedDelegate;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LuaHotReload.LuaHotReloadHelper");
		return pStaticClass;
	}


	void OnLuaFileHotUpdate(const struct FString& NotifyMessage);
};


}

