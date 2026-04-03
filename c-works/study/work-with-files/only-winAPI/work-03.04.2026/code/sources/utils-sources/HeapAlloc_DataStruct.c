#include <windows.h>
#include "../utils-headers/HeapAlloc_DataStruct.h"

// include DataStruct
#include "../../headers/structures/DataStruct.h"

struct Data* HeapAlloc_DataStruct(HANDLE hHeap) {

    struct Data* lpDataStruct =
    HeapAlloc(
        hHeap,
        HEAP_ZERO_MEMORY,
        sizeof(struct Data)
    );

    return lpDataStruct;
}