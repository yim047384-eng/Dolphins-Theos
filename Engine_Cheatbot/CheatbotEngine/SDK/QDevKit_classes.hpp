#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class QDevKit.FilePicker
// Size: 0x38 // Inherited bytes: 0x28
struct UFilePicker : UObject {
	// Fields
	struct FScriptMulticastDelegate OnFileSelectionComplete; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.FilePicker.UnInitialize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnInitialize(); // Offset: 0x1022934d8 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.FilePicker.OpenFilePicker
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool OpenFilePicker(StrProperty InParamJson); // Offset: 0x102293430 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function QDevKit.FilePicker.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Initialize(); // Offset: 0x10229341c // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.FilePicker.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UFilePicker* GetInstance(); // Offset: 0x1022933e8 // Return & Params: Num(1) Size(0x8)

	// Object Name: DelegateFunction QDevKit.FilePicker.FileSelectionCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void FileSelectionCompleteDelegate__DelegateSignature(StrProperty ResultJson); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class QDevKit.FirebaseHelper
// Size: 0x38 // Inherited bytes: 0x28
struct UFirebaseHelper : UObject {
	// Fields
	char pad_0x28[0x10]; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.FirebaseHelper.SetConsent
	// Flags: [Final|Native|Public|HasOutParms]
	void SetConsent(MapProperty& InConsent); // Offset: 0x102293998 // Return & Params: Num(1) Size(0x50)

	// Object Name: Function QDevKit.FirebaseHelper.IsNotificationLaunchApp
	// Flags: [Final|Native|Public]
	bool IsNotificationLaunchApp(); // Offset: 0x102293964 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData
	// Flags: [Final|Native|Public]
	StrProperty GetNotificationLaunchAppExtraData(StrProperty InKey); // Offset: 0x102293894 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QDevKit.FirebaseHelper.GetInstance
	// Flags: [Final|Native|Static|Public]
	struct UFirebaseHelper* GetInstance(); // Offset: 0x102293860 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QDevKit.FirebaseHelper.GetFIRInstallId
	// Flags: [Final|Native|Public]
	StrProperty GetFIRInstallId(); // Offset: 0x1022937fc // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.FirebaseHelper.GetFIRAppInstanceId
	// Flags: [Final|Native|Public]
	StrProperty GetFIRAppInstanceId(); // Offset: 0x102293798 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.FirebaseHelper.GetFCMToken
	// Flags: [Final|Native|Public]
	StrProperty GetFCMToken(); // Offset: 0x102293734 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.FirebaseHelper.ConsumeNotificationLaunchApp
	// Flags: [Final|Native|Public]
	void ConsumeNotificationLaunchApp(); // Offset: 0x102293720 // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class QDevKit.FirebaseRemoteConfigImpl
// Size: 0xd0 // Inherited bytes: 0x28
struct UFirebaseRemoteConfigImpl : UObject {
	// Fields
	char pad_0x28[0x8]; // Offset: 0x28 // Size: 0x08
	struct TArray<StrProperty> QueryConfigNamesArray; // Offset: 0x30 // Size: 0x10
	char pad_0x40[0x90]; // Offset: 0x40 // Size: 0x90

	// Functions

	// Object Name: Function QDevKit.FirebaseRemoteConfigImpl.GetStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	enum class EQFirebaseRemoteConfigStatus GetStatus(); // Offset: 0x102293f5c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QDevKit.FirebaseRemoteConfigImpl.GetRemoteConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetRemoteConfig(StrProperty ConfigNameToQuery); // Offset: 0x102293e44 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QDevKit.FirebaseRemoteConfigImpl.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UFirebaseRemoteConfigImpl* GetInstance(); // Offset: 0x102293e10 // Return & Params: Num(1) Size(0x8)
};

// Object Name: Class QDevKit.LocationHelper
// Size: 0x38 // Inherited bytes: 0x28
struct ULocationHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate LocationCompleteCallback; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.LocationHelper.QueryLocation
	// Flags: [Final|Native|Public]
	void QueryLocation(IntProperty InTimeout); // Offset: 0x102294218 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function QDevKit.LocationHelper.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(); // Offset: 0x102294204 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.LocationHelper.GetInstance
	// Flags: [Final|Native|Static|Public]
	struct ULocationHelper* GetInstance(); // Offset: 0x1022941d0 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QDevKit.LocationHelper.Destroy
	// Flags: [Final|Native|Public]
	void Destroy(); // Offset: 0x1022941bc // Return & Params: Num(0) Size(0x0)
};

// Object Name: Class QDevKit.PhotoAlbumHelper
// Size: 0x58 // Inherited bytes: 0x28
struct UPhotoAlbumHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate FetchAlbumImageInfoCompleteCallback; // Offset: 0x28 // Size: 0x10
	struct FScriptMulticastDelegate GenerateImageFromAlbumCompleteCallback; // Offset: 0x38 // Size: 0x10
	struct FScriptMulticastDelegate ScreenCapturedCompleteCallback; // Offset: 0x48 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.PhotoAlbumHelper.UnRegisterScreenCaptureListener
	// Flags: [Final|Native|Public]
	void UnRegisterScreenCaptureListener(); // Offset: 0x102294a58 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.PhotoAlbumHelper.RegisterScreenCaptureListener
	// Flags: [Final|Native|Public]
	void RegisterScreenCaptureListener(StrProperty InScreenshotFolders, StrProperty InScreenshotMimeTypes); // Offset: 0x10229496c // Return & Params: Num(2) Size(0x20)

