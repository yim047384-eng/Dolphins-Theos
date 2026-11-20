#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class HiggsBoson.BaziState
// Size: 0x190 // Inherited bytes: 0x28
struct UBaziState : UObject {
	// Fields
	char pad_0x28[0x168]; // Offset: 0x28 // Size: 0x168

	// Functions

	// Object Name: Function HiggsBoson.BaziState.OnControllerReconnected
	// Flags: [Final|Native|Private]
	void OnControllerReconnected(); // Offset: 0x103fa8100 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.BaziState.AddChori
	// Flags: [Final|Native|Public|HasOutParms]
	void AddChori(struct FChori& Element); // Offset: 0x103fa8044 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function HiggsBoson.BaziState.AddBazi
	// Flags: [Final|Native|Public|HasOutParms]
	void AddBazi(struct FBazi& Element); // Offset: 0x103fa7f88 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class HiggsBoson.ClientGlueHiaSystem
// Size: 0x560 // Inherited bytes: 0x30
struct UClientGlueHiaSystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x64]; // Offset: 0x30 // Size: 0x64
	bool bEnglish; // Offset: 0x94 // Size: 0x01
	char pad_0x95[0x3]; // Offset: 0x95 // Size: 0x03
	struct UBaziState* BaziState; // Offset: 0x98 // Size: 0x08
	struct UMakeWoe* MakeWoe; // Offset: 0xa0 // Size: 0x08
	char pad_0xA8[0x4b8]; // Offset: 0xa8 // Size: 0x4b8

	// Functions

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Vulou
	// Flags: [Final|Native|Public|Const]
	float Vulou(); // Offset: 0x103fa9d00 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc9
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LuaFunc9(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc8
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc8(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc7
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc7(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc6
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc6(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc5
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc5(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc4
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc4(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x5)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc3
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LuaFunc3(IntProperty Param1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc2
	// Flags: [Native|Event|Public|BlueprintEvent]
	void LuaFunc2(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.LuaFunc1
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool LuaFunc1(struct AActor* PtrActor); // Offset: 0x101bc757c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func9
	// Flags: [Final|Native|Private]
	void Func9(struct AActor* PtrWeapon); // Offset: 0x103fa9830 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func8
	// Flags: [Final|Native|Private|HasOutParms]
	IntProperty Func8(struct AActor* PtrWeapon, struct FBulletHitInfoUploadData& UploadData, struct FLocalShootHitData& LocalHitData); // Offset: 0x103fa96c4 // Return & Params: Num(4) Size(0x13c)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func7
	// Flags: [Final|Native|Private]
	bool Func7(); // Offset: 0x103fa9690 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func6
	// Flags: [Final|Native|Private]
	float Func6(struct AActor* Param1); // Offset: 0x103fa9604 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func3
	// Flags: [Final|Native|Private]
	float Func3(); // Offset: 0x103fa95d0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func29
	// Flags: [Final|Native|Private|HasOutParms]
	void Func29(struct UWorld* World, struct FBulletHitInfoUploadDataInReplay& HitData, float DrawRadius, float DisplayTime, bool bDrawVictimBound); // Offset: 0x103fa93dc // Return & Params: Num(5) Size(0x289)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func28
	// Flags: [Final|Native|Private|HasOutParms]
	void Func28(struct AActor* Weapon, struct FBulletHitInfoUploadData& BulletHitInfoUploadData, struct FLocalShootHitData& LocalShootHitData); // Offset: 0x103fa9278 // Return & Params: Num(3) Size(0x138)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func27
	// Flags: [Final|Native|Private]
	void Func27(uint32_t ShootID); // Offset: 0x103fa91fc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func26
	// Flags: [Final|Native|Private]
	void Func26(struct AActor* Param4, struct AActor* Param5); // Offset: 0x103fa9148 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func25
	// Flags: [Final|Native|Private]
	void Func25(IntProperty Param1, float Param2, float Param3, struct AActor* Param4, struct AActor* Param5); // Offset: 0x103fa8fe4 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func24
	// Flags: [Final|Native|Private]
	void Func24(IntProperty Param1, float Param2, float Param3, float Param4, struct AActor* Param5, struct AActor* Param6); // Offset: 0x103fa8e44 // Return & Params: Num(6) Size(0x20)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func23
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void Func23(uint32_t Param1, struct FVector& Param2, struct FHitResult& Param3); // Offset: 0x103fa8d1c // Return & Params: Num(3) Size(0x98)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func22
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void Func22(uint32_t Param1, struct FVector& Param2, struct FVector& Param3); // Offset: 0x103fa8c08 // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func21
	// Flags: [Final|Native|Private]
	void Func21(struct AActor* Param1); // Offset: 0x103fa8b8c // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func20
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	void Func20(struct AActor* Param1, struct FVector& Param2); // Offset: 0x103fa8ac8 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func2
	// Flags: [Final|Native|Private]
	bool Func2(struct AActor* CharacterPtr, bool bParam1); // Offset: 0x103fa89f8 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func19
	// Flags: [Final|Native|Private]
	void Func19(uint32_t Param1, float Param2, float Param3); // Offset: 0x103fa8908 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func18
	// Flags: [Final|Native|Private|HasOutParms]
	void Func18(struct TArray<struct FBazi>& Bazi, struct TArray<struct FChori>& Chori); // Offset: 0x103fa87f0 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func17
	// Flags: [Final|Native|Private|HasOutParms]
	void Func17(struct FFatalDamageParameter& Param1); // Offset: 0x103fa8718 // Return & Params: Num(1) Size(0xc0)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func16
	// Flags: [Final|Native|Private]
	void Func16(); // Offset: 0x103fa8704 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func15
	// Flags: [Final|Native|Private]
	void Func15(struct AActor* Param1); // Offset: 0x103fa8688 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func14
	// Flags: [Final|Native|Private|HasOutParms]
	void Func14(struct FShootTimeData& InData, struct AActor* PtrWeapon); // Offset: 0x103fa8588 // Return & Params: Num(2) Size(0xa8)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func11
	// Flags: [Final|Native|Private]
	float Func11(struct AActor* Param1); // Offset: 0x103fa84fc // Return & Params: Num(2) Size(0xc)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func10
	// Flags: [Final|Native|Private]
	void Func10(struct AActor* Param1); // Offset: 0x103fa8480 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.ClientGlueHiaSystem.Func1
	// Flags: [Final|Native|Private|Const]
	bool Func1(struct AActor* CharacterPtr, float TimeInSeconds, float MarginInSeconds); // Offset: 0x103fa8380 // Return & Params: Num(4) Size(0x11)
};

// Object Name: Class HiggsBoson.FuzzyObject
// Size: 0x350 // Inherited bytes: 0x28
struct UFuzzyObject : UObject {
	// Fields
	char pad_0x28[0x320]; // Offset: 0x28 // Size: 0x320
	IntProperty Param1; // Offset: 0x348 // Size: 0x04
	char pad_0x34C[0x4]; // Offset: 0x34c // Size: 0x04

	// Functions

	// Object Name: Function HiggsBoson.FuzzyObject.SetUInt8ValueByName
	// Flags: [Final|Native|Public]
	bool SetUInt8ValueByName(IntProperty Name, char Value); // Offset: 0x103fac05c // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HiggsBoson.FuzzyObject.SetUInt64ValueByName
	// Flags: [Final|Native|Public]
	bool SetUInt64ValueByName(IntProperty Name, uint64 Value); // Offset: 0x103fabf94 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function HiggsBoson.FuzzyObject.SetUInt32ValueByName
	// Flags: [Final|Native|Public]
	bool SetUInt32ValueByName(IntProperty Name, uint32_t Value); // Offset: 0x103fabed0 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.SetUInt16ValueByName
	// Flags: [Final|Native|Public]
	bool SetUInt16ValueByName(IntProperty Name, uint16_t Value); // Offset: 0x103fabe08 // Return & Params: Num(3) Size(0x7)

	// Object Name: Function HiggsBoson.FuzzyObject.SetInt8ValueByName
	// Flags: [Final|Native|Public]
	bool SetInt8ValueByName(IntProperty Name, uint8_t Value); // Offset: 0x103fabd40 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HiggsBoson.FuzzyObject.SetInt64ValueByName
	// Flags: [Final|Native|Public]
	bool SetInt64ValueByName(IntProperty Name, int64_t Value); // Offset: 0x103fabc78 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function HiggsBoson.FuzzyObject.SetInt32ValueByName
	// Flags: [Final|Native|Public]
	bool SetInt32ValueByName(IntProperty Name, IntProperty Value); // Offset: 0x103fabbb4 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.SetInt16ValueByName
	// Flags: [Final|Native|Public]
	bool SetInt16ValueByName(IntProperty Name, int16_t Value); // Offset: 0x103fabaec // Return & Params: Num(3) Size(0x7)

	// Object Name: Function HiggsBoson.FuzzyObject.SetFloatValueByName
	// Flags: [Final|Native|Public]
	bool SetFloatValueByName(IntProperty Name, float Value); // Offset: 0x103faba24 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.SetBoolValueByName
	// Flags: [Final|Native|Public]
	bool SetBoolValueByName(IntProperty Name, bool Value); // Offset: 0x103fab958 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HiggsBoson.FuzzyObject.GetUInt8ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetUInt8ValueByName(IntProperty Name, char& OutValue); // Offset: 0x103fab880 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HiggsBoson.FuzzyObject.GetUInt64ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetUInt64ValueByName(IntProperty Name, uint64& OutValue); // Offset: 0x103fab7a8 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function HiggsBoson.FuzzyObject.GetUInt32ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetUInt32ValueByName(IntProperty Name, uint32_t& OutValue); // Offset: 0x103fab6d0 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.GetUInt16ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetUInt16ValueByName(IntProperty Name, uint16_t& OutValue); // Offset: 0x103fab5f8 // Return & Params: Num(3) Size(0x7)

	// Object Name: Function HiggsBoson.FuzzyObject.GetInt8ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetInt8ValueByName(IntProperty Name, uint8_t& OutValue); // Offset: 0x103fab520 // Return & Params: Num(3) Size(0x6)

	// Object Name: Function HiggsBoson.FuzzyObject.GetInt64ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetInt64ValueByName(IntProperty Name, int64_t& OutValue); // Offset: 0x103fab448 // Return & Params: Num(3) Size(0x11)

	// Object Name: Function HiggsBoson.FuzzyObject.GetInt32ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetInt32ValueByName(IntProperty Name, IntProperty& OutValue); // Offset: 0x103fab370 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.GetInt16ValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetInt16ValueByName(IntProperty Name, int16_t& OutValue); // Offset: 0x103fab298 // Return & Params: Num(3) Size(0x7)

	// Object Name: Function HiggsBoson.FuzzyObject.GetFloatValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetFloatValueByName(IntProperty Name, float& OutValue); // Offset: 0x103fab1c0 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function HiggsBoson.FuzzyObject.GetBoolValueByName
	// Flags: [Final|Native|Public|HasOutParms|Const]
	bool GetBoolValueByName(IntProperty Name, bool& OutValue); // Offset: 0x103fab0e8 // Return & Params: Num(3) Size(0x6)
};

// Object Name: Class HiggsBoson.SCoronaClientData
// Size: 0x350 // Inherited bytes: 0x350
struct USCoronaClientData : UFuzzyObject {
};

// Object Name: Class HiggsBoson.ClientAmaUbaSubsystem
// Size: 0x90 // Inherited bytes: 0x30
struct UClientAmaUbaSubsystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x60]; // Offset: 0x30 // Size: 0x60

	// Functions

	// Object Name: Function HiggsBoson.ClientAmaUbaSubsystem.Func1
	// Flags: [Final|Native|Private]
	void Func1(IntProperty IntType, float InTimestamp, IntProperty IncreaseCount, bool bAlertUploadFrequency); // Offset: 0x103faaa74 // Return & Params: Num(4) Size(0xd)
};

// Object Name: Class HiggsBoson.MakeWoe
// Size: 0x30 // Inherited bytes: 0x28
struct UMakeWoe : UObject {
	// Fields
	bool bEnable01; // Offset: 0x28 // Size: 0x01
	bool bEnable02; // Offset: 0x29 // Size: 0x01
	bool bEnable03; // Offset: 0x2a // Size: 0x01
	char pad_0x2B[0x5]; // Offset: 0x2b // Size: 0x05
};

// Object Name: Class HiggsBoson.FullCoverMarginIntervalCharacterTickerInterval
// Size: 0x80 // Inherited bytes: 0x28
struct UFullCoverMarginIntervalCharacterTickerInterval : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
};

// Object Name: Class HiggsBoson.FullCoverMarginIntervalCharacterTicker
// Size: 0x148 // Inherited bytes: 0x28
struct UFullCoverMarginIntervalCharacterTicker : UObject {
	// Fields
	float ConfigIntervalTime; // Offset: 0x28 // Size: 0x04
	float ConfigMarginTime; // Offset: 0x2c // Size: 0x04
	char pad_0x30[0x8]; // Offset: 0x30 // Size: 0x08
	enum class EPawnState SkipPawnState64; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	MapProperty CurrentIntervalMap; // Offset: 0x40 // Size: 0x50
	MapProperty PendingJudgeMap; // Offset: 0x90 // Size: 0x50
	struct TArray<struct UFullCoverMarginIntervalCharacterTickerInterval*> InfoObjectPool; // Offset: 0xe0 // Size: 0x10
	char pad_0xF0[0x58]; // Offset: 0xf0 // Size: 0x58
};

// Object Name: Class HiggsBoson.CamoyoHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UCamoyoHelper : UObject {
	// Functions

	// Object Name: Function HiggsBoson.CamoyoHelper.MakeRectTu
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MakeRectTu(DelegateProperty CamoyoRetDelegate, StrProperty Filename, IntProperty Quality, bool bShowUI); // Offset: 0x103faca50 // Return & Params: Num(4) Size(0x25)

	// Object Name: Function HiggsBoson.CamoyoHelper.MakeMemPerform
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void MakeMemPerform(IntProperty InbOpen); // Offset: 0x103fac9dc // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.CamoyoHelper.MakeFitRectTu
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	void MakeFitRectTu(DelegateProperty CamoyoRetDelegate, struct FVector4 InCutParam, IntProperty InTuType, bool isShowUI); // Offset: 0x103fac890 // Return & Params: Num(4) Size(0x25)
};

// Object Name: Class HiggsBoson.HiggsBosonComponent
// Size: 0x11e8 // Inherited bytes: 0x238
struct UHiggsBosonComponent : ULuaActorComponent {
	// Fields
	char pad_0x238[0x1f]; // Offset: 0x238 // Size: 0x1f
	bool bOpenActorChannelErrorReport; // Offset: 0x257 // Size: 0x01
	char pad_0x258[0xf8]; // Offset: 0x258 // Size: 0xf8
	StrProperty TraceData; // Offset: 0x350 // Size: 0x10
	StrProperty GameTraceData; // Offset: 0x360 // Size: 0x10
	uint32_t HeartBreaks; // Offset: 0x370 // Size: 0x04
	char pad_0x374[0x4]; // Offset: 0x374 // Size: 0x04
	StrProperty HeartInfo; // Offset: 0x378 // Size: 0x10
	struct FScriptMulticastDelegate OnSwiftHawkDelegate; // Offset: 0x388 // Size: 0x10
	struct FScriptMulticastDelegate OnEzioDelegate; // Offset: 0x398 // Size: 0x10
	struct ASTExtraBaseCharacter* CharacterOwner; // Offset: 0x3a8 // Size: 0x08
	struct ASTExtraPlayerController* PlayerController; // Offset: 0x3b0 // Size: 0x08
	bool bClientInfoReceived; // Offset: 0x3b8 // Size: 0x01
	char pad_0x3B9[0x7]; // Offset: 0x3b9 // Size: 0x07
	struct TArray<uint32_t> ClientInfoAsUInt32Array; // Offset: 0x3c0 // Size: 0x10
	struct TArray<char> IntegrityItemCheckResultAsBytes; // Offset: 0x3d0 // Size: 0x10
	char pad_0x3E0[0x40]; // Offset: 0x3e0 // Size: 0x40
	bool bRoofTouchActive; // Offset: 0x420 // Size: 0x01
	bool bPalmRestActive; // Offset: 0x421 // Size: 0x01
	char pad_0x422[0x12]; // Offset: 0x422 // Size: 0x12
	IntProperty RoofTouchStatus; // Offset: 0x434 // Size: 0x04
	struct TArray<StrProperty> PalmRestSampleKeys; // Offset: 0x438 // Size: 0x10
	IntProperty PalmRestSampleCount; // Offset: 0x448 // Size: 0x04
	char pad_0x44C[0x9c4]; // Offset: 0x44c // Size: 0x9c4
	struct USCoronaClientData* SecurityCoronaLabClientDataPointer; // Offset: 0xe10 // Size: 0x08
	char pad_0xE18[0x68]; // Offset: 0xe18 // Size: 0x68
	bool bMHActive; // Offset: 0xe80 // Size: 0x01
	char pad_0xE81[0xaf]; // Offset: 0xe81 // Size: 0xaf
	MapProperty FFItemIDMap; // Offset: 0xf30 // Size: 0x50
	MapProperty FFWeaponItemIDMap; // Offset: 0xf80 // Size: 0x50
	char pad_0xFD0[0x1c]; // Offset: 0xfd0 // Size: 0x1c
	IntProperty ReceivedRotationModifiedCount; // Offset: 0xfec // Size: 0x04
	IntProperty ReceivedTranslationModifiedCount; // Offset: 0xff0 // Size: 0x04
	IntProperty ReceivedScale3DModifiedCount; // Offset: 0xff4 // Size: 0x04
	struct TArray<IntProperty> LastInvalidIndexListInPakLite; // Offset: 0xff8 // Size: 0x10
	char pad_0x1008[0x8]; // Offset: 0x1008 // Size: 0x08
	struct FScriptMulticastDelegate OnServerReceiveInvalidFilesInPakLiteDelegate; // Offset: 0x1010 // Size: 0x10
	char pad_0x1020[0xe8]; // Offset: 0x1020 // Size: 0xe8
	float TouchScreenActiveTimeRatioThreshold; // Offset: 0x1108 // Size: 0x04
	char pad_0x110C[0x4]; // Offset: 0x110c // Size: 0x04
	float MouTa; // Offset: 0x1110 // Size: 0x04
	IntProperty BandaCountThreshold; // Offset: 0x1114 // Size: 0x04
	bool bEnableBandCount; // Offset: 0x1118 // Size: 0x01
	char pad_0x1119[0x3]; // Offset: 0x1119 // Size: 0x03
	float IntervalThreshold1; // Offset: 0x111c // Size: 0x04
	IntProperty HongThreshold; // Offset: 0x1120 // Size: 0x04
	float NovoThreshold; // Offset: 0x1124 // Size: 0x04
	char pad_0x1128[0x40]; // Offset: 0x1128 // Size: 0x40
	IntProperty MaxCountOfPlayerHistoryLocationToDetectCamouflage; // Offset: 0x1168 // Size: 0x04
	char pad_0x116C[0xc]; // Offset: 0x116c // Size: 0x0c
	float MinDistanceToDetectCamouflage; // Offset: 0x1178 // Size: 0x04
	char pad_0x117C[0x30]; // Offset: 0x117c // Size: 0x30
	float OfflineMoveThreshold; // Offset: 0x11ac // Size: 0x04
	float OfflineMoveValidScale; // Offset: 0x11b0 // Size: 0x04
	float LongTimeNoReceiveScale; // Offset: 0x11b4 // Size: 0x04
	IntProperty MinOfflineCount; // Offset: 0x11b8 // Size: 0x04
	IntProperty MaxOfflineCount; // Offset: 0x11bc // Size: 0x04
	bool bOfflineMoveReady; // Offset: 0x11c0 // Size: 0x01
	char pad_0x11C1[0x27]; // Offset: 0x11c1 // Size: 0x27

	// Functions

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_Client_ShowSecurityAlertWindow
	// Flags: [Net|NetReliablePublic|NetClient]
	void RPC_Client_ShowSecurityAlertWindow(StrProperty StrProperty_2); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_Client_ServerNameAck
	// Flags: [Net|Public|NetClient]
	void RPC_Client_ServerNameAck(); // Offset: 0x101bc757c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_Server_TellServerName
	// Flags: [Net|Public|NetServer]
	void RPC_Server_TellServerName(StrProperty StrProperty_1); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.Zanwu
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void Zanwu(StrProperty Param1); // Offset: 0x103fafcf8 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.SyncServerParam
	// Flags: [Final|Native|Public]
	void SyncServerParam(bool Param1); // Offset: 0x103fafc74 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.SwiftHawk
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void SwiftHawk(struct TArray<char> Hawks, uint32_t Magic); // Offset: 0x103fafb94 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ShowABCD
	// Flags: [Event|Public|BlueprintEvent]
	void ShowABCD(StrProperty Message, bool bIsClientShowWindow); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.SetSchemeForInitialize
	// Flags: [Final|Native|Public]
	void SetSchemeForInitialize(IntProperty Index, uint32_t VerifyLen, struct TArray<char> VerifyHashArray, struct TArray<struct FPatchPoint> PatchPointArray); // Offset: 0x103faf994 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.SetSchemeForGet
	// Flags: [Final|Native|Public]
	void SetSchemeForGet(IntProperty Index, uint32_t VerifyLen, struct TArray<char> VerifyHashArray, struct TArray<struct FPatchPoint> PatchPointArray); // Offset: 0x103faf794 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ServerPoPo
	// Flags: [Final|Native|Private|HasOutParms]
	void ServerPoPo(struct TArray<char>& Array); // Offset: 0x103faf6ec // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.SendMoveStatusToServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void SendMoveStatusToServer(enum class EPawnState State); // Offset: 0x103faf668 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.S2CNuoro
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void S2CNuoro(IntProperty Lotion); // Offset: 0x103faf5e4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_ServerGlueHiaPark
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_ServerGlueHiaPark(uint8_t HiaType, struct TArray<char> GlueHiaParkArr, uint32_t HiaStatus, struct TArray<char> GlueArg, struct TArray<char> GlueHiaParkArr2, uint32_t HiaStatus2); // Offset: 0x103faf3e0 // Return & Params: Num(6) Size(0x44)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_ServerCapbo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_ServerCapbo(uint8_t BoCapC, uint8_t InBoType, struct TArray<char> BoDataArr); // Offset: 0x103faf2c8 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_ServerAddInvalidFilesInPakLite
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void RPC_ServerAddInvalidFilesInPakLite(struct TArray<IntProperty> InvalidIndexList); // Offset: 0x103faf228 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.RPC_ClientCoronaLab
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void RPC_ClientCoronaLab(char bAllSwitch, struct TArray<char> CoronaLab, uint32_t CoronaState); // Offset: 0x103faf10c // Return & Params: Num(3) Size(0x1c)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnWeaponAimInput
	// Flags: [Final|Native|Public]
	void OnWeaponAimInput(float InDistToEnemy, float InYaw, float InPitch, float InRoll); // Offset: 0x103faefe4 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnTouchInput
	// Flags: [Final|Native|Public]
	void OnTouchInput(float InYaw, float InPitch, float InRoll); // Offset: 0x103faeef4 // Return & Params: Num(3) Size(0xc)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnStopFireEvent
	// Flags: [Final|Native|Public]
	void OnStopFireEvent(); // Offset: 0x103faeee0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnStartFireEvent
	// Flags: [Final|Native|Public]
	void OnStartFireEvent(); // Offset: 0x103faeecc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnSkillInteruptVisual
	// Flags: [Final|Native|Public]
	void OnSkillInteruptVisual(struct AActor* InTarget, struct AActor* InCauser); // Offset: 0x103faee18 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnSkillEndVisual
	// Flags: [Final|Native|Public]
	void OnSkillEndVisual(struct AActor* InTarget, struct AActor* InCauser); // Offset: 0x103faed64 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnSkillEndTrans
	// Flags: [Final|Native|Public]
	void OnSkillEndTrans(struct AActor* InTarget, struct AActor* InCauser); // Offset: 0x103faecb0 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnSkillBeginVisual
	// Flags: [Final|Native|Public]
	void OnSkillBeginVisual(struct AActor* InTarget, struct AActor* InCauser); // Offset: 0x103faebfc // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnSkillBeginTrans
	// Flags: [Final|Native|Public]
	void OnSkillBeginTrans(struct AActor* InTarget, struct AActor* InCauser); // Offset: 0x103faeb48 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnRecoilCurveCheckFailed
	// Flags: [Final|Native|Public]
	void OnRecoilCurveCheckFailed(struct AActor* Weapon); // Offset: 0x103faeacc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeOut
	// Flags: [Final|Native|Public]
	void OnPlayerScopeOut(bool bBegan); // Offset: 0x103faea48 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnPlayerScopeIn
	// Flags: [Final|Native|Public]
	void OnPlayerScopeIn(bool bBegan); // Offset: 0x103fae9c4 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnMyPawnRespawn
	// Flags: [Final|Native|Public]
	void OnMyPawnRespawn(struct AUAEPlayerController* InPlayerController); // Offset: 0x103fae948 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnKillSomeOneEvent
	// Flags: [Final|Native|Public]
	void OnKillSomeOneEvent(struct AActor* InSomeOne); // Offset: 0x103fae8cc // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnGyroInput
	// Flags: [Final|Native|Public]
	void OnGyroInput(float InYaw, float InPitch, float InRoll); // Offset: 0x103fae7dc // Return & Params: Num(3) Size(0xc)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnClientAdjustPosition
	// Flags: [Final|Native|Public|HasDefaults]
	void OnClientAdjustPosition(struct FVector NewLoc, enum class ECharacterMoveDragReason Reason); // Offset: 0x103fae724 // Return & Params: Num(2) Size(0xd)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnCapboReturn
	// Flags: [Final|Native|Public|HasOutParms]
	void OnCapboReturn(IntProperty BoCapC, IntProperty InBoType, struct TArray<char>& RetData); // Offset: 0x103fae604 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.OnBulletImpactEvent
	// Flags: [Final|Native|Public|HasOutParms]
	void OnBulletImpactEvent(struct AActor* InCauser, struct FHitResult& InImpactResult); // Offset: 0x103fae52c // Return & Params: Num(2) Size(0x90)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.IsCharacterOwnerWerewolf
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsCharacterOwnerWerewolf(); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.IsCharacterOwnerButcher
	// Flags: [Native|Event|Public|BlueprintEvent]
	bool IsCharacterOwnerButcher(); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.HandleClientReconnect
	// Flags: [Final|Native|Public]
	void HandleClientReconnect(); // Offset: 0x103fae4a0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.GetBandaCountOffset
	// Flags: [Native|Event|Public|BlueprintEvent]
	IntProperty GetBandaCountOffset(); // Offset: 0x101bc757c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.FlushGameEnd
	// Flags: [Final|Native|Public]
	void FlushGameEnd(); // Offset: 0x103fae450 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.Ezio
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate]
	void Ezio(IntProperty Param1, IntProperty Param2, IntProperty Param3, IntProperty Param4); // Offset: 0x103fae320 // Return & Params: Num(4) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.EnableTickEncrypt
	// Flags: [Final|Native|Public]
	IntProperty EnableTickEncrypt(); // Offset: 0x103fae2ec // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.EnablePeekShootVerify
	// Flags: [Final|Native|Public]
	IntProperty EnablePeekShootVerify(); // Offset: 0x103fae2b8 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.EnableEnhancedDynamicActors
	// Flags: [Final|Native|Public]
	void EnableEnhancedDynamicActors(IntProperty Index); // Offset: 0x103fae23c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.EnableCheckFilesInPakLite
	// Flags: [Final|Native|Public]
	IntProperty EnableCheckFilesInPakLite(struct TArray<StrProperty> InFiles, IntProperty InVerifyCountSinglePass); // Offset: 0x103fae108 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.DispatchIntegrityCheckItem
	// Flags: [Final|Native|Public]
	void DispatchIntegrityCheckItem(uint32_t PlatID, uint32_t AreaID, uint32_t GameBits, uint32_t Index, IntProperty Offset, uint32_t Len, uint32_t Type); // Offset: 0x103fadf30 // Return & Params: Num(7) Size(0x1c)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.DevPVSCheckClientLocationC2S
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate]
	void DevPVSCheckClientLocationC2S(struct ASTExtraBaseCharacter* PtrOtherCharacter, struct FVector D, struct FVector A, struct FVector V, struct FVector C, bool b1); // Offset: 0x103fadd88 // Return & Params: Num(6) Size(0x39)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.DevPVSCheckClientLocation
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient|NetValidate]
	void DevPVSCheckClientLocation(struct AActor* PtrSimulatedProxy, struct FVector D); // Offset: 0x103fadccc // Return & Params: Num(2) Size(0x14)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.DevPrintMouke
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void DevPrintMouke(StrProperty Param0, float Param1, StrProperty Param3); // Offset: 0x103fadb98 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ControlRoofTouch
	// Flags: [Final|Native|Public]
	void ControlRoofTouch(IntProperty Switch); // Offset: 0x103fadb1c // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ControlPalmRest
	// Flags: [Final|Native|Public]
	void ControlPalmRest(IntProperty Switch); // Offset: 0x103fadaa0 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ControlMoveInputRecord
	// Flags: [Final|Native|Public]
	void ControlMoveInputRecord(IntProperty Switch, float RecordCooldown, IntProperty BitmapSize, IntProperty MinValidSampleCount, uint32_t InAngleSampleMaxCount, uint32_t InAngleDistributionNum); // Offset: 0x103fad900 // Return & Params: Num(6) Size(0x18)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ControlMHActive
	// Flags: [Final|Native|Public]
	void ControlMHActive(IntProperty Switch); // Offset: 0x103fad884 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.Cofew
	// Flags: [Final|Native|Public]
	void Cofew(uint32_t InIter); // Offset: 0x103fad808 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawkWithParams
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientSwiftHawkWithParams(struct TArray<char> Hawks); // Offset: 0x103fad768 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientSwiftHawk
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientSwiftHawk(char Type, IntProperty SequenceID); // Offset: 0x103fad6a8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientReceiveEx
	// Flags: [Final|Net|Native|Event|Private|NetClient|NetValidate]
	void ClientReceiveEx(struct TArray<char> RPCConstArray); // Offset: 0x103fad608 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientDoJT
	// Flags: [Final|Native|Public]
	void ClientDoJT(bool bDelayUntilShot); // Offset: 0x103fad584 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientCloseBaziUI
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientCloseBaziUI(struct TArray<struct FBazi> Bazi, struct TArray<struct FChori> Chori); // Offset: 0x103fad490 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.ClientAccom
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientAccom(uint16_t Owea); // Offset: 0x103fad40c // Return & Params: Num(1) Size(0x2)

	// Object Name: Function HiggsBoson.HiggsBosonComponent.C2SSendAlert
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate]
	void C2SSendAlert(StrProperty Param1); // Offset: 0x103fad36c // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class HiggsBoson.HiggsBosonDataSubsystem
