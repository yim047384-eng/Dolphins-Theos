#pragma once

//LUCFER @krro6
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameJoyPlugin.BP_GameJoyPluginLibrary
// 0x0010 (0x0038 - 0x0028)
class UBP_GameJoyPluginLibrary : public UBlueprintFunctionLibrary
{
public:
	struct FScriptMulticastDelegate                    onGameJoyEvent;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameJoyPlugin.BP_GameJoyPluginLibrary");
		return pStaticClass;
	}


	static void WriteCaptureTextureToVideo();
	static void UseBackbuffer(bool use);
	static void UpdateRedDot(bool showRedDot);
	static void UnLockRecorderPosition();
	static void StopRecorder();
	static bool StartRecorder();
	static void ShowRecorderDialog(float X, float Y);
	static void ShowConsole();
	static void SetWwiseListenerStatus(bool isMultiple);
	static void SetWatermark(const struct FString& Path, float X, float Y);
	static void SetVideoResolution(int Type, int Resolution);
	static void SetVideoQuality(int Quality);
	static void SetVideoBitrate(int Type, int BitRate);
	static void SetShareRenderContext();
	static void SetMinAvailableSpaceMB(int minAvailableSpaceMB);
	static void SetLoggerLevel(int Level);
	static void SetGameUseRenderAPI(int api);
	static void SetGameUseColorSpace(int colorSpace);
	static void SetFrameRate(int FrameRate);
	static void SetEnableBackbufferCallback(bool bEnable);
	static void SetCoverSize(int Width, int Height);
	static void SetCaptureTextureFlipY(bool flip);
	static bool SetCaptureTexture(class UTextureRenderTarget2D* RenderTarget);
	static void SetCaptureSource(int CaptureSource);
	static void SetAutoProfileLevel(bool Enabled);
	static void SetAlbumName(const struct FString& albumName);
	static void RequestSDKPermission(int EventID, const struct FString& Type);
	static void PxAuthSetSecretKey(const struct FString& SecretKey);
	static void PxAuthLogout();
	static struct FString PxAuthGetSdkVersion();
	static void OnPostRender();
	static void NotifySpaceNotEnough();
	static void MoveVideoToAlbum(int EventID, const struct FString& albumName, const struct FString& srcPath);
	static void MoveFileToDocument(const struct FString& fromPath, const struct FString& toSubPath);
	static bool MoveFile(struct FString* From, struct FString* dst);
	static void MoveAlbumToLocal(int EventID, const struct FString& albumPath, const struct FString& localPath);
	static void MergeVideoWithImageAndVideo(int EventID, const struct FString& videoPath, const struct FString& headerVideo, const struct FString& ImagePath);
	static void LockRecorderPosition();
	static bool IsRecording();
	static bool IsRecorderDialogShow();
	static bool IsIOSFileExist(const struct FString& FilePath);
	static bool IsFileExist(const struct FString& FilePath);
	static bool IsDirExist(const struct FString& Path);
	static void InitGameJoyBPLib();
	static void GetVideoMd5(int EventID, const struct FString& videoPathJson);
	static void GetVideoInfo(int EventID, const struct FString& videoPathJson);
	static int GetTimeSeconds();
	static int GetTimeMilliSeconds();
	static struct FString GetSDKVersion();
	static void GetSandboxPath(int EventID);
	static struct FString GetRecorderPosition();
	static struct FString GetPaths(int pathType, bool Relative);
	static struct FString GetPathRelativeTo(const struct FString& fromPath, const struct FString& relativeTo);
	static class UBP_GameJoyPluginLibrary* GetInstance();
	static struct FString GetGFilePathBase();
	static int GetFreeDiskSpace();
	static struct FString GetFilesInDir(const struct FString& Path);
	static void GetFilesFromPath(int EventID, const struct FString& Path, bool isIncludeChildren);
	static struct FString GetFilePathFromUri(const struct FString& uriPath);
	static int GetFdFromUri(const struct FString& uri);
	static struct FString GetDeviceInfo();
	static int GetCaptureSource();
	static void GenerateVideoCover(int EventID, const struct FString& videoPath);
	static void GenerateMomentsVideo(const struct FString& videoTimeStampListJson);
	static void EnableInGameAudio(bool Enable);
	static void EnableCodecHighProfile(bool Enabled);
	static void EnableBgmMix(bool mixing);
	static void DeleteVideoByAlbum(int EventID, const struct FString& albumName, const struct FString& srcPath);
	static void DeInitGameJoyBPLib();
	bool CopyFile(struct FString* From, struct FString* dst);
	static void CloseRecorderDialog();
	static int CloseFd(int fd);
	static void ClipVideo(int EventID, const struct FString& videoEditJson);
	static void CleanWorkFolders(int Level);
	static int CheckSDKPermission(const struct FString& Type);
	static bool CheckAlbumVideoExist(const struct FString& Path);
};


}

