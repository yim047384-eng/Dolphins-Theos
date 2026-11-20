//
//  Farlight.h
//  SdkDumper
//
//  Created by Lol on 29/10/23.
//
#pragma once

#include "GameProfile.hpp"

// Farlight
// UE 4.25+ ??

class FarlightProfile : public IGameProfile
{
public:
    FarlightProfile() = default;

    std::vector<std::string> GetAppID() const override
    {
        return {ENCRYPT("com.farlightgames.farlight84.iosglobal")};
    }
    
    bool Pubgmxx() const override
    {
        return false;
    }
    
    bool Farlightxx() const override
    {
        return true;
    }

    MemoryFileInfo GetExecutableInfo() const override
    {
        return KittyMemory::getMemoryFileInfo(ENCRYPT("SolarlandClient"));
    }

    bool IsUsingFNamePool() const override
    {
        return true;
    }

  /*
   farlight84 14.4
   Fnamepool = 0x107083800;
    Gworld = 0x1073B1B58;
   GUObjectarray = 0x107327D18.



   farlight84 15
   Fnamepool = 0x1078DFB00;
    Gworld = 0x107C0D218;
   GUObjectarray = 0x107B822D0
 
*/
    uintptr_t GetGUObjectArrayPtr() const override
    {
       
        const mach_header *hdr = GetExecutableInfo().header;

        const char *bytes = AY_OBFUSCATE("\x00\x00\x02\x00\x21\x00\x00\x91\xA0\x03\x03\xD1\x00\x00\x00\x94\x00\x00\x03\xB0\x00\x00\x00\x91\x00\x00\x00\x94\xA0\x03\x03\xD1\x00\x00\x00\x94");
        const char *mask = AY_OBFUSCATE("??x?x??xxxxx???x??xx???x???xxxxx???x");
        const int step = 0x10;

        uintptr_t insn_address = KittyScanner::findBytesFirst(hdr, AY_OBFUSCATE("__TEXT"), bytes, mask);
        if (insn_address == 0)
            return 0;

        insn_address += step;

        int64 adrp_pc_rel = 0;
        int32 add_imm12 = 0;

        const int page_size = 4096;
        const uintptr_t page_off = (insn_address & ~(page_size - 1));

        uint32 adrp_insn = vm_rpm_ptr<uint32>((void *)(insn_address));
        uint32 add_insn = vm_rpm_ptr<uint32>((void *)(insn_address + 4));
        if (adrp_insn == 0 || add_insn == 0)
            return 0;

        if (!KittyArm64::decode_adr_imm(adrp_insn, &adrp_pc_rel) || adrp_pc_rel == 0)
            return 0;

        add_imm12 = KittyArm64::decode_addsub_imm(add_insn);
        if (add_imm12 == 0)
            return 0;

        return (page_off + adrp_pc_rel + add_imm12);
          
    }
    uintptr_t GetNamesPtr() const override
    {
        const mach_header *hdr = GetExecutableInfo().header;

        const char *bytes = AY_OBFUSCATE("\x00\x00\x00\x00\x08\x01\x00\x91\x08\x49\x21\x8B\x09\x20\x82\x52\x29\x00\xA0\x72\x08\x69\x69\xB8\x1F\x01\x00\x6B\xE0\x17\x9F\x1A\xC0\x03\x5F\xD6");
        const char *mask = AY_OBFUSCATE("????xx?xxxxxxxxxx?xxxxxxxx?xxxxxxxxx");
        const int step = 0;

        uintptr_t insn_address = KittyScanner::findBytesFirst(hdr, AY_OBFUSCATE("__TEXT"), bytes, mask);
        if (insn_address == 0)
            return 0;

        insn_address += step;

        int64 adrp_pc_rel = 0;
        int32 add_imm12 = 0;

        const int page_size = 4096;
        const uintptr_t page_off = (insn_address & ~(page_size - 1));

        uint32 adrp_insn = vm_rpm_ptr<uint32>((void *)(insn_address));
        uint32 add_insn = vm_rpm_ptr<uint32>((void *)(insn_address + 4));
        if (adrp_insn == 0 || add_insn == 0)
            return 0;

        if (!KittyArm64::decode_adr_imm(adrp_insn, &adrp_pc_rel) || adrp_pc_rel == 0)
            return 0;

        add_imm12 = KittyArm64::decode_addsub_imm(add_insn);
        if (add_imm12 == 0)
            return 0;

        return (page_off + adrp_pc_rel + add_imm12);
    }
    
