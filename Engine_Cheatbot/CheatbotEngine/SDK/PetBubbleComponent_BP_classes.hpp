#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: BlueprintGeneratedClass PetBubbleComponent_BP.PetBubbleComponent_BP_C
// Size: 0x1b0 // Inherited bytes: 0x178
struct UPetBubbleComponent_BP_C : UActorComponent {
	// Fields
	struct FPointerToUberGraphFrame UberGraphFrame; // Offset: 0x178 // Size: 0x08
	struct UParticleSystemComponent* BubbleParticle; // Offset: 0x180 // Size: 0x08
	IntProperty CurBubbleType; // Offset: 0x188 // Size: 0x04
	char pad_0x18C[0x4]; // Offset: 0x18c // Size: 0x04
	struct UTexture* BubbleTexture; // Offset: 0x190 // Size: 0x08
	struct FVector BubbleOffset; // Offset: 0x198 // Size: 0x0c
	char pad_0x1A4[0x4]; // Offset: 0x1a4 // Size: 0x04
	struct UParticleSystemComponent* PlayingBubbleParticle; // Offset: 0x1a8 // Size: 0x08

	// Functions

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.DisposePetBubble
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void DisposePetBubble(); // Offset: 0x1048d7660 // Return & Params: Num(0) Size(0x0)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.InvokePetBubble
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	void InvokePetBubble(IntProperty Bubble ID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.SpawnEmoteBubble
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	void SpawnEmoteBubble(IntProperty BubbleID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadBubbleTextureCallBack
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoadBubbleTextureCallBack(struct UObject* Asset, IntProperty ID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnLoadEffect
	// Flags: [BlueprintCallable|BlueprintEvent]
	void OnLoadEffect(struct UObject* LoadedObject, struct FName TexParamName); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0x10)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_1
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_1(struct UObject* LoadedObject, IntProperty RequestID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.CustomEvent_2
	// Flags: [BlueprintCallable|BlueprintEvent]
	void CustomEvent_2(struct UObject* LoadedObject, IntProperty RequestID); // Offset: 0x1048d7660 // Return & Params: Num(2) Size(0xc)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.MIDOK
	// Flags: [BlueprintCallable|BlueprintEvent]
	void MIDOK(struct UMaterialInstanceDynamic* MaterialInstanceDynamic); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x8)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ReqSpawnPetBubble
	// Flags: [Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent]
	void ReqSpawnPetBubble(IntProperty BubbleID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.OnNotifySpawnPetBubble
	// Flags: [Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent]
	void OnNotifySpawnPetBubble(IntProperty BubbleID); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)

	// Object Name: Function PetBubbleComponent_BP.PetBubbleComponent_BP_C.ExecuteUbergraph_PetBubbleComponent_BP
	// Flags: [HasDefaults]
	void ExecuteUbergraph_PetBubbleComponent_BP(IntProperty EntryPoint); // Offset: 0x1048d7660 // Return & Params: Num(1) Size(0x4)
};

