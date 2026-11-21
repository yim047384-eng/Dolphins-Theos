#include "Tools.h"

#include <cstring>
#include <mach-o/dyld.h>
#include <mach-o/loader.h>
#include <sys/mman.h>
#include <unistd.h>

namespace
{
    int FindImageIndexByName(const char *name)
    {
        if (!name) return -1;

        const uint32_t count = _dyld_image_count();
        for (uint32_t i = 0; i < count; i++)
        {
            const char *image_name = _dyld_get_image_name(i);
            if (!image_name) continue;

            const char *base = strrchr(image_name, '/');
            base = base ? base + 1 : image_name;

            if (strcmp(base, name) == 0)
            {
                return static_cast<int>(i);
            }
        }
        return -1;
    }
}

bool Tools::Read(void *addr, void *buffer, size_t length)
{
    if (!addr || !buffer || length == 0) return false;
    if (!IsPtrValid(addr)) return false;

    std::memcpy(buffer, addr, length);
    return true;
}

bool Tools::Write(void *addr, void *buffer, size_t length)
{
    if (!addr || !buffer || length == 0) return false;
    if (!IsPtrValid(addr)) return false;

    const uintptr_t start = reinterpret_cast<uintptr_t>(addr);
    const uintptr_t page_size = static_cast<uintptr_t>(getpagesize());
    const uintptr_t page_start = start & ~(page_size - 1);
    const uintptr_t end = start + length;
    const uintptr_t map_len = ((end - page_start + page_size - 1) / page_size) * page_size;

    const int prot_res = mprotect(reinterpret_cast<void *>(page_start), map_len, PROT_READ | PROT_WRITE);
    std::memcpy(addr, buffer, length);

    if (prot_res == 0)
    {
        mprotect(reinterpret_cast<void *>(page_start), map_len, PROT_READ);
    }

    return true;
}

bool Tools::IsPtrValid(void *addr)
{
    if (!addr) return false;

    const uintptr_t raw = reinterpret_cast<uintptr_t>(addr);
    if (raw < 0x100000000ULL) return false;

    const uintptr_t page_size = static_cast<uintptr_t>(getpagesize());
    void *page_addr = reinterpret_cast<void *>(raw & ~(page_size - 1));
    unsigned char vec = 0;

    return mincore(page_addr, page_size, &vec) == 0;
}

uintptr_t Tools::GetBaseAddress(const char *name)
{
    const int idx = FindImageIndexByName(name);
    if (idx < 0) return 0;

    const uint32_t image_idx = static_cast<uint32_t>(idx);
    const mach_header *header = _dyld_get_image_header(image_idx);
    if (header)
    {
        return reinterpret_cast<uintptr_t>(header);
    }

    return static_cast<uintptr_t>(_dyld_get_image_vmaddr_slide(image_idx));
}

uintptr_t Tools::GetEndAddress(const char *name)
{
    const int idx = FindImageIndexByName(name);
    if (idx < 0) return 0;

    const uint32_t image_idx = static_cast<uint32_t>(idx);
    const auto *header = reinterpret_cast<const struct mach_header_64 *>(_dyld_get_image_header(image_idx));
    const intptr_t slide = _dyld_get_image_vmaddr_slide(image_idx);

    if (!header || header->magic != MH_MAGIC_64)
    {
        return 0;
    }

    uintptr_t max_end = 0;
    const uint8_t *cmd_ptr = reinterpret_cast<const uint8_t *>(header + 1);

    for (uint32_t c = 0; c < header->ncmds; c++)
    {
        if (!cmd_ptr) break;

        const auto *cmd = reinterpret_cast<const struct load_command *>(cmd_ptr);
        if (cmd->cmdsize == 0) break;

        if (cmd->cmd == LC_SEGMENT_64)
        {
            const auto *seg = reinterpret_cast<const struct segment_command_64 *>(cmd_ptr);
            const uintptr_t seg_end = static_cast<uintptr_t>(seg->vmaddr + seg->vmsize + slide);
            if (seg_end > max_end)
            {
                max_end = seg_end;
            }
        }

        cmd_ptr += cmd->cmdsize;
    }

    return max_end;
}
