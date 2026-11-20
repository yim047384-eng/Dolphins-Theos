#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Intl.StatManager
// Size: 0x208 // Inherited bytes: 0x28
struct UStatManager : UObject {
	// Fields
	char pad_0x28[0x1e0]; // Offset: 0x28 // Size: 0x1e0

	// Functions

	// Object Name: Function Intl.StatManager.ReportUAStatsEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ReportUAStatsEvent(struct TArray<StrProperty>& InReportChannels, StrProperty InEventName, MapProperty& InParams, bool InIsRealTime); // Offset: 0x106349bc8 // Return & Params: Num(4) Size(0x71)

	// Object Name: Function Intl.StatManager.ReportRevenue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void ReportRevenue(IntProperty InPurchaseEventType, StrProperty InCurrencyCode, StrProperty InExpense, MapProperty& InParams, StrProperty InExtraJson); // Offset: 0x1063499d4 // Return & Params: Num(5) Size(0x88)

	// Object Name: Function Intl.StatManager.ReportPurchase
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportPurchase(IntProperty InPurchaseEventType, StrProperty InCurrencyCode, StrProperty InExpense, bool isRealTime); // Offset: 0x106349864 // Return & Params: Num(4) Size(0x29)

	// Object Name: Function Intl.StatManager.ReportEventWithString
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportEventWithString(IntProperty EventType, StrProperty _eventBody, bool isRealTime); // Offset: 0x1063496f0 // Return & Params: Num(3) Size(0x19)

	// Object Name: Function Intl.StatManager.ReportEventWithParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportEventWithParam(IntProperty EventType, MapProperty _params, bool isRealTime); // Offset: 0x1063495a0 // Return & Params: Num(3) Size(0x59)

	// Object Name: Function Intl.StatManager.ReportEventWithNoParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	void ReportEventWithNoParam(IntProperty EventType, bool isRealTime); // Offset: 0x1063494e4 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function Intl.StatManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UStatManager* GetInstance(); // Offset: 0x1063494b0 // Return & Params: Num(1) Size(0x8)
};