// Size: 0x140 // Inherited bytes: 0x30
struct UHiggsBosonDataSubsystem : UGameInstanceSubsystem {
	// Fields
	bool bFingerTouchFlowServerEnabled; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	struct FFingerTouchFlow FingerTouchFlow; // Offset: 0x38 // Size: 0x98
	IntProperty FingerTouchFlow_MinSampleCount; // Offset: 0xd0 // Size: 0x04
	IntProperty FingerTouchFlow_MaxClusterCount; // Offset: 0xd4 // Size: 0x04
	float FingerTouchFlow_SamplingDuration; // Offset: 0xd8 // Size: 0x04
	float FingerTouchFlow_CoolDown; // Offset: 0xdc // Size: 0x04
	IntProperty FingerTouchFlow_MaxSamplePerCluster; // Offset: 0xe0 // Size: 0x04
	char pad_0xE4[0x4]; // Offset: 0xe4 // Size: 0x04
	SetProperty FingerTouchFlow_ModeFilter; // Offset: 0xe8 // Size: 0x50
	IntProperty FingerTouchFlow_AuxResult; // Offset: 0x138 // Size: 0x04
	char pad_0x13C[0x4]; // Offset: 0x13c // Size: 0x04
};

// Object Name: Class HiggsBoson.HiggsBosonScriptHelper
// Size: 0x28 // Inherited bytes: 0x28
struct UHiggsBosonScriptHelper : UObject {
	// Functions

