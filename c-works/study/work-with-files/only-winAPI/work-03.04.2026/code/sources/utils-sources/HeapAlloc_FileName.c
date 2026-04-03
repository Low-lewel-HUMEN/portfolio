#include <windows.h>
#include "../utils-headers/HeapAlloc_FileName.h"

// function
wchar_t* HeapAlloc_FileName(HANDLE hHeap, wchar_t* lpFileName) {

    wchar_t* lpHeapForFileName = 
    HeapAlloc(
        hHeap, 
        HEAP_ZERO_MEMORY, 
        ((lstrlenW(lpFileName) + 1) * 2)
    );

    return lpHeapForFileName;
}