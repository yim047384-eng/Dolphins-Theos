#pragma once

//LUCFER @krro6
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.WriteCaptureTextureToVideo
struct UBP_GameJoyPluginLibrary_WriteCaptureTextureToVideo_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.UseBackbuffer
struct UBP_GameJoyPluginLibrary_UseBackbuffer_Params
{
	bool                                               use;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.UpdateRedDot
struct UBP_GameJoyPluginLibrary_UpdateRedDot_Params
{
	bool                                               showRedDot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.UnLockRecorderPosition
struct UBP_GameJoyPluginLibrary_UnLockRecorderPosition_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.StopRecorder
struct UBP_GameJoyPluginLibrary_StopRecorder_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.StartRecorder
struct UBP_GameJoyPluginLibrary_StartRecorder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowRecorderDialog
struct UBP_GameJoyPluginLibrary_ShowRecorderDialog_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowConsole
struct UBP_GameJoyPluginLibrary_ShowConsole_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWwiseListenerStatus
struct UBP_GameJoyPluginLibrary_SetWwiseListenerStatus_Params
{
	bool                                               isMultiple;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWatermark
struct UBP_GameJoyPluginLibrary_SetWatermark_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoResolution
struct UBP_GameJoyPluginLibrary_SetVideoResolution_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Resolution;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoQuality
struct UBP_GameJoyPluginLibrary_SetVideoQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoBitrate
struct UBP_GameJoyPluginLibrary_SetVideoBitrate_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BitRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetShareRenderContext
struct UBP_GameJoyPluginLibrary_SetShareRenderContext_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetMinAvailableSpaceMB
struct UBP_GameJoyPluginLibrary_SetMinAvailableSpaceMB_Params
{
	int                                                minAvailableSpaceMB;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetLoggerLevel
struct UBP_GameJoyPluginLibrary_SetLoggerLevel_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetGameUseRenderAPI
struct UBP_GameJoyPluginLibrary_SetGameUseRenderAPI_Params
{
	int                                                api;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetGameUseColorSpace
struct UBP_GameJoyPluginLibrary_SetGameUseColorSpace_Params
{
	int                                                colorSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetFrameRate
struct UBP_GameJoyPluginLibrary_SetFrameRate_Params
{
	int                                                FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetEnableBackbufferCallback
struct UBP_GameJoyPluginLibrary_SetEnableBackbufferCallback_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCoverSize
struct UBP_GameJoyPluginLibrary_SetCoverSize_Params
{
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureTextureFlipY
struct UBP_GameJoyPluginLibrary_SetCaptureTextureFlipY_Params
{
	bool                                               flip;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureTexture
struct UBP_GameJoyPluginLibrary_SetCaptureTexture_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureSource
struct UBP_GameJoyPluginLibrary_SetCaptureSource_Params
{
	int                                                CaptureSource;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAutoProfileLevel
struct UBP_GameJoyPluginLibrary_SetAutoProfileLevel_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAlbumName
struct UBP_GameJoyPluginLibrary_SetAlbumName_Params
{
	struct FString                                     albumName;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.RequestSDKPermission
struct UBP_GameJoyPluginLibrary_RequestSDKPermission_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthSetSecretKey
struct UBP_GameJoyPluginLibrary_PxAuthSetSecretKey_Params
{
	struct FString                                     SecretKey;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthLogout
struct UBP_GameJoyPluginLibrary_PxAuthLogout_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthGetSdkVersion
struct UBP_GameJoyPluginLibrary_PxAuthGetSdkVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.OnPostRender
struct UBP_GameJoyPluginLibrary_OnPostRender_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.NotifySpaceNotEnough
struct UBP_GameJoyPluginLibrary_NotifySpaceNotEnough_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveVideoToAlbum
struct UBP_GameJoyPluginLibrary_MoveVideoToAlbum_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     albumName;                                                // (Parm, ZeroConstructor)
	struct FString                                     srcPath;                                                  // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFileToDocument
struct UBP_GameJoyPluginLibrary_MoveFileToDocument_Params
{
	struct FString                                     fromPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     toSubPath;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFile
struct UBP_GameJoyPluginLibrary_MoveFile_Params
{
	struct FString                                     From;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     dst;                                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveAlbumToLocal
struct UBP_GameJoyPluginLibrary_MoveAlbumToLocal_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     albumPath;                                                // (Parm, ZeroConstructor)
	struct FString                                     localPath;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.MergeVideoWithImageAndVideo
struct UBP_GameJoyPluginLibrary_MergeVideoWithImageAndVideo_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     videoPath;                                                // (Parm, ZeroConstructor)
	struct FString                                     headerVideo;                                              // (Parm, ZeroConstructor)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.LockRecorderPosition
struct UBP_GameJoyPluginLibrary_LockRecorderPosition_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecording
struct UBP_GameJoyPluginLibrary_IsRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecorderDialogShow
struct UBP_GameJoyPluginLibrary_IsRecorderDialogShow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsIOSFileExist
struct UBP_GameJoyPluginLibrary_IsIOSFileExist_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsFileExist
struct UBP_GameJoyPluginLibrary_IsFileExist_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsDirExist
struct UBP_GameJoyPluginLibrary_IsDirExist_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.InitGameJoyBPLib
struct UBP_GameJoyPluginLibrary_InitGameJoyBPLib_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoMd5
struct UBP_GameJoyPluginLibrary_GetVideoMd5_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     videoPathJson;                                            // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoInfo
struct UBP_GameJoyPluginLibrary_GetVideoInfo_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     videoPathJson;                                            // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeSeconds
struct UBP_GameJoyPluginLibrary_GetTimeSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeMilliSeconds
struct UBP_GameJoyPluginLibrary_GetTimeMilliSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetSDKVersion
struct UBP_GameJoyPluginLibrary_GetSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetSandboxPath
struct UBP_GameJoyPluginLibrary_GetSandboxPath_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetRecorderPosition
struct UBP_GameJoyPluginLibrary_GetRecorderPosition_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPaths
struct UBP_GameJoyPluginLibrary_GetPaths_Params
{
	int                                                pathType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Relative;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPathRelativeTo
struct UBP_GameJoyPluginLibrary_GetPathRelativeTo_Params
{
	struct FString                                     fromPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     relativeTo;                                               // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetInstance
struct UBP_GameJoyPluginLibrary_GetInstance_Params
{
	class UBP_GameJoyPluginLibrary*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetGFilePathBase
struct UBP_GameJoyPluginLibrary_GetGFilePathBase_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFreeDiskSpace
struct UBP_GameJoyPluginLibrary_GetFreeDiskSpace_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesInDir
struct UBP_GameJoyPluginLibrary_GetFilesInDir_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesFromPath
struct UBP_GameJoyPluginLibrary_GetFilesFromPath_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               isIncludeChildren;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilePathFromUri
struct UBP_GameJoyPluginLibrary_GetFilePathFromUri_Params
{
	struct FString                                     uriPath;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFdFromUri
struct UBP_GameJoyPluginLibrary_GetFdFromUri_Params
{
	struct FString                                     uri;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetDeviceInfo
struct UBP_GameJoyPluginLibrary_GetDeviceInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetCaptureSource
struct UBP_GameJoyPluginLibrary_GetCaptureSource_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateVideoCover
struct UBP_GameJoyPluginLibrary_GenerateVideoCover_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     videoPath;                                                // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateMomentsVideo
struct UBP_GameJoyPluginLibrary_GenerateMomentsVideo_Params
{
	struct FString                                     videoTimeStampListJson;                                   // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableInGameAudio
struct UBP_GameJoyPluginLibrary_EnableInGameAudio_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableCodecHighProfile
struct UBP_GameJoyPluginLibrary_EnableCodecHighProfile_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableBgmMix
struct UBP_GameJoyPluginLibrary_EnableBgmMix_Params
{
	bool                                               mixing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.DeleteVideoByAlbum
struct UBP_GameJoyPluginLibrary_DeleteVideoByAlbum_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     albumName;                                                // (Parm, ZeroConstructor)
	struct FString                                     srcPath;                                                  // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.DeInitGameJoyBPLib
struct UBP_GameJoyPluginLibrary_DeInitGameJoyBPLib_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CopyFile
struct UBP_GameJoyPluginLibrary_CopyFile_Params
{
	struct FString                                     From;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     dst;                                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseRecorderDialog
struct UBP_GameJoyPluginLibrary_CloseRecorderDialog_Params
{
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseFd
struct UBP_GameJoyPluginLibrary_CloseFd_Params
{
	int                                                fd;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.ClipVideo
struct UBP_GameJoyPluginLibrary_ClipVideo_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     videoEditJson;                                            // (Parm, ZeroConstructor)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CleanWorkFolders
struct UBP_GameJoyPluginLibrary_CleanWorkFolders_Params
{
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckSDKPermission
struct UBP_GameJoyPluginLibrary_CheckSDKPermission_Params
{
	struct FString                                     Type;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckAlbumVideoExist
struct UBP_GameJoyPluginLibrary_CheckAlbumVideoExist_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

