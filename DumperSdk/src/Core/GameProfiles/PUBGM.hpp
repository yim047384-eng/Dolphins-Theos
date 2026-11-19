#pragma once

#include "GameProfile.hpp"



// PUBGM
// UE 4.18

class PUBGMProfile : public IGameProfile
{
public:
    PUBGMProfile() = default;

   /* std::string GetAppID() const override
    {
       // NSString *appID = [[[NSBundle mainBundle] infoDictionary] objectForKey:(id)kCFBundleIdentifierKey];
       // return [appID UTF8String];
        return ENCRYPT("com.pubg.imobile");
    }*/
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
    
    bool Pubgmxx() const override
    {
        return true;
    }

    MemoryFileInfo GetExecutableInfo() const override
    {
        return KittyMemory::getMemoryFileInfo(ENCRYPT("ShadowTrackerExtra"));
    }

    bool IsUsingFNamePool() const override
    {
        return false;
    }
    
    bool Farlightxx() const override
    {
        return false;
    }

    uintptr_t GetGUObjectArrayPtr() const override
{
    uintptr_t base = (uintptr_t)_dyld_get_image_vmaddr_slide(0);
    return base + 0x109ABC718;
}

uintptr_t GetNamesPtr() const override
{
    uintptr_t base = (uintptr_t)_dyld_get_image_vmaddr_slide(0);
    return base + 0x104734D98;
}
    
    
    uintptr_t GetGworld() const override
    {
        
        return 0;
    }
    

    Offsets *GetOffsets() const override
    {
        struct
        {
            uint16 Stride = 0;          // not needed in versions older than UE4.23
            uint16 FNamePoolBlocks = 0; // not needed in versions older than UE4.23
            uint16 FNameMaxSize = 0xff;
            struct
            {
                uint16 Size = 0x18;
            } FUObjectItem;
            struct
            {
                uint16 Number = 4;
            } FName;
            struct
            {
                uint16 Name = 0xC;
            } FNameEntry;
            struct
            { // not needed in versions older than UE4.23
                uint16 Info = 0;
                uint16 WideBit = 0;
                uint16 LenBit = 0;
                uint16 HeaderSize = 0;
            } FNameEntry23;
            struct
            {
                uint16 ObjObjects = 0x10;
            } FUObjectArray;
            struct
            {
                uint16 NumElements = 0xC;
            } TUObjectArray;
            struct
            {
                uint16 ObjectFlags = 0x8;
                uint16 InternalIndex = 0xC;
                uint16 ClassPrivate = 0x10;
                uint16 NamePrivate = 0x18;
                uint16 OuterPrivate = 0x20;
            } UObject;
            struct
            {
                uint16 Next = 0x28; // sizeof(UObject)
            } UField;
            struct
            {
                uint16 SuperStruct = 0x30; // sizeof(UField)
                uint16 Children = 0x38;    // UField*
                uint16 ChildrenProps = 0;  // not needed in versions older than UE4.25
                uint16 PropertiesSize = 0x40;
            } UStruct;
            struct
            {
                uint16 Names = 0x40; // usually at sizeof(UField) + sizeof(FString)
            } UEnum;
            struct
            {
                uint16 EFunctionFlags = 0x88; // sizeof(UStruct)
                uint16 NumParams = EFunctionFlags + 0x4;
                uint16 ParamSize = NumParams + 0x2;
                uint16 ReturnValueOffset = ParamSize + 0x2;
                uint16 Func = EFunctionFlags + 0x28; // ue3-ue4, always +0x28 from flags location.
            } UFunction;
            struct
            { // not needed in versions older than UE4.25
                uint16 ClassPrivate = 0;
                uint16 Next = 0;
                uint16 NamePrivate = 0;
                uint16 FlagsPrivate = 0;
            } FField;
            struct
            { // not needed in versions older than UE4.25
                uint16 ArrayDim = 0;
                uint16 ElementSize = 0;
                uint16 PropertyFlags = 0;
                uint16 Offset_Internal = 0;
                uint16 Size = 0;
            } FProperty;
            struct
            {
                uint16 ArrayDim = 0x30; // sizeof(UField)
                uint16 ElementSize = 0x34;
                uint16 PropertyFlags = 0x38;
                uint16 Offset_Internal = 0x44;
                uint16 Size = 0x70; // sizeof(FProperty)
            } UProperty;
        } static profile;
        static_assert(sizeof(profile) == sizeof(Offsets));

        return (Offsets *)&profile;
    }
};
