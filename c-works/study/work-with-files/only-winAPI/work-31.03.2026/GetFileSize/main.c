// get file.txt size (in bytes)
#include <windows.h>

void fn_start() {

    // open file.txt
    HANDLE hFile = 
    CreateFileW(
        L"file.txt", 
        GENERIC_READ, 
        0, 
        NULL, 
        OPEN_EXISTING, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    // get file size
    DWORD dwFileSize = 
    GetFileSize(
        hFile, 
        NULL
    );

    // exit
    CloseHandle(hFile);
    ExitProcess(0);
}