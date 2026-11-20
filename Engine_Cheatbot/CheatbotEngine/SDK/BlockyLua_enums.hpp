#pragma once

#include <cstdio>
#include <string>
#include <cstdint>

// Object Name: Enum BlockyLua.EBlockyEditorShortcutKey
enum class EBlockyEditorShortcutKey : uint8 {
	None = 0,
	Clone = 1,
	Copy = 2,
	Cut = 3,
	Paste = 4,
	Undo = 5,
	Redo = 6,
	Delete = 7,
	Search = 8,
	Save = 9,
	Log = 10,
	Escape = 11,
	EBlockyEditorShortcutKey_MAX = 12
};

// Object Name: Enum BlockyLua.ESearchResultVisibleType
enum class ESearchResultVisibleType : uint8 {
	SRVT_ShowAll = 0,
	SRVT_OnlyBlocks = 1,
	SRVT_OnlyGraphs = 2,
	SRVT_OnlyPresets = 3,
	SRVT_MAX = 4
};

// Object Name: Enum BlockyLua.BLOCKYLUA_AUTO_SCROLL_TYPE
enum class BLOCKYLUA_AUTO_SCROLL_TYPE : uint8 {
	LEFT_RIGHT = 0,
	PING_PONG = 1,
	BLOCKYLUA_AUTO_SCROLL_MAX = 2
};

