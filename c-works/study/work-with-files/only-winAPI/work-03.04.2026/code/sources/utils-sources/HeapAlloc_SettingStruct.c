#include <windows.h>
#include "../utils-headers/HeapAlloc_SettingStruct.h"

// include SettingStruct
#include "../../headers/structures/SettingStruct.h"

struct Setting* HeapAlloc_SettingStruct(HANDLE hHeap) {

    struct Setting* lpSettingStruct =
    HeapAlloc(
        hHeap,
        HEAP_ZERO_MEMORY,
        sizeof(struct Setting)
    );

    return lpSettingStruct;
}