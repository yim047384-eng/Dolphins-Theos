#include "Tools.h"
#include <mach-o/dyld.h>
#include <mach-o/loader.h>

bool Tools::Read(void *addr, void *buffer, size_t length) {
    return memcpy(buffer, addr, length) != nullptr;
}
bool Tools::Write(void *addr, void *buffer, size_t length) {
    return memcpy(addr, buffer, length) != nullptr;
}
bool Tools::IsPtrValid(void *addr) {
    if (!addr) return false;
    char vec = 0;
    return mincore((void *)((uintptr_t)addr & ~0xFFF), 1, &vec) == 0;
}
uintptr_t Tools::GetBaseAddress(const char *name) {
    uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; i++) {
        const char *image_name = _dyld_get_image_name(i);
        if (!image_name) continue;
        const char *base = strrchr(image_name, '/');
        base = base ? base + 1 : image_name;
        if (strcmp(base, name) == 0) {
            return (uintptr_t)_dyld_get_image_vmaddr_slide(i);
        }
    }
    return 0;
}
uintptr_t Tools::GetEndAddress(const char *name) {
    uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; i++) {
        const char *image_name = _dyld_get_image_name(i);
        if (!image_name) continue;
        const char *base = strrchr(image_name, '/');
        base = base ? base + 1 : image_name;
        if (strcmp(base, name) == 0) {
            const struct mach_header_64 *header = (const struct mach_header_64 *)_dyld_get_image_header(i);
            intptr_t slide = _dyld_get_image_vmaddr_slide(i);
            if (!header || header->magic != MH_MAGIC_64) return 0;

            uintptr_t max_end = 0;
            const uint8_t *cmd_ptr = (const uint8_t *)(header + 1);
            for (uint32_t c = 0; c < header->ncmds; c++) {
                const struct load_command *cmd = (const struct load_command *)cmd_ptr;
                if (cmd->cmd == LC_SEGMENT_64) {
                    const struct segment_command_64 *seg = (const struct segment_command_64 *)cmd_ptr;
                    uintptr_t seg_end = (uintptr_t)(seg->vmaddr + seg->vmsize + slide);
                    if (seg_end > max_end) max_end = seg_end;
                }
                cmd_ptr += cmd->cmdsize;
            }
            return max_end;
        }
    }
    return 0;
}
