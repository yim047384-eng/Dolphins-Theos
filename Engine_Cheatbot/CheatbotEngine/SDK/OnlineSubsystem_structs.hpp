#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size: 0xa8 // Inherited bytes: 0x00
struct FInAppPurchaseProductInfo {
	// Fields
	StrProperty Identifier; // Offset: 0x00 // Size: 0x10
	StrProperty TransactionIdentifier; // Offset: 0x10 // Size: 0x10
	StrProperty DisplayName; // Offset: 0x20 // Size: 0x10
	StrProperty DisplayDescription; // Offset: 0x30 // Size: 0x10
	StrProperty DisplayPrice; // Offset: 0x40 // Size: 0x10
	float RawPrice; // Offset: 0x50 // Size: 0x04
	char pad_0x54[0x4]; // Offset: 0x54 // Size: 0x04
	StrProperty CurrencyCode; // Offset: 0x58 // Size: 0x10
	StrProperty CurrencySymbol; // Offset: 0x68 // Size: 0x10
	StrProperty DecimalSeparator; // Offset: 0x78 // Size: 0x10
	StrProperty GroupingSeparator; // Offset: 0x88 // Size: 0x10
	StrProperty ReceiptData; // Offset: 0x98 // Size: 0x10
};

// Object Name: ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size: 0x30 // Inherited bytes: 0x00
struct FInAppPurchaseRestoreInfo {
	// Fields
	StrProperty Identifier; // Offset: 0x00 // Size: 0x10
	StrProperty ReceiptData; // Offset: 0x10 // Size: 0x10
	StrProperty TransactionIdentifier; // Offset: 0x20 // Size: 0x10
};

// Object Name: ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x18 // Inherited bytes: 0x00
struct FNamedInterfaceDef {
	// Fields
	struct FName InterfaceName; // Offset: 0x00 // Size: 0x08
	StrProperty InterfaceClassName; // Offset: 0x08 // Size: 0x10
};

// Object Name: ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x10 // Inherited bytes: 0x00
struct FNamedInterface {
	// Fields
	struct FName InterfaceName; // Offset: 0x00 // Size: 0x08
	struct UObject* InterfaceObject; // Offset: 0x08 // Size: 0x08
};

// Object Name: ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size: 0x18 // Inherited bytes: 0x00
struct FInAppPurchaseProductRequest {
	// Fields
	StrProperty ProductIdentifier; // Offset: 0x00 // Size: 0x10
	bool bIsConsumable; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x7]; // Offset: 0x11 // Size: 0x07
};

