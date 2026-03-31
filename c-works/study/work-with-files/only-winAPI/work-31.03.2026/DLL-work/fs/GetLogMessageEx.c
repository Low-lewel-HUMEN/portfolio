#include <windows.h>

// include handlers and struct
#include "log.h"
#include "st/stLogMessageEx.h"

struct stLogMessageEx* GetLogMessageEx(wchar_t* lpFileName, DWORD FileAttributes) {

    HANDLE hHeap = GetProcessHeap();

    // allocated from malloc
    struct stLogMessageEx* lpStructure = 
    (struct stLogMessageEx*)             // type - struct (for arifmetica compiler)
    HeapAlloc(
        hHeap, 
        HEAP_ZERO_MEMORY, 
        sizeof(struct stLogMessageEx)
    );

    // check on null from malloc
    if (lpStructure == NULL) {
        return NULL;
    }

    // Add data in struct from Heap
    lpStructure->lpFileName = lpFileName;
    lpStructure->FileAttributes = FileAttributes;
    lpStructure->hHeap = hHeap;

    return lpStructure;
}