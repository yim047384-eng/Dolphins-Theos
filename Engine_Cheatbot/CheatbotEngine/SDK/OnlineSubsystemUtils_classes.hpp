#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& Progress); // Offset: 0x1021fede8 // Return & Params: Num(5) Size(0x20)

	// Object Name: Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Offset: 0x1021feb00 // Return & Params: Num(8) Size(0x69)
};

// Object Name: Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x60 // Inherited bytes: 0x28
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x18]; // Offset: 0x48 // Size: 0x18

	// Functions

	// Object Name: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Offset: 0x1021ff228 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Offset: 0x1021ff174 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x78 // Inherited bytes: 0x28
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x30]; // Offset: 0x48 // Size: 0x30

	// Functions

	// Object Name: Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, IntProperty UserTag); // Offset: 0x1021ff4cc // Return & Params: Num(6) Size(0x28)
};

// Object Name: Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x70 // Inherited bytes: 0x28
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x28]; // Offset: 0x48 // Size: 0x28

	// Functions

	// Object Name: Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Offset: 0x1021ff7dc // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x90 // Inherited bytes: 0x28
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x48]; // Offset: 0x48 // Size: 0x48

	// Functions

	// Object Name: Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, IntProperty PublicConnections, bool bUseLAN); // Offset: 0x1021ff9f4 // Return & Params: Num(5) Size(0x20)
};

// Object Name: Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x70 // Inherited bytes: 0x28
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x28]; // Offset: 0x48 // Size: 0x28

	// Functions

	// Object Name: Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Offset: 0x1021ffc94 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x78 // Inherited bytes: 0x28
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x30]; // Offset: 0x48 // Size: 0x30

	// Functions

	// Object Name: Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<Class> MatchActor, StrProperty MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Offset: 0x1021ffeac // Return & Params: Num(7) Size(0x40)
};

// Object Name: Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x70 // Inherited bytes: 0x28
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x28]; // Offset: 0x48 // Size: 0x28

	// Functions

	// Object Name: Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, StrProperty MatchID, struct TScriptInterface<Class> TurnBasedMatchInterface); // Offset: 0x102200244 // Return & Params: Num(5) Size(0x38)
};

// Object Name: Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x88 // Inherited bytes: 0x28
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x40]; // Offset: 0x48 // Size: 0x40

	// Functions

	// Object Name: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	StrProperty GetServerName(struct FBlueprintSessionResult& Result); // Offset: 0x10220099c // Return & Params: Num(2) Size(0xc8)

	// Object Name: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetPingInMs(struct FBlueprintSessionResult& Result); // Offset: 0x1022008f0 // Return & Params: Num(2) Size(0xbc)

	// Object Name: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetMaxPlayers(struct FBlueprintSessionResult& Result); // Offset: 0x102200844 // Return & Params: Num(2) Size(0xbc)

	// Object Name: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	IntProperty GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Offset: 0x102200798 // Return & Params: Num(2) Size(0xbc)

	// Object Name: Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, IntProperty MaxResults, bool bUseLAN); // Offset: 0x102200668 // Return & Params: Num(5) Size(0x20)
};

// Object Name: Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x80 // Inherited bytes: 0x28
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x38]; // Offset: 0x48 // Size: 0x38

	// Functions

	// Object Name: Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<Class> MatchActor, IntProperty MinPlayers, IntProperty MaxPlayers, IntProperty PlayerGroup, bool ShowExistingMatches); // Offset: 0x102200d34 // Return & Params: Num(8) Size(0x38)
};

// Object Name: Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x80 // Inherited bytes: 0x28
struct UInAppPurchaseCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x38]; // Offset: 0x48 // Size: 0x38

	// Functions

	// Object Name: Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Offset: 0x1022010d8 // Return & Params: Num(3) Size(0x28)
};

