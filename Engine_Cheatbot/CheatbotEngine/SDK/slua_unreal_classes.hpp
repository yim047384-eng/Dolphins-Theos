#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class slua_unreal.LatentDelegate
// Size: 0x30 // Inherited bytes: 0x28
struct ULatentDelegate : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08

	// Functions

	// Object Name: Function slua_unreal.LatentDelegate.OnLatentCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	void OnLatentCallback(IntProperty threadRef); // Offset: 0x101c3647c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class slua_unreal.LuaActor
// Size: 0x570 // Inherited bytes: 0x4b0
struct ALuaActor : AActor {
	// Fields
	char pad_0x4B0[0x58]; // Offset: 0x4b0 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x508 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x558 // Size: 0x10
	char pad_0x568[0x8]; // Offset: 0x568 // Size: 0x08

	// Functions

	// Object Name: Function slua_unreal.LuaActor.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101c366cc // Return & Params: Num(0) Size(0x0)

	// Object Name: Function slua_unreal.LuaActor.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101c36650 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class slua_unreal.LuaActorComponent
// Size: 0x238 // Inherited bytes: 0x178
struct ULuaActorComponent : UActorComponent {
	// Fields
	char pad_0x178[0x58]; // Offset: 0x178 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x1d0 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x220 // Size: 0x10
	char pad_0x230[0x8]; // Offset: 0x230 // Size: 0x08

	// Functions

	// Object Name: Function slua_unreal.LuaActorComponent.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101c36948 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function slua_unreal.LuaActorComponent.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101c368cc // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class slua_unreal.LuaCharacter
// Size: 0x9a0 // Inherited bytes: 0x8f0
struct ALuaCharacter : ACharacter {
	// Fields
	char pad_0x8F0[0x50]; // Offset: 0x8f0 // Size: 0x50
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x940 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x990 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaDelegate
// Size: 0x180 // Inherited bytes: 0x28
struct ULuaDelegate : UObject {
	// Fields
	char pad_0x28[0x158]; // Offset: 0x28 // Size: 0x158

	// Functions

	// Object Name: Function slua_unreal.LuaDelegate.EventTrigger
	// Flags: [Final|Native|Public|BlueprintCallable]
	void EventTrigger(); // Offset: 0x101c36c04 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class slua_unreal.LuaGameMode
// Size: 0x5e8 // Inherited bytes: 0x580
struct ALuaGameMode : AGameMode {
	// Fields
	char pad_0x580[0x58]; // Offset: 0x580 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x5d8 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaGameState
// Size: 0x5c8 // Inherited bytes: 0x510
struct ALuaGameState : AGameState {
	// Fields
	char pad_0x510[0x58]; // Offset: 0x510 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x568 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x5b8 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaInstancedActorComponent
// Size: 0x1e8 // Inherited bytes: 0x178
struct ULuaInstancedActorComponent : UActorComponent {
	// Fields
	char pad_0x178[0x58]; // Offset: 0x178 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x1d0 // Size: 0x10
	char pad_0x1E0[0x8]; // Offset: 0x1e0 // Size: 0x08

	// Functions

	// Object Name: Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101c36ff8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101c36f7c // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class slua_unreal.LuaLevelScriptActor
// Size: 0x520 // Inherited bytes: 0x4b0
struct ALuaLevelScriptActor : ALevelScriptActor {
	// Fields
	char pad_0x4B0[0x58]; // Offset: 0x4b0 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x508 // Size: 0x10
	char pad_0x518[0x8]; // Offset: 0x518 // Size: 0x08

	// Functions

