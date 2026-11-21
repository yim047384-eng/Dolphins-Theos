#pragma once
#ifndef MAIN_H
#define MAIN_H

#include "Includes.h"

static std::string pkgName       = "com.pubg.imobile";
static std::string gameVersion   = "4.7.0";
static std::string gameShortName = "BGMI";
static std::string gameFullName  = "Battlegrounds Mobile India";
static const char* lib_name      = "ShadowTrackerExtra";

static uintptr_t UE4 = 0;

// GNameFunction: call to get TNameEntryArray*
static uintptr_t GNames_Offset        = 0x10491486C;
// GUObjectArray: direct data pointer
static uintptr_t GUObjectArray_Offset = 0x109E108E8;

static uintptr_t getTNameArrayAddr() {
    uintptr_t fn_addr = UE4 + GNames_Offset;
    using GetNamesFn = uintptr_t(*)();
    return reinterpret_cast<GetNamesFn>(fn_addr)();
}

static uintptr_t getFUObjectArrayAddr() {
    return UE4 + GUObjectArray_Offset;
}

#endif
