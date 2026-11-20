#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: ScriptStruct MeshDescription.MeshTriangle
// Size: 0x0c // Inherited bytes: 0x00
struct FMeshTriangle {
	// Fields
	struct FVertexInstanceID VertexInstanceID0; // Offset: 0x00 // Size: 0x04
	struct FVertexInstanceID VertexInstanceID1; // Offset: 0x04 // Size: 0x04
	struct FVertexInstanceID VertexInstanceID2; // Offset: 0x08 // Size: 0x04
};

// Object Name: ScriptStruct MeshDescription.ElementID
// Size: 0x04 // Inherited bytes: 0x00
struct FElementID {
	// Fields
	IntProperty IDValue; // Offset: 0x00 // Size: 0x04
};

// Object Name: ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x04 // Inherited bytes: 0x04
struct FVertexInstanceID : FElementID {
};

// Object Name: ScriptStruct MeshDescription.PolygonID
// Size: 0x04 // Inherited bytes: 0x04
struct FPolygonID : FElementID {
};

// Object Name: ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x04 // Inherited bytes: 0x04
struct FPolygonGroupID : FElementID {
};

// Object Name: ScriptStruct MeshDescription.EdgeID
// Size: 0x04 // Inherited bytes: 0x04
struct FEdgeID : FElementID {
};

// Object Name: ScriptStruct MeshDescription.VertexID
// Size: 0x04 // Inherited bytes: 0x04
struct FVertexID : FElementID {
};