	// Object Name: Function slua_unreal.LuaLevelScriptActor.UnRegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void UnRegistLuaTick(); // Offset: 0x101c3722c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function slua_unreal.LuaLevelScriptActor.RegistLuaTick
	// Flags: [Final|Native|Public|BlueprintCallable]
	void RegistLuaTick(float TickInterval); // Offset: 0x101c371b0 // Return & Params: Num(1) Size(0x4)
};

// Object Name: Class slua_unreal.LuaOverrider
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaOverrider : UObject {
	// Functions

	// Object Name: Function slua_unreal.LuaOverrider.TriggerAnimNotify
	// Flags: [Event|Protected|BlueprintEvent]
	void TriggerAnimNotify(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function slua_unreal.LuaOverrider.InputVectorAxis
	// Flags: [Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	void InputVectorAxis(struct FVector& AxisValue); // Offset: 0x101c37764 // Return & Params: Num(1) Size(0xc)

	// Object Name: Function slua_unreal.LuaOverrider.InputTouch
	// Flags: [Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent]
	void InputTouch(enum class ETouchIndex FingerIndex, struct FVector& Location); // Offset: 0x101c37698 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function slua_unreal.LuaOverrider.InputGesture
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void InputGesture(float Value); // Offset: 0x101c37614 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function slua_unreal.LuaOverrider.InputAxis
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void InputAxis(float AxisValue); // Offset: 0x101c37590 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function slua_unreal.LuaOverrider.InputAction
	// Flags: [Native|Event|Protected|BlueprintEvent]
	void InputAction(struct FKey Key); // Offset: 0x101c374a0 // Return & Params: Num(1) Size(0x18)
};

// Object Name: Class slua_unreal.LuaOverriderInterface
// Size: 0x28 // Inherited bytes: 0x28
struct ULuaOverriderInterface : UInterface {
	// Functions

	// Object Name: Function slua_unreal.LuaOverriderInterface.GetLuaFilePath
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	StrProperty GetLuaFilePath(); // Offset: 0x101c37aa0 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class slua_unreal.LuaPatchRPCComponent
// Size: 0x190 // Inherited bytes: 0x178
struct ULuaPatchRPCComponent : UActorComponent {
	// Fields
	char pad_0x178[0x18]; // Offset: 0x178 // Size: 0x18

	// Functions

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.ServerUnreliable_LuaPatchRPC
	// Flags: [Net|Native|Event|Public|NetServer|NetValidate]
	void ServerUnreliable_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c387f8 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.Server_LuaPatchRPC
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void Server_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c38740 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.MulticastUnreliable_LuaPatchRPC
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void MulticastUnreliable_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c38688 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.MulticastPerConnectionUnreliable_LuaPatchRPC
	// Flags: [Net|Native|Event|NetMulticast|Public]
	void MulticastPerConnectionUnreliable_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c385d0 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.MulticastPerConnection_LuaPatchRPC
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void MulticastPerConnection_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c38518 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.Multicast_LuaPatchRPC
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	void Multicast_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c38460 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.ClientUnreliable_LuaPatchRPC
	// Flags: [Net|Native|Event|Public|NetClient]
	void ClientUnreliable_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c383a8 // Return & Params: Num(1) Size(0x40)

	// Object Name: Function slua_unreal.LuaPatchRPCComponent.Client_LuaPatchRPC
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void Client_LuaPatchRPC(struct FLuaPatchRPCFrame Frame); // Offset: 0x101c382f0 // Return & Params: Num(1) Size(0x40)
};

// Object Name: Class slua_unreal.LuaPawn
// Size: 0x5c8 // Inherited bytes: 0x510
struct ALuaPawn : APawn {
	// Fields
	char pad_0x510[0x58]; // Offset: 0x510 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x568 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x5b8 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaPlayerController
// Size: 0x8e0 // Inherited bytes: 0x828
struct ALuaPlayerController : APlayerController {
	// Fields
	char pad_0x828[0x58]; // Offset: 0x828 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x880 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x8d0 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaPlayerState
// Size: 0x5f8 // Inherited bytes: 0x540
struct ALuaPlayerState : APlayerState {
	// Fields
	char pad_0x540[0x58]; // Offset: 0x540 // Size: 0x58
	struct FLuaNetSerialization LuaNetSerialization; // Offset: 0x598 // Size: 0x50
	StrProperty LuaFilePath; // Offset: 0x5e8 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaObject
// Size: 0x90 // Inherited bytes: 0x28
struct ULuaObject : UObject {
	// Fields
	char pad_0x28[0x58]; // Offset: 0x28 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x80 // Size: 0x10
};

// Object Name: Class slua_unreal.LuaUserWidget
// Size: 0x2c8 // Inherited bytes: 0x260
struct ULuaUserWidget : UUserWidget {
	// Fields
	char pad_0x260[0x58]; // Offset: 0x260 // Size: 0x58
	StrProperty LuaFilePath; // Offset: 0x2b8 // Size: 0x10
};

// Object Name: Class slua_unreal.SluaBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct USluaBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.GetStringFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	StrProperty GetStringFromVar(struct FSluaBPVar Value, IntProperty Index); // Offset: 0x101c3a060 // Return & Params: Num(3) Size(0x38)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.GetObjectFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UObject* GetObjectFromVar(struct FSluaBPVar Value, IntProperty Index); // Offset: 0x101c39f60 // Return & Params: Num(3) Size(0x30)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.GetNumberFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	float GetNumberFromVar(struct FSluaBPVar Value, IntProperty Index); // Offset: 0x101c39e60 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.GetIntFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	IntProperty GetIntFromVar(struct FSluaBPVar Value, IntProperty Index); // Offset: 0x101c39d60 // Return & Params: Num(3) Size(0x28)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.GetBoolFromVar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool GetBoolFromVar(struct FSluaBPVar Value, IntProperty Index); // Offset: 0x101c39c60 // Return & Params: Num(3) Size(0x25)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CreateVarFromString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CreateVarFromString(StrProperty Value); // Offset: 0x101c39b68 // Return & Params: Num(2) Size(0x30)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CreateVarFromObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* Value); // Offset: 0x101c39a9c // Return & Params: Num(3) Size(0x30)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CreateVarFromNumber
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CreateVarFromNumber(float Value); // Offset: 0x101c39a0c // Return & Params: Num(2) Size(0x28)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CreateVarFromInt
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CreateVarFromInt(IntProperty Value); // Offset: 0x101c3997c // Return & Params: Num(2) Size(0x28)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CreateVarFromBool
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CreateVarFromBool(bool Value); // Offset: 0x101c398e4 // Return & Params: Num(2) Size(0x28)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CallToLuaWithArgs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct FSluaBPVar CallToLuaWithArgs(struct UObject* WorldContextObject, StrProperty FunctionName, struct TArray<struct FSluaBPVar>& Args, StrProperty StateName); // Offset: 0x101c396a4 // Return & Params: Num(5) Size(0x58)

	// Object Name: Function slua_unreal.SluaBlueprintLibrary.CallToLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct FSluaBPVar CallToLua(struct UObject* WorldContextObject, StrProperty FunctionName, StrProperty StateName); // Offset: 0x101c394d4 // Return & Params: Num(4) Size(0x48)
};