	// Object Name: Function HiggsBoson.HiggsBosonScriptHelper.FileCRCGuard_UnregisterFile
	// Flags: [Final|Native|Static|Public]
	void FileCRCGuard_UnregisterFile(StrProperty InFilePath); // Offset: 0x103fb3cb4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function HiggsBoson.HiggsBosonScriptHelper.FileCRCGuard_RegisterFile
	// Flags: [Final|Native|Static|Public]
	bool FileCRCGuard_RegisterFile(StrProperty InFilePath, StrProperty InTag); // Offset: 0x103fb3bc8 // Return & Params: Num(3) Size(0x21)
};

// Object Name: Class HiggsBoson.MarginIntervalCharacterTickerPlayerInfo
// Size: 0x38 // Inherited bytes: 0x28
struct UMarginIntervalCharacterTickerPlayerInfo : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10
};

// Object Name: Class HiggsBoson.MarginIntervalCharacterTicker
// Size: 0x88 // Inherited bytes: 0x28
struct UMarginIntervalCharacterTicker : UObject {
	// Fields
	float IntervalTime; // Offset: 0x28 // Size: 0x04
	float MarginTime; // Offset: 0x2c // Size: 0x04
	enum class EPawnState SkipPawnState64; // Offset: 0x30 // Size: 0x01
	char pad_0x31[0x7]; // Offset: 0x31 // Size: 0x07
	MapProperty PlayerKey2Info; // Offset: 0x38 // Size: 0x50

