#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class UAESharedModule.OwnBlackboardInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UOwnBlackboardInterface : UInterface {
	// Functions

	// Object Name: Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboardParameter
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct TArray<struct FUAEBlackboardParameter> GetOwnBlackboardParameter(); // Offset: 0x101cdf1d4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboard
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	struct UUAEBlackboard* GetOwnBlackboard(); // Offset: 0x101cdf198 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class UAESharedModule.UAEBlackboardBlueprintFunctionLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UUAEBlackboardBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsWeakObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsWeakObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct UObject* ObjectValue); // Offset: 0x101ce1f64 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct FVector& VectorValue); // Offset: 0x101ce1e14 // Return & Params: Num(3) Size(0x3d4)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, StrProperty StringValue); // Offset: 0x101ce1c70 // Return & Params: Num(3) Size(0x3d8)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct FRotator& RotatorValue); // Offset: 0x101ce1b20 // Return & Params: Num(3) Size(0x3d4)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct UObject* ObjectValue); // Offset: 0x101ce19dc // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct FName NameValue); // Offset: 0x101ce1898 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, IntProperty IntValue); // Offset: 0x101ce1754 // Return & Params: Num(3) Size(0x3cc)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, float FloatValue); // Offset: 0x101ce1610 // Return & Params: Num(3) Size(0x3cc)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, char EnumValue); // Offset: 0x101ce14cc // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, struct UObject* ClassValue); // Offset: 0x101ce1388 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key, bool BoolValue); // Offset: 0x101ce123c // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistWeakObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistWeakObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce1134 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistVector
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistVector(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce102c // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistString(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0f24 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistRotator(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0e1c // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0d14 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistName(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0c0c // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistInt(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0b04 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistFloat(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce09fc // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistEnum(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce08f4 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistClass(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce07ec // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool IsExistBool(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce06e4 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetValueAsWeakObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce05dc // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct AActor* GetValueAsWeakActor(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce04b4 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector GetValueAsVector(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce03a4 // Return & Params: Num(3) Size(0x3d4)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetValueAsString(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0274 // Return & Params: Num(3) Size(0x3d8)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FRotator GetValueAsRotator(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce0164 // Return & Params: Num(3) Size(0x3d4)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsObject
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetValueAsObject(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce005c // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct FName GetValueAsName(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdff50 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsInt
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetValueAsInt(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdfe48 // Return & Params: Num(3) Size(0x3cc)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	float GetValueAsFloat(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdfd40 // Return & Params: Num(3) Size(0x3cc)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsEnum
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	char GetValueAsEnum(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdfc38 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsClass
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct UObject* GetValueAsClass(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdfb30 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsBool
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	bool GetValueAsBool(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdfa28 // Return & Params: Num(3) Size(0x3c9)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsActor
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	struct AActor* GetValueAsActor(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardKeySelector& Key); // Offset: 0x101cdf900 // Return & Params: Num(3) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboardByBlackboard
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void FillBlackboardByBlackboard(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardContainer& OtherUAEBlackboardContainer); // Offset: 0x101cdf7e4 // Return & Params: Num(2) Size(0x780)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboard
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void FillBlackboard(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct TArray<struct FUAEBlackboardParameter>& ParamList); // Offset: 0x101cdf6d0 // Return & Params: Num(2) Size(0x3d0)

	// Object Name: Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.AddValueByParam
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void AddValueByParam(struct FUAEBlackboardContainer& UAEBlackboardContainer, struct FUAEBlackboardParameter& NewParam); // Offset: 0x101cdf5b0 // Return & Params: Num(2) Size(0x458)
};

// Object Name: Class UAESharedModule.UAEBlackboard
// Size: 0x3e8 // Inherited bytes: 0x28
struct UUAEBlackboard : UObject {
	// Fields
	struct FUAEBlackboardContainer UAEBlackboardContainer; // Offset: 0x28 // Size: 0x3c0

	// Functions

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsWeakObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsWeakObject(struct FUAEBlackboardKeySelector& Key, struct UObject* ObjectValue); // Offset: 0x101ce4510 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsVector(struct FUAEBlackboardKeySelector& Key, struct FVector VectorValue); // Offset: 0x101ce4440 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsString(struct FUAEBlackboardKeySelector& Key, StrProperty StringValue); // Offset: 0x101ce4304 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	void SetValueAsRotator(struct FUAEBlackboardKeySelector& Key, struct FRotator VectorValue); // Offset: 0x101ce4234 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsObject(struct FUAEBlackboardKeySelector& Key, struct UObject* ObjectValue); // Offset: 0x101ce4164 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsName(struct FUAEBlackboardKeySelector& Key, struct FName NameValue); // Offset: 0x101ce4094 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsInt(struct FUAEBlackboardKeySelector& Key, IntProperty IntValue); // Offset: 0x101ce3fc4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsFloat(struct FUAEBlackboardKeySelector& Key, float FloatValue); // Offset: 0x101ce3ef4 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsEnum(struct FUAEBlackboardKeySelector& Key, char EnumValue); // Offset: 0x101ce3e24 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsClass(struct FUAEBlackboardKeySelector& Key, struct UObject* ClassValue); // Offset: 0x101ce3d54 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.SetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void SetValueAsBool(struct FUAEBlackboardKeySelector& Key, bool BoolValue); // Offset: 0x101ce3c7c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistWeakObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistWeakObject(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3be0 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistVector
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistVector(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3b44 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistString(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3aa8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistRotator
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistRotator(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3a0c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistObject(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3970 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistName(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce38d4 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistInt(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3838 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistFloat(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce379c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistEnum(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3700 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistClass(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3664 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.IsExistBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool IsExistBool(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce35c8 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsWeakObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsWeakObject(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce352c // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsWeakActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsWeakActor(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3474 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsVector
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FVector GetValueAsVector(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce33d4 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsString
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	StrProperty GetValueAsString(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3310 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsRotator
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	struct FRotator GetValueAsRotator(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3270 // Return & Params: Num(2) Size(0x14)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsObject
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsObject(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce31d4 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct FName GetValueAsName(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3138 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsInt
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	IntProperty GetValueAsInt(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce309c // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsFloat
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	float GetValueAsFloat(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce3000 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsEnum
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	char GetValueAsEnum(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce2f64 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsClass
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct UObject* GetValueAsClass(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce2ec8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsBool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	bool GetValueAsBool(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce2e2c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function UAESharedModule.UAEBlackboard.GetValueAsActor
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	struct AActor* GetValueAsActor(struct FUAEBlackboardKeySelector& Key); // Offset: 0x101ce2d74 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function UAESharedModule.UAEBlackboard.AddValueByParam
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	void AddValueByParam(struct FUAEBlackboardParameter& NewParam); // Offset: 0x101ce2cbc // Return & Params: Num(1) Size(0x98)
};

// Object Name: Class UAESharedModule.UAESharedModuleInterface
// Size: 0x28 // Inherited bytes: 0x28
struct UUAESharedModuleInterface : UInterface {
};

