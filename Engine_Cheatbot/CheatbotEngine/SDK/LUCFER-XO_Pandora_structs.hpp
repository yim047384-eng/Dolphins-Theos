#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Pandora.EPandoraPanelType
enum class EPandoraPanelType : uint8_t
{
	PDRPT_Pandora                  = 0,
	PDRPT_Gamelet                  = 1,
	PDRPT_MAX                      = 2
};


// Enum Pandora.EPandoraCMDType
enum class EPandoraCMDType : uint8_t
{
	PDRCT_Pandora                  = 0,
	PDRCT_Gamelet                  = 1,
	PDRCT_Undefined                = 2,
	PDRCT_MAX                      = 3
};


// Enum Pandora.EPandoraRemoteConfigStatus
enum class EPandoraRemoteConfigStatus : uint8_t
{
	PDR_RemoteConfigNotStarted     = 0,
	PDR_RemoteConfigFetching       = 1,
	PDR_RemoteConfigReady          = 2,
	PDR_RemoteConfigFetchFailed    = 3,
	PDR_RemoteConfigNoRuleMatched  = 4,
	PDR_RemoteConfigSwitchOff      = 5,
	PDR_MAX                        = 6
};


// Enum Pandora.EPandoraActivityStatus
enum class EPandoraActivityStatus : uint8_t
{
	PDR_ActivityNeedUpdate         = 0,
	PDR_ActivityUpdating           = 1,
	PDR_ActivityUpdateFailed       = 2,
	PDR_ActivityUpToDate           = 3,
	PDR_ActivityMounted            = 4,
	PDR_ActivityMountFailed        = 5,
	PDR_ActivityNotFound           = 6,
	PDR_ActivityRemoteConfigNotReady = 7
};


// Enum Pandora.EPandoraEnv
enum class EPandoraEnv : uint8_t
{
	PDR_Test                       = 0,
	PDR_Prod                       = 1,
	PDR_SingaporeTest              = 2,
	PDR_SingaporeProd              = 3,
	PDR_NorthAmericaTest           = 4,
	PDR_NorthAmericaProd           = 5,
	PDR_EnvMax                     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Pandora.PLuaBPVar
// 0x0020
struct FPLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

