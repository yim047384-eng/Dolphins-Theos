#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Class Renderer.SparseVolumeTextureViewerComponent
// Size: 0xa00 // Inherited bytes: 0x9d0
struct USparseVolumeTextureViewerComponent : UPrimitiveComponent {
	// Fields
	struct USparseVolumeTexture* SparseVolumeTexturePreview; // Offset: 0x9c8 // Size: 0x08
	float Frame; // Offset: 0x9d0 // Size: 0x04
	float FrameRate; // Offset: 0x9d4 // Size: 0x04
	char bPlayIng : 1; // Offset: 0x9d8 // Size: 0x01
	char bLooping : 1; // Offset: 0x9d8 // Size: 0x01
	char bReversePlayback : 1; // Offset: 0x9d8 // Size: 0x01
	char bBlockingStreamingRequests : 1; // Offset: 0x9d8 // Size: 0x01
	char bApplyPerFrameTransforms : 1; // Offset: 0x9d8 // Size: 0x01
	char bPivotAtCentroid : 1; // Offset: 0x9d8 // Size: 0x01
	float VoxelSize; // Offset: 0x9dc // Size: 0x04
	enum class ESparseVolumeTexturePreviewAttribute PreviewAttribute; // Offset: 0x9e0 // Size: 0x01
	IntProperty MipLevel; // Offset: 0x9e4 // Size: 0x04
	float Extinction; // Offset: 0x9e8 // Size: 0x04
	char pad_0x9ED_6 : 2; // Offset: 0x9ed // Size: 0x01
	char pad_0x9EE[0x12]; // Offset: 0x9ee // Size: 0x12
};

// Object Name: Class Renderer.SparseVolumeTextureViewer
// Size: 0x4b8 // Inherited bytes: 0x4b0
struct ASparseVolumeTextureViewer : AInfo {
	// Fields
	struct USparseVolumeTextureViewerComponent* SparseVolumeTextureViewerComponent; // Offset: 0x4b0 // Size: 0x08
};