// Object Name: Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x90 // Inherited bytes: 0x28
struct UInAppPurchaseQueryCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x48]; // Offset: 0x48 // Size: 0x48

	// Functions

	// Object Name: Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<StrProperty>& ProductIdentifiers); // Offset: 0x10220135c // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x90 // Inherited bytes: 0x28
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x48]; // Offset: 0x48 // Size: 0x48

	// Functions

	// Object Name: Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Offset: 0x1022015e0 // Return & Params: Num(3) Size(0x20)
};

// Object Name: Class OnlineSubsystemUtils.IpConnection
// Size: 0x35708 // Inherited bytes: 0x356a0
struct UIpConnection : UNetConnection {
	// Fields
	char pad_0x356A0[0x68]; // Offset: 0x356a0 // Size: 0x68
};

// Object Name: Class OnlineSubsystemUtils.IpNetDriver
// Size: 0xa00 // Inherited bytes: 0x8e8
struct UIpNetDriver : UNetDriver {
	// Fields
	char LogPortUnreach : 1; // Offset: 0x8e8 // Size: 0x01
	char AllowPlayerPortUnreach : 1; // Offset: 0x8e8 // Size: 0x01
	char pad_0x8E8_2 : 6; // Offset: 0x8e8 // Size: 0x01
	char pad_0x8E9[0x3]; // Offset: 0x8e9 // Size: 0x03
	uint32_t MaxPortCountToTry; // Offset: 0x8ec // Size: 0x04
	char pad_0x8F0[0x18]; // Offset: 0x8f0 // Size: 0x18
	uint32_t ServerDesiredSocketReceiveBufferBytes; // Offset: 0x908 // Size: 0x04
	uint32_t ServerDesiredSocketSendBufferBytes; // Offset: 0x90c // Size: 0x04
	uint32_t ClientDesiredSocketReceiveBufferBytes; // Offset: 0x910 // Size: 0x04
	uint32_t ClientDesiredSocketSendBufferBytes; // Offset: 0x914 // Size: 0x04
	char pad_0x918[0x60]; // Offset: 0x918 // Size: 0x60
	float RecreateSocketCooldownTime; // Offset: 0x978 // Size: 0x04
	float RecreateSocketMaxTryCount; // Offset: 0x97c // Size: 0x04
	bool bResolveRemoteHostOnRecreateSocket; // Offset: 0x980 // Size: 0x01
	bool bContinueProcessWhenReceiveEmptyPackets; // Offset: 0x981 // Size: 0x01
	bool bContinueProcessWhenConReceiveEmptyPackets; // Offset: 0x982 // Size: 0x01
	char pad_0x983[0x7d]; // Offset: 0x983 // Size: 0x7d
};

// Object Name: Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x128 // Inherited bytes: 0x28
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0xe0]; // Offset: 0x48 // Size: 0xe0

	// Functions

	// Object Name: Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Offset: 0x102201a88 // Return & Params: Num(4) Size(0xd0)
};

// Object Name: Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, IntProperty StatValue); // Offset: 0x102201d0c // Return & Params: Num(4) Size(0x15)
};

// Object Name: Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 // Inherited bytes: 0x28
struct ULeaderboardFlushCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x20]; // Offset: 0x48 // Size: 0x20

	// Functions

	// Object Name: Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Offset: 0x102201fac // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 // Inherited bytes: 0x28
struct ULeaderboardQueryCallbackProxy : UObject {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x50]; // Offset: 0x48 // Size: 0x50

	// Functions

	// Object Name: Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Offset: 0x102202200 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x60 // Inherited bytes: 0x28
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x18]; // Offset: 0x48 // Size: 0x18

	// Functions

	// Object Name: Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Offset: 0x102202454 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x4d8 // Inherited bytes: 0x4b0
struct AOnlineBeacon : AActor {
	// Fields
	char pad_0x4B0[0x8]; // Offset: 0x4b0 // Size: 0x08
	float BeaconConnectionInitialTimeout; // Offset: 0x4b8 // Size: 0x04
	float BeaconConnectionTimeout; // Offset: 0x4bc // Size: 0x04
	struct UNetDriver* NetDriver; // Offset: 0x4c0 // Size: 0x08
	char pad_0x4C8[0x10]; // Offset: 0x4c8 // Size: 0x10
};

