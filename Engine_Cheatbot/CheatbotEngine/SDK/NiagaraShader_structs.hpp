#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x20 // Inherited bytes: 0x00
struct FNiagaraDataInterfaceGPUParamInfo {
	// Fields
	StrProperty DataInterfaceHLSLSymbol; // Offset: 0x00 // Size: 0x10
	StrProperty DIClassName; // Offset: 0x10 // Size: 0x10
};

// Object Name: ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 // Inherited bytes: 0x00
struct FNiagaraCompileEvent {
	// Fields
	enum class FNiagaraCompileEventSeverity Severity; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	StrProperty Message; // Offset: 0x08 // Size: 0x10
	struct FGuid NodeGuid; // Offset: 0x18 // Size: 0x10
	struct FGuid PinGuid; // Offset: 0x28 // Size: 0x10
	struct TArray<struct FGuid> StackGuids; // Offset: 0x38 // Size: 0x10
};