    uintptr_t GetGworld() const override
    {
        const mach_header *hdr = GetExecutableInfo().header;

        const char *bytes = AY_OBFUSCATE("\xF3\x03\x00\xAA\x00\x00\x00\x00\x94\x62\x00\x91\x88\x02\x40\xF9\x09\x11\x41\xF9\x2A\x01\x03\x91\x08\x81\x0F\x91\x3F\x01\x00\xF1");
        const char *mask = AY_OBFUSCATE("xx?x????xx?xxxxxxxxxxxxxxxxxxx?x");
        const int stepx = 4;
        uintptr_t insn_address = KittyScanner::findBytesFirst(hdr, AY_OBFUSCATE("__TEXT"), bytes, mask);
        insn_address += stepx;
        int64 adrp_pc_rel = 0;
        int32 add_imm12 = 0;
        const int page_size = 4096;
        const uintptr_t page_off = (insn_address & ~(page_size - 1));
        uint32 adrp_insn = vm_rpm_ptr<uint32>((void *)(insn_address));
        uint32 add_insn = vm_rpm_ptr<uint32>((void *)(insn_address + 4));
    KittyArm64::decode_adr_imm(adrp_insn, &adrp_pc_rel);
    add_imm12 = KittyArm64::decode_addsub_imm(add_insn);
        return (page_off + adrp_pc_rel + add_imm12);
        
    }
    
    
    Offsets *GetOffsets() const override
    {
        struct
        {
            uint16 Stride = 2;             // alignof(FNameEntry)
            uint16 FNamePoolBlocks = 0xD0; // usually ios at 0xD0 and android at 0x40
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
            { // not needed in UE4.23+
                uint16 Name = 0;
            } FNameEntry;
            struct
            {
                uint16 Info = 0;       // Offset to Memory filled with info about type and size of string
                uint16 WideBit = 0;    // Offset to bit which shows if string uses wide characters
                uint16 LenBit = 6;     // Offset to bit which has lenght of string
                uint16 HeaderSize = 2; // Size of FNameEntry header (offset where a string begins)
            } FNameEntry23;
            struct
            {
                uint16 ObjObjects = 0x10;
            } FUObjectArray;
            struct
            {
                uint16 NumElements = 0x14;
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
                uint16 SuperStruct = 0x40;   // sizeof(UField) + 2 pointers?
                uint16 Children = 0x48;      // UField*
                uint16 ChildrenProps = 0x50; // FField*
                uint16 PropertiesSize = 0x58;
            } UStruct;
            struct
            {
                uint16 Names = 0x40; // usually at sizeof(UField) + sizeof(FString)
            } UEnum;
            struct
            {
                uint16 EFunctionFlags = 0xB0; // sizeof(UStruct)
                uint16 NumParams = EFunctionFlags + 0x4;
                uint16 ParamSize = NumParams + 0x2;
                uint16 ReturnValueOffset = ParamSize + 0x2;
                uint16 Func = EFunctionFlags + 0x28; // ue3-ue4, always +0x28 from flags location.
            } UFunction;
            struct
            {
                uint16 ClassPrivate = 0x8;
                uint16 Next = 0x20;
                uint16 NamePrivate = 0x28;
                uint16 FlagsPrivate = 0x30;
            } FField;
            struct
            {
                uint16 ArrayDim = 0x34; // sizeof(FField)
                uint16 ElementSize = 0x38;
                uint16 PropertyFlags = 0x40;
                uint16 Offset_Internal = 0x4C;
                uint16 Size = 0x78; // sizeof(FProperty)
            } FProperty;
            struct
            { // not needed in UE4.25+
                uint16 ArrayDim = 0;
                uint16 ElementSize = 0;
                uint16 PropertyFlags = 0;
                uint16 Offset_Internal = 0;
                uint16 Size = 0;
            } UProperty;
        } static profile;
        static_assert(sizeof(profile) == sizeof(Offsets));

        return (Offsets *)&profile;
    }
};
