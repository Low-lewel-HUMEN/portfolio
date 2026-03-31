#include <windows.h>

// include handlers and structures
#include "log.h"
#include "st/stLogMessageEx.h"

void FreeLogMessageEx(struct stLogMessageEx* lpStruct) {

    HeapFree(
        lpStruct->hHeap, 
        0, 
        lpStruct
    );
    
    return;
}