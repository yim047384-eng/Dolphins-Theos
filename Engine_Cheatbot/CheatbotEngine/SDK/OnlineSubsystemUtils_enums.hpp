#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Object Name: Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	EClientRequestType_MAX = 6
};

// Object Name: Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_Banned = 10,
	ReservationRequestCanceled = 11,
	ReservationInvalid = 12,
	BadSessionId = 13,
	ReservationDenied_ContainsExistingPlayers = 14,
	EPartyReservationResult_MAX = 15
};

