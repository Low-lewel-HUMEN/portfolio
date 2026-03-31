#include <windows.h>

void fn_start() {

    // data
    const wchar_t* str = L"NNNNN";

    // open file
    HANDLE hFile =
    CreateFileW(
        L"file.log", 
        GENERIC_ALL, 
        0, 
        NULL, 
        OPEN_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    // write file
    WriteFile(
        hFile, 
        str, 
        10, 
        NULL, 
        NULL
    );

    // exit
    CloseHandle(hFile);
    ExitProcess(0);
}