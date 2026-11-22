#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function iTOP.FBHelper.DelayToSetAutoInitFacebookLog
struct UFBHelper_DelayToSetAutoInitFacebookLog_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function iTOP.FBHelper.DelayToInitFacebookSDK
struct UFBHelper_DelayToInitFacebookSDK_Params
{
	bool                                               IsAutoInit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithLaunchOption;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

