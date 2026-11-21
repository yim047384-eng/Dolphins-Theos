#include "Tools.h"

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
