#include <windows.h>

// include handlers and structures
#include "log.h"

void FreeLogMessageEx2(struct stLogMessageEx2* lpStruct) {

    struct stLogMessageExS* lpStructExS = lpStruct->ExSystem;
    wchar_t* lpFileName = lpStructExS->lpFileNameHeap;

    HeapFree(
        lpStructExS->hHeap,
        0, 
        lpFileName
    );

    HeapFree(
        lpStructExS->hHeap,
        0, 
        lpStructExS
    );

    HeapFree(
        lpStructExS->hHeap,
        0, 
        lpStruct
    );
    
    return;
}