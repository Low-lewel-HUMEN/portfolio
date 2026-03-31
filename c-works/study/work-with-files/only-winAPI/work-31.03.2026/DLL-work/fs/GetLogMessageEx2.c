#include <windows.h>

// include handlers and struct
#include "log.h"

struct stLogMessageEx2* GetLogMessageEx2(wchar_t* lpFileName, DWORD FileAttributes) {

    HANDLE hHeap = GetProcessHeap();

    // allocated from malloc for struct Ex2
    struct stLogMessageEx2* lpStructureEx2 = 
    (struct stLogMessageEx2*)             // type - struct Ex2 (for arifmetica compiler)
    HeapAlloc(
        hHeap, 
        HEAP_ZERO_MEMORY, 
        sizeof(struct stLogMessageEx2)
    );

    // check on null from malloc
    if (lpStructureEx2 == NULL) {
        return NULL;
    }

    // allocated from malloc for struct ExS
    struct stLogMessageExS* lpStructureExS = 
    (struct stLogMessageExS*)             // type - struct ExS (for arifmetica compiler)
    HeapAlloc(
        hHeap, 
        HEAP_ZERO_MEMORY, 
        sizeof(struct stLogMessageExS)
    );

    // check on null from malloc
    if (lpStructureExS == NULL) {
        return NULL;
    }

    // allocated from malloc for lpFileName
    wchar_t* lpHeapFileName =
    HeapAlloc(
        hHeap,
        HEAP_ZERO_MEMORY,
        ((lstrlenW(lpFileName) + 1) * 2)
    );

    // saved lpFileName
    lpStructureExS->lpFileNameHeap;

    // copy lpFileName in lpHeapFileName
    DWORD nCountCopy = 0;
    for (int count = 0; count < (lstrlenW(lpFileName) + 1); count++) {
        lpHeapFileName[count] = lpFileName[count];
        nCountCopy = count;
    }

    nCountCopy += 1;
    lpHeapFileName[nCountCopy] = '\0';

    // Add data in structEx2 from Heap
    lpStructureEx2->lpFileName = lpHeapFileName;
    lpStructureEx2->FileAttributes = FileAttributes;
    lpStructureEx2->ExSystem = lpStructureExS;

    // add data in structExS (ExSystem) from Heap
    lpStructureExS->hHeap = hHeap;
    lpStructureExS->nSizeFileName = lstrlenW(lpHeapFileName);

    return lpStructureEx2;
}