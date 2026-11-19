#pragma once

#include "GameProfile.hpp"

// PUBGM 3.1.0
// UE 4.23 — FNamePool: FALSE (GNames style, function pointer)

class PUBGMProfile : public IGameProfile
{
public:
    PUBGMProfile() = default;

    std::vector<std::string> GetAppID() const override
    {
        return {
            ENCRYPT("com.tencent.ig"),
            ENCRYPT("com.rekoo.pubgm"),
            ENCRYPT("com.pubg.imobile"),
            ENCRYPT("com.pubg.krmobile"),
            ENCRYPT("com.vng.pubgmobile"),
            ENCRYPT("vn.vng.pubgmobile"),
        };
    }

    bool Pubgmxx() const override { return true; }
    bool Farlightxx() const override { return false; }

    MemoryFileInfo GetExecutableInfo() const override
    {
        return KittyMemory::getMemoryFileInfo(ENCRYPT("ShadowTrackerExtra"));
    }

    // GNames function pointer — not FNamePool
    bool IsUsingFNamePool() const override
    {
        return false;
    }

    uintptr_t GetGUObjectArrayPtr() const override
    {
        // manual offset — GUObjectArray: 0x109ABC718
        const mach_header *hdr = GetExecutableInfo().header;
        if (!hdr) return 0;
        return (uintptr_t)hdr + 0x109ABC718;
    }

    uintptr_t GetNamesPtr() const override
    {
        // GNameFunction: 0x104734D98 — call it to get TNameEntryArray*
        const mach_header *hdr = GetExecutableInfo().header;
        if (!hdr) return 0;

        uintptr_t fn_addr = (uintptr_t)hdr + 0x104734D98;
        using GetNamesFn = uintptr_t(*)();
        auto fn = reinterpret_cast<GetNamesFn>(fn_addr);
        return fn();
    }

    uintptr_t GetGworld() const override
    {
        // GWorldData: invalid in dump — resolved via GUObject scan
        return 0;
    }

    Offsets *GetOffsets() const override
    {
        struct
        {
            uint16 Stride          = 0;
            uint16 FNamePoolBlocks = 0;
            uint16 FNameMaxSize    = 0xff;
            struct { uint16 Size = 0x18; } FUObjectItem;
            struct { uint16 Number = 4;  } FName;
            struct { uint16 Name   = 0xC;} FNameEntry;
            struct
            {
                uint16 Info       = 0;
                uint16 WideBit    = 0;
                uint16 LenBit     = 0;
                uint16 HeaderSize = 0;
            } FNameEntry23;
            struct { uint16 ObjObjects  = 0x10; } FUObjectArray;
            struct { uint16 NumElements = 0xC;  } TUObjectArray;
            struct
            {
                uint16 ObjectFlags   = 0x8;
                uint16 InternalIndex = 0xC;
                uint16 ClassPrivate  = 0x10;
                uint16 NamePrivate   = 0x18;
                uint16 OuterPrivate  = 0x20;
            } UObject;
            struct { uint16 Next = 0x28; } UField;
            struct
            {
                uint16 SuperStruct   = 0x30;
                uint16 Children      = 0x38;
                uint16 ChildrenProps = 0;
                uint16 PropertiesSize= 0x40;
            } UStruct;
            struct { uint16 Names = 0x40; } UEnum;
            struct
            {
                uint16 EFunctionFlags    = 0x88;
                uint16 NumParams         = 0x8C;
                uint16 ParamSize         = 0x8E;
                uint16 ReturnValueOffset = 0x90;
                uint16 Func              = 0xB0;
            } UFunction;
            struct
            {
                uint16 ClassPrivate  = 0;
                uint16 Next          = 0;
                uint16 NamePrivate   = 0;
                uint16 FlagsPrivate  = 0;
            } FField;
            struct
            {
                uint16 ArrayDim       = 0;
                uint16 ElementSize    = 0;
                uint16 PropertyFlags  = 0;
                uint16 Offset_Internal= 0;
                uint16 Size           = 0;
            } FProperty;
            struct
            {
                uint16 ArrayDim        = 0x30;
                uint16 ElementSize     = 0x34;
                uint16 PropertyFlags   = 0x38;
                uint16 Offset_Internal = 0x44;
                uint16 Size            = 0x70;
            } UProperty;
        } static profile;
        static_assert(sizeof(profile) == sizeof(Offsets));
        return (Offsets *)&profile;
    }
};
