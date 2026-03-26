// used: x64dbg, gcc (C23)
// libs: kernel32.dll
// This code from debug app (source main.c) with x64dbg.

#include <windows.h>

int entry() {

    HANDLE hFile = CreateFileW(
        L"logger.log", 
        0x10000000, 
        0x0, 
        0x0, 
        0x4, 
        0x80, 
        0x0
    );

    CloseHandle(
        hFile
    );

    return 0;
}
