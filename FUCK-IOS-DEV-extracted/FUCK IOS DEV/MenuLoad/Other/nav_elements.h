#pragma once

#include <cstdint>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <map>

#include "../../IMGUI/imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../../IMGUI/imgui_internal.h"

extern ImFont* tab_icons;

namespace elements {
    bool tab(const char* icon, bool boolean);
    bool subtab(const char* name, bool boolean);
}
