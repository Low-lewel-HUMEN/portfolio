// This code uses only winAPI. Not uses CRT and CLibs
// Entry void -> void fn_start();
// main lib: <windows.h>
#include <windows.h>

void fn_start() {

    // Create File (Unicode)
    HANDLE hFile = CreateFileW(
        L"file.log", 
        GENERIC_ALL, 
        0, 
        NULL, 
        OPEN_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, 
        NULL
    );

    // Get file attribytes 
    DWORD FileAttributes = GetFileAttributesW(
        L"file.log"
    );

    // Change file attributes in hidden
    FileAttributes ^= FILE_ATTRIBUTE_NORMAL;
    FileAttributes |= FILE_ATTRIBUTE_HIDDEN;

    SetFileAttributesW(
        L"file.log", 
        FileAttributes
    );

    // Close file
    CloseHandle(
        hFile
    );

    ExitProcess(0);
}