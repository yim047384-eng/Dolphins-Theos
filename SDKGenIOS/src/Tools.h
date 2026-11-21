#pragma once
#include "Includes.h"

namespace Tools
{
    bool Read(void *addr, void *buffer, size_t length);
    bool Write(void *addr, void *buffer, size_t length);
    bool IsPtrValid(void *addr);
    uintptr_t GetBaseAddress(const char *name);
}
