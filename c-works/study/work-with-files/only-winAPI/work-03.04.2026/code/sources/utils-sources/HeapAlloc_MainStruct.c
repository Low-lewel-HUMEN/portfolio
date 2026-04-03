#include <windows.h>
#include "../utils-headers/HeapAlloc_MainStruct.h"

// include MainStruct
#include "../../headers/structures/MainStruct.h"

struct Main* HeapAlloc_MainStruct(HANDLE hHeap) {

    struct Main* lpMainStruct =
    HeapAlloc(
        hHeap,
        HEAP_ZERO_MEMORY,
        sizeof(struct Main)
    );

    return lpMainStruct;
}