// Get file.txt size (in bytes)
// used GetFileSizeEx
#include <windows.h>

void fn_start() {

    // open file.txt
    HANDLE hFile = CreateFileW(
        L"file.txt", 
        GENERIC_READ, 
        0, 
        NULL, 
        OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    // get and use struct
    LARGE_INTEGER Lstruct;
    GetFileSizeEx(
        hFile, 
        &Lstruct
    );

    // exit
    CloseHandle(hFile);
    ExitProcess(0);
}