	// Object Name: Function QDevKit.PhotoAlbumHelper.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(); // Offset: 0x102294958 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.PhotoAlbumHelper.GetInstance
	// Flags: [Final|Native|Static|Public]
	struct UPhotoAlbumHelper* GetInstance(); // Offset: 0x102294924 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QDevKit.PhotoAlbumHelper.GenerateImageFromAlbum
	// Flags: [Final|Native|Public]
	IntProperty GenerateImageFromAlbum(StrProperty InFilePath, StrProperty InThumbFilePath, IntProperty InThumbnailWidth, IntProperty InThumbnailHeight, bool InForceJPG, bool InOverride); // Offset: 0x10229471c // Return & Params: Num(7) Size(0x30)

	// Object Name: Function QDevKit.PhotoAlbumHelper.FetchAlbumImageInfo
	// Flags: [Final|Native|Public]
	void FetchAlbumImageInfo(IntProperty InStartIndex, IntProperty InLimitNum, IntProperty InThumbWidth, IntProperty InThumbHeight, StrProperty InThumbPath, StrProperty InExtraJson); // Offset: 0x102294544 // Return & Params: Num(6) Size(0x30)
};

// Object Name: Class QDevKit.StoreKit
// Size: 0x28 // Inherited bytes: 0x28
struct UStoreKit : UObject {
	// Functions

	// Object Name: Function QDevKit.StoreKit.RequestReview
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void RequestReview(bool bForceOpenStoreInTestEnv); // Offset: 0x102294f2c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function QDevKit.StoreKit.OpenStorePage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void OpenStorePage(StrProperty storeParam); // Offset: 0x102294e9c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.StoreKit.GetCountryCode
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	void GetCountryCode(DelegateProperty& Callback); // Offset: 0x102294e00 // Return & Params: Num(1) Size(0x10)
};

// Object Name: Class QDevKit.SystemPermissionHelper
// Size: 0x38 // Inherited bytes: 0x28
struct USystemPermissionHelper : UObject {
	// Fields
	struct FScriptMulticastDelegate RequestPermissionResultCallback; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.SystemPermissionHelper.RequestPermissions
	// Flags: [Final|Native|Public]
	bool RequestPermissions(IntProperty InPermissionType, IntProperty InRequestCode); // Offset: 0x1022955d4 // Return & Params: Num(3) Size(0x9)

	// Object Name: Function QDevKit.SystemPermissionHelper.IsPermissionGranted
	// Flags: [Final|Native|Public]
	bool IsPermissionGranted(IntProperty InPermissionType); // Offset: 0x102295548 // Return & Params: Num(2) Size(0x5)

	// Object Name: Function QDevKit.SystemPermissionHelper.Initialize
	// Flags: [Final|Native|Public]
	void Initialize(); // Offset: 0x102295534 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.SystemPermissionHelper.GetPermissionStatus
	// Flags: [Final|Native|Public]
	IntProperty GetPermissionStatus(IntProperty InPermissionType); // Offset: 0x1022954a8 // Return & Params: Num(2) Size(0x8)

	// Object Name: Function QDevKit.SystemPermissionHelper.GetInstance
	// Flags: [Final|Native|Static|Public]
	struct USystemPermissionHelper* GetInstance(); // Offset: 0x102295474 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function QDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale
	// Flags: [Final|Native|Public]
	bool AndroidShouldShowRequestPermissionRationale(StrProperty InPermission); // Offset: 0x1022953cc // Return & Params: Num(2) Size(0x11)

	// Object Name: Function QDevKit.SystemPermissionHelper.AndroidRequestPermissions
	// Flags: [Final|Native|Public]
	bool AndroidRequestPermissions(StrProperty InPermission, IntProperty InRequestCode); // Offset: 0x1022952e4 // Return & Params: Num(3) Size(0x15)

	// Object Name: Function QDevKit.SystemPermissionHelper.AndroidIsPermissionGranted
	// Flags: [Final|Native|Public]
	bool AndroidIsPermissionGranted(StrProperty InPermission); // Offset: 0x10229523c // Return & Params: Num(2) Size(0x11)

	// Object Name: Function QDevKit.SystemPermissionHelper.AndroidHasDefinePermission
	// Flags: [Final|Native|Public]
	bool AndroidHasDefinePermission(StrProperty InPermssionName); // Offset: 0x102295194 // Return & Params: Num(2) Size(0x11)
};

// Object Name: Class QDevKit.TouchTransmission
// Size: 0x38 // Inherited bytes: 0x28
struct UTouchTransmission : UObject {
	// Fields
	struct FScriptMulticastDelegate OnTransmissionComplete; // Offset: 0x28 // Size: 0x10

	// Functions

	// Object Name: Function QDevKit.TouchTransmission.UnInitialize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void UnInitialize(); // Offset: 0x102295bf4 // Return & Params: Num(0) Size(0x0)

	// Object Name: DelegateFunction QDevKit.TouchTransmission.TransmissionCompleteDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	void TransmissionCompleteDelegate__DelegateSignature(StrProperty ResultJson); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.TouchTransmission.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	void Initialize(); // Offset: 0x102295be0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function QDevKit.TouchTransmission.HandleReceivedPakFiles
	// Flags: [Final|Native|Public|BlueprintCallable]
	bool HandleReceivedPakFiles(StrProperty InParamJson); // Offset: 0x102295b38 // Return & Params: Num(2) Size(0x11)

	// Object Name: Function QDevKit.TouchTransmission.GetTransmissionRawJsonContent
	// Flags: [Final|Native|Public|BlueprintCallable]
	StrProperty GetTransmissionRawJsonContent(); // Offset: 0x102295ad4 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function QDevKit.TouchTransmission.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	struct UTouchTransmission* GetInstance(); // Offset: 0x102295aa0 // Return & Params: Num(1) Size(0x8)
};

