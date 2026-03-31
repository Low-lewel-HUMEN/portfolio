#include <windows.h>
#include "log.h"

void LogMessage(const wchar_t* lpFileName, const wchar_t* lpStrLog) {

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
    DWORD nStrLogSize = lstrlenW(lpStrLog);
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
        lpStrLog, 
        nStrLogSize, 
        NULL, 
        NULL
    );

    // exit
    CloseHandle(hFile);
    return;
}