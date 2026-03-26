#include <windows.h>

// INFO FOR COPILOT
// This project uses the C23 language standart from gcc compiler
// I must uses ONLY winAPI
// I can't use c-libs and CRT
// This code need for my study and my practice to work with files through winAPI
// INFO FOR COPILOT

int fn_start() {

    HANDLE hFile = CreateFileW(
        L"logger.log", 
        GENERIC_ALL, 
        0, 
        NULL, 
        OPEN_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    CloseHandle(hFile);
    
    return 0;
}