#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: WidgetBlueprintGeneratedClass AutoAimDebug.AutoAimDebug_C
// Size: 0x2f8 // Inherited bytes: 0x260
struct UAutoAimDebug_C : UUserWidget {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x260 // Size: 0x08
	struct UTextBlock* t1; // Offset: 0x268 // Size: 0x08
	struct UTextBlock* t2; // Offset: 0x270 // Size: 0x08
	struct UTextBlock* t3; // Offset: 0x278 // Size: 0x08
	struct UTextBlock* t4; // Offset: 0x280 // Size: 0x08
	struct UTextBlock* t5; // Offset: 0x288 // Size: 0x08
	struct UTextBlock* t6; // Offset: 0x290 // Size: 0x08
	struct UTextBlock* t7; // Offset: 0x298 // Size: 0x08
	struct UTextBlock* TextBlock_4; // Offset: 0x2a0 // Size: 0x08
	struct UTextBlock* TextBlock_8; // Offset: 0x2a8 // Size: 0x08
	struct UTextBlock* TextBlock_13; // Offset: 0x2b0 // Size: 0x08
	struct UTextBlock* TextBlock_15; // Offset: 0x2b8 // Size: 0x08
	struct TArray<struct UTextBlock*> TextWidgetArray; // Offset: 0x2c0 // Size: 0x10
	float LastAimTime; // Offset: 0x2d0 // Size: 0x04
	char pad_0x2D4[0x4]; // Offset: 0x2d4 // Size: 0x04
	struct TArray<float> AimDelta; // Offset: 0x2d8 // Size: 0x10
	IntProperty Debug_Hit_Num; // Offset: 0x2e8 // Size: 0x04
	IntProperty Debug_Miss_Num; // Offset: 0x2ec // Size: 0x04
	float Damage; // Offset: 0x2f0 // Size: 0x04
	IntProperty headShot; // Offset: 0x2f4 // Size: 0x04

	// Functions

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_7_Text_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FText Get_TextBlock_7_Text_1(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_3_Text_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FText Get_TextBlock_3_Text_1(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.HandleDamage
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void HandleDamage(bool NewParam, bool NewParam1); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x2)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_14_Text_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FText Get_TextBlock_14_Text_1(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Get_TextBlock_12_Text_1
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	struct FText Get_TextBlock_12_Text_1(); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x18)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.OnPaint
	// Flags: [BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const]
	void OnPaint(struct FPaintContext& Context); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x30)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.DrawDebug
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	void DrawDebug(struct TArray<float>& DebugInfo); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x10)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Construct
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Construct(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.Tick
	// Flags: [BlueprintCosmetic|Event|Public|BlueprintEvent]
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x3c)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.OnEquip
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnEquip(struct ASTExtraWeapon* Weapon, enum class ESurviveWeaponPropSlot Slot); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x9)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.CustomEvent_3
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_3(struct ASTExtraShootWeapon* ShootWeapon, struct ASTExtraShootWeaponBulletBase* Bullet); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.CustomEvent_4
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void CustomEvent_4(struct ASTExtraShootWeapon* ShootWeapon, struct ASTExtraShootWeaponBulletBase* Bullet, struct FHitResult& HitRet); // Offset: 0x1048d7660 // Return & Params: Num(3) Size(0x98)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.CustomEvent_5
	// Flags: [HasOutParms|BlueprintCallable|BlueprintEvent]
	void CustomEvent_5(float Damage, struct FDamageEvent& DamageEvent, struct AActor* Casuer, struct AActor* Victim); // Offset: 0x1048d7660 // Return & Params: Num(4) Size(0x28)

	// Object Name: Function AutoAimDebug.AutoAimDebug_C.ExecuteUbergraph_AutoAimDebug
	// Flags: [HasDefaults]
	void ExecuteUbergraph_AutoAimDebug(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

