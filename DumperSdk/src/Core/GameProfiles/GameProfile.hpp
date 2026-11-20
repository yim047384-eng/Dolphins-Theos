#pragma once

#include "../../../includes/types.h"

#include <cstdint>
#include <string>

#include "../Offsets.hpp"
#include "../memory.hpp"
#include "../../../includes/KittyMemory/KittyMemory.hpp"
#include "../../../includes/KittyMemory/KittyScanner.hpp"
#include "../../../includes/KittyMemory/KittyArm64.hpp"

using KittyMemory::MemoryFileInfo;

class IGameProfile
{
public:
    virtual ~IGameProfile() = default;

    virtual MemoryFileInfo GetExecutableInfo() const = 0;
    
    virtual std::vector<std::string> GetAppID() const = 0;
    
    virtual bool Pubgmxx() const = 0;
    
    virtual bool Farlightxx() const = 0;

    virtual bool IsUsingFNamePool() const = 0;

    virtual uintptr_t GetGUObjectArrayPtr() const = 0;
    
    virtual uintptr_t GetGworld() const = 0;

    // GNames / NamePoolData
    virtual uintptr_t GetNamesPtr() const = 0;

    virtual Offsets *GetOffsets() const = 0; 
};
