#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct Paper2D.IntMargin
// Size: 0x10 // Inherited bytes: 0x00
struct FIntMargin {
	// Fields
	IntProperty Left; // Offset: 0x00 // Size: 0x04
	IntProperty Top; // Offset: 0x04 // Size: 0x04
	IntProperty Right; // Offset: 0x08 // Size: 0x04
	IntProperty Bottom; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10 // Inherited bytes: 0x00
struct FPaperFlipbookKeyFrame {
	// Fields
	struct UPaperSprite* Sprite; // Offset: 0x00 // Size: 0x08
	IntProperty FrameRun; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50 // Inherited bytes: 0x00
struct FSpriteInstanceData {
	// Fields
	struct FMatrix Transform; // Offset: 0x00 // Size: 0x40
	struct UPaperSprite* SourceSprite; // Offset: 0x40 // Size: 0x08
	struct FColor VertexColor; // Offset: 0x48 // Size: 0x04
	IntProperty MaterialIndex; // Offset: 0x4c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40 // Inherited bytes: 0x00
struct FPaperSpriteSocket {
	// Fields
	struct FTransform LocalTransform; // Offset: 0x00 // Size: 0x30
	struct FName SocketName; // Offset: 0x30 // Size: 0x08
	char pad_0x38[0x8]; // Offset: 0x38 // Size: 0x08
};

// Object Name: ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40 // Inherited bytes: 0x00
struct FPaperSpriteAtlasSlot {
	// Fields
	struct UPaperSprite* SpriteRef; // Offset: 0x00 // Size: 0x28
	IntProperty AtlasIndex; // Offset: 0x28 // Size: 0x04
	IntProperty X; // Offset: 0x2c // Size: 0x04
	IntProperty Y; // Offset: 0x30 // Size: 0x04
	IntProperty Width; // Offset: 0x34 // Size: 0x04
	IntProperty Height; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38 // Inherited bytes: 0x00
struct FPaperTerrainMaterialRule {
	// Fields
	struct UPaperSprite* StartCap; // Offset: 0x00 // Size: 0x08
	struct TArray<struct UPaperSprite*> Body; // Offset: 0x08 // Size: 0x10
	struct UPaperSprite* EndCap; // Offset: 0x18 // Size: 0x08
	float MinimumAngle; // Offset: 0x20 // Size: 0x04
	float MaximumAngle; // Offset: 0x24 // Size: 0x04
	bool bEnableCollision; // Offset: 0x28 // Size: 0x01
	char pad_0x29[0x3]; // Offset: 0x29 // Size: 0x03
	float CollisionOffset; // Offset: 0x2c // Size: 0x04
	IntProperty DrawOrder; // Offset: 0x30 // Size: 0x04
	char pad_0x34[0x4]; // Offset: 0x34 // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10 // Inherited bytes: 0x00
struct FPaperTileInfo {
	// Fields
	struct UPaperTileSet* TileSet; // Offset: 0x00 // Size: 0x08
	IntProperty PackedTileIndex; // Offset: 0x08 // Size: 0x04
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18 // Inherited bytes: 0x00
struct FPaperTileSetTerrain {
	// Fields
	StrProperty TerrainName; // Offset: 0x00 // Size: 0x10
	IntProperty CenterTileIndex; // Offset: 0x10 // Size: 0x04
	char pad_0x14[0x4]; // Offset: 0x14 // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40 // Inherited bytes: 0x00
struct FPaperTileMetadata {
	// Fields
	struct FName UserDataName; // Offset: 0x00 // Size: 0x08
	struct FSpriteGeometryCollection CollisionData; // Offset: 0x08 // Size: 0x30
	char TerrainMembership[0x4]; // Offset: 0x38 // Size: 0x04
	char pad_0x3C[0x4]; // Offset: 0x3c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 // Inherited bytes: 0x00
struct FSpriteGeometryCollection {
	// Fields
	struct TArray<struct FSpriteGeometryShape> Shapes; // Offset: 0x00 // Size: 0x10
	enum class ESpritePolygonMode GeometryType; // Offset: 0x10 // Size: 0x01
	char pad_0x11[0x3]; // Offset: 0x11 // Size: 0x03
	IntProperty PixelsPerSubdivisionX; // Offset: 0x14 // Size: 0x04
	IntProperty PixelsPerSubdivisionY; // Offset: 0x18 // Size: 0x04
	bool bAvoidVertexMerging; // Offset: 0x1c // Size: 0x01
	char pad_0x1D[0x3]; // Offset: 0x1d // Size: 0x03
	float AlphaThreshold; // Offset: 0x20 // Size: 0x04
	float DetailAmount; // Offset: 0x24 // Size: 0x04
	float SimplifyEpsilon; // Offset: 0x28 // Size: 0x04
	char pad_0x2C[0x4]; // Offset: 0x2c // Size: 0x04
};

// Object Name: ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 // Inherited bytes: 0x00
struct FSpriteGeometryShape {
	// Fields
	enum class ESpriteShapeType ShapeType; // Offset: 0x00 // Size: 0x01
	char pad_0x1[0x7]; // Offset: 0x01 // Size: 0x07
	struct TArray<struct FVector2D> Vertices; // Offset: 0x08 // Size: 0x10
	struct FVector2D BoxSize; // Offset: 0x18 // Size: 0x08
	struct FVector2D BoxPosition; // Offset: 0x20 // Size: 0x08
	float Rotation; // Offset: 0x28 // Size: 0x04
	bool bNegativeWinding; // Offset: 0x2c // Size: 0x01
	char pad_0x2D[0x3]; // Offset: 0x2d // Size: 0x03
};

// Object Name: ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xd0 // Inherited bytes: 0x00
struct FSpriteDrawCallRecord {
	// Fields
	struct FVector Destination; // Offset: 0x00 // Size: 0x0c
	char pad_0xC[0x4]; // Offset: 0x0c // Size: 0x04
	struct UTexture* BaseTexture; // Offset: 0x10 // Size: 0x08
	char pad_0x18[0x30]; // Offset: 0x18 // Size: 0x30
	struct FColor Color; // Offset: 0x48 // Size: 0x04
	char pad_0x4C[0x84]; // Offset: 0x4c // Size: 0x84
};

// Object Name: ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40 // Inherited bytes: 0x00
struct FSpriteAssetInitParameters {
	// Fields
	char pad_0x0[0x40]; // Offset: 0x00 // Size: 0x40
};

