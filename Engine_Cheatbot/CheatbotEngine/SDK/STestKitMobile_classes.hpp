#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class STestKitMobile.STestKitMobileLibrary
// Size: 0x28 // Inherited bytes: 0x28
struct USTestKitMobileLibrary : UBlueprintFunctionLibrary {
	// Functions

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.TapWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool TapWidget(struct UWidget* Widget, struct FSTestMobileTapOptions& Options); // Offset: 0x1022ef1e4 // Return & Params: Num(3) Size(0xa)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.ShowConnectionPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ShowConnectionPanel(); // Offset: 0x1022ef1b0 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.RequestPairing
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool RequestPairing(); // Offset: 0x1022ef17c // Return & Params: Num(1) Size(0x1)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.ReportResult
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ReportResult(StrProperty RunId, bool bSuccess, StrProperty Payload, StrProperty Error); // Offset: 0x1022eefec // Return & Params: Num(5) Size(0x39)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.ReportEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ReportEvent(StrProperty RunId, StrProperty EventJson); // Offset: 0x1022eef00 // Return & Params: Num(3) Size(0x21)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.IsRuntimeEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsRuntimeEnabled(); // Offset: 0x1022eeecc // Return & Params: Num(1) Size(0x1)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.IsBridgeConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool IsBridgeConnected(); // Offset: 0x1022eee98 // Return & Params: Num(1) Size(0x1)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.HitTestSelf
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	bool HitTestSelf(struct UWidget* Widget); // Offset: 0x1022eee1c // Return & Params: Num(2) Size(0x9)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.HideConnectionPanel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void HideConnectionPanel(); // Offset: 0x1022eee08 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetWidgetRect
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector4 GetWidgetRect(struct UWidget* Widget); // Offset: 0x1022eed88 // Return & Params: Num(2) Size(0x20)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetUIReferenceCaptureStatusJson
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetUIReferenceCaptureStatusJson(); // Offset: 0x1022eed24 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetScreenCenter
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	struct FVector2D GetScreenCenter(struct UWidget* Widget); // Offset: 0x1022eeca8 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetPairingCode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetPairingCode(); // Offset: 0x1022eec44 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetDeviceId
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetDeviceId(); // Offset: 0x1022eebe0 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.GetBridgeStatusJson
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty GetBridgeStatusJson(); // Offset: 0x1022eeb7c // Return & Params: Num(1) Size(0x10)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.FindWidgetInUI
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UWidget* FindWidgetInUI(StrProperty UIName, StrProperty WidgetName, IntProperty Index); // Offset: 0x1022eea50 // Return & Params: Num(4) Size(0x30)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.FindUserWidgetByUIName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	struct UWidget* FindUserWidgetByUIName(StrProperty UIName, IntProperty Index); // Offset: 0x1022ee978 // Return & Params: Num(3) Size(0x20)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.FillText
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool FillText(struct UWidget* Widget, StrProperty Text, struct FSTestMobileFillOptions& Options); // Offset: 0x1022ee850 // Return & Params: Num(4) Size(0x1b)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.DumpRuntimeWidgetTree
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty DumpRuntimeWidgetTree(bool bVisibleOnly, bool bIncludeText); // Offset: 0x1022ee758 // Return & Params: Num(3) Size(0x18)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.DragWidget
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool DragWidget(struct UWidget* From, struct UWidget* To, struct FSTestMobileDragOptions& Options); // Offset: 0x1022ee64c // Return & Params: Num(4) Size(0x19)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.DragByOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	bool DragByOffset(struct UWidget* Widget, float Dx, float Dy, struct FSTestMobileDragOptions& Options); // Offset: 0x1022ee504 // Return & Params: Num(5) Size(0x19)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.DisconnectBridge
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	void DisconnectBridge(); // Offset: 0x1022ee4f0 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.ConnectBridge
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool ConnectBridge(StrProperty BridgeUrl, bool bSaveUrl); // Offset: 0x1022ee410 // Return & Params: Num(3) Size(0x12)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintPaths
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty CollectVisibleWidgetBlueprintPaths(IntProperty MaxDepth); // Offset: 0x1022ee36c // Return & Params: Num(2) Size(0x18)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.CollectVisibleWidgetBlueprintHierarchy
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	StrProperty CollectVisibleWidgetBlueprintHierarchy(IntProperty MaxDepth); // Offset: 0x1022ee2c8 // Return & Params: Num(2) Size(0x18)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadUIReference
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CaptureAndUploadUIReference(StrProperty ServerURL, StrProperty APIKey, StrProperty Source, IntProperty JpegQuality); // Offset: 0x1022ee148 // Return & Params: Num(5) Size(0x35)

	// Object Name: Function STestKitMobile.STestKitMobileLibrary.CaptureAndUploadConfiguredUIReference
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	bool CaptureAndUploadConfiguredUIReference(StrProperty Source, IntProperty JpegQuality); // Offset: 0x1022ee070 // Return & Params: Num(3) Size(0x15)
};

