#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct STestKitMobile.STestMobileTapOptions
// 0x0001
struct FSTestMobileTapOptions
{
	bool                                               bTouch;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct STestKitMobile.STestMobileFillOptions
// 0x0002
struct FSTestMobileFillOptions
{
	bool                                               bCommit;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClear;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct STestKitMobile.STestMobileDragOptions
// 0x0008
struct FSTestMobileDragOptions
{
	int                                                Steps;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTouch;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

}