// Object Name: Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x518 // Inherited bytes: 0x4d8
struct AOnlineBeaconClient : AOnlineBeacon {
	// Fields
	struct AOnlineBeaconHostObject* BeaconOwner; // Offset: 0x4d8 // Size: 0x08
	struct UNetConnection* BeaconConnection; // Offset: 0x4e0 // Size: 0x08
	enum class EBeaconConnectionState ConnectionState; // Offset: 0x4e8 // Size: 0x01
	char pad_0x4E9[0x2f]; // Offset: 0x4e9 // Size: 0x2f

	// Functions

	// Object Name: Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// Flags: [Final|Net|NetReliableNative|Event|Private|NetClient]
	void ClientOnConnected(); // Offset: 0x102202834 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x590 // Inherited bytes: 0x4d8
struct AOnlineBeaconHost : AOnlineBeacon {
	// Fields
	IntProperty ListenPort; // Offset: 0x4d8 // Size: 0x04
	char pad_0x4DC[0x4]; // Offset: 0x4dc // Size: 0x04
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // Offset: 0x4e0 // Size: 0x10
	char pad_0x4F0[0xa0]; // Offset: 0x4f0 // Size: 0xa0
};

// Object Name: Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x4d8 // Inherited bytes: 0x4b0
struct AOnlineBeaconHostObject : AActor {
	// Fields
	StrProperty BeaconTypeName; // Offset: 0x4b0 // Size: 0x10
	struct AOnlineBeaconClient* ClientBeaconActorClass; // Offset: 0x4c0 // Size: 0x08
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // Offset: 0x4c8 // Size: 0x10
};

// Object Name: Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x130 // Inherited bytes: 0x28
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	// Fields
	struct FName VoiceSubsystemNameOverride; // Offset: 0x28 // Size: 0x08
	char pad_0x30[0x100]; // Offset: 0x30 // Size: 0x100
};

// Object Name: Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 // Inherited bytes: 0x38
struct UOnlinePIESettings : UDeveloperSettings {
	// Fields
	bool bOnlinePIEEnabled; // Offset: 0x38 // Size: 0x01
	char pad_0x39[0x7]; // Offset: 0x39 // Size: 0x07
	struct TArray<struct FPIELoginSettingsInternal> Logins; // Offset: 0x40 // Size: 0x10
};

// Object Name: Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x190 // Inherited bytes: 0x28
struct UOnlineSessionClient : UOnlineSession {
	// Fields
	char pad_0x28[0x160]; // Offset: 0x28 // Size: 0x160
	bool bIsFromInvite; // Offset: 0x188 // Size: 0x01
	bool bHandlingDisconnect; // Offset: 0x189 // Size: 0x01
	char pad_0x18A[0x6]; // Offset: 0x18a // Size: 0x06
};

// Object Name: Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5b8 // Inherited bytes: 0x518
struct APartyBeaconClient : AOnlineBeaconClient {
	// Fields
	char pad_0x518[0x30]; // Offset: 0x518 // Size: 0x30
	StrProperty DestSessionId; // Offset: 0x548 // Size: 0x10
	struct FPartyReservation PendingReservation; // Offset: 0x558 // Size: 0x30
	enum class EClientRequestType RequestType; // Offset: 0x588 // Size: 0x01
	bool bPendingReservationSent; // Offset: 0x589 // Size: 0x01
	bool bCancelReservation; // Offset: 0x58a // Size: 0x01
	char pad_0x58B[0x2d]; // Offset: 0x58b // Size: 0x2d