	// Functions

	// Object Name: Function HiggsBoson.MarginIntervalCharacterTicker.Reset
	// Flags: [Final|Native|Private]
	void Reset(); // Offset: 0x103fb3fe8 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class HiggsBoson.SecurityAvatarSystem
// Size: 0x90 // Inherited bytes: 0x30
struct USecurityAvatarSystem : UWorldSubsystem {
	// Fields
	char pad_0x30[0x60]; // Offset: 0x30 // Size: 0x60

	// Functions

	// Object Name: Function HiggsBoson.SecurityAvatarSystem.OnAvatarRectifyDataChange
	// Flags: [Final|Native|Public]
	void OnAvatarRectifyDataChange(struct AUAECharacter* CharacterOwner, IntProperty ItemId); // Offset: 0x103fb42b8 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function HiggsBoson.SecurityAvatarSystem.OnAvatarEquipped
	// Flags: [Final|Native|Public|HasOutParms]
	void OnAvatarEquipped(struct AUAECharacter* CharacterOwner, IntProperty SlotID, struct FItemDefineID& NewItemID, struct FItemDefineID& OldItemID); // Offset: 0x103fb4158 // Return & Params: Num(4) Size(0x40)
};

// Object Name: Class HiggsBoson.SecurityImprisonComp
// Size: 0x1a8 // Inherited bytes: 0x178
struct USecurityImprisonComp : UActorComponent {
	// Fields
	struct ASTExtraPlayerController* OwnerPC; // Offset: 0x178 // Size: 0x08
	struct ASTExtraBaseCharacter* CharacterWaitForOp; // Offset: 0x180 // Size: 0x08
	struct TArray<uint64> TeammateKillerUID; // Offset: 0x188 // Size: 0x10
	struct TArray<enum class ETeammateHurtType> TeammateKillType; // Offset: 0x198 // Size: 0x10

