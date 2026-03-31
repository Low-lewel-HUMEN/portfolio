#include <windows.h>

// import handlers and structures
#include "log.h"

void LogMessageEx2(const wchar_t* lpLog, struct stLogMessageEx2* lpStruct) {

    // data
    const wchar_t* lpFileName    = lpStruct->lpFileName;
    const DWORD dwFileAttributes = lpStruct->FileAttributes;
    const DWORD dwLen = lstrlenW(lpLog); 

    // struct data
    struct stLogMessageExS* lpStructExS = lpStruct->ExSystem;

    wchar_t* lpNewLog;

    // build new log string (with \n)
    if (dwFileAttributes & (0x1)) {

        // build new log string (with \n)
        lpNewLog = 
        HeapAlloc(
            lpStructExS->hHeap, 
            HEAP_ZERO_MEMORY, 
            (dwLen + 1) * sizeof(wchar_t)
        );

        (*lpNewLog) = '\n';

        for (DWORD nCounter = 0; nCounter < dwLen; nCounter++) {
            lpNewLog[nCounter + 1] = lpLog[nCounter];
        }
    }
    
    // save old string
    else {

        // save old string
        lpNewLog = 
        HeapAlloc(
            lpStructExS->hHeap, 
            HEAP_ZERO_MEMORY, 
            (dwLen) * sizeof(wchar_t)
        );

        for (DWORD nCounter = 0; nCounter < dwLen; nCounter++) {
            lpNewLog[nCounter] = lpLog[nCounter];
        }
    }


    // open file
    HANDLE hFile =
    CreateFileW(
        lpFileName, 
        GENERIC_WRITE, 
        0, 
        NULL, 
        OPEN_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    // get log size
    DWORD nStrLogSize = lstrlenW(lpNewLog);
    nStrLogSize *= 2;

    // write log
    LARGE_INTEGER liOffSet;
    LARGE_INTEGER liNewPosition;

    liOffSet.QuadPart = 0; // offset for end = 0

    SetFilePointerEx(
        hFile, 
        liOffSet, 
        &liNewPosition, 
        FILE_END
    );

    WriteFile(
        hFile, 
        lpNewLog, 
        nStrLogSize, 
        NULL, 
        NULL
    );

    // exit
    HeapFree(
        lpStructExS->hHeap, 
        0, 
        lpNewLog
    );
    
    CloseHandle(hFile);
    return;
}