	// Functions

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerUpdateReservationRequest(StrProperty SessionId, struct FPartyReservation ReservationUpdate); // Offset: 0x1022036e0 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerReservationRequest(StrProperty SessionId, struct FPartyReservation Reservation); // Offset: 0x1022035d4 // Return & Params: Num(2) Size(0x40)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// Flags: [Net|NetReliableNative|Event|Protected|NetServer|NetValidate]
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Offset: 0x102203528 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientSendReservationUpdates(IntProperty NumRemainingReservations); // Offset: 0x1022034a4 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientSendReservationFull(); // Offset: 0x102203488 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Offset: 0x102203404 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Offset: 0x102203380 // Return & Params: Num(1) Size(0x1)
};

// Object Name: Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x540 // Inherited bytes: 0x4d8
struct APartyBeaconHost : AOnlineBeaconHostObject {
	// Fields
	struct UPartyBeaconState* State; // Offset: 0x4d8 // Size: 0x08
	char pad_0x4E0[0x50]; // Offset: 0x4e0 // Size: 0x50
	bool bLogoutOnSessionTimeout; // Offset: 0x530 // Size: 0x01
	char pad_0x531[0x3]; // Offset: 0x531 // Size: 0x03
	float SessionTimeoutSecs; // Offset: 0x534 // Size: 0x04
	float TravelSessionTimeoutSecs; // Offset: 0x538 // Size: 0x04
	char pad_0x53C[0x4]; // Offset: 0x53c // Size: 0x04
};

// Object Name: Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x70 // Inherited bytes: 0x28
struct UPartyBeaconState : UObject {
	// Fields
	struct FName SessionName; // Offset: 0x28 // Size: 0x08
	IntProperty NumConsumedReservations; // Offset: 0x30 // Size: 0x04
	IntProperty MaxReservations; // Offset: 0x34 // Size: 0x04
	IntProperty NumTeams; // Offset: 0x38 // Size: 0x04
	IntProperty NumPlayersPerTeam; // Offset: 0x3c // Size: 0x04
	struct FName TeamAssignmentMethod; // Offset: 0x40 // Size: 0x08
	IntProperty ReservedHostTeamNum; // Offset: 0x48 // Size: 0x04
	IntProperty ForceTeamNum; // Offset: 0x4c // Size: 0x04
	struct TArray<struct FPartyReservation> Reservations; // Offset: 0x50 // Size: 0x10
	char pad_0x60[0x10]; // Offset: 0x60 // Size: 0x10
};

// Object Name: Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x70 // Inherited bytes: 0x28
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x28]; // Offset: 0x48 // Size: 0x28

	// Functions

	// Object Name: Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, StrProperty MatchID, enum class EMPMatchOutcome Outcome, IntProperty TurnTimeoutInSeconds); // Offset: 0x102203f20 // Return & Params: Num(6) Size(0x30)
};

// Object Name: Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x58 // Inherited bytes: 0x28
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	// Fields
	struct FScriptMulticastDelegate OnSuccess; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate OnFailure; // Offset: 0x38 // Size: 0x10
	char pad_0x48[0x10]; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Offset: 0x102204270 // Return & Params: Num(3) Size(0x18)
};

// Object Name: Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x518 // Inherited bytes: 0x518
struct ATestBeaconClient : AOnlineBeaconClient {
	// Functions

	// Object Name: Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|NetValidate]
	void ServerPong(); // Offset: 0x10220451c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	void ClientPing(); // Offset: 0x102204500 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x4d8 // Inherited bytes: 0x4d8
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Object Name: Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Offset: 0x102204d50 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, StrProperty MatchID, IntProperty playerIndex, StrProperty& PlayerDisplayName); // Offset: 0x102204b4c // Return & Params: Num(5) Size(0x38)

	// Object Name: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, StrProperty MatchID, IntProperty& playerIndex); // Offset: 0x102204998 // Return & Params: Num(4) Size(0x24)

	// Object Name: Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, StrProperty MatchID, bool& bIsMyTurn); // Offset: 0x1022047e4 // Return & Params: Num(4) Size(0x21)
};