	// Functions

	// Object Name: Function HiggsBoson.SecurityImprisonComp.ReleaseTeammate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ReleaseTeammate(uint64 PlayerUID); // Offset: 0x103fb48f8 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function HiggsBoson.SecurityImprisonComp.ImprisonmentUIUpdate
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|NetValidate]
	void ImprisonmentUIUpdate(uint64 PlayerUID, bool bIsImprison); // Offset: 0x103fb4830 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function HiggsBoson.SecurityImprisonComp.ImprisonmentTeammate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ImprisonmentTeammate(uint64 PlayerUID, bool bIscomplaint); // Offset: 0x103fb4768 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function HiggsBoson.SecurityImprisonComp.ImprisonmentReport
	// Flags: [Final|Native|Public]
	void ImprisonmentReport(uint64 PlayerUID); // Offset: 0x103fb46ec // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class HiggsBoson.TickAsTimer
// Size: 0x28 // Inherited bytes: 0x28
struct UTickAsTimer : UObject {
};

// Object Name: Class HiggsBoson.TimeIntervalPawnStateHistorySystem
// Size: 0xf8 // Inherited bytes: 0x28
struct UTimeIntervalPawnStateHistorySystem : UObject {
	// Fields
	char pad_0x28[0x50]; // Offset: 0x28 // Size: 0x50
	IntProperty HistoryArraySize; // Offset: 0x78 // Size: 0x04
	char pad_0x7C[0x7c]; // Offset: 0x7c // Size: 0x7c

	// Functions

	// Object Name: Function HiggsBoson.TimeIntervalPawnStateHistorySystem.UpdateParams
	// Flags: [Final|Native|Private]
	void UpdateParams(); // Offset: 0x103fb4e54 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function HiggsBoson.TimeIntervalPawnStateHistorySystem.QueryHistoryMaxVelocity
	// Flags: [Final|Native|Private|HasOutParms]
	bool QueryHistoryMaxVelocity(uint64 UID, float CenterTime, float MarginTime, float& OutMaxZVelocity, float& OutMaxXYVelocity); // Offset: 0x103fb4cbc // Return & Params: Num(6) Size(0x19)
